#include <vector>

#ifndef SPARSE_TABLE
#define SPARSE_TABLE

namespace range_queries {
	class SparseTable {
	private:
		std::vector<std::vector<int>> mq;

	public:
		// TODO: add predicate to the class constructor
		SparseTable(std::vector<int> data);

		int answer_query(int a, int b);
	};
}

#endif // SPARSE_TABLE