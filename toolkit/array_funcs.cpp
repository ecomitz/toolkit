#include "array_funcs.h"

template<class T>
T array_funcs<T>::findFirstCommon(T arr1[], T arr2[], unsigned int len1, unsigned int len2)
{
	T placeholder = 0;

	for (unsigned int i = 0; i < len1; i++)
	{
		for (unsigned int j = 0; j < len2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				return arr1[i];
			}
		}
	}
	return placeholder;

}