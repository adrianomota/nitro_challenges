#include <iostream>

using namespace std;

struct Person
{
    string name;
    short age;
};

int main() {
    short queueLength = 10;
    Person queue[queueLength];
    short currentPosition = -1;

    char userCommand;

    while(cin >> userCommand && userCommand != 'q') {
        if(userCommand == '+') {
            Person person;
            cin >> person.name >> person.age;
            cout << person.name << " joined the queue!" << endl;
            
            if(currentPosition + 1 >= queueLength) {
                cout << "The queue is full!";     
            } else {
               queue[++currentPosition] = person;
            }
        } else if(userCommand == '-') {
            string dropout;
            short dropoutPosition;

            cin >> dropout;
            for (short i = 0; i < currentPosition; i++) {
                if(queue[i].name == dropout) {
                  dropoutPosition = i;
                  break;
                }
            }

            if(currentPosition == -1) {
                cout << "The person doesn't on the queue or the queue is empty!" << endl;
                continue;
            }

            for (short i = 0; i < currentPosition; i++) {
                queue[i] = queue[++i];
            }

            --currentPosition;
            cout << dropout << " exit the queue!" << endl;
        } else if(userCommand == 'a') {
            if(currentPosition == -1) {
               cout << "The queue is empty!" << endl;
               continue;
            }

            cout << "Attending ==> "<< queue[0].name << endl;

            for (short i = 0; i < currentPosition; i++) {
                queue[i] = queue[++i];
            }
            --currentPosition;
        } else {
            cout << "Invalid command";
        }
    }

    return 0;
}