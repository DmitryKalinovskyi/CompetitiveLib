#ifndef SIEVE_DEFINITION
#define SIEVE_DEFINITION

#include <vector>

namespace number_theory {

	/// <summary>
	/// Sieve data structure, can check whether number is prime in some range [a,b]
	/// </summary>
	class Sieve {
	private:
		int size;
		bool isInitialized = false;
		bool* isPrime;

		void __initialize() {
			if (isInitialized)
				return;

			//assign zeros
			for (int i = 0; i < size; i++)
				isPrime[i] = true;

			isPrime[0] = isPrime[1] = false;

			for (int i = 2; i * i <= size; i++)
			{
				if (isPrime[i]) {
					for (int j = i * i; j < size; j += i) {
						isPrime[j] = false;
					}
				}
			}

			isInitialized = true;
		}
	public:

		Sieve() {
			size = 0;
			isPrime = nullptr;
			isInitialized = false;
		}

		Sieve(const int maxElement, bool initializeInStart = true) {
			size = maxElement + 1;
			isPrime = new bool[size];

			if (initializeInStart)
				__initialize();
		}


		// Copy constructor
		Sieve(const Sieve& other): size(other.size), isInitialized(other.isInitialized) {
			// copy primes values
			isPrime = new bool[size];
			if (isInitialized) {
				for (int i = 0; i < size; i++) {
					isPrime[i] = other.isPrime[i];
				}
			}
		}

		// Copy assigment operator
		Sieve& operator=(const Sieve& other) {
			if (this == &other)
				return *this;

			size = other.size;
			isInitialized = other.isInitialized;
			delete[] isPrime;
			isPrime = new bool[size];

			if (isInitialized) {
				for (int i = 0; i < size; i++) {
					isPrime[i] = other.isPrime[i];
				}
			}
			return *this;
		}

		/// <summary>
		/// Check whether is specified number is prime or not
		/// </summary>
		/// <param name="n"></param>
		/// <returns></returns>
		bool IsPrime(int n) {
			return isPrime[n];
		}

		/// <summary>
		/// Check whether is specified number is prime or not (short hand version)
		/// </summary>
		/// <param name="number"></param>
		/// <returns></returns>
		bool operator[](int number) {
			if (number < 0 || number >= size)
				throw std::out_of_range("The number is out of sieve range");

			return isPrime[number];
		}


		/// <summary>
		/// returns list of primes in range [from, to]
		/// </summary>
		/// <param name="from"></param>
		/// <param name="to"></param>
		/// <returns></returns>
		std::vector<int> PrimesInRange(int from, int to) {
			if (!isInitialized)
				__initialize();
			if (from > to)
				throw std::invalid_argument("The [from] argument should be less than [to]");

			if (from < 0 || to >= size)
				throw std::out_of_range("The number is out of sieve range");

			std::vector<int> primes = {};

			for (; from <= to; from++) {
				if (isPrime[from])
					primes.push_back(from);
			}
			return primes;
		}
		
		~Sieve() {
			delete[] isPrime;
		}
	};
}

#endif

//TODO: Extend function, that increase size of the sieve