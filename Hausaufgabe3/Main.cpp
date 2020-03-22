#include <iostream>
#include <string.h>
#include "Shape.h"
#include "Shape2.h"
#include <vector>
using namespace std;

int main()
{
	vector<Shape*>Liste(10);

	Shape* figur1 = new Shape("Kreis", 240);
	Shape* figur2 = new Shape("Rechteck", 180);
	Shape* figur3 = new Shape("Fünfeck", 90);
	Shape* figur4 = new Shape("Sechseck", 120);

	Liste = { figur1, figur2, figur3, figur4 };

		apply(Liste, multiplication);
		
		apply(Liste, division);
		
		apply(Liste, add_to_string);
		
}