#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int maxPassangers=0;
    int current=0;
    while(n--){
        int left,arrived;
        cin>>left>>arrived;
        current=current-left+arrived;
        maxPassangers=max(maxPassangers,current);
    }

    cout<<maxPassangers<<endl;
}