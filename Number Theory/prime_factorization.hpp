#include <vector>

namespace number_theory {

	/// <summary>
	/// Simple factorization function that return all factors. Time complexity O(sqrt(N)).
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="num"></param>
	/// <returns></returns>
	template<typename T> 
	std::vector<T> factorize(T num)
	{
		std::vector<T> factors;

		for (T i = 2; i < num; i++) {
			while (num % i == 0) {
				num /= i;
				factors.push_back(i);
			}
		}

		if (num > 1)
			factors.push_back(num);

		return factors;
	}
}