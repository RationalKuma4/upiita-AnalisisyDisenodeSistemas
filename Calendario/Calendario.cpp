#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <string>
using namespace std;

class Calendario
{
public:
	Calendario();
	void ImprimirFecha();
	void HojearAdelante();
	void HojearAtras();
	void AnotarFecha();
	void ImprimirFechas();
private:
	int dia;
	int mes;
	int anio;
	string evento, fecha;
	string evento1, fecha1;
	string evento2, fecha2;
};

Calendario::Calendario()
{
	time_t tSac = time(NULL);
	struct tm* tmP = localtime(&tSac);
	dia = tmP->tm_mday;
	mes = tmP->tm_mon + 1;
	anio = tmP->tm_year + 1900;
}

void Calendario::ImprimirFecha()
{
	string fechaCompara;
	cout << "La fecha actual es: ";
	cout << dia << "/" << mes << "/" << anio << endl;
	fechaCompara = to_string(dia) + "/" + to_string(mes) + "/" + to_string(anio);

	if (fechaCompara.compare(fecha) == 0)
	{
		cout << "Evento marcado en el calnedario" << endl;
		cout << evento << endl;
	}
	else if (fechaCompara.compare(fecha1) == 0)
	{
		cout << "Evento marcado en el calnedario" << endl;
		cout << evento1 << endl;
	}
	else if (fechaCompara.compare(fecha2) == 0)
	{
		cout << "Evento marcado en el calnedario" << endl;
		cout << evento2 << endl;
	}

}

void Calendario::HojearAdelante()
{
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		if (dia == 31)
		{
			mes = mes + 1;
			dia = 1;
		}
		else if (dia < 31)
		{
			dia = dia + 1;
		}
	}
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		if (dia == 30)
		{
			mes = mes + 1;
			dia = 1;
		}
		else if (dia < 30)
		{
			dia = dia + 1;
		}
	}
	else if (mes == 2)
	{
		if (dia == 28)
		{
			mes = mes + 1;
			dia = 1;
		}
		else if (dia < 28)
		{
			dia = dia + 1;
		}
	}
}

void Calendario::HojearAtras()
{
	if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
	{
		if (mes == 1 && dia == 1)
		{
			anio = anio - 1;
			mes = 12;
			dia = 31;
		}
		else if (dia == 1)
		{
			mes = mes - 1;
			dia = 31;
		}
		else if (dia > 1)
		{
			dia = dia - 1;
		}
	}
	else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		if (dia == 1)
		{
			mes = mes - 1;
			dia = 30;
		}
		else if (dia > 1)
		{
			dia = dia - 1;
		}
	}
	else if (mes == 2)
	{
		if (dia == 1)
		{
			mes = mes - 1;
			dia = 31;
		}
		else if (dia > 1)
		{
			dia = dia - 1;
		}
	}
}

void Calendario::AnotarFecha()
{
	cout << "Introduzca los eventos y su fecha" << endl;
	cin.ignore();
	cout << "Evento" << endl;
	getline(cin, evento);
	cout << "Fecha (d/m/aaaa)" << endl;
	getline(cin, fecha);
	cout << "Evento" << endl;
	getline(cin, evento1);
	cout << "Fecha (d/m/aaaa)" << endl;
	getline(cin, fecha1);
	cout << "Evento" << endl;
	getline(cin, evento2);
	cout << "Fecha (d/m/aaaa)" << endl;
	getline(cin, fecha2);
	cout << "Anotado" << endl;
}

void Calendario::ImprimirFechas()
{
	cout << "Eventos Anotados" << endl;
	cout << "1 " << evento << " con fecha de " << fecha << endl;
	cout << "2 " << evento1 << " con fecha de " << fecha1 << endl;
	cout << "3 " << evento1 << " con fecha de " << fecha1 << endl;
}

int main()
{
	int opc = 0;
	Calendario oCalendario;
	do
	{
		cout << "Calendario" << endl;
		cout << "1. Desplegar Fecha" << endl;
		cout << "2. Hojear Calendario(Adelantar)" << endl;
		cout << "3. Hojear Calendario(Atras)" << endl;
		cout << "4. Anotar Fecha Importante" << endl;
		cout << "5. Ver fechas importates" << endl;
		cout << "6. Salir" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			oCalendario.ImprimirFecha();
			break;
		case 2:
			oCalendario.HojearAdelante();
			oCalendario.ImprimirFecha();
			break;
		case 3:
			oCalendario.HojearAtras();
			oCalendario.ImprimirFecha();
			break;
		case 4:
			oCalendario.AnotarFecha();
			break;
		case 5:
			oCalendario.ImprimirFechas();
			break;
		default:
			cout << "Saliendo..." << endl;
			break;
		}
	} while (opc < 6);

	system("PAUSE");
	return 0;
}