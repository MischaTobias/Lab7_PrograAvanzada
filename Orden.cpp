#include "Orden.h"
Orden::Orden() {

}

Pokemon* Orden::BubbleSort(Pokemon vectPokemon[], int n, bool genNumber) {
	if (genNumber)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (vectPokemon[i].genNumber > vectPokemon[j].genNumber)
				{
					CambiarPos(vectPokemon, i, j);
				}
				else if (vectPokemon[i].genNumber == vectPokemon[j].genNumber)
				{
					if (vectPokemon[i].nationalNumber > vectPokemon[j].nationalNumber)
					{
						CambiarPos(vectPokemon, i, j);
					}
				}
			}
		}
	}
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (vectPokemon[i].nationalNumber > vectPokemon[j].nationalNumber)
				{
					CambiarPos(vectPokemon, i, j);
				}
			}
		}
	}

	return vectPokemon;
}

Pokemon* Orden::QuickSort(Pokemon pokemon[], int menor, int mayor, bool genNumber) {
	int pivot;
	if (menor < mayor)//Ordenar como vector de pokemons.
	{
		pivot = Divide(pokemon, menor, mayor, genNumber);
		QuickSort(pokemon, menor, pivot - 1, genNumber);
		QuickSort(pokemon, pivot + 1, mayor, genNumber);
	}
	return pokemon;
}


int Orden::Divide(Pokemon vectPokemons[], int menor, int mayor, bool genNumber) {
	int left;
	int right;
	int pivot;
	int temp;
	Pokemon leftPok;
	Pokemon rightPok;
	Pokemon pivotPok;
	Pokemon tempPok;
	if (genNumber)
	{
		pivot = vectPokemons[menor].genNumber;
		pivotPok = vectPokemons[menor];
		left = menor;
		right = mayor;

		while (left < right)
		{
			while (vectPokemons[right].genNumber > pivot)
			{
				right--;
			}
			while ((left < right) && (vectPokemons[left].genNumber <= pivot))
			{
				left++;
			}
			if (left < right)
			{
				CambiarPos(vectPokemons, left, right);
			}
		}
		CambiarPos(vectPokemons, right, menor);
	}
	else
	{
		pivot = vectPokemons[menor].nationalNumber;
		pivotPok = vectPokemons[menor];
		left = menor;
		right = mayor;

		while (left < right)
		{
			while (vectPokemons[right].nationalNumber > pivot)
			{
				right--;
			}
			while ((left < right) && (vectPokemons[left].nationalNumber <= pivot))
			{
				left++;
			}
			if (left < right)
			{
				CambiarPos(vectPokemons, left, right);
			}
		}
		CambiarPos(vectPokemons, right, menor);
	}

	return right;
}

void Orden::CambiarPos(Pokemon vectPokemons[], int left, int right) {
	Pokemon tempPok;
	tempPok = vectPokemons[left];
	vectPokemons[left] = vectPokemons[right];
	vectPokemons[right] = tempPok;
}

Pokemon* Orden::StupidSort(Pokemon vectlista[], int menor, int mayor) {
	return vectlista;
}