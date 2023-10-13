#include<iostream>
using namespace std ;
int main ()
{
    int m ;
    cout<< "enter the number of row ";
    cin >> m ;
    int n ;
    cout << "enter the number of coloumn ";
    cin >> n ;
    int arr[m][n] ;
    for (int i=0;i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cin >> arr[i][j];

        }
    }
    cout<< endl ;
    for (int i=0 ; i<m ;i++)
    {
        for (int j=0;j<n;j++)
        {
            cout<< arr[i][j] << " ";
        }
        cout<< endl ;
    }
    int max = 0 ;
    int ro= 0 ;
    int sum = 0 ;
    for (int i=0 ; i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            sum += arr[i][j];
        }
        if (max < sum ) {
            max = sum ;
            ro = i;
        }
    }
    cout << "row of maximum sum is " << ro +1 << " that is " << max ;
}