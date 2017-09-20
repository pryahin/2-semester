// lab5-timp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>

template <class T>
class PriorQueue {
	std::vector<T> data;
	bool changeVal(T &father, T &son) {
		if (son < father) {
			std::swap(son, father);
			return true;
		}
		return false;
	}
public:
	void push(const T &val) {
		data.push_back(val);
		int i = data.size() - 1;
		while (i > 0) {
			int j = (i - 1) / 2;
			if (!changeVal(data[j], data[i]))
				break;
			i = j;
		}
	}
	T &top() {
		return data[0];
	}
	void pop() {
		data[0] = data[data.size() - 1];
		data.pop_back();
		int i = 0;
		while (i < ((data.size() - 1) / 2)) {
			int j = data[2 * i + 1] < data[2 * i + 2] ? (2 * i + 1) : (2 * i + 2);
			if (!changeVal(data[i], data[j]))
				break;
			i = j;
		}
	}
};

enum commands {
	add, 
	get, 
	del
};

void main()
{
	const std::map<std::string, commands> comands = { { "add", commands::add },{ "get", commands::get },{ "del", commands::del } };
	int n;
	std::cin >> n;
	std::string line, word;
	PriorQueue<int> que;
	std::cin.get();
	for (int i = 0; i < n; ++i) {
		std::getline(std::cin, line);
		std::istringstream ss(line);
		ss >> word;
		try {
			switch (comands.at(word)) {
			case commands::add:
				int value;
				ss >> value;
				que.push(value);
				break;
			case commands::get:
				try {
					std::cout << que.top() << std::endl;
				}
				catch (...) {
					std::cout << "Stack is empty" << std::endl;
				}
				break;
			case commands::del:
				que.pop();
				break;
			}
		}
		catch (...) {
			std::cout << "Unknown command" << std::endl;
		}
	}
	system("pause");
}