#include<iostream>

using namespace std;

int n, C[20];

void in()
{
    for( int i = 1; i <= n; i++ ) cout << C[i];
    cout << endl;
}

void Try( int i ) 
{
     for( int j = 0; j <= 1; j++)
     {
          C[i] = j;
          if( i == n ) in();
          else Try(i + 1);                      
     }
}

int main()
{
     cin >> n;
     Try(1);
     cout << endl;
    
}
