#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char c=str[0];
    if(islower(c)){
        c=toupper(c);
        str[0]=c;
    }
    cout<<str<<endl;
}