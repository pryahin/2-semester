// queue.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include "queue.h"

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
	Queue<int> que;
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
					std::cout << que.front() << std::endl;
				}
				catch (std::exception e) {
					std::cout << e.what() << std::endl;
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