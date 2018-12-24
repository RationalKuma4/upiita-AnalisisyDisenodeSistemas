#include <iostream>
#include <stdio.h>
#include <string>
#include "RevistaLibro.h"
#include "Biblioteca.h"
using namespace std;

int main()
{
	int opc, indice;
	Biblioteca oBiblioteca;
	Libro oLibro[3];
	Revista oRevista[3];

	for (int i = 0; i < 5; i++)
	{
		cout << endl;
		cout << "Informacion de el libro " << i + 1 << endl;
		oLibro[i].RegistrarInfoLibro();
		if ((i + 1) == 2)
		{
			break;
		}
	}

	do
	{
		cout << "Menu" << endl;
		cout << "1. Ver informacion de la biblioteca" << endl;
		cout << "2. Ver catalogo de libros" << endl;
		cout << "3. Ver catalogo de Revistas" << endl;
		cout << "4. Prestar Libro" << endl;
		cout << "5. Salir" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			oBiblioteca.DesplegarInfoBiblioteca();
			break;
		case 2:
			for (int i = 0; i < 5; i++)
			{
				cout << endl;
				cout << "Informacion de el libro " << i + 1 << endl;
				oLibro[i].DesplegraInfoLibro();
				if ((i + 1) == 2)
				{
					break;
				}
			}
			break;
		case 3:
			for (int i = 0; i < 5; i++)
			{
				cout << endl;
				cout << "Informacion de la revista " << i + 1 << endl;
				oRevista[i].DesplegarInfoRevista();
				if ((i + 1) == 2)
				{
					break;
				}
			}
			break;
		case 4:
			cout << "Introduce el indice de el libro que deseas" << endl;
			cin >> indice;
			for (int i = 0; i < 5; i++)
			{
				if ((i + 1) == indice)
				{
					oLibro[i].PrestarLibro(indice);
				}
				if ((i + 1) == 2)
				{
					break;
				}
			}
			break;
		case 5:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion no disponible" << endl;
			cout << "Saliendo..." << endl;
			break;
		}
	} while (opc);

	system("PAUSE");
	return 0;
}
