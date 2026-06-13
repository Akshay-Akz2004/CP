#include<bits/stdc++.h>
using namespace std;
int main(){
    long long f1,f2,f3;
    cin>>f1>>f2>>f3;
    long long c1= abs(f2-f1)+abs(f3-f1);
    long long c2= abs(f2-f1)+abs(f2-f3);
    long long c3= abs(f3-f1)+abs(f3-f2);
    long long ans=min({c1,c2,c3});
    cout<<ans<<endl;
}