#include <iostream>
using namespace std;

int indexOf(int arr[],  int size, int value);

int main() {
   int arr[] = {1,2,3,4,5,6,7};
   int len = sizeof(arr) / sizeof(arr[0]);
   int idx = indexOf(arr, len, 7);
   cout << idx << endl;
   return 0;
}

//ANALISE ASSINTOTICA
/* COMPLEXIDADE DE TEMPO COM BASE NA ENTRADA DOS DADOS PARA A FUNCAO
N = TAMANHO DO ARRAY

O MELHOR CASO:
Tempo = O(1)
Espaco = O(1)

O CASO MEDIO:
Tempo = O(log N / 2) => O(log N) - LOGARITMICO
Espaco = O(1)

O PIOR CASO:
Tempo = O(log N) - LOGARITMICO
Espaco = O(1) - CONSTANTE
*/

//COMPLEXIDADE DE ESPACO: O QUANTO DE MEMORIA O NOSSO ALGORITMO PRECISA ALOCAR
/*
O PIOR CASO:

*/
int indexOf(int arr[],  int size, int value) {
   int left = 0;
   int right = size - 1;
   while (left <= right) {
    int middle = int((left + right) / 2);
    if(arr[middle] == value) {
        return middle;
    } else if(arr[middle] < value) {
        left = ++middle;
    } else {
        right = --middle;
    }
   }
   return -1;
}



