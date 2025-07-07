#pragma once
#include <cmath>

using namespace System;

 class Wheel {
	public:
		Wheel();
		float GetR() { return r; }
		float GetH() { return h; }
		unsigned GetN() { return n; }
		void SetR(float r);
		void SetH(float h);
		void SetN(unsigned int n);
		float GetS();
		float GetHS();
		float GetL();
		void SetXY(float x, float y);


		void operator*=(float l);
		void operator/=(float h);
		friend float operator/(Wheel a1, Wheel a2);
		friend float operator+(Wheel a1, Wheel a2);
		friend float operator-(Wheel a1, Wheel a2);
		friend bool operator>(Wheel a1, Wheel a2);
		friend bool operator<(Wheel a1, Wheel a2);
		friend bool operator==(Wheel a1, Wheel a2);
		void operator=(Wheel& a1);
		friend bool operator!=(Wheel a1, Wheel a2);
		void Draw(System::Windows::Forms::PaintEventArgs^ e, System::Drawing::Pen^ pen);

	private:
		float r, h, x, y;
		unsigned int n;
		const float pi = 3.14f;
};