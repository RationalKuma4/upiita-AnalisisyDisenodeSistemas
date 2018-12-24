#include <iostream>
#include <stdio.h>
#include "Complejo.h"
using namespace std;

int main()
{
	int opc = 0, real, imaginario;
	do
	{
		cout << "Menu Complejos" << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Multiplicacion" << endl;
		cin >> opc;
		cout << "z = r + i" << endl;
		cout << "Introduzca el primer numero Imaginario" << endl;
		cout << "Introduzca la parte real" << endl;
		cin >> real;
		cout << "Introduzca la parte imaginaria i: ";
		cin >> imaginario;
		Complejo A(real, imaginario);
		cout << "Introduzca el segundo numero Imaginario" << endl;
		cout << "Introduzca la parte real" << endl;
		cin >> real;
		cout << "Introduzca la parte imaginaria i: ";
		cin >> imaginario;
		Complejo B(real, imaginario);
		Complejo Resultado(0, 0);
		switch (opc)
		{
		case 1:
			Resultado = A + B;
			Resultado.ImprimirNumero();
			cout << endl;
			break;
		case 2:
			Resultado = A - B;
			Resultado.ImprimirNumero();
			cout << endl;
			break;
		case 3:
			Resultado = A * B;
			Resultado.ImprimirNumero();
			cout << endl;
			break;
		case 5:
			cout << "Saliendo.." << endl;
			break;
		default:
			cout << "Opcion no disponible. Saliendo..." << endl;
			break;
		}
	} while (opc < 4);
	system("PAUSE");
	return 0;
}