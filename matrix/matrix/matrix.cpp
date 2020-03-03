#include "matrix.h"

//std::ostream& operator << (std::ostream& os, const Matrix n) {
//
//}

Matrix::Matrix(std::vector<std::vector<int>> &v): _n(v.size()), _m(v[0].size()) {
	for (int i = 0; i < this->_n; i++) {
		for (int j = 0; j < this->_m; j++) {
			if (i % 2 == j % 2) {
				this->_mtrx.push_back(v[i][j]);
			}
		}
	}
}

Matrix::Matrix() : _n(0), _m(0) {}

int Matrix::getindex(int x, int y) const {
	int result = 0;
	if (x % 2 == y % 2) {
		int index = (int)((double)x * (double)this->_n / (double)2 + y / (double)2);
		result = this->_mtrx[index];
	}
	return result;
}
//
//Matrix Matrix::mult(Matrix& m) const {
//	Matrix result;
//	if (this->_m == m._n) {
//	
//	}
//	//else {
//	//	//exception kellene ide
//	//}
//
//	return result;
//}

void Matrix::setindex(int x, int y, int value) {
	if (x % 2 == y % 2) {
		int index = (int)((double)x * (double)this->_n / (double)2 + y / (double)2);
		this->_mtrx[index] = value;
	}
}

Matrix Matrix::sum(Matrix& m) const {
	Matrix result(*this);
	if (this->_n == m._n && this->_m == m._m) {
		for (int i = 0; i < this->_n; i++) {
			for (int j = 0; j < this->_m; j++) {
				result.setindex(i, j, this->getindex(i, j) + m.getindex(i, j));
			}
		}
	}
	return result;
}