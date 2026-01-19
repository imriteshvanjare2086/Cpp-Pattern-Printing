/*
Pattern Name: Hollow Square
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter no of rows: " << endl;
    cin >> row;

    if (row <= 0) 
    {
      return 0;
    }

    int column = row;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= column; j++)
        {
            if(i == 1 || j == 1 || i == row || j == column)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
