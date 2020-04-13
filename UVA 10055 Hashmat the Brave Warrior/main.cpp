#include <iostream>
#include <cstdlib> // For the use of the absolute value function
using namespace std;

int main()
{
    long long int a = 0; // The restriction set by the question
    long long int b = 0;

    while(cin >> a >> b)
    {
        cout << abs(a - b) << endl; // Calculate the absolute value between the two inputs
    }

    return 0;
}