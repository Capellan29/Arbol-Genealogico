/*
 * Nodo.h
 *
 *  Created on: Mar 25, 2017
 *      Author: Capellán
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
using namespace std;

namespace arbol
{

	class Nodo
	{
		private:
			Nodo* _primerHijo;
			Nodo* _siguiente;
			Nodo* _ultimoHijo;
			int _numHijos;
			string _nombre;

		public:
			Nodo(string nombre);
			void agregarHijo(Nodo* nodo);
			Nodo* getHijos();
			virtual ~Nodo();

			string getNombre()
			{
				return _nombre;
			}

			int getNumHijos()
			{
				return _numHijos;
			}

			Nodo* getSiguiente()
			{
				return _siguiente;
			}

			Nodo* getPrimerHijo()
			{
				return _primerHijo;
			}
		};

	}

#endif
