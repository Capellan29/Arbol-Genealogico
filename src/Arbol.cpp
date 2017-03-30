/*
 * Arbol.cpp
 *
 *  Created on: Mar 25, 2017
 *      Author: Capellán
 */

#include "Arbol.h"

namespace arbol
{

	Arbol::Arbol(Nodo* nodo) : _raiz(nodo)
	{

	}

	void Arbol::recorrer(Nodo* nodo)
	{
		bool masHijos = false;
		if(nodo -> getNumHijos() > 0)
		{
			cout << "Los hijos de " << nodo -> getNombre() << " son: ";
			Nodo* hijo = nodo -> getHijos();
			while(hijo != NULL)
			{
				if(hijo -> getSiguiente() == NULL && masHijos == true)
				{
					cout << "y " << hijo -> getNombre() << ".";
				}
				else
				{
					cout << hijo -> getNombre() << " ";
				}
				hijo = hijo -> getSiguiente();
				masHijos = true;
			}
			cout << endl;
			Nodo* i = nodo	-> getHijos();
			while(i != NULL)
			{
				recorrer(i);
				i = i -> getSiguiente();
			}
		}
		else
		{
			cout << nodo -> getNombre() << " no tiene hijos." << endl;
		}
	}

	Arbol::~Arbol()
	{

	}

}
