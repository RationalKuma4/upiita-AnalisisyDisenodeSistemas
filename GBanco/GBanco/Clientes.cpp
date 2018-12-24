#include <iostream>
#include <string>
#include "Gestion.h"
using namespace std;

class Clientes
{
public:
	int LogIn(string usuario, string password)
	{
		string nuser = "admin", npassword = "admin";
		int permiso;
		if (usuario == nuser && password == npassword)
		{
			permiso = 1;
		}
		else
		{
			permiso = 0;
		}
		return permiso;
	}

	void RegistraPago()
	{
		Gestion oGestion;
		int numeroCuenta = 0;
		cout << "Introduzca el numero de cuenta: ";
		cin >> numeroCuenta;
		oGestion.VerCuenta(numeroCuenta);
	}

	void VerCuentasxCliente()
	{}

	void VerCuentasCreditoxCliente()
	{}

	void VerCuentasDebitoxCliente()
	{}
private:

};