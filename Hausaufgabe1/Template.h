#pragma once
template <class T>

T summe(T vector[], int start, int end, int wert = 0)
{
	T add = 0;
	for (int index = start; index <= end; index++)
		add = add + vector[index];

	return add + wert;
}