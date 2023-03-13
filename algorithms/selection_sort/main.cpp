#include <iostream>

using namespace std;

void selectionSort(int numbers[], int n);

int main() {
    int numbers[] = {14, 3, 6, 9, 8, 2, 5};

    selectionSort(numbers, 7);

    for (int i = 0; i < 7; i++) {
        cout << numbers[i] <<  " ";
    }
    
    return 0;
}

void selectionSort(int numbers[], int n) {
   for (int i = 0; i < n - 1; i++) {
        int smallerIdx = i;
        for (int j = i+1; j < n; j++) {
            if(numbers[j] < numbers[smallerIdx]) {
                smallerIdx = j;        
            }
        }

        if(i != smallerIdx) {
            // int aux = numbers[i];
            // numbers[i] = numbers[smallerIdx];
            // numbers[smallerIdx] = aux;
            swap(numbers[i], numbers[smallerIdx]);
        }
        
   }
   
}