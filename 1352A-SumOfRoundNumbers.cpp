#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int> v;
        int place=1;
        while(n>0){
            int digit=n%10;
            if(digit!=0) v.push_back(digit*place);
            n=n/10;
            place=place*10;
        }

        cout<<v.size()<<endl;
        for(auto i:v){
            cout<<i<<" ";
        }

        cout<<endl;
    }
}