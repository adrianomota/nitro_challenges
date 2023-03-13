#include <iostream>
using namespace std;
/*
 Grafos -> Estrutura nao linear, composto de vertices e arestas
 Grafos -> Notacao formal: G(V, E)

Types:
 Grafo nulo = grafo sem arestas
 Grafo trivial = tem apenas elemento
 Grafo direcionado = eh possivel ir em uma unica direcao
 Grafo nao direcionado = de qualquer node he possivel ir de um lado ao outro
 Grafo N-Regular -> Grau do vertice: deg(V)
 Grafo completo -> quando todos nodes estao conectados.
 Grafos circulares -> quando o inicio aponta para o fim do grafo.
 Grafos ciclicos -> quando existe um circulo em apenas uma parte do grafo.
 Grafo direcionado aciclico -> quando a direcao nao permite voltar a um ponto.
 Grafo bipartido -> Grafo divididos em 2 conjuntos conectados um ao outromas nao
                    entre si.
 Grafo pondehrado


 0 1
 0 2
 1 2
 2 3
*/

int main() {
  cout << "=====> Lista de adjacencia <=====" << endl;
  int matriz[4][4] = {};

  for (int i = 0; i < 4; i++) {
    int origem, destino;
    cin >> origem >> destino;
    matriz[origem][destino] = 1;
    matriz[destino][origem] = 1;
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
