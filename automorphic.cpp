#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    cin>>i;
    int n = i*i;
    int x = 1;
    while(i!=0){
        int a = i%10;
        int b = n%10;
        if(a!=b){
            cout<<"No Automorphic";
            x=0;
            break;
        }
        n = n/10;
        i = i/10;
    }
    if(x==1){
        cout<<"Automorphic";
    }
}