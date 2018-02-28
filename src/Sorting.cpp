/*
 * Sorting.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: Yutaka
 */

#include "Sorting.h"
#include <iostream>

using namespace std;

void insertionSort()
{
	int arr[] = {3, 5, 9, 6, 1, 2, 4};
	int arrLength = 7;
	int minIndex;
	for (int i = 0; i < arrLength-1; ++i)
	{
		minIndex = i;
		for(int j = i+1; j<arrLength; ++j)
		{
			if(arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		swap(arr[i], arr[minIndex]);
	}
	for(int m = 0; m < arrLength; ++m)
	{
		cout << arr[m];
	}
}

int *insertionSortArr(int ar[])
{
	int arrLength = (sizeof(ar)/sizeof(*ar));
	int minIndex;
	for (int i = 0; i < arrLength-1; ++i)
	{
		minIndex = i;
		for(int j = i+1; j<arrLength; ++j)
		{
			if(ar[j] < ar[minIndex])
			{
				minIndex = j;
			}
		}
		swap(ar[i], ar[minIndex]);
	}
//	for(int m = 0; m < arrLength; ++m)
//	{
//		cout << ar[m];
//	}
	return ar;
}


