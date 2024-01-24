#include <type_traits>
#include "primality_test.hpp"

namespace number_theory {
	template<typename T>
	bool isPrime(T n) {
		static_assert(std::is_integral<T>::value && std::is_signed<T>::value, "isPrime only supports signed integral types.");
		if (n % 2 == 0 || n < 2)
			return false;

		for (T i = 3; i * i <= n; i += 2) {
			if (n % i == 0)
				return false;
		}
		return true;
	}

	bool isPrime(long long n) {

	}
}