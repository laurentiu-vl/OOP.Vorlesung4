#include "Shape.h"
#include <iostream>
#include <string.h>
using namespace std;

Shape::Shape()
{

}

Shape::Shape(string Name_shape, double Fläche_shape)
{
    Fläche = Fläche_shape;
    Name = Name_shape;
}

double Shape::getterfläche()
{
    return Fläche;
}
string Shape::gettername()
{
    return Name;
}

void Shape::settername(string nume)
{
    this->Name = nume;
}

void Shape::setterfläche(double arie)
{
    this->Fläche = arie;
}