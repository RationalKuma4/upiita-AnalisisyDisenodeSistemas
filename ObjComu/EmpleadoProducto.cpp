#include <iostream>
#include <stdio.h>
using namespace std;

class Empleado
{
public:
	Empleado(char cnombre[], char cpassword[]);
	void RecibeDatos();
	void ImprimeDatos();
	int IniciaSesion(char lusuario[], char lpassword[]);
private:
	int codigo;
	char nombre[20];
	int edad;
	char password[10];
};

Empleado::Empleado(char cnombre[], char cpassword[])
{
	codigo = 0;
	edad = 0;
}

void Empleado::RecibeDatos()
{
	cout << "Introduzca el nombre de el empleado: ";
	cin >> nombre;
	cout << "Introduzca el codigo: ";
	cin >> codigo;
	cout << "Introduzca la edad: ";
	cin >> edad;
	cout << "Introduzca password: ";
	cin >> password;
}

void Empleado::ImprimeDatos()
{
	cout << "El nombre es: " << nombre << endl;
	cout << "Su codigo es: " << codigo << endl;
	cout << "Su edad es: " << edad << endl;
}

int Empleado::IniciaSesion(char lusuario[], char lpassword[])
{
	int rUsuario, rPass;
	rUsuario = strcmp(lusuario, nombre);
	rPass = strcmp(lpassword, password);
	if (rUsuario == 0 && rPass == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

class Producto
{
public:
	Producto();
	void proRecibeDatos();
	void proImprimeDatos();
private:
	int id;
	char nombre[30];
	double precio;
	int cantidadProducto;
};

Producto::Producto()
{
	id = 0;
	precio = 0;
	cantidadProducto = 0;
}

void Producto::proRecibeDatos()
{
	cout << "Introduzca el nombre de el producto: ";
	cin >> nombre;
	cout << "Introduzca el id: ";
	cin >> id;
	cout << "Introduzca la precio: ";
	cin >> precio;
	cout << "Introduzca la cantidad: ";
	cin >> cantidadProducto;
}

void Producto::proImprimeDatos()
{
	cout << "El nombre es: " << nombre << endl;
	cout << "Su id es: " << id << endl;
	cout << "Su precio es: " << precio << endl;
	cout << "La cantidad de Producto es: " << cantidadProducto << endl;
}

int main()
{
	int resp;
	char nombre[20], pass[10];
	Empleado oEmpleado("nada", "nada");
	Producto oProducto;

	oEmpleado.RecibeDatos();
	oEmpleado.ImprimeDatos();

	oProducto.proRecibeDatos();
	oProducto.proImprimeDatos();

	cout << "Inicie sesion" << endl;
	cout << "Nombre: ";
	cin >> nombre;
	cout << "Password: ";
	cin >> pass;
	resp = oEmpleado.IniciaSesion(nombre, pass);

	if (resp == 0)
	{
		cout << "Inicio de sesion correcta." << endl;
	}
	else
	{
		cout << "Nombre o password incorrectos." << endl;
	}

	system("PAUSE");
	return 0;
}