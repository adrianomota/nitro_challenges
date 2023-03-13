#include <iostream>
using namespace std;

int indexOf(int arr[], int left, int right, int value);
int binarySearch(int arr[], int left, int right, int value);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << indexOf(arr, 0, len-1, 7) << endl;
    cout << binarySearch(arr, 0, len-1, 7) << endl;
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
int indexOf(int arr[],int left, int right,int value) {
   while (left <= right) {
    int middle = int(left + (right-left) / 2);
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

int binarySearch(int arr[], int left, int right, int value) {
    if(right >= left) {
        int middle = int(left + (right - left) / 2);
        if(arr[middle] == value) {
          return value;
        }
        if(arr[middle] > value) {
           return binarySearch(arr, left, --middle, value);
        }
        return binarySearch(arr, ++middle, right, value);
    }
    return -1;
}
