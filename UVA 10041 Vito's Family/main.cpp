#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num; // Set a vector called num

int main()
{
    int n = 0; // Cases
    int r = 0; // Relatives
    int s = 0; // Address

    cin >> n; // Input the amount of the total cases

    while(n--)
    {
        cin >> r; // Input the amount of the relatives

        num.clear(); // Reset the vector, or set the vector to default

        for(int i = 0; i < r; i++) // Get the address to the vector
        {
            cin >> s;

            num.push_back(s); // Add a subject to the end of the vector
        }

        sort(num.begin(), num.end()); // Sort the value in the vector, from start to end

        int mid = num[r / 2]; // Get the median

        int sum = 0;
        for(int j = 0; j < r; j++) // Calculate the distance between Vito's home to relative's homes
        {
            sum = sum + abs(num[j] - mid);
        }

        cout << sum << endl; // Output the result
    }
    return 0;
}