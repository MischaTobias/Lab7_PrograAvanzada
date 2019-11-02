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
	Pokemon ObtenerdePos(int pos);
	Pokemon* Quitar();
	void CambiarPos(int num1, int num2);
	int ObtenerNumGen(int num);
	int ObtenerNumNac(int num);
	int ObtenerTamNom(int num);
	//void Eliminar(Pokemon* pokemon);
};

