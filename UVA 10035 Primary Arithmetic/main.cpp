#include <iostream>
using namespace std;

int divide(int n, int arr[], int &cnt) // Split the number and put it into the array
{
    for(cnt = 0; n != 0; cnt++) // cnt used for digit calculation
    {
        arr[cnt] = n % 10;
        n = n / 10;
    }
}

int main()
{
    int a = 0;
    int b = 0;

    while(cin >> a >> b && (a != 0 || b != 0)) // If a and b are both 0, stop the loop
    {
        int lenA = 0;
        int lenB = 0;
        int arrA[11] = {0}; // Storing array 1
        int arrB[11] = {0}; // Storing array 2
        int sum[12] = {0}; // Addition for array 1 and array 2

        divide(a, arrA, lenA);
        divide(b, arrB, lenB);

        int lenM = max(lenA, lenB); // Check which array is longer, reduce the calculation step
        int ans = 0;

        for(int i = 0; i < lenM; ++i) // Get the addition and record the amount of total carry times
        {
            sum[i] = sum[i] + (arrA[i] + arrB[i]);

            if(sum[i] >= 10) // Check if need to execute the carry operation
            {
                sum[i] = sum[i] - 10;
                sum[i + 1]++;
                ++ans;
            }
        }

        if(ans == 0) // Output the answer
        {
            cout << "No carry operation.\n";
        } else if (ans == 1)
        {
            cout << "1 carry operation.\n";
        } else
        {
            cout << ans << "carry operations.\n";
        }
    }
    return 0;
}