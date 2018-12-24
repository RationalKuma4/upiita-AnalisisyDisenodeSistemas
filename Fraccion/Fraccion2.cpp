#include <iostream>
#include <stdio.h>
using namespace std;

class Fraccion
{
public:
	Fraccion(int a, int b);
	void ImprimirFraccion();
	Fraccion operator + (Fraccion Y);
	Fraccion operator - (Fraccion Y);
	Fraccion operator * (Fraccion Y);
	Fraccion operator / (Fraccion Y);
private:
	int num;
	int deno;
};

Fraccion::Fraccion(int a, int b)
{
	num = a;
	deno = b;
}

void Fraccion::ImprimirFraccion()
{
	cout << num << "/" << deno;
}

Fraccion Fraccion::operator+(Fraccion Y)
{
	if (deno != Y.deno)
	{
		int sDeno = deno * Y.deno;
		int sFactor1 = (sDeno / deno) * num;
		int sFactor2 = (sDeno / Y.deno)*Y.num;
		Fraccion X(sFactor1 + sFactor2, sDeno);
	}
	else if (deno == Y.deno)
	{
		Fraccion X(num + Y.num, deno);
		return X;
	}
}

Fraccion Fraccion::operator - (Fraccion Y)
{
	if (deno != Y.deno)
	{
		int sDeno = deno * Y.deno;
		int sFactor1 = (sDeno / deno) * num;
		int sFactor2 = (sDeno / Y.deno)*Y.num;
		Fraccion X(sFactor1 - sFactor2, sDeno);
	}
	else if (deno == Y.deno)
	{
		Fraccion X(num - Y.num, deno);
		return X;
	}
}

Fraccion Fraccion::operator * (Fraccion Y)
{
	if (deno != Y.deno)
	{
		int sDeno = deno * Y.deno;
		int sFactor1 = (sDeno / deno) * num;
		int sFactor2 = (sDeno / Y.deno)*Y.num;
		Fraccion X(sFactor1 * sFactor2, sDeno);
	}
	else if (deno == Y.deno)
	{
		Fraccion X(num * Y.num, deno);
		return X;
	}
}

Fraccion Fraccion::operator / (Fraccion Y)
{
	if (deno != Y.deno)
	{
		Fraccion X(num * Y.deno, deno * Y.num);
		return X;
	}
	else if (deno == Y.deno)
	{
		Fraccion X(num * Y.deno, deno * Y.num);
		return X;
	}
}


int main()
{
	int opc = 0, numerador, denominador;
	do
	{
		cout << "Menu" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicacion" << endl;
		cout << "4. Division" << endl;
		cin >> opc;
		cout << "Introduzca el Numerador y el Denominador" << endl;
		cout << "Numerador: ";
		cin >> numerador;
		cout << "Denominador: ";
		cin >> denominador;
		Fraccion A(numerador, denominador);
		cout << "Introduzca el Numerador y el Denominador" << endl;
		cout << "Numerador: ";
		cin >> numerador;
		cout << "Denominador: ";
		cin >> denominador;
		Fraccion B(numerador, denominador);
		Fraccion Resultado(0, 0);
		switch (opc)
		{
		case 1:
			Resultado = A + B;
			Resultado.ImprimirFraccion();
			cout << endl;
			break;
		case 2:
			Resultado = A - B;
			Resultado.ImprimirFraccion();
			cout << endl;
			break;
		case 3:
			Resultado = A * B;
			Resultado.ImprimirFraccion();
			cout << endl;
			break;
		case 4:
			Resultado = A / B;
			Resultado.ImprimirFraccion();
			cout << endl;
			break;
		case 5:
			cout << "Saliendo.." << endl;
			break;
		default:
			cout << "Opcion no disponible. Saliendo..." << endl;
			break;
		}
	} while (opc < 5);
	system("PAUSE");
	return 0;
}