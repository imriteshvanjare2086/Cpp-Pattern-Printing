/*
Pattern Name: Character Triangle Pattern
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char c = 'A' + n - i - 1;

        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }

    return 0;
}
