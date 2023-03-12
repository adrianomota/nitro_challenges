#include <iostream>

using namespace std;

void bubbleSort(int numbers[], int n);

int main() {
    int numbers[] = {8, 3, 6, 9, 14, 2, 5};

    bubbleSort(numbers, 7);

    for (int i = 0; i < 7; i++) {
        cout << numbers[i] <<  " ";
    }
    
    return 0;
}

void bubbleSort(int numbers[], int n) {
    bool changed = false;
  
    do
    {
        changed = false;

        for (int i = 0; i < n - 1; i++) {
            int firstNumber = numbers[i];
            int secondNumber = numbers[i+1];

            if(secondNumber < firstNumber) {
                numbers[i] =  secondNumber;
                numbers[i+1] = firstNumber;
                changed = true;  
            }
        }
    } while (changed);
}