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
			}
		}

		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (lista->ObtenerNumNac(i) > lista->ObtenerNumNac(j) && lista->ObtenerNumGen(i) == lista->ObtenerNumGen(j))
				{
					lista->CambiarPos(i, j);
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

Lista Orden::QuickSort(Lista* lista) {
	return *new Lista();
}

Lista Orden::StupidSort(Lista* lista) {
	return *new Lista();
}