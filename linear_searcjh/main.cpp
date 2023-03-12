#include <iostream>

using namespace std;

int indexOf(int arr[],  int size, int value);

int main() {
    int vector[] = {2,3,4,5,43,9};
    int len = sizeof(vector) / sizeof(vector[0]);
    int idx = indexOf(vector, len, 43);
    cout << idx << endl;
    return 0;
}
//ANALISE ASSINTOTICA
/* COMPLEXIDADE DE TEMPO COM BASE NA ENTRADA DOS DADOS PARA A FUNCAO
O MELHOR CASO:
O(1) = CONSTANTE

O CASO MEDIO:
N = TAMANHO DO ARRAY
O(N/2) -> O(2) = LINEAR

O PIOR CASO:
N = TAMANHO DO ARRAY
O(N) = LINEAR
*/

//COMPLEXIDADE DE ESPACO: O QUANTO DE MEMORIA O NOSSO ALGORITMO PRECISA ALOCAR
/*
O PIOR CASO:
TEMPO = O(N) = LINEAR
ESPACO = O(1) = CONSTANTE
*/
int indexOf(int arr[],  int size, int value) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == value) {
            return i;
        }
    }
    return -1;
}



