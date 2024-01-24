#ifndef SIEVE_DEFINITION
#define SIEVE_DEFINITION

#include <vector>

namespace number_theory {

	/// <summary>
	/// Sieve data structure, can check whether number is prime in some range [a,b]
	/// </summary>
	class Sieve {
	public:

		Sieve();

		Sieve(const int maxElement, bool initializeInStart = true);
		// Copy constructor
		Sieve(const Sieve& other);

		// Copy assigment operator
		Sieve& operator=(const Sieve& other);

		/// <summary>
		/// Check whether is specified number is prime or not
		/// </summary>
		/// <param name="n"></param>
		/// <returns></returns>
		bool is_prime(int n);

		/// <summary>
		/// Check whether is specified number is prime or not (short hand version)
		/// </summary>
		/// <param name="number"></param>
		/// <returns></returns>
		bool operator[](int number);

		/// <summary>
		/// returns list of primes in range [from, to]
		/// </summary>
		/// <param name="from"></param>
		/// <param name="to"></param>
		/// <returns></returns>
		std::vector<int> primes_in_range(int from, int to);
	};
}

#endif

//TODO: Extend function, that increase size of the sieve