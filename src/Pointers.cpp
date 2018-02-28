/*
 * Pointers.cpp
 *
 *  Created on: Feb 27, 2018
 *      Author: Yutaka
 */

#include "Pointers.h"
#include <iostream>
#include <string>

using namespace std;

void variableAndAddress()
{
	string s = "abc";
	cout << "  s: " <<   s << '\n';
	cout << " &s: " <<  &s << '\n';
	cout << "*&s: " << *&s << '\n';

}

