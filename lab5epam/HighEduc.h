#pragma once
#pragma once
#include <iostream>
#include "UchZav.h"

using namespace std;

class HighEduc : public UchZav
{
protected:
	float averGr;
	int numSt;
	int numOfRed;
public:
	HighEduc()
	{
		cout << "Please enter average grades ";
		cin >> averGr;
		cout << "Please enter number of students";
		cin >> numSt;
	}
	HighEduc(int newNumSt, float newAverGr) : averGr(newAverGr), numSt(newNumSt)
	{
	}
};

class University : public HighEduc
{
public:
	University(int newNumOfRed) : HighEduc()
	{
		numOfRed = newNumOfRed;
	}
	University(int newNumSt, float newAverGr, int newNumOfRed) : HighEduc(newNumSt, newAverGr)
	{
		numOfRed = newNumOfRed;
	}
	void averageMark(float newAverGr)
	{
		averGr = newAverGr;
	}
	void numberStudent(int newNumSt)
	{
		numSt = newNumSt;
	}
	float gaverageMark()
	{
		return averGr;
	}
	int gnumberStudent()
	{
		return numSt;
	}
	void printInfo()
	{
		cout << "\tInformation about university: " << endl;
		cout << "Number of red diplomas " << numOfRed << endl;
		cout << "Total amount of students " << numSt << endl;
		cout << endl;
	}
};

class Institute : public HighEduc
{
public:
	Institute(int newNumOfRed) : HighEduc()
	{
		numOfRed = newNumOfRed;
	}
	Institute(int newNumSt, float newAverGr, int newNumOfRed) : HighEduc(newNumSt, newAverGr)
	{
		numOfRed = newNumOfRed;
	}
	void averageMark(float newAverGr)
	{
		averGr = newAverGr;
	}
	void numberStudent(int newNumSt)
	{
		numSt = newNumSt;
	}
	float gaverageMark()
	{
		return averGr;
	}
	int gnumberStudent()
	{
		return numSt;
	}
	void printInfo()
	{
		cout << "\tInformation about institute: " << endl;
		cout << "Number of red diplomas " << numOfRed << endl;
		cout << "Total amount of students " << numSt << endl;
		cout << endl;
	}
};
