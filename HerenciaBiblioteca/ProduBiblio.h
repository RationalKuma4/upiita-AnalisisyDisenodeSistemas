#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class ProductoBiblioteca
{
public:
	ProductoBiblioteca();
	void Gettitulo();
	void GetnoPaginas();

	void Settitulo();
	void SetnoPaginas();

	string titulo;
	int noPaginas;
private:

};

ProductoBiblioteca::ProductoBiblioteca()
{
	titulo = "";
	noPaginas = 0;
}

void ProductoBiblioteca::Gettitulo()
{
	cout << titulo << endl;
}

void ProductoBiblioteca::GetnoPaginas()
{
	cout << noPaginas << endl;
}

void ProductoBiblioteca::Settitulo()
{

	cout << "Introduzca el nombre del Articulo: ";
	cin >> titulo;
}

void ProductoBiblioteca::SetnoPaginas()
{

	cout << "Introduzca el numero de paginas: ";
	cin >> noPaginas;
}