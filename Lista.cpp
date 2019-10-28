#include "Lista.h"
Lista::Lista() {
	first = nullptr;
	last = nullptr;
	nElementos = 0;
}

//void Lista::Eliminar(Pokemon* pokemon) {
//	Pokemon* pokemon = new Pokemon();
//}

void Lista::Insertar(Pokemon* pokemon) {
	if (first == nullptr && last == nullptr)
	{
		first = pokemon;
		last = pokemon;
		first->siguientePokemon = pokemon;
		last->anteriorPokemon = pokemon;
		nElementos++;
	}
	else
	{
		pokemon->siguientePokemon = first;
		pokemon->anteriorPokemon = last;
		first = pokemon;
		last->siguientePokemon = first;
		(first->siguientePokemon)->anteriorPokemon = first;
		nElementos++;
	}
}

void Lista::CambiarPos(int num1, int num2) {
	Pokemon* newPokemon2 = new Pokemon();
	Pokemon* newPokemon1 = new Pokemon();
	char nombre[30];
	newPokemon2 = first;
	for (int i = 0; i < num2 - 2; i++)
	{
		newPokemon2 = newPokemon2->siguientePokemon;
	}
	newPokemon1 = first;
	for (int i = 0; i < num1 - 2; i++)
	{
		newPokemon1 = newPokemon1->siguientePokemon;
	}
	int numGen = (newPokemon2->siguientePokemon)->genNumber;
	int numNac = (newPokemon2->siguientePokemon)->nationalNumber;
	int tamNom = (newPokemon2->siguientePokemon)->tamNombre;
//	nombre = new char[tamNom];

	(newPokemon2->siguientePokemon)->genNumber = (newPokemon1->siguientePokemon)->genNumber;
	(newPokemon2->siguientePokemon)->nationalNumber = (newPokemon1->siguientePokemon)->nationalNumber;
//	(newPokemon2->siguientePokemon)->tamNombre = (newPokemon1->siguientePokemon)->tamNombre;

	(newPokemon1->siguientePokemon)->genNumber = numGen;
	(newPokemon1->siguientePokemon)->nationalNumber = numNac;
//	(newPokemon1->siguientePokemon)->tamNombre = tamNom;
}

int Lista::ObtenerNumGen(int num) {
	if (num == 1){
		return first->genNumber;
	}
	else {
		Pokemon* newPokemon = new Pokemon();
		newPokemon = first;
		for (int i = 0; i < num; i++)
		{
			newPokemon = newPokemon->siguientePokemon;
		}
		return newPokemon->genNumber;
	}
}

int Lista::ObtenerNumNac(int num) {
	if (num == 1) {
		return first->nationalNumber;
	}
	else {
		Pokemon* newPokemon = new Pokemon();
		newPokemon = first;
		for (int i = 0; i < num; i++)
		{
			newPokemon = newPokemon->siguientePokemon;
		}
		return newPokemon->nationalNumber;
	}
}

int Lista::ObtenerTamNom(int num) {
	if (num == 1) {
		return first->tamNombre;
	}
	else {
		Pokemon* newPokemon = new Pokemon();
		newPokemon = first;
		for (int i = 0; i < num; i++)
		{
			newPokemon = newPokemon->siguientePokemon;
		}
		return newPokemon->tamNombre;
	}
}