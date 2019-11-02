#pragma once
#include "Pokemon.h"
#include "Lista.h"
class Orden
{
public:
	Orden();
public:
	Pokemon* BubbleSort(Pokemon vectPokemon[], int n, bool genNumber);
	Pokemon* QuickSort(Pokemon vectPokemon[], int menor, int mayor, bool genNumber);
	Pokemon* StupidSort(Pokemon vectPokemon[], int menor, int mayor);
	int Divide(Pokemon vectPokemons[], int menor, int mayor, bool genNumber);
	void CambiarPos(Pokemon vectPokemons[], int left, int right);
};

