#pragma once
#include "Pokemon.h"
class Lista
{
public:
	Lista();
	Pokemon* first;
	Pokemon* last;
	int nElementos;
public:
	void Insertar(Pokemon* pokemon);
	//void Eliminar(Pokemon* pokemon);
};

