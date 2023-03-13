#include <iostream>
#include <list>
using namespace std;

//(D)epth (F)irst (S)earch
void dfs(int v, list<int> listAdj[], bool verticesVisiteds[]) {
  verticesVisiteds[v] = true;
  cout << "Visiting: " << v << endl;
  for (int u : listAdj[v]) {
    if (!verticesVisiteds[u]) {
      dfs(u, listAdj, verticesVisiteds);
    }
  }
}

//(B)readth (F)irst (S)earch
void bfs(int v, list<int> listAdj[], bool verticesVisiteds[]) {
  list<int> queue;
  verticesVisiteds[v] = true;
  queue.push_back(v);

  while (!queue.empty()) {
    int actual = queue.front();
    cout << "Visiting: " << actual << endl;

    queue.pop_front();

    for (int u: listAdj[actual]) {
      if(!verticesVisiteds[u]) {
        verticesVisiteds[u] = true;
        queue.push_back(u);
      }
    }

  }
}

int main() {
  cout << "=====> Lista de adjacencia <=====" << endl;
  list<int> listAdj[4];

  listAdj[0].push_back(1);
  listAdj[1].push_back(0);

  listAdj[0].push_back(2);
  listAdj[2].push_back(0);

  listAdj[1].push_back(3);
  listAdj[3].push_back(1);

  listAdj[2].push_back(3);
  listAdj[3].push_back(2);

  // for (int i = 0; i < 4; i++) {
  //   cout << "Vertice " << i << "-> ";
  //   for (int v : listAdj[i]) {
  //     cout << v << " ";
  //   }
  //   cout << endl;
  // }

  bool verticesVisiteds[4] = {false};

  bfs(0, listAdj, verticesVisiteds);

  return 0;
}
