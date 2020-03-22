#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Shape
{
	private:
		double Fläche;

		string Name;
	public:
		Shape();

		Shape(string, double);
		
		void settername(string);
		
		string gettername();
		
		void setterfläche(double);
		
		double getterfläche();
};