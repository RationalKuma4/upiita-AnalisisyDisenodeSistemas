#include <iostream>
#include <stdio.h>
using namespace std;

class Complejo
{
public:
	Complejo(int preal, int pimaginaria);
	Complejo operator + (Complejo C);
	Complejo operator - (Complejo C);
	Complejo operator * (Complejo C);
	void ImprimirNumero();
private:
	int real;
	int imaginaria;
};

Complejo::Complejo(int preal, int pimaginaria)
{
	real = preal;
	imaginaria = pimaginaria;
}

Complejo Complejo::operator + (Complejo C)
{
	Complejo I(real + C.real, imaginaria + C.imaginaria);
	return I;
}

Complejo Complejo::operator - (Complejo C)
{
	Complejo I(real - C.real, imaginaria - C.imaginaria);
	return I;
}

Complejo Complejo::operator * (Complejo C)
{
	int sreal = real * C.real;
	int sIReal = real * C.imaginaria;
	int sRImag = imaginaria * C.real;
	int sImag = imaginaria * C.real;

	int zReal = sreal - sImag;
	int zImag = sIReal + sRImag;

	Complejo I(zReal, zImag);
	return I;
}

void Complejo::ImprimirNumero()
{
	cout << "El resultado es: " << endl;
	if (real < 0 && imaginaria < 0)
	{
		cout << "z = " << real << " " << imaginaria << "i" << endl;
	}
	else if (real>0 && imaginaria > 0)
	{
		cout << "z = " << real << " + " << imaginaria << "i" << endl;
	}
	else if (real > 0 && imaginaria < 0)
	{
		cout << "z = " << real << " " << imaginaria << "i" << endl;
	}
	else if (real < 0 && imaginaria>0)
	{
		cout << "z = -" << real << " + " << imaginaria << "i" << endl;
	}
}