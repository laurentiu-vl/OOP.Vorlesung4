#pragma once
#include <iostream>
#include <vector>
#include "Shape.h"
using namespace std;

void apply(vector<Shape*> vector, void (f)(Shape*));

void multiplication(Shape*);

void division(Shape*);

void add_to_string(Shape*);