#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    bool flag=false;
    int total=5;
    while(total--){
        string s;
        cin>>s;
        if(str[0]==s[0] or str[1]==s[1]){
            flag=true;
        }
    }

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}