#ifndef VECTOR_CLASS_EXTENSION
#define VECTOR_CLASS_EXTENSION

#include <vector>
#include <ostream>

namespace ext {
		
	/// <summary>
	/// Overload the outstream << operator for the l-value vector<T>, T also should be overloaded
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="out"></param>
	/// <param name="v"></param>
	/// <returns></returns>
	template<typename T>
	std::ostream& operator <<(std::ostream& out, std::vector<T>& v) {
		for (int i = 0; i + 1 < v.size(); i++)
			out << v[i] << " ";
		out << v[v.size() - 1];

		return out;
	}

	/// <summary>
	/// Overload the outstream << operator for the r-value vector<T>, T also should be overloaded
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="out"></param>
	/// <param name="v"></param>
	/// <returns></returns>
	template<typename T>
	std::ostream& operator <<(std::ostream& out, std::vector<T>&& v) {
		for (int i = 0; i + 1 < v.size(); i++)
			out << v[i] << " ";
		out << v[v.size() - 1];

		return out;
	}
}
#endif // !VECTOR_CLASS_EXTENSION