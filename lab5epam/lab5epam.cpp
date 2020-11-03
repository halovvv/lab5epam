#include <iostream>
#include <string>
#include <cstdlib>
#include "UchZav.h"
#include "SredObr.h"
#include "HighEduc.h"

using namespace std;


int main()
{
	School Sh2(1000, 6896);
	Sh2.printInfo();


	Gymnasium G1(300, 2866);
	G1.printInfo();

	University Tech(400,76, 2);
	Tech.printInfo();

	Institute Sc(700, 6999,6);
	Sc.printInfo();
	
}