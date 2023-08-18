#include <vector>
#include <stdexcept>

namespace number_theory {
	template<typename T>
	class Matrix2D {
	public:
		Matrix2D(int rows, int columns);
		Matrix2D(int rows, int columns, T defaultValue);
		Matrix2D(std::vector<std::vector<T>> data);


		/// <summary>
		/// Return unit matrix by given matrix instance
		/// </summary>
		/// <returns>Unit matrix</returns>
		Matrix2D<T> Identity();

		/// <summary>
		/// Check whether matrix is square
		/// </summary>
		/// <returns>matrix is square or not</returns>
		bool IsSquare();

		Matrix2D<T> operator* (Matrix2D<T>& other);
		std::vector<T> operator[] (size_t i);

		static Matrix2D<T> Mult(Matrix2D<T>& a, Matrix2D<T>& b);
		static Matrix2D<T> MultMod(Matrix2D<T>& a, Matrix2D<T>& b, int mod);
	};

}