#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
	private:
		double Fl�che;

		string Name;
	public:
		Shape();

		Shape(string, double);
		
		void settername(string);
		
		string gettername();
		
		void setterfl�che(double);
		
		double getterfl�che();
};