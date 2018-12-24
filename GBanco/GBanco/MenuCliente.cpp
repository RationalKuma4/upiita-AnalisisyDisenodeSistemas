#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include "Clientes.cpp"
using namespace std;

class MenuCliente
{
public:
	void MenuClienteP(string usuario)
	{
		system("cls");
		Clientes Cliente;
		int opc = 0;
		cout << "Bienvenido " << usuario << endl;
		cout << "1. Registrar un pago " << endl;
		cout << "2. Ver cuentas " << endl;
		cout << "3. Ver saldo de cuentas de ahorro(Debito) " << endl;
		cout << "4. Ver saldo de cuentas de credito(Adeudo al banco) " << endl;
		cout << "5. Salir " << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			Cliente.RegistraPago();
			MenuClienteP(usuario);
			break;
		case 2:
			Cliente.VerCuentasxCliente();
			MenuClienteP(usuario);
			break;
		case 3:
			Cliente.VerCuentasDebitoxCliente();
			MenuClienteP(usuario);
			break;
		case 4:
			Cliente.VerCuentasCreditoxCliente();
			MenuClienteP(usuario);
			break;
		case 5:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion no disponible, Saliendo..." << endl;
			break;
		}
	}

private:

};