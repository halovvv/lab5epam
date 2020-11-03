#pragma once
#include <iostream>
#include "UchZav.h"

using namespace std;

class SredObr :public UchZav
{
protected:
	float averGr;
	int numSt;
	string rang;
public:
	SredObr()
	{
		cout << "Please enter average mark";
		cin >> averGr;
		cout << "Please enter number of students ";
		cin >> numSt;
	}
	SredObr(int newNumSt, float newAverGr) : averGr(newAverGr), numSt(newNumSt)
	{
	}
};

class School :public SredObr
{
public:
	School(string newRang = "C") : SredObr()
	{
		rang = newRang;
	}
	School(int newNumSt, float newAverGr, string newRang = "C") : SredObr(newNumSt, newAverGr)
	{
		rang = newRang;
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
		cout << " \t Information about school:" << endl;
		cout << "Rang is  " << rang << endl;
		cout << "Average grade is  " << averGr / numSt << endl;
		cout << endl;
	}
};

class Gymnasium :public SredObr
{
public:
	Gymnasium(string newRang = "A+") : SredObr()
	{
		rang = newRang;
	}
	Gymnasium(int newNumSt, float newAverGr, string newRang = "A+") : SredObr(newNumSt, newAverGr)
	{
		rang = newRang;
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
		cout << " \t Information about gymnasium:" << endl;
		cout << "Rang is  " << rang << endl;
		cout << "Average grade is  " << averGr / numSt << endl;
		cout << endl;

	}
};