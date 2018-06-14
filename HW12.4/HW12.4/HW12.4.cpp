﻿// HW12.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// 17/20

template <typename T>
int isSorted(const T list[], int size)
{
	//PT -- you should only go up to size-1, since you'll check list[i+1]
	for (int i = 0; i < size; i++) // Assuming that we are sorting from lowest to highest
		if (list[i] < list[i + 1])
			//PT -- actually, don't return true until you've seen everything
			return true;
		else
			return false;
}

//PT -- Slight change:
//  -3
/*
template <typename T>
int isSorted(const T list[], int size)
{
	
	for (int i = 0; i < size-1; i++) // Assuming that we are sorting from lowest to highest
		if (list[i] > list[i + 1])
			return false;
	return true;
}
*/

int main()
{
	int	list1[] = { 5, 4, 3, 3, 7 };
	double list2[] = { 1.5, 2.2, 3.5, 6.6 };
	string list3[3] = {"A", "B", "C" };


	cout << isSorted(list1, 5) << endl;
	cout << isSorted(list2, 4) << endl;
	cout << isSorted(list3, 3) << endl;
    
	return 0;
}

