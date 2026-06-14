#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
        ans[v[i]-1]=i+1;
    }

    for(auto i:ans) cout<<i<<" ";

}