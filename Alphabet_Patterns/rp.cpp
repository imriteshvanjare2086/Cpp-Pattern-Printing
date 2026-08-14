/*
Pattern Name: R alphabet pattern
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

// * * * *
// *     *
// *     *
// * * * *
// * * 
// *   *
// *     *

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i == 0 || i == n-1)
            {
                cout << "* " << "";
            }
            else 
            {
                if(j == 0 || j == n-1)
                {
                    cout << "* " << "";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    for(int i=0;i<n-1;i++)
    {
        cout << "* " << "";
        for(int j=0;j<i;j++)
        {
            cout << "  ";
        }
        cout << "* " << "";
        cout << endl;
    }
}