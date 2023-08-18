#include <vector>
#include <ostream>

#include "vector_ext.hpp"

namespace ext {
	template<typename T>
	std::ostream& operator <<(std::ostream& out, std::vector<T>& v) {
		for (int i = 0; i + 1 < v.size(); i++)
			out << v[i] << " ";
		out << v[v.size() - 1];

		return out;
	}

	template<typename T>
	std::ostream& operator <<(std::ostream& out, std::vector<T>&& v) {
		for (int i = 0; i + 1 < v.size(); i++)
			out << v[i] << " ";
		out << v[v.size() - 1];

		return out;
	}
}
