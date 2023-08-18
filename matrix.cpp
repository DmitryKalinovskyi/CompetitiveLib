#include <vector>
#include <stdexcept>

namespace number_theory {
	template<typename T>
	class Matrix2D {
	private:
		std::vector < std::vector<T>> data;

	public:
		Matrix2D(int rows, int columns) {
			data = std::vector<std::vector<T>>(rows, std::vector<T>(columns));
		}
		Matrix2D(int rows, int columns, T defaultValue) {
			data = std::vector<std::vector<T>>(rows, std::vector<T>(columns, defaultValue));
		}
		Matrix2D(std::vector<std::vector<T>> data) {
			this->data = std::move(data);
		}

		Matrix2D<T> Identity() {
			if (!IsSquare())
				throw std::logic_error("Unit matrix for non-square matrix is undefined!");

			int d = data.size();

			std::vector<std::vector<T>> v(d, std::vector< T>(d, 0));

			for (int i = 0; i < d; i++)
				v[i][i] = 1;

			return Matrix2D(v);
		}

		bool IsSquare() {
			return data.size() == data[0].size();
		}

		Matrix2D<T> operator* (Matrix2D<T>& other) {
			return Mult(*this, other);
		}

		std::vector<T> operator[] (size_t i) {
			return data[i];
		}

		static Matrix2D<T> Mult(Matrix2D<T>& a, Matrix2D<T>& b) {
			return Matrix2D(2, 2, a[0][0]);
		}
		static Matrix2D<T> MultMod(Matrix2D<T>& a, Matrix2D<T>& b, int mod) {
			return Matrix2D(2, 2, a[0][0]);
		}
	};

}