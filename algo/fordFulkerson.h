#ifndef _FORDFULKERSON_
#define _FORDFULKERSON_

#include "../graph.h"
#include <vector>
using namespace std;

class FordFulkerson : public Algo {
private:
	vector<vector<Edge>> graph;
	vector<int> pred;
	int V;
	int edgeCount;
    int dfs(int x, int sink, int f);
    bool initialized;
public:
    FordFulkerson();
    void init(vector<Edge *> &gene, int _V);
	long long match(int src, int sink);
};

#endif /* _FORDFULKERSON_ */
