#include<iostream>
using namespace std;
int n, OK = 0, A[12];
void in(){
    for(int i=1;i<=n;i++) cout << A[i] << " ";
    cout<<endl;
}
void sinh(){
    int i, j, t, d, c;
    i = n-1;
    while(A[i] > A[i+1]) i--;
    if(i == 0) OK = 1;
    else {
        j = n;
        while(A[j] < A[i]) j--;
        t = A[i]; A[i] = A[j]; A[j] = t;
        d = i+1; c = n;
        while(d < c){
            t = A[d]; A[d] = A[c]; A[c] = t;
            d++; c--;
        }
    }
}
main(){
    cin >> n;
    for(int i = 1; i <= n; i++) A[i] = i;
    while(!OK){
        in();
        sinh();
    }
}
