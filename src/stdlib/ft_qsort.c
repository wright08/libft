#include <stdlib.h>
#include "ft_string.h"

static void swap(t_array *arr, int a, int b)
{
	void *tmp;

	tmp = malloc(arr->size);
	ft_memmove(tmp, arr->base + a * arr->size, arr->size);
	ft_memmove(arr->base + a * arr->size, arr->base + b * arr->size, arr->size);
	ft_memmove(arr->base + b * arr->size, tmp, arr->size);
	free(tmp);
}

static void	quicksort(t_array *arr, int lo, int hi,
		int (*compar)(const void *, const void *))
{
	int		p;

	if (lo < hi)
	{
		p = partition(arr, lo, hi);
		quicksort(arr, lo, p - 1);
		quicksort(arr, p + 1, hi);
	}
}

static int	partition(t_array *arr, int lo, int hi,
		int (*compar)(const void *, const void *))
{
	int		pivot;
	int		i;
	int		j;

	pivot = arr->base + hi * arr->size;
	i = lo;
	j = lo;
	while (j < hi - 1)
	{
		if (compar(arr->base + j * arr->size, pivot) < 0)
		{
			swap(a, i, j);
			i++;
		}
	}
	swap(a, i, hi);
	return (i);
}

void		qsort(void *base, size_t nmemb, size_t size,
		int (*compar)(const void *, const void *))
{
	const t_array arr = {.base = base, .nmemb = nmemb, .size = size};
	quicksort(&arr, 0, size - 1);
}
