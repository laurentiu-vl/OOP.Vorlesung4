#include "Shape.h"
#include <iostream>
#include <string.h>
using namespace std;

Shape::Shape()
{

}

Shape::Shape(string Name_shape, double Fl�che_shape)
{
    Fl�che = Fl�che_shape;
    Name = Name_shape;
}

double Shape::getterfl�che()
{
    return Fl�che;
}
string Shape::gettername()
{
    return Name;
}

void Shape::settername(string nume)
{
    this->Name = nume;
}

void Shape::setterfl�che(double arie)
{
    this->Fl�che = arie;
}