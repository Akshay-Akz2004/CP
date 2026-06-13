#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long totalLiters  = k*l;
    long long totalSclices = c*d;
    long long totalSalt    = p;

    long long c1 = (totalLiters/nl)/n;
    long long c2 = totalSclices/n;
    long long c3 = (totalSalt/np)/n;
    long long result = min({c1,c2,c3});
    cout<<result<<endl;
}