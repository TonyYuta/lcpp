/*
 * Main.cpp
 *
 *  Created on: Feb 20, 2018
 *      Author: Yutaka
 */
#include <iostream>

#include "C1P7.h"
#include "SizeOf.h"
#include "ArraysChallenge.h"
#include "Precis.h"
#include "Chars.h"
#include "Const.h"
#include "OperatorPrecedenceAndAssociativity.h"
#include "StringsCPP.h"
#include "StructCPP.h"
#include "Sorting.h"
#include "CstyleString.h"
#include "Pointers.h"

using namespace std;
//
//enum States
//{
//	CA,
//	NY,
//	NE,
//};
//
//void timeState(States state)
//{
//	if(state == CA) {
//		cout <<  "+8";
//	} else if(state == NY) {
//		cout << "+5";
//	} else if(state == NE) {
//		cout << "+7";
//	}
//}

int *fillarr(int arr[])
{
	return arr;
}


int main()
{
//	sizeOfVariables();

//	float f(5.1023f);
//	float fl{2.456789f};
//	cout << precis4(fl) << endl;

//	charBeep();

//	cout << usingConst();

//	cout << "2^8=" << exponents(2.0, 8) << endl;

//	printStr();
//	inpStringWithWhiteSpaces();

//	timeState(NE);

//	userInp();
//	userData();

	//insertionSort();


//	int a[] = {3, 5, 6, 8, 2};
//	int *b = fillarr(a);
//	for(int i = 0; i < 5; i++)
//	{
//		cout << "\n" << b[i];
//	}

	//int *c = insertionSortArr(a);

	//cstylestringlength();
	//copyCstyleString();
	//variableAndAddress();

	//char mname[] = "Billy";
	//cout << mname << endl;

	//const char *hname = "July";
	//cout << hname << '\n';


	int iArr[3] = {2, 4, 6};
	char cArr[] = "c-style";
	const char *constCh = "const char";
	cout << iArr << '\n';
	cout << cArr << '\n';
	cout << constCh << '\n';

	return 0;
}
