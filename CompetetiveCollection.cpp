#include <iostream>
#include "binary_exp.hpp"
#include "primality_test.hpp"
#include "sieve.hpp"
#include "vector_ext.hpp"
#include "prime_factorization.hpp"

using namespace std;
using namespace ext;
using namespace number_theory;

inline string pr(bool b)
{
	return b ? "prime" : "non-prime";
}

int main()
{
	//const int sieve_size = 2000;
	//Sieve s(sieve_size);

	//std::vector<int> ans = s.PrimesInRange(0, 20);

	//cout << "Primality test checking...\n";

	//debugging of primality test function
	
	/*for (int i = 0; i <= sieve_size; i++) {
		if (s[i] != isPrime(i))
			cout << "Mismatch founded: sieve expected that " << i << " is " << pr(s[i]) << "\nbut primality check function expected " << pr(isPrime(i)) << endl;
	}*/

	cout << factorize(18);
}

