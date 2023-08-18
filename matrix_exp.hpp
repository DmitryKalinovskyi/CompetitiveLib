#include "matrix.hpp"

namespace number_theory {
	template<typename T>
	Matrix2D<T> matrix_binpow(Matrix2D<T> a, int step);

	template<typename T>
	Matrix2D<T> matrix_binpowmod(Matrix2D<T> a, int step, int mod);
}