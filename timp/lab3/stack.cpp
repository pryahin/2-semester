// stack.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include "stack.h"

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
	Stack<int> stack;
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
				stack.push(value);
				break;
			case commands::get:
				try {
					std::cout << stack.top() << std::endl;
				}
				catch (std::exception e) {
					std::cout << e.what() << std::endl;
				}
				break;
			case commands::del:
				stack.pop();
				break;
			}
		}
		catch (...) {
			std::cout << "Unknown command" << std::endl;
		}
	}

	system("pause");
}