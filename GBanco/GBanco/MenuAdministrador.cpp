#include <iostream>
#include <stdio.h>
#include <string>
#include "Administradores.cpp"
using namespace std;

class MenuAdministrador
{
public:
	void MenuAdministradorP()
	{
		Administradores oAdmin;
		int opc = 0;
		cout << "Administrador " << endl;
		cout << "1. Registrar un cliente" << endl;
		cout << "2. Registrar una cuenta(Debito o Credito)" << endl;
		cout << "3. Ver Clientes" << endl;
		cout << "4. Ver Cuentas" << endl;
		cout << "5. Ver saldo cuentas de ahorro(Debito)" << endl;
		cout << "6. Ver saldo cuentas de credito(Adeudo al banco)" << endl;
		cout << "7. Salir" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			oAdmin.RegistrarCliente();
			MenuAdministradorP();
			break;
		case 2:
			oAdmin.RegistraCuenta();
			MenuAdministradorP();
			break;
		case 3:
			oAdmin.ConsultaClientes();
			MenuAdministradorP();
			break;
		case 4:
			oAdmin.ConsultaCuentas();
			MenuAdministradorP();
			break;
		case 5:
			oAdmin.ConsultaSaldoDebito();
			MenuAdministradorP();
			break;
		case 6:
			oAdmin.ConsultaSaldoCredito();
			MenuAdministradorP();
			break;
		case 7:
			cout << "Saliendo..." << endl;
			break;
		default:
			cout << "Opcion no disponible, Saliendo..." << endl;
			break;
		}
	}

private:

};