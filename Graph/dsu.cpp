#include "dsu.h"

bool DSU::is_connected(int x, int y) {
	return find(x) == find(y);
}

int DSU::find(int x) {
	if (parent[x] == x) return x;
	return parent[x] = find(parent[x]);
}

void DSU::merge(int x, int y) {
	int x_p = find(x);
	int y_p = find(y);

	// already merged
	if (x_p == y_p) return;

	if (rank[x_p] > rank[y_p])
		parent[y_p] = x_p;
	else if (rank[x_p] < rank[y_p])
		parent[x_p] = y_p;
	else {
		rank[x_p]++;
		parent[y_p] = x_p;
	}
}