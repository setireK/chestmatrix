#pragma once
#include <vector>
#include <iostream>
class Matrix
{
public:
	Matrix();
	Matrix(std::vector<std::vector<int>> &v);
	Matrix sum(Matrix &m) const;
	Matrix mult(Matrix &m) const;
	int getindex(int x, int y) const;
	int getn() const;
	int getm() const;
	void setindex(int x, int y, int value);
	friend std::ostream& operator << (std::ostream& os, const Matrix n);
private:
	std::vector<int>_mtrx;
	int _n;
	int _m;
};

