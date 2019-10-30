#include "Orden.h"
Orden::Orden() {

}

Lista Orden::BubbleSort(Lista* lista, int n, bool genNumber) {
	if (genNumber)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (lista->ObtenerNumGen(i) > lista->ObtenerNumGen(j))
				{
					lista->CambiarPos(i, j);
				}
				else if (lista->ObtenerNumGen(i) == lista->ObtenerNumGen(j))
				{
					if (lista->ObtenerNumNac(i) > lista->ObtenerNumNac(j))
					{
						lista->CambiarPos(i, j);
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
				if (lista->ObtenerNumNac(i) > lista->ObtenerNumNac(j))
				{
					lista->CambiarPos(i, j);
				}
			}
		}
	}

	return *lista;
}

Lista Orden::QuickSort(Lista lista, array<int>^ vectlista, int menor, int mayor, bool genNumber) {

	return lista;
}

Lista Orden::StupidSort(Lista lista, array<int>^ vectlista, int menor, int mayor, bool genNumber) {
	return lista;
}