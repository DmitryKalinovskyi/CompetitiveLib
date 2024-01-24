#include <vector>
#include <stdexcept>
#include "matrix.hpp"

namespace linear_algebra {
	template<typename T>
	Matrix2D<T>::Matrix2D(int rows, int columns) {
		data = std::vector<std::vector<T>>(rows, std::vector<T>(columns));
	}

	template<typename T>
	Matrix2D<T>::Matrix2D(int rows, int columns, T defaultValue) {
		data = std::vector<std::vector<T>>(rows, std::vector<T>(columns, defaultValue));
	}

	template<typename T>
	Matrix2D<T>::Matrix2D(std::vector<std::vector<T>> data) {
		this->data = std::move(data);
	}

	template<typename T>
	Matrix2D<T> Matrix2D<T>::identity() {
		if (!IsSquare())
			throw std::logic_error("Unit matrix for non-square matrix is undefined!");

		int d = data.size();

		std::vector<std::vector<T>> v(d, std::vector< T>(d, 0));

		for (int i = 0; i < d; i++)
			v[i][i] = 1;

		return Matrix2D(v);
	}

	template<typename T>
	bool Matrix2D<T>::is_square() {
		return data.size() == data[0].size();
	}

	template<typename T>
	Matrix2D<T> Matrix2D<T>::operator* (Matrix2D<T>& other) {
		return Mult(*this, other);
	}

	template<typename T>
	std::vector<T> Matrix2D<T>::operator[] (size_t i) {
		return data[i];
	}

	template<typename T>
	Matrix2D<T> Matrix2D<T>::Mult(Matrix2D<T>& a, Matrix2D<T>& b) {
		return Matrix2D(2, 2, a[0][0]);
	}

	template<typename T>
	Matrix2D<T> Matrix2D<T>::MultMod(Matrix2D<T>& a, Matrix2D<T>& b, int mod) {
		return Matrix2D(2, 2, a[0][0]);
	}
}