#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int totalPress=0;
    while(test--){
        int n;
        cin>>n;
        int digit=n%10;
        totalPress=(digit-1)*10;

        int digitCount=0;
        while(n>0){
            n=n/10;
            digitCount++;
        }

        totalPress+=(digitCount*(digitCount+1))/2;
        cout<<totalPress<<endl;
    }
}