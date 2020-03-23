#pragma once
#include <vector>
#include <algorithm>
using namespace std;

template <class Lambda>

Lambda summe(Lambda a[], int start, int end, Lambda wert = 0)
{
	vector <Lambda> vector;
	for (int index = start; index <= end; index++)
		vector.push_back(a[index]);

	for_each(vector.begin(), vector.end(), [&wert](Lambda X) {wert += X; });

	return wert;
}