#include "WheelArray.h"
#include <math.h>
#include "Wheel.h"

WheelArray::WheelArray(int k)
{
	Length(k);
}
WheelArray :: ~WheelArray()
{
	if (Array != 0)
		delete[] Array;
}

WheelArray* WheelArray :: Remove(int n)
{
	Wheel* Array2 = new Wheel[k - 1];
	int j = 0;
	for (int i = 0; i < k; i++)
	{
		if (i != n)
		{
			Array2[j++] = Array[i];
		}
	}
	delete[]Array;
	Array = Array2;
	k--;
	return this;
}
WheelArray* WheelArray :: Length(unsigned int Len)
{
	Wheel* Array3 = new Wheel[Len];
	for (int i = 0; i < k && i < Len; i++)
		Array3[i] = Array[i];
	delete[]Array;
	Array = Array3;
	k = Len;
	return this;
}
unsigned WheelArray::Length()
{
	return k;
}
Wheel& WheelArray :: operator[](unsigned int i)
{
	if (i < k)
		return Array[i];
	throw "ошибка";
}
WheelArray* WheelArray::Push(int n, Wheel w1)
{
	Wheel* Array4 = new Wheel[k + 1];
	unsigned int j = 0;
	for (unsigned int i = 0; i < k; i++)
	{
		if (i != n)
			Array4[i] = Array[j++];
		else
			Array4[i] = w1;
	}
	delete[]Array;
	Array = Array4;
	k++;
	return this;
}
WheelArray* WheelArray::Push(Wheel w1)
{
	return Push(k , w1);
}
WheelArray& WheelArray::operator=(WheelArray a1)
{
	Wheel* Array1 = new Wheel[a1.k];
	for (int i = 0; i < a1.k; i++)
		Array1[i] = a1.Array[i];
	delete[] Array;
	Array = Array1;
	return *this;
}
bool operator==(WheelArray a1, WheelArray a2)
{
	if (a1.k != a2.k)
		return false;
	for (int i = 0; i < a1.k; i++)
		if (!(a1.Array[i] == a2.Array[i]))
			return false;
	return true;
}
WheelArray* WheelArray::Clear()
{
	for (int i = 0; i < 0; i++)
		Array[i] = Wheel();
	return this;
}
WheelArray* WheelArray::Copy(WheelArray a1, unsigned start, unsigned end, unsigned paste)
{
	if (start >= end || end >= a1.k)
		throw "Индексы заданы некорретно";

	unsigned l = k, lp = end - start;
	if (paste > k) l = paste;
	l += lp;
	Wheel* Array4 = new Wheel[l];
	unsigned j = 0, m = 0;
	for (int i = 0; i < l; i++)
	{
		if (i < paste || i >= paste + lp)
			Array4[i] = Array[j++];
		else if (i >= paste && i < paste + lp)
			Array4[i] = a1.Array[m++];
	}
	delete[]Array;
	Array = Array4;
	k = l;
	return this;
}