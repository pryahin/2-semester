// lab6-timp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>

void main() {
	unsigned V = 0, E = 0, N = 0;
	std::cin >> V >> E >> N;
	std::cin.get();
	std::vector<std::list<std::pair<unsigned, unsigned>>> graph(V);

	for (unsigned i = 0; i < E; ++i) {
		unsigned vertex = 0, vertexTo = 0, weight = 0;
		std::cin >> vertex >> vertexTo >> weight;
		graph[vertex].push_back({ vertexTo , weight });
	}
	std::vector<unsigned> dist(V, -1);
	for (auto pr : graph[N]) {
		dist[pr.first] = pr.second;
	}
	for (unsigned i = 0; i < V; ++i) {
		if (i == N) {
			dist[i] = 0;
			continue;
		}
		for (auto pr : graph[i]) {
			if ((dist[i] == -1 ? -1 : dist[i] + pr.second) < dist[pr.first])
				dist[pr.first] = dist[i] + pr.second;
		}
	}
	for (auto elem : dist)
		std::cout << elem << " ";
	std::cout << std::endl;
	system("pause");
}