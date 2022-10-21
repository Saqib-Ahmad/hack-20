#include<bits/stdc++.h>
using namespace std;

bool prime(int x){
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
        return true;
}

int main(){
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
vector<int> factor;
for(int i=2;i<=n;i++){

    if(prime(i) && n%i==0){
        //int x=n;
        while(n%i==0){
        factor.push_back(i);
        n/=i;
        //x=x/i;
    }
    }


}
for(int x:factor){
    cout<<x<<" * ";
}
cout<<"\n";
    }



}