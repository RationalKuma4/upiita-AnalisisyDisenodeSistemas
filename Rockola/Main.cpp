#include <iostream>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h> 
#include <time.h>  
#include "Lista.h"
using namespace std;

void Cambio(int total);
void Reproducir(int pista);

int main()
{
	int opc = 0, pago = 0, total = 0, pista = 0;
	string ruta1, ruta2, ruta3, ruta4, ruta5;
	int r, i;
	int N = 1, M = 5;

	Cancion oCancion[8];
	oCancion[1].cNombre = "Amistades Peligrosas";
	oCancion[1].cGenero = "SoundTrack";
	oCancion[2].cNombre = "Exodo";
	oCancion[2].cGenero = "Banda Sonora";
	oCancion[3].cNombre = "La flauta Magica";
	oCancion[3].cGenero = "Instrumental";
	oCancion[4].cNombre = "Lago de los Cisnes";
	oCancion[4].cGenero = "Clasica";
	oCancion[5].cNombre = "Violin Saint Seiya";
	oCancion[5].cGenero = "SoundTrack";

	do
	{
		cout << "Menu" << endl;
		cout << "1. Encender Rockola" << endl;
		cout << "2. Elegir cancion" << endl;
		cout << "3. Apagra Rockola" << endl;
		cin >> opc;
		switch (opc)
		{
		case 1:
			Sleep(3000);
			srand(time(NULL));
			for (i = 0; i < 10; i++){
				r = M + rand() / (RAND_MAX / (N - M + 1) + 1);
				//printf("\n%d", r);
			}
			cout << "Reporudciendo Cancion por inactividad" << endl;
			cout << "Nombre: " << oCancion[r].cNombre << endl;
			cout << "Genero: " << oCancion[r].cGenero << endl;

			Reproducir(r);
			break;
		case 2:
			cout << "Pagar Cancion(3 pesos)" << endl;
			cin >> pago;
			if (pago == 1 || pago == 2 || pago == 5 || pago == 10)
			{
				if (pago > 3)
				{
					Cambio(pago);
				}
				else
				{
					if (pago == 1)
					{
						total = 1;
						while (total < 3)
						{
							cin >> pago;
							total = total + pago;
						}
					}
					else if (pago == 2)
					{
						total = 2;
						while (total < 3)
						{
							cin >> pago;
							total = total + pago;
						}
					}
					if (total > 3)
					{
						Cambio(total);
					}
				}
				cout << "Elige una caion de la lista" << endl;
				cout << "1" << endl;
				cout << "Nombre: " << oCancion[1].cNombre << endl;
				cout << "Genero: " << oCancion[1].cGenero << endl;
				cout << "2" << endl;
				cout << "Nombre: " << oCancion[2].cNombre << endl;
				cout << "Genero: " << oCancion[2].cGenero << endl;
				cout << "3" << endl;
				cout << "Nombre: " << oCancion[3].cNombre << endl;
				cout << "Genero: " << oCancion[3].cGenero << endl;
				cout << "4" << endl;
				cout << "Nombre: " << oCancion[4].cNombre << endl;
				cout << "Genero: " << oCancion[4].cGenero << endl;
				cout << "5" << endl;
				cout << "Nombre: " << oCancion[5].cNombre << endl;
				cout << "Genero: " << oCancion[5].cGenero << endl;
				cin >> pista;

				cout << "Elegiste" << endl;
				cout << oCancion[pista].cNombre << endl;
				cout << oCancion[pista].cGenero << endl;
				Reproducir(pista);
			}
			else
			{
				cout << "Importe incorrecto, saliendo" << endl;
			}

			break;
		case 3:
			cout << "Apagando Rockola" << endl;
			break;
		default:
			cout << "Opcion no idsponible" << endl;
			break;
		}
	} while (opc < 3);
	system("PUASE");
	return 0;
}

void Cambio(int pago)
{
	int cambio = 0, c5 = 0, c2 = 0, c1 = 0;
	pago = pago - 3;
	do
	{
		if (pago >= 5)
		{
			pago = pago - 5;
			c5++;
		}
		else if (pago >= 2)
		{
			pago = pago - 2;
			c2++;
		}
		else if (pago >= 1)
		{
			pago = pago - 1;
			c1++;
		}
	} while (pago > 0);
	cout << "Cambio" << endl;
	cout << "Moendas $5: " << c5 << endl;
	cout << "Moendas $2: " << c2 << endl;
	cout << "Moendas $1: " << c1 << endl;
}

void Reproducir(int pista)
{
	if (pista == 1)
	{
	PlaySound("C:\\Users\\Anselmo\\Documents\\Visual Studio 2013\\Projects\\Rockola\\Musica\\amistadespeligrosas.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	else if (pista == 2)
	{
	PlaySound("C:\\Users\\Anselmo\\Documents\\Visual Studio 2013\\Projects\\Rockola\\Musica\\bandasonoraexodo.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	else if (pista == 3)
	{
	PlaySound("C:\\Users\\Anselmo\\Documents\\Visual Studio 2013\\Projects\\Rockola\\Musica\\laflautamagica.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	else if (pista == 4)
	{
	PlaySound("C:\\Users\\Anselmo\\Documents\\Visual Studio 2013\\Projects\\Rockola\\Musica\\LagodelosCisnes.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	else if (pista == 5)
	{
	PlaySound("C:\\Users\\Anselmo\\Documents\\Visual Studio 2013\\Projects\\Rockola\\Musica\\Saintseiya_violin.wav", NULL, SND_FILENAME | SND_ASYNC);
	}
	cout << "Fin de la cancion" << endl;
}
