#include <vector>
#include <stdexcept>
#include <cmath>
#include <iostream>

#include "sparse_table.hpp"

namespace range_queries{
	// TODO: add predicate to the class constructor

	SparseTable::SparseTable(std::vector<int> data) {
		int s = log2(data.size());
		mq.resize(s + 1);

		mq[0] = std::vector<int>(data.begin(), data.end());

		for (int p = 1; p <= s; p++) {
			int last = data.size() - (1 << p);
			mq[p].resize(last + 1);

			for (int a = 0; a <= last; a++) {
				mq[p][a] = std::max(mq[p - 1][a], mq[p - 1][a + (1 << (p - 1))]);
			}
		}
	}

	int SparseTable::AnswerQuery(int a, int b) {
		int len = b - a + 1;

		//index of the hightest bit in a number 
		int hightest = 0;

		while (len >>= 1) {
			hightest++;
		}

		int second = b - (1 << hightest) + 1;

		return std::max(mq[hightest][a], mq[hightest][second]);
	}
}