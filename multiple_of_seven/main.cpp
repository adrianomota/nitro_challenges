#include <iostream>

using namespace std;

int main(){
    short multiple;

    cin >> multiple;

    if(multiple < 1000 && (multiple % 7) == 0) {
       cout << "É MULTIPLO DE 7" << endl;
    } else {
        cout << "ÉSSE NÃO É" << endl;
    }

    return 0;
}

