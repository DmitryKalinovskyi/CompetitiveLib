#pragma once
#include <vector>

/// <summary>
/// Disjoint union set by rank and path compression
/// </summary>
class DSU {
private:
	std::vector<int> rank, parent;
public:
	/// <summary>
	/// Initializes DSU structure
	/// </summary>
	/// <param name="n"></param>
	DSU(int n) {
		rank = std::vector<int>(n, 1);
		for (int i = 0; i < n; i++) parent[i] = i;
	}

	/// <summary>
	/// </summary>
	/// <param name="x">First verticle</param>
	/// <param name="y">Second verticle</param>
	/// <returns>Whether verticle x and y is connected</returns>
	bool is_connected(int x, int y);

	/// <summary>
	/// </summary>
	/// <param name="x">verticle x</param>
	/// <returns>Root node of verticle x</returns>
	int find(int x);

	/// <summary>
	/// Merging verticle x and y
	/// </summary>
	/// <param name="x"></param>
	/// <param name="y"></param>
	void merge(int x, int y);
};