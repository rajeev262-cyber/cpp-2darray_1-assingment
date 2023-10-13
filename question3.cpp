#include<iostream>
using namespace std ;
int main ()
{
    int m ;
    cout<< "enter  the number of row ";
    cin >> m ;
    int n ;
    cout << "enter the size of coloumn ";
    cin >> n ;
    int arr[m][n];
    for (int i=0 ; i< m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> arr[i][j]; 
        }
    }
    int l1,l2,r1,r2;
    cout<< "entr the coordinates of l1";
    cin >> l1;
    cout<< "enter the coordinate of r1";
    cin >> r1;
    cout<< "enter the coordinates of l2";
    cin >> l2;
    cout<< "enter the coordinates of r2";
    cin >> r2 ;
    int sum = 0 ;
    for (int i=min(l1,l2);i<=max(l1,l2);i++)
    {
        for (int j= min(r1,r2);j<=max(r1,r2);j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "required sum is "<< sum ;

}