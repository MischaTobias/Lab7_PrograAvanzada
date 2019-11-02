#include "Lista.h"
Lista::Lista() {
	first = nullptr;
	last = nullptr;
	nElementos = 0;
}

Pokemon* Lista::Quitar() {
	Pokemon* pokemon = new Pokemon();
	if (first == nullptr || last == nullptr)
	{
		return pokemon;
	}
	else
	{
		Pokemon* valor = first;
		(first->siguientePokemon)->anteriorPokemon = last;
		first = first->siguientePokemon;
		last->siguientePokemon = first;
		nElementos--;
		return valor;
	}
}

Pokemon Lista::ObtenerdePos(int n) {
	Pokemon* aux = new Pokemon();
	for (int i = 0; i < n; i++)
	{
		aux = aux->siguientePokemon;
	}
	return *aux;
}

void Lista::Insertar(Pokemon* pokemon) {
	if (first == nullptr && last == nullptr)
	{
		first = pokemon;
		last = pokemon;
		first->anteriorPokemon = last;
		last->siguientePokemon = first;
		nElementos++;
	}
	else
	{
		pokemon->siguientePokemon = first;
		pokemon->anteriorPokemon = last;
		first->anteriorPokemon = pokemon;
		first = pokemon;
		last->siguientePokemon = first;
		nElementos++;
	}
}

void Lista::CambiarPos(int num1, int num2) {
	Pokemon* newPokemon2 = new Pokemon();
	Pokemon* newPokemon1 = new Pokemon();
	array<char>^ nombre = gcnew array<char>(30);
	newPokemon2 = first;
	for (int i = 0; i < num2 - 1; i++)
	{
		newPokemon2 = newPokemon2->siguientePokemon;
	}
	if (num1 == 0)
	{
		newPokemon1 = last;
	}
	else
	{
		newPokemon1 = first;
		for (int i = 0; i < num1 - 1; i++)
		{
			newPokemon1 = newPokemon1->siguientePokemon;
		}
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
	if (num == 0){
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
	if (num == 0) {
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
	if (num == 0) {
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