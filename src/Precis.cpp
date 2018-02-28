/*
 * Precis.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: Yutaka
 */

#include "Precis.h"
#include <iostream>
#include <iomanip> // for std::setprecision()

using namespace std;

float precis4(float fl) {

	cout << setprecision(4);
	//cout << fl;

	return fl;
}
