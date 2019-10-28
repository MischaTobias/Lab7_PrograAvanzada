#pragma once
#include "Pokemon.h"
#include "Lista.h"
class Orden
{
public:
	Orden();
public:
	Lista BubbleSort(Lista* lista, int n, bool genNumber);
	Lista QuickSort(Lista* lista);
	Lista StupidSort(Lista* lista);
};

