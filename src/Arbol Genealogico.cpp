//============================================================================
// Name        : Arbol.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Arbol.h"
#include <cstdlib>

using namespace arbol;
using namespace std;

void agregarHijos(Nodo* persona, int hijos)
{

	if(hijos > 0)
	{
		for(int j = 1; j <= hijos; j++)
		{
			string nombre;
			cout << "Ingrese el nombre del hijo o la hija #" << j << " de " << persona -> getNombre() << ": ";
			cin >> nombre;
			Nodo* hijo = new Nodo(nombre);
			persona -> agregarHijo(hijo);
		}

		Nodo* i = persona -> getHijos();
		while(i != NULL)
		{
			int descendientes;
			cout << "digite la cantidad de hojos de " << i -> getNombre() << ": ";
			cin >> descendientes;
			agregarHijos(i,descendientes);
			i = i -> getSiguiente();
		}
	}

}


int main()
{
	Nodo* persona;
	string nombre;
	int hijos;
	char resp;

	cout << "<< Bienvenido al sistema de arbol genealogico >>" << endl << endl;

	do
	{
		cout << "Ingrese el nombre de la persona: ";
		cin >> nombre;
		cout << "digite la cantidad de hojos de " << nombre << ": ";
		cin >> hijos;

		persona = new Nodo(nombre);
		agregarHijos(persona,hijos);

		Arbol* familia = new Arbol(persona);

		cout << "<----Arbol genealogico generado---->" << endl << endl;
		familia -> recorrer(persona);

		system("pause>n");
		cout << "Desea crear otro albor genealogico (S/N)?" << endl;
		cin >> resp;
	}while(resp == 's' || resp =='S');

	cout << "Cerrando sistema";

}
