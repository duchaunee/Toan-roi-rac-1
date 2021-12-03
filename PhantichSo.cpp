#include<iostream>

using namespace std;
int n, A[20];

void in(int x)
{
    for(int i = 1; i <= x; i++)  cout << A[i] << " ";
    cout << endl;
}

void Try(int i, int j, int s)
{
    int k;
    for( k = j; k >= 1; k--) // k chạy từ 5 về 1
    { 
        if( s + k <= n )
        {
            A[i] = k;
            s += k;
            if(s == n) in(i);
            else Try(i+1, k, s);
            s -= k;
        }
    }
}
int main()
{
    cin >> n; // eg: n = 5;
    Try(1, n, 0);
}
