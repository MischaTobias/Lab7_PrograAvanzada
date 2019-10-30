#pragma once
#include "Pokemon.h"
#include "Lista.h"
class Orden
{
public:
	Orden();
public:
	Lista BubbleSort(Lista* lista, int n, bool genNumber);
	Lista QuickSort(Lista lista, array<int>^ vectlista, int menor, int mayor, bool genNumber);
	Lista StupidSort(Lista lista, array<int>^ vectlista, int menor, int mayor, bool genNumber);
};

