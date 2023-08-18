#ifndef VECTOR_EXTENSIONS
#define VECTOR_EXTENSIONS

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
	std::ostream& operator <<(std::ostream& out, std::vector<T>& v);

	/// <summary>
	/// Overload the outstream << operator for the r-value vector<T>, T also should be overloaded
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="out"></param>
	/// <param name="v"></param>
	/// <returns></returns>
	template<typename T>
	std::ostream& operator <<(std::ostream& out, std::vector<T>&& v);
}

#endif // !VECTOR_EXTENSIONS