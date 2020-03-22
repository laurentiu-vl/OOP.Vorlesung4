#include <iostream>
#include <vector>
#include <string>
#include "Shape2.h"
using namespace std;

void apply(vector<Shape*> vector, void (f)(Shape*))
{
	 int index = 0;
	 while (index < size(vector))
	 {
		 f(vector[index]);
		 index++;
		 cout << endl;
	 }   
}

void multiplication(Shape*objekt)
{
	cout << "Multiply with: ";
	int x;
	cin >> x;
	double arie;
	arie = objekt->getterfl�che();
	arie = arie * x;;
	objekt->setterfl�che(arie);
}

void division(Shape*objekt)
{
	cout << "Divide with: ";
	int y;
	cin >> y;
	double arie;
	arie = objekt->getterfl�che();
	arie = arie / y;
	objekt->setterfl�che(arie);
}

void add_to_string(Shape*objekt)
{	
	string character;
	cout << "Add character at the end: ";
	cin >> character;
	string String;
	String = objekt->gettername() + " " + to_string(objekt->getterfl�che()) + character;
	cout <<" "<< String << endl;
}