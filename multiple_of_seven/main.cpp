#include <iostream>

using namespace std;

int main(){
    int multiple;

    cin >> multiple;

    if(multiple < 1000 && (multiple % 7) == 0) {
       cout << "É MULTIPLE DE 7" << endl;
    }

    return 0;
}