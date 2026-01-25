/*
Pattern Name: Inverted Pyramid
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    for(int i = n-1; i >= 0; i--)
    {
        for(int j = n-1; j > i; j--)
        {
            cout << "  ";
        }

        for(int k = i*2; k >= 0; k--)
        {
            cout << "* ";
        }

        cout << endl;
    }
}
