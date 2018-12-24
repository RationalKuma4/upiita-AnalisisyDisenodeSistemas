#include <iostream>
#include <string>
#include <fstream>
#include <ctime> 
#include "IClientes.h"
#include "ICuentas.h"
using namespace std;

class Administradores : public IClientes, public ICuentas
{
public:
	string RegistrarCliente()
	{
		string registro, mensaje;
		int x;
		cout << "Registro Clinete" << endl;
		cout << "Nombre: ";
		cin >> nombre;
		cout << "Apellido Paterno: ";
		cin >> apellidoP;
		cout << "Apellido Materno: ";
		cin >> apellidoM;
		cout << "Usuario: ";
		cin >> usuario;
		cout << "Password: ";
		cin >> password;

		srand(time(NULL));
		for (int i = 0; i <= 29; i++)
		{
			x = rand() % 100000000000000 + 1;
		}

		registro = (to_string(x)) + "|" + nombre + " " + apellidoP + " " + apellidoM + "|" + usuario + "|" + password;

		ofstream fs("Clientes.txt", ios_base::app);
		if (fs.is_open())
		{
			fs << registro << endl;
			mensaje = "Cliente registrado exitosamente";
		}
		else if (fs.fail())
		{
			mensaje = "Fallo al registrar el cliente";
		}
		return mensaje;
	}

	string RegistraCuenta()
	{
		string registro, mensaje;
		int idCuenta;
		cout << "Tipo de cuenta: ";
		cin >> tipoCuenta;
		cout << "Cliente: ";
		cin >> idClienteCuenta;
		cout << "Monto: ";
		cin >> monto;

		srand(time(NULL));
		for (int i = 0; i <= 29; i++)
		{
			idCuenta = rand() % 100000000000000 + 1;
		}

		registro = (to_string(idCuenta)) + "|" + (to_string(idClienteCuenta)) + "|" + tipoCuenta + "|" + to_string(monto);

		ofstream fs("Cuentas.txt", ios_base::app);
		if (fs.is_open())
		{
			fs << registro << endl;
			mensaje = "Cuenta registrada exitosamente";
		}
		else if (fs.fail())
		{
			mensaje = "Fallo al registrar la cuenta";
		}
		return mensaje;
	}

	void ConsultaClientes()
	{
		ifstream stream1("Clientes.txt");
		ofstream stream2("ClienteConsulta.txt");
		/*Imprimir informacion en la pantalla*/
		cout << stream1.rdbuf() << endl;

		/*Pasar la informacion para la consulta*/
		if (stream1.is_open())
		{
			stream2 << stream1.rdbuf();
			cout << "Consulta en 'ClienteConsulta.txt'" << endl;
		}
		else if (stream1.fail())
		{
			cout << "Error al hacer la consulta" << endl;
		}

		stream1.close();
		stream2.close();
	}

	void ConsultaCuentas()
	{
		ifstream stream1("Cuentas.txt");
		ofstream stream2("CuentasConsulta.txt");
		/*Imprimir informacion en pantalla*/
		cout << stream1.rdbuf() << endl;

		/*Copiar informacion para consulta*/
		if (stream1.is_open())
		{
			stream2 << stream1.rdbuf();
			cout << "Consulta en 'CuentasConsulta.txt'" << endl;
		}
		else if (stream1.fail())
		{
			cout << "Error al hacer la consulta" << endl;
		}
		stream1.close();
		stream2.close();
	}

	void ConsultaSaldoDebito()
	{}

	void ConsultaSaldoCredito()
	{}
private:

};