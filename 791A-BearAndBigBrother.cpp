#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    int year=0;
    while(n<=m){
        n*=3;
        m*=2;
        year++;
    }

    cout<<year<<endl;
}