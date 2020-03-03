#include <iostream>
#include <vector>
#include "matrix.h"

using namespace std;

int main()
{
	vector<vector<int>> v{ {1, 0, 2, 0}, {0, 3, 0, 4}, {5, 0, 6, 0}, {0, 7, 0, 8} };
	Matrix matrix(v);
	Matrix matrixka(v);
	int i = 2;
	int j = 2;
	cout << "A matrix " << i + 1 << ". soranak " << j + 1 << ". eleme: " << matrix.getindex(i, j) << endl;
	Matrix matrixocska = matrix.sum(matrixka);
	cout << "A matrix " << i + 1 << ". soranak " << j + 1 << ". eleme: " << matrixocska.getindex(i, j) << endl;
	return 0;
}

