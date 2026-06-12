#include<bits/stdc++.h>

using namespace std;

int main(){
    long long num;
    cin>>num;
    string numStr=to_string(num);
    long long ans=0;
    for(auto i:numStr){
        int digit=i-'0';
        if(digit>4 and !(ans==0 and digit==9)){
            ans=ans*10+(9-digit);
        }

        else{
            ans=ans*10+digit;
        }
    }

    cout<<ans<<endl;
}