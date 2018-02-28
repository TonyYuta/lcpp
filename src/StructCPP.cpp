/*
 * StructCPP.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: Yutaka
 */

#include "StructCPP.h"
#include <iostream>
#include <string>

using namespace std;

struct UserInfo
{
	string f_name;
	string l_name;
	int age;
};

UserInfo ron;

void userInp()
{
//	UserInfo ron;
	ron.f_name = "Ron";
	ron.l_name = "Uizly";
	ron.age = 28;
}



void userData()
{
	cout << ron.f_name << " " << ron.l_name << " : " << ron.age << " years old" << endl;

}

