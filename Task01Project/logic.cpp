#include "logic.h"

void get_extreme_position(int* array, int n, int m, int* i_max, int* j_max) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (array[i * m + j] > array[*i_max * m + *j_max])
			{
				*i_max = i;
				*j_max = j;
			}
		}
	}
}

//void get_extreme_position(int* array, int n, int m, int& i_max, int& j_max) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (array[i * m + j] > array[i_max * m + j_max])
//			{
//				i_max = i;
//				j_max = j;
//			}
//		}
//	}
//}