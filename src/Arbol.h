/*
 * Arbol.h
 *
 *  Created on: Mar 25, 2017
 *      Author: Capellán
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"
#include <iostream>

namespace arbol
{

	class Arbol
	{
		private:
			Nodo* _raiz;
		public:
			Arbol(Nodo* nodo);
			void recorrer(Nodo* nodo);
			virtual ~Arbol();
			void setRaiz(Nodo* raiz)
			{
				_raiz = raiz;
			}
	};

}

#endif
