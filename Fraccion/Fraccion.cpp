#include <iostream>
#include <stdio.h>
using namespace std;

class Fraccion
{
public:
	Fraccion(int numerador, int denominador);
	int RecibeDatos();
	void ImprimeDatos(int resp);
	int IdentificaFraccion(int numerador, int denominador);
	void ConversionFraccion();
private:
	int fnumerador;
	int fdenominador;
	int fentero;
};

Fraccion::Fraccion(int numerador, int denominador)
{
	fnumerador = numerador;
	fdenominador = denominador;
	fentero = 0;
}

int Fraccion::RecibeDatos()
{
	int resp = 0;
	cout << "Escribe el numerador: ";
	cin >> fnumerador;
	cout << "Escribe el denominador: ";
	cin >> fdenominador;
	resp = IdentificaFraccion(fnumerador, fdenominador);
	return resp;
}

void Fraccion::ImprimeDatos(int per)
{
	if (per == 0)
	{
		cout << "La fraccion es: " << fnumerador << "/" << fdenominador << endl;
	}
	else if (per == 1)
	{
		cout << "La fraccion " << fnumerador << "/" << fdenominador << " impropia convertida a propia es: " << endl;
		ConversionFraccion();
	}
}

int Fraccion::IdentificaFraccion(int numerador, int denominador)
{
	if (numerador > denominador)
	{
		cout << "Es una fraccion Impropia" << endl;
		return 1;
	}
	else if (numerador < denominador)
	{
		cout << "Es una fraccion Propia" << endl;
		return 0;
	}
}

void Fraccion::ConversionFraccion()
{
	int ope = 0, numerador = 0;
	fentero = fnumerador / fdenominador;
	ope = fentero * fdenominador;
	numerador = fnumerador - ope;
	if (numerador == 0)
	{
		cout << fentero << endl;
	}
	else if (numerador > 0)
	{
		cout << fentero << " " << numerador << "/" << fdenominador << endl;
	}
}


int main()
{
	int per = 0;
	Fraccion fraccion(0, 0);
	per = fraccion.RecibeDatos();
	fraccion.ImprimeDatos(per);
	system("PAUSE");
	return 0;
}