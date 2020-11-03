#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

class UchebnoeZavedenie
{
protected:
	int numberStud;
	int sumGrade;
	double averGrade;
public:
	UchebnoeZavedenie(int a, int n) 
	{
		numberStud = a;
		sumGrade = n;
		averGrade = a/n;
	}

	virtual void setNumberStud(int a) = 0;
	virtual void setSumGrade(int n) = 0;
	virtual void setaverGrad() = 0;
	virtual void printInfo() = 0;
};

class Srednee :public UchebnoeZavedenie
{
protected:
	int rangSR;
public:
	Srednee(int a, int n, int r) : UchebnoeZavedenie (a,n)
	{
		rangSR = r;
	}
	void setNumberStud(int a) override
	{
		numberStud = a;
	}
	void setSumGrade(int n) override
	{ 
		sumGrade = n;
	}
	void setaverGrad(int a, int n)
	{
		averGrade = a/n;
	}
	virtual void setRangSR(int r) = 0;
	void printInfo() override 
	{
		cout << "The number of students: " << numberStud <<
			", summary grade: " << sumGrade << ", average grade: " 
			<< averGrade << ", rang of educational establishment: " << rangSR << endl;
	}
};

class Higher :public UchebnoeZavedenie
{
protected:
	int numOfRedDiplomas;

public:
	Higher(int a, int n, int nos) : UchebnoeZavedenie(a, n)
	{
		numOfRedDiplomas = nos;
	}

	virtual void setNumberStud(int a) override 
	{
		numberStud = a;
	}

	virtual void setSumGrade(int n) override
	{
		sumGrade = n;
	}

	virtual void setaverGrad(int a, int n) 
	{ 
		averGrade = a/n;
	}

	virtual void setnumOfRedDiplomas(int nos) = 0;

	virtual void printInfo()
	{
		cout << "The number of students: " << numberStud <<
			", summary grade: " << sumGrade << ", average grade: "
			<< averGrade << ", number of red diplomas: " << numOfRedDiplomas << endl;
	}
};

class Gimnasia :public Srednee 
{

public:
	Gimnasia(int a, int n, int r) : Srednee(a, n, r)
	{
	}

	void setRangSR(int r) override
	{
		int rangSR = rand() % 40;
	}
};

class School :public Srednee {
public:
	School(int a, int n, int r) : Srednee(a, n, r)
	{
	}

	void setRangSR(int r) override
	{
		int rangSR = rand() % 40;
	}
};

class Univer :public Higher {
public:
	Univer(int a, int n, int nos) : Higher(a, n,nos)
	{}

	void setnumOfRedDiplomas() 
	{
		int nos= rand() % 20;

		cout << "The number of red diplomas is " << nos << endl;
	}
};

class Institute :public Higher 
{
public:
	Institute(int a, int n, int nos) : Higher(a, n,nos)
	{
	}

	void setnumOfRedDiplomas() 
	{
		int nos = rand() % 30;

		cout << "The number of red diplomas is " << nos << endl;
	}
};

int main()
{
	Institute Tech(10,66,76);
	Tech.setnumOfRedDiplomas();
	Tech.printInfo();

	Univer Min(34,50,77);
	Min.setnumOfRedDiplomas();
	Min.printInfo();

	School First(12,89,12);
	First.printInfo();

	Gimnasia Sec(43, 85, 4);
	Sec.printInfo();

}