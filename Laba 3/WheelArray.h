#pragma once
#include "Wheel.h"
class WheelArray
{
private:
	Wheel* Array;
	unsigned int k = 0;
public:	
	WheelArray(int k = 0);
	~WheelArray();
	WheelArray* Push(Wheel w1);
	WheelArray* Remove(int n);
	WheelArray* Length(unsigned int Len);
	unsigned int Length();
	Wheel& operator[](unsigned int i);
	WheelArray* WheelArray::Push(int n, Wheel w1);
	friend bool operator==(WheelArray a1,WheelArray a2);
	WheelArray& operator =(WheelArray a1);
	WheelArray* Clear();
	WheelArray* Copy(WheelArray a1,unsigned start, unsigned end, unsigned paste );
};



