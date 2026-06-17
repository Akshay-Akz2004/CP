#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int currentCost=0;
    int idx=1;
    while(currentCost<=n){
        currentCost+=(idx*(idx+1))/2;
        idx++;
    }

    cout<<idx-2<<endl;
}