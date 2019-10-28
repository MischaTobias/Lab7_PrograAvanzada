#pragma once
#include <string>
class Pokemon
{
public:
	int nationalNumber;
	int genNumber;
	char nombre[30] = { "" };
	Pokemon* siguientePokemon;
	Pokemon* anteriorPokemon;
public:
	Pokemon();
};

