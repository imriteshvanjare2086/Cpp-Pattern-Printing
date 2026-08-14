/*
Pattern Name: Butterfly number pattern
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    for(int i=0;i<n;i++)
    {
        int num = 1;
        for(int j=0;j<=i;j++)
        {
            cout << num << " ";
            num++;
        }
        for(int k=0;k<(2*n)-(2*(i+1));k++)   
        {
            cout << "  ";
        }
        num = i+1;
        for(int j=0;j<=i;j++)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }

    for(int i=n-1;i>0;i--)
    {
        int num = 1;
        for(int j=i;j>0;j--)
        {
            cout << num << " ";
            num++;
        }
        for(int k=(2*n)-(2*i);k>0;k--)     
        {
            cout << "  ";
        }
        num = i+1-1;
        for(int j=i;j>0;j--)
        {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
}