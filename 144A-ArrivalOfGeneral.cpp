#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int minEl=*min_element(v.begin(),v.end());
    int maxEl=*max_element(v.begin(),v.end());
    int minIdx=-1;
    int maxIdx=-1;
    for(int i=0;i<n;i++){
        if(v[i]==maxEl){
            maxIdx=i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(v[i]==minEl){
            minIdx=i;
            break;
        }
    }
    int ans=0;
    if(maxIdx<minIdx){
        ans=maxIdx+(n-1)-minIdx;
    }

    else ans=maxIdx+(n-minIdx)-2;

    cout<<ans<<endl;

}
