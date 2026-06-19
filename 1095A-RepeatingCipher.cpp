#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string result;
    int ptr=0;
    int idx=2;
    while(ptr<n){
        result.push_back(s[ptr]);
        ptr+=idx;
        idx++;
    }

    cout<<result<<endl;
}