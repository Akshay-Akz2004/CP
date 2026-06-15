#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long count=0;
    while(n>0){
        int digit=n%10;
        if(digit==4 or digit==7) count++;
        n=n/10;
    }

    if(count==4 or count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}