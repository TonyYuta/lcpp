/*
 * StringsCPP.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: Yutaka
 */

#include "StringsCPP.h"
#include <string>
#include <iostream>
using namespace std;

	void printStr()
	{
		string str1 = "string 01";
		cout << str1 << endl;
	}

	void inpStringWithWhiteSpaces()
	{
		string fullName = "";
		cout << "Enter Full Name: ";
		getline(cin, fullName);
		cout << "Entered: " << fullName << endl;
	}

