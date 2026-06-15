#include<bits/stdc++.h>
using namespace std;
int main(){
    long long k,n,w;
    cin>>k>>n>>w;
    long long totalCost=0;
    for(int i=0;i<w;i++){
        totalCost+=k*(i+1);
    }
    int borrow=totalCost-n;
    if(borrow<0) cout<<0<<endl;
    else cout<<borrow<<endl;
}