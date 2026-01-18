/*
Pattern Name: Pascal Triangle
Time Complexity: O(n^2)
Space Complexity: O(1)
*/

#include<iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter number: " << endl;
  cin >> n;

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      cout << " ";
    }

    int num = 1;
    for(int k=0;k<=i;k++)
    {
      cout << num << " ";
      num = num*(i-k)/(k+1);
    }
    cout << endl;
  }
}