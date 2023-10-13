#include<iostream>
using namespace std ;
int main ()
{
    int m;
    cout<< "enter the  number of row  ";
    cin >> m ;
    int n ;
    cout << "enter the number of coloumn ";
    cin >> n ;
    int arr[m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n ; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout << arr[i][j] <<" ";
        }
        cout<< endl ;
    }
    cout << "enter the size of 2nd matrix "<< endl ;
    int brr [m][n];
    for (int i=0;i<m;i++)
    {
        for (int j=0; j<n ; j++)
        {
            cin >> brr[i][j];
        }
    }
     for (int i=0;i<m;i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout << brr[i][j]<<" ";
        }
        cout<< endl ;
    }
    cout<< endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n ; j++)
        {
            arr[i][j] = arr[i][j] + brr[i][j];
        }
    }
     for (int i=0;i<m;i++)
    {
        for (int j=0 ; j<n ; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<< endl ;
    }
    
}