#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    int k;
    cin>>n>>k;
    while(k--){
        int digit=n%10;
        if(digit==0) n=n/10;
        else n=n-1;
    }

    cout<<n<<endl;
}