#include<iostream>
using namespace std;

int n, k, C[20];
bool check[20] = {0};

void in(){
    for(int i=1;i<=k;i++) cout << C[i];
    cout << " ";
}
void Try(int i){
    int j;
    for(j = 1; j <= n; j++){
        if( !check[j] )
        {
            check[j] = 1;
            C[i] = j;
            if(i == k) in();
            else Try(i + 1);              
            check[j] = 0;        
            
        }

    }
}
main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}
