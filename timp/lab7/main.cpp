// doxygen.cpp: определяет точку входа для консольного приложения.
//
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include "interface.h"


enum commands {
	add, 
	get, 
	del
};

int main() {
	const std::map<std::string, commands> comands = { { "add", commands::add },{ "get", commands::get },{ "del", commands::del } };

	wstring libName;
	wcin >> libName;
	LPCWSTR wLibName = libName.c_str();
	HINSTANCE lib = LoadLibrary(wLibName);
	if (!lib) {
		cout << "Library not found" << endl;
		return 0;
	}
	int n;
	cin >> n;
	string line, word;
	IQ<> *(*getQueue)() = (IQ<> *(*)())GetProcAddress(lib, "GetSomeIQ");
	if (!getQueue)
		return 0;
	IQ<> *pQueue = getQueue();
	if (!pQueue)
		return 0;
	cin.get();
	for (int i = 0; i < n; ++i) {
		getline(cin, line);
		istringstream ss(line);
		ss >> word;
		try {
			switch (comands.at(word)) {
			case commands::add:
				int value;
				ss >> value;
				pQueue->push(value);
				break;
			case commands::get:
				try {
					cout << pQueue->top() << endl;
				}
				catch (...) {
					cout << "Queue is empty" << endl;
				}
				break;
			case commands::del:
				pQueue->pop();
				break;
			}
		}
		catch (...) {
			cout << "Unknown command" << endl;
		}
	}
	FreeLibrary(lib);
	system("pause");
	return 0;
}