#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include "MenuAdministrador.cpp"
#include "MenuCliente.cpp"


#define NUM_OF_CHARACTERS 256

using namespace std;

/*
void MenuAdministradorPan();
void MenuClientePan();

int main()
{
int opc = 0;
cout << "Menu Principal" << endl;
cout << "1. Administrador" << endl;
cout << "2. Cliente" << endl;
cout << "3. Salir" << endl;
cin >> opc;
switch (opc)
{
case 1:
MenuAdministradorPan();
break;
case 2:
MenuClientePan();
break;
case 3:
cout << "Saliendo..." << endl;
break;
default:
cout << "Opcion no disponible, Saliendo..." << endl;
break;
}
getchar();
return 0;
}

void MenuAdministradorPan()
{
MenuAdministrador oMenu;
oMenu.MenuAdministradorP();
}

void MenuClientePan()
{
Clientes oCliente;
string usuario, password;
cout << "Cliente: ";
cin >> usuario;
cout << "Password: ";
cin >> password;
if (oCliente.LogIn(usuario, password) == 1)
{
MenuCliente oMenu;
oMenu.MenuClienteP(usuario);
}
else if (oCliente.LogIn(usuario, password) == 0)
{
cout << "Usuario o Contraseña incorrecto" << endl;
main();
}
}
*/

/*Open a file in a reading mode*/
/*
ifstream infile;
infile.open("Clientes");
infile >> texto;
cout << texto << endl;
infile.close();*/
/*
int ocurrences_count = 0;
char word[20];  //this array will save user input
int array_size = 1024; // define the size of character array
char * array = new char[array_size]; // allocating an array of 1kb
int position = 0; //this will be used incremently to fill characters in the array

//prompting user to enter a word to be search in the file
cout << "Please enter the word to  search in file : ";
cin.getline(word, 19); //reading user input of max 19 characters because our word array size in 20
int word_size = 0;
//this loop is calculating the length of input word
for (int i = 0; word[i] != '\0'; i++)
{
word_size++;
}

ifstream fin("Clientes.txt"); //opening an input stream for file test.txt
/*checking whether file could be opened or not. If file does not exist or don't have read permissions, file
stream could not be opened.*/
/*if (fin.is_open())
{
//file opened successfully so we are here
cout << "File Opened successfully!!!. Reading data from file into array" << endl;
//this loop run until end of file (eof) does not occur
while (!fin.eof() && position < array_size)
{
fin.get(array[position]); //reading one character from file to array
position++;
}
array[position - 1] = '\0'; //placing character array terminating character

//this loop is searching for the word in the array
for (int i = 0; array[i] != '\0'; i++)
{
for (int j = 0; word[j] != '\0' && j < 20; j++)
{
if (array[i] != word[j])
{
break;
}
else
{
i++;
if (word[j + 1] == '\0')
{
cout << "Word Found in File at position " << (i - word_size) << endl;
ocurrences_count++;
}
}
}
}

cout << "Total occurences found : " << ocurrences_count << endl;
}
else //file could not be opened
{
cout << "File could not be opened." << endl;
}*/
/*Pasos numero de cuentaid*/
/*srand(time(NULL));
int cuentaid[19];
for (int i = 0; i <= 29; i++)
{
int x = rand() % 100000000000000 + 1;
cout << x << endl;
}*/

/*Busqueda sobre texto*/


int main()
{
	char inputArray[NUM_OF_CHARACTERS];
	FILE *fp = fopen("Clientes.txt", "r");

	int lineCount = 1;

	// check if the file loaded successfully 
	if (fp == NULL)
	{
		printf("Error Reading File\n");
		exit(1);
	}

	//find out how many lines are in the file.
	while (fgets(inputArray, sizeof(inputArray), fp) != NULL)
	{
		lineCount++;
	}



	// seek to the beginning of the file
	fseek(fp, 0, SEEK_SET);

	// create arrays to store information
	char Cliente[50][NUM_OF_CHARACTERS];
	char Nombre[50][NUM_OF_CHARACTERS];
	char Usuario[50][NUM_OF_CHARACTERS];
	char Password[50][NUM_OF_CHARACTERS];

	// copy lines from inputArray to individual arrays
	int currentLine = 0;
	while (fgets(inputArray, sizeof(inputArray), fp) != NULL && currentLine < lineCount)
	{
		sscanf(inputArray, "%[^|]|%[^|]|%[^|]|%s",
			Cliente[currentLine],
			Nombre[currentLine],
			Usuario[currentLine],
			Password[currentLine]);

		cout << Cliente[currentLine] << endl;

		currentLine++;
	}
	fclose(fp);
	getchar();
	return 0;
}