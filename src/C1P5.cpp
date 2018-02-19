/*
 * C1P5.cpp
 *
 *  Created on: Feb 19, 2018
 *      Author: Yutaka
 */

#include "C1P5.h"
#include <iostream>

using namespace std;

void doPrintInput(int x)
{
	cout << "input : " << x << endl;
}

int userInput()
{
	int userInp = 0;
	cout << "enter a number: ";
	cin >> userInp;
	return userInp;
}

int main()
{
	doPrintInput(userInput());
	return 0;
}

