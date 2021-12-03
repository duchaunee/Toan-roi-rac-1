#include<iostream>
using namespace std;
bool OK = false;
int B[20] = {0}, n;
void in(){
    for(int i=1;i<=n;i++) cout<<B[i];
    cout<<endl;
}
void sinhketiep(){
    int i = n;
    while(B[i]){
        B[i] = 0;
        i--;
    }
    if(i == 0) OK = true;
    else B[i] = 1;
}
main(){
    cin >> n;
    while(!OK){
        in();
        sinhketiep();
    }
}
