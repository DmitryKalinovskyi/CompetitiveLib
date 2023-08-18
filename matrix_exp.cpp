//namespace number_theory {
//	template<typename T>
//	Matrix2D<T> matrix_binpow(Matrix2D<T> a, int step) {
//		if (step == 0)
//			return a.unit();
//
//		if (step % 2)
//			return a * matrix_binpow(a, step - 1);
//		return matrix_binpow(a * a, step / 2);
//	}
//
//	template<typename T>
//	Matrix2D<T> matrix_binpowmod(Matrix2D<T> a, int step, int mod) {
//		if (step == 0)
//			return a.unit();
//
//		if (step % 2)
//			return Matrix2D.multmod(a, matrix_binpowmod(a, step - 1, mod));
//		return matrix_binpowmod(Matrix2D::MultMod(a, a), step / 2, mod);
//	}
//}