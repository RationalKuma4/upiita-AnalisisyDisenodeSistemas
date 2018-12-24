#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Biblioteca
{
public:
	Biblioteca();
	void DesplegarInfoBiblioteca();
	/*Metodos Get Set Datos*/
	void GetnombreEncargado();
	void GetnoBiblioteca();
	void Gethorario();

	void SetnombreEncargado();
	void SetnoBiblioteca();
	void Sethorario();
private:
	string nombreEncargado;
	int noBiblioteca;
	string horario;
};

Biblioteca::Biblioteca()
{
	nombreEncargado = "Jorge";
	noBiblioteca = 165135;
	horario = "9:00 am - 6:00 pm";
}

void Biblioteca::DesplegarInfoBiblioteca()
{
	cout << "Informacion de Biblioteca" << endl;
	cout << "Encragado: " << nombreEncargado << endl;
	cout << "No de Biblioteca" << noBiblioteca << endl;
	cout << "Horatio: " << horario << endl;
}

void Biblioteca::GetnombreEncargado()
{
	cout << nombreEncargado << endl;
}

void Biblioteca::SetnombreEncargado()
{
	cout << "Introduzca el nombre del Encargado: ";
	cin >> nombreEncargado;
}

void Biblioteca::GetnoBiblioteca()
{
	cout << noBiblioteca << endl;
}

void Biblioteca::SetnoBiblioteca()
{
	cout << "Introduzca el numero de la Biblioteca: ";
	cin >> noBiblioteca;
}

void Biblioteca::Gethorario()
{
	cout << horario << endl;
}

void Biblioteca::Sethorario()
{
	cout << "Introduzca el horario: ";
	cin >> horario;
}
