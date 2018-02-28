/*
 * Chars.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: Yutaka
 */

#include "Chars.h"
#include <iostream>

using namespace std;

void charBeep() {
	char ch1 = 'a';
	char ch2('b');
	char ch3('c');

	cout << ch1 << ch2 << ch3 << endl;

	cout << "\aBeep";
}
