#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>v;
    for(int i=0;i<str.size();i++){
        if(i%2==0){
            v.push_back(str[i]-'0');
        }
    }

    sort(v.begin(),v.end());
    string res="";
    for(auto i:v){
        char c=i+'0';
        res.push_back(c);
        res.push_back('+');
    }

    res.pop_back();
    cout<<res<<endl;
}