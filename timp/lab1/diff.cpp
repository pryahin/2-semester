// diff.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <fstream>


int Check(std::ifstream& file, std::string a)
{
	std::string str;
	int res = 1;
	while (file.good())
	{
		std::getline(file, str);
		if (strcmp(str.c_str(), a.c_str()) == 0)
		{
			res = 0;
			break;
		}
	}
	file.clear();
	file.seekg(0);

	return res;
}

int main(int argc, char * argv[])
{

	if (argc <= 1)
	{
		std::cout << "\n You need for comparison 2 files \n Try again" << std::endl;
		return 0;
	}

	if (argc == 2)
	{
		std::cout << "\n For comparison need another file \n Try again" << std::endl;
		return 0;
	}

	std::ifstream fOne((const char*)argv[1]);
	std::ifstream fTwo((const char*)argv[2]);

	std::string str;
	while (fOne.good())
	{
		std::getline(fOne, str);
		if (Check(fTwo, str))
			std::cout << str << std::endl;
	}
	fOne.clear();
	fOne.seekg(0);

	while (fTwo.good())
	{
		std::getline(fTwo, str);
		if (Check(fOne, str) == 1)
			std::cout << str << std::endl;
	}
	system("pause");
	return 0;
}
