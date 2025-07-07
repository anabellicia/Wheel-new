#include "Wheel.h"
#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

Wheel::Wheel()
{
	r = 1;
	h = 1;
	n = 1;
	x = 10;
	y = 10;
}
void Wheel::SetR(float r)
{
	if (r <= 0)
		throw "Îøèáêà";
	this->r = r;
}
void Wheel::SetH(float h)
{
	if (h <= 0)
		throw "Îøèáêà";
	this->h = h;
}
void Wheel::SetN(unsigned int n)
{
	this->n = n;
}
void Wheel::SetXY(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Wheel::GetS() {
	float S;
	S = pi * (r + h) * (r + h);
	return S;
}
float Wheel::GetHS() {
	float HS;
	HS = pi * h * 2 * (r + h);
	return HS;
}
float Wheel::GetL() {
	float L;
	L = 2 * pi * (r + h);
	return L;
}

void Wheel :: operator*=(float l)
{
	r *= l;
	h *= l;
}
void Wheel :: operator/=(float l)
{
	r /= l;
	h /= l;
}
float operator/(Wheel a1, Wheel a2)
{
	float b;
	b = a1.GetS() / a2.GetS();
	return b;
}
float operator+(Wheel a1, Wheel a2)
{
	float m;
	m = a1.GetS() + a2.GetS();
	return m;
}
float operator-(Wheel a1, Wheel a2)
{
	float n;
	n = a1.GetS() - a2.GetS();
	return n;
}
bool operator>(Wheel a1, Wheel a2)
{
	return (a1.GetS() > a2.GetS());
}

bool operator<(Wheel a1, Wheel a2)
{
	return (a1.GetS() < a2.GetS());
}

bool operator==(Wheel a1, Wheel a2)
{
	return (a1.GetS() == a2.GetS());
}

bool operator!=(Wheel a1, Wheel a2)
{
	return (a1.GetS() != a2.GetS());
}

void Wheel::operator=(Wheel& a1) {
	r = a1.r;
	h = a1.h;
	x = a1.x;
	y = a1.y;
	n = a1.n;
}


void Wheel::Draw(System::Windows::Forms::PaintEventArgs^ e, System::Drawing::Pen^ pen)
{
	e->Graphics->DrawEllipse(pen, x - r, y - r, r * 2, r * 2);
	float xn, yn;
	for (unsigned i = 0; i < n; i++)
	{
		xn = x + r * cos(2 * pi / n * i);
		yn = y + r * sin(2 * pi / n * i);
		e->Graphics->DrawLine(pen, x, y, xn, yn);
	}
}
