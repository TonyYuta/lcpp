/*
 * CstyleString.cpp
 *
 *  Created on: Feb 26, 2018
 *      Author: Yutaka
 */

#include "CstyleString.h"
#include <iostream>
#include <cstring>

using namespace std;

int cstylestringlength()
{
	char cstylestr[] = "cstyle";
	int lengthStr = sizeof(cstylestr) / sizeof(cstylestr[0]);

	for(int i = 0; i < lengthStr; ++i)
	{
		cout << static_cast<int>(cstylestr[i]) << " ";
	}

	return lengthStr;
}

void copyCstyleString()
{
	char origin[] = "abcd";
	char newStr[sizeof(origin)/sizeof(origin[0])];
	strcpy(newStr, origin);

	cout << "origin: ";
	for(int i = 0; i < sizeof(origin)/sizeof(origin[0]); i++)
	{
		cout << origin[i];
	}

	cout << "\n" << "  copy: ";
	for(int i = 0; i < sizeof(newStr)/sizeof(newStr[0]); i++)
	{
		cout << newStr[i];
	}


}
