#include<iostream>
using namespace std ;
int main ()
{
    int m ;
    cout<< "enter the number of row ;";
    cin >>m ;
    int n ;
    cout << "enter the number of coloumn ";
    cin >> n ;
    int arr[m][n];
    for (int i=0;i<m ;i++)
    {
        for (int j=0 ;j<n ;j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = -12345;
    for  (int i =0 ; i<m ;i++)
    {
        for (int j=0 ; j< n ; j++)
        {
            if (max < arr[i][j]) max = arr[i][j];
        }
    }
    cout << max ;
}