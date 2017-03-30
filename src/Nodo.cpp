/*
 * Nodo.cpp
 *
 *  Created on: Mar 25, 2017
 *      Author: Capellán
 */

#include "Nodo.h"

namespace arbol
{
	Nodo::Nodo(string nombre) : _nombre(nombre), _primerHijo(NULL), 	_siguiente(NULL),_ultimoHijo(NULL), _numHijos(0)
	{

	}

	void Nodo::agregarHijo(Nodo* nodo)
	{
		_numHijos++;
		if(_primerHijo == NULL)
		{
			_primerHijo = nodo;
			_ultimoHijo = nodo;
		}
		else
		{
			_ultimoHijo -> _siguiente = nodo;
			_ultimoHijo = nodo;
		}
	}

	Nodo* Nodo::getHijos()
	{
		return _primerHijo;
	}

	Nodo::~Nodo() {

	}
}
