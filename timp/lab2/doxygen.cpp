// doxygen.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

void main()
{
	int count = 1;
	char cur_str[1024];
	char *out_str, *temp;
	FILE * file;
	file = fopen("input.txt", "r");
	if (file)
	{
		while (fgets(cur_str, 1024, file))
		{
			if (out_str = strstr(cur_str, "\\func"))
			{
				out_str += strlen("\\func ");
				if (temp = strstr(out_str, "*/"))
					*temp = '\0';
				if (!strstr(out_str, "\n"))
					strcat(out_str, "\n");
				printf("%d. %s", count++, out_str);
			}
		}
		fclose(file);
	}
	else
		printf("File doesnt exist");
	system("pause");
}