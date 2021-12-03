#include <bits/stdc++.h>

using namespace std;

int check[10001] = {0};
int a[10001], n;

void sangNT()
{
    check[0] = check[1] = 1;
    for( int i = 2; i <= sqrt(10000); i++ )
    {
        if( !check[i] )
        {
            for( int j = i*i; j <= 10000; j+=i ) check[j] = 1;
        }
    }
}

void out( int x )
{
    for(int i = 1; i <= x; i++)  cout << a[i] << " ";
    cout << endl;
}


void Try(int i, int j, int s)
{
    for( int k = j; k >= 1; k-- ) // k chạy từ 9 về 2
    { 
        if( s + k <= n )
        {
            a[i] = k;
            s += k;
            if(s == n) out(i);
            else Try(i+1, k, s);
            s -= k;
        }
    }
}

int main()
{
    sangNT();
    cin >> n;
    Try(1,n-1,0);   
}