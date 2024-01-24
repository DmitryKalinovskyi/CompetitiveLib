#include <iostream>
#include "Extensions/vector_ext.hpp"
#include "Number Theory/binary_exp.hpp"
#include "Number Theory/primality_test.hpp"

using namespace std;
using namespace extensions;

inline string pr(bool b)
{
	return b ? "prime" : "non-prime";
}

int main()
{
	cout << number_theory::isPrime(10) << endl;
	//vector<int> nums{ 1,3,-1,-3,5,3,6,7 };
	/*vector<int> nums{ 1,3 };
	int k = 2;
	range_queries::SparseTable table(nums);

	vector<int> ans(nums.size() - k + 1);

	for (int i = 0; i < ans.size(); i++) {
		ans[i] = table.AnswerQuery(i, i + k - 1);
	}*/

	//const int sieve_size = 2000;
	//Sieve s(sieve_size);

	//std::vector<int> ans = s.PrimesInRange(0, 20);

	//cout << "Primality test checking...\n";

	//debugging of primality test function
	
	/*for (int i = 0; i <= sieve_size; i++) {
		if (s[i] != isPrime(i))
			cout << "Mismatch founded: sieve expected that " << i << " is " << pr(s[i]) << "\nbut primality check function expected " << pr(isPrime(i)) << endl;
	}*/
}

