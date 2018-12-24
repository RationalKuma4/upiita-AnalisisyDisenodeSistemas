#include <iostream>
#include <stdio.h>
#include <string>
#include "ProduBiblio.h"
using namespace std;

//Clase Libro
class Libro : public ProductoBiblioteca
{
public:
	Libro();
	void DesplegraInfoLibro();
	void RegistrarInfoLibro();
	void PrestarLibro(int indice);

	void Getautor();
	void GetISBN();
	void Getanio();
	void GetcantidadDisponible();

	void Setautor();
	void SetISBN();
	void Setanio();
	void SetcantidadDisponible();
private:
	string autor;
	string ISBN;
	int anio;
	int cantidadDisponible;
};

Libro::Libro()
{
	autor = "";
	ISBN = "";
	anio = 0;
	cantidadDisponible = 0;
}

void Libro::DesplegraInfoLibro()
{
	cout << "Informacion del Libro" << endl;
	cout << "Nombre: " << titulo << endl;
	cout << "No Paginas" << noPaginas << endl;
	cout << "Autor: " << autor << endl;
	cout << "ISBN: " << ISBN << endl;
	cout << "Anio: " << anio << endl;
	cout << "Cantidad Disponible: " << cantidadDisponible << endl;
}

void Libro::RegistrarInfoLibro()
{
	cout << "Intriduzca la Informacion del Libro" << endl;
	Settitulo();
	SetnoPaginas();
	Setautor();
	SetISBN();
	Setanio();
	SetcantidadDisponible();
}

void Libro::PrestarLibro(int indice)
{
	if (cantidadDisponible <= 2)
	{
		cout << "No es posible prestar mas libros." << endl;
	}
	else if (cantidadDisponible > 2)
	{
		cantidadDisponible = cantidadDisponible - 1;
		cout << "Libro prestado; Categoria " << (indice) << endl;
	}
}

void Libro::Getautor()
{
	cout << autor << endl;
}

void Libro::Setautor()
{
	cin.ignore();
	cout << "Introduzca el nombre del Autor: ";
	cin >> autor;
}

void Libro::GetISBN()
{
	cout << ISBN << endl;
}

void Libro::SetISBN()
{
	cin.ignore();
	cout << "Introduzca el ISBN: ";
	cin >> ISBN;
}

void Libro::Getanio()
{
	cout << anio << endl;
}

void Libro::Setanio()
{
	cin.ignore();
	cout << "Introduzca el anio: ";
	cin >> anio;
}

void Libro::GetcantidadDisponible()
{
	cout << cantidadDisponible << endl;
}

void Libro::SetcantidadDisponible()
{
	cout << "Introduzca la cantidad disponible: ";
	cin >> cantidadDisponible;
}


//Clase Revista
class Revista : public ProductoBiblioteca
{
public:
	Revista();
	void DesplegarInfoRevista();
	void RegistrarInfoRevistas();

	void Geteditorial();
	void Getfecha();
	void GetISSN();
	void Getarea();
	void Getedicion();

	void Seteditorial();
	void Setfecha();
	void SetISSN();
	void Setarea();
	void Setedicion();

private:
	string editorial;
	string fecha;
	string ISSN;
	string area;
	int edicion;
};

Revista::Revista()
{
	editorial = "";
	fecha = "";
	ISSN = "";
	area = "";
	edicion = 0;
}

void Revista::DesplegarInfoRevista()
{
	cout << "Informacion de la revista" << endl;
	Gettitulo();
	GetnoPaginas();
	Geteditorial();
	GetISSN();
	Getfecha();
	Getarea();
	Getedicion();
}

void Revista::RegistrarInfoRevistas()
{
	cout << "Intriduzca la Informacion de la revista" << endl;
	Settitulo();
	SetnoPaginas();
	Seteditorial();
	Setfecha();
	SetISSN();
	Setarea();
	Setedicion();
}

void Revista::Geteditorial()
{
	cout << editorial << endl;
}

void Revista::Seteditorial()
{
	cout << "Introduzca el nombre de la editorial: ";
	cin >> editorial;
}

void Revista::Getfecha()
{
	cout << fecha << endl;
}

void Revista::Setfecha()
{
	cout << "Introduzca la fecha de la revista: ";
	cin >> fecha;
}

void Revista::GetISSN()
{
	cout << ISSN << endl;
}

void Revista::SetISSN()
{
	cout << "Introduzca el nombre del Articulo: ";
	cin >> ISSN;
}

void Revista::Getarea()
{
	cout << area << endl;
}

void Revista::Setarea()
{
	cout << "Introduzca el nombre de el area: ";
	cin >> area;
}

void Revista::Getedicion()
{
	cout << edicion << endl;
}

void Revista::Setedicion()
{
	cout << "Introduzca el numero de edicion: ";
	cin >> edicion;
}