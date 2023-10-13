#include<iostream>
using namespace std ;
int main (){
    int m ;
    cout << "enter the number of row ";
    cin >> m ;
    
    int arr[m][m];
    for (int i=0; i< m ; i++)
    {
        for (int j =0 ; j<m ; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout<< endl ;
    for (int i=0;i<m;i++)
    {
        for (int j=0; j<m;j++)
        {
            if (i== m/2 || j== m/2) cout << arr[i][j] << " ";
            else cout<< " ";
        }
        cout << endl ;
    }

}