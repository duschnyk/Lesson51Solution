#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int* array;

	int n, m;
	cout << "Input matrix size (NxM): ";
	cin >> n >> m;

	array = new int[n * m]{};

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			array[i * m + j] = rand() % 100;
		}
	}

	cout << "Matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << array[i * m + j] << " ";
		}
		cout << endl;
	}

	int i_max = 0;
	int j_max = 0;

	get_extreme_position(array, n, m, &i_max, &j_max);

	cout << "max value : " << array[i_max * m + j_max] << endl;
	cout << "i = " << i_max + 1 << " " << "j = " << j_max + 1 << endl;

	delete[] array;

	return 0;
}