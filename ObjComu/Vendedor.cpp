#include <iostream>
#include <stdio.h>
using namespace std;

class Vendedor
{
	int codigo;
	int edad;
	char nombre[20];
	char password[10];
public:
	Vendedor(char cnombre[], char cpassword[]);
	void RecibeDatos();
	void ImprimeDatos();
	int IniciaSesion(char lusuario[], char lpassword[]);
	int Vender();
};

Vendedor::Vendedor(char cnombre[], char cpassword[])
{
	codigo = 0;
	edad = 0;
	strcpy_s(nombre, cnombre);
	strcpy_s(password, cpassword);
}

void Vendedor::RecibeDatos()
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

void Vendedor::ImprimeDatos()
{
	cout << "El nombre es: " << nombre << endl;
	cout << "Su codigo es: " << codigo << endl;
	cout << "Su edad es: " << edad << endl;
}

int Vendedor::IniciaSesion(char lusuario[], char lpassword[])
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

int Vendedor::Vender()
{
	int cantidad = 0;
	cout << "Cantidad a vender: ";
	cin >> cantidad;
	return cantidad;

}

class Producto
{
	int id;
	char pnombre[20];
	double precio;
	int cantidadProducto;
	double piva;
public:
	Producto();
	void proRecibeDatos();
	void proImprimeDatos();
	void porDisponibilidad();
	void proActualizarDisponibleDisponible(int resp);
};

Producto::Producto()
{
	id = 023;
	precio = 12.5;
	cantidadProducto = 10;
	piva = 1.36;
}

void Producto::proRecibeDatos()
{
	cout << "Introduzca el nombre de el producto: ";
	cin >> pnombre;
	cout << "Introduzca el id: ";
	cin >> id;
	cout << "Introduzca la precio: ";
	cin >> precio;
	cout << "Introduzca la cantidad: ";
	cin >> cantidadProducto;
}

void Producto::proImprimeDatos()
{
	cout << "El nombre es: " << pnombre << endl;
	cout << "Su id es: " << id << endl;
	cout << "Su precio es: " << precio << endl;
	cout << "La cantidad de Producto es: " << cantidadProducto << endl;
}

void Producto::porDisponibilidad()
{
	cout << "La disponibilidad del producto es de " << cantidadProducto << endl;
}

void Producto::proActualizarDisponibleDisponible(int resp)
{
	double subtotal, total, ivat;
	if (resp <= cantidadProducto)
	{
		subtotal = resp * precio;
		total = subtotal + piva;
		ivat = piva*resp;
		cout << "Subtotal $" << subtotal << endl;
		cout << "I.V.A.   $" << ivat << endl;
		cout << "-----------------------" << endl;
		cout << "Total    $" << total << endl;
		cantidadProducto = cantidadProducto - resp;
	}
	else
	{
		cout << "Cantidad Insuficiente" << endl;
	}
}


int main()
{
	int resp;
	char nombre[20], pass[10];
	Vendedor oEmpleado("1", "1");
	Producto oProducto;

	cout << "Inicie sesion" << endl;
	cout << "Nombre: ";
	cin >> nombre;
	cout << "Password: ";
	cin >> pass;
	resp = oEmpleado.IniciaSesion(nombre, pass);

	if (resp == 0)
	{
		cout << "Inicio de sesion correcta." << endl;
		system("cls");
		int opc = 0;

		int cant = 0;

		do{
			cout << "Bienvenido " << nombre << endl;
			cout << "1. Ver informacion producto" << endl;
			cout << "2. Vender" << endl;
			cout << "3. Consultar disponibilidad del producto" << endl;
			cout << "4. Salir" << endl;
			cin >> opc;
			switch (opc)
			{
			case 1:
				oProducto.proImprimeDatos();
				break;
			case 2:
				cant = oEmpleado.Vender();
				oProducto.proActualizarDisponibleDisponible(cant);
				oProducto.porDisponibilidad();
				break;
			case 3:
				oProducto.porDisponibilidad();
				break;
			case 4:
				cout << "Saliendo..." << endl;
			}
		} while (opc < 4);
	}
	else
	{
		cout << "Nombre o password incorrectos." << endl;
	}

	system("PAUSE");
	return 0;
}
