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