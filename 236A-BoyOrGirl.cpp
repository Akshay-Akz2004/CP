#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char> st;
    for(auto i:str) st.insert(i);
    int n=st.size();
    if(n%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}