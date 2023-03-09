#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int howManyTimesToTheSum;
    int number;
    int sum = 0;
    vector<int> numbers;

    cin >> howManyTimesToTheSum;

    if(howManyTimesToTheSum <= 50) {
        for (int i = 0; i < howManyTimesToTheSum; i++)
        {
           cin >> number;
           numbers.push_back(number);
        }

        for (int value : numbers)
             sum+=value;
        
        cout << sum << endl;
   }
    return 0;
}
