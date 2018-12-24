#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class Cancion
{
public:
	Cancion();
	void ImprimeInformacion();
	string cNombre;
	string cGenero;
	string ruta;
private:
};

Cancion::Cancion()
{
	cNombre = "";
	cGenero = "";
	ruta = "";
}

void Cancion::ImprimeInformacion()
{

}