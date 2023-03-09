#include <iostream>

using namespace std;

int main(){
    int size;
    

    cin >> size;
    
    if (size<=40) {
        int sequence[size];
        for (int i = 0; i < size; i++)
        {
            cin >> sequence[i];
        }

        for (int i = size - 1; i > 0; i--)
        {
          cout << sequence[i] << " ";
        }
    }
    
    return 0;
}