#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    unordered_map<string,int> mp;
    mp["Tetrahedron"]=4;
    mp["Cube"]=6;
    mp["Octahedron"]=8;
    mp["Dodecahedron"]=12;
    mp["Icosahedron"]=20;
    long long ans=0;
    while(test--){
        string str;
        cin>>str;
        ans+=mp[str];
    }

    cout<<ans<<endl;
}