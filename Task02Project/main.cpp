#include <iostream>
#include "logic.h"
using namespace std;

int main() {
	int* array;

	int n, m;
	cout << "Input matrix size (NxM): ";
	cin >> n >> m;

	int** matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
		}
	}

	cout << "matrix:\n";
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int imin = 0, jmin = 0;

	get_extreme_pos(matrix, n, m, imin, jmin);

	cout << "min is: " << matrix[imin][jmin] << endl;
	cout << "pos: [" << imin + 1 << "][" << jmin + 1 << "]\n";

	for (int i = 0; i < n; i++)
	{
		delete[] matrix[i];
	}

	delete[] matrix;

	return 0;
}