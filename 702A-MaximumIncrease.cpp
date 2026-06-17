#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int maxLen=0;
    int currLen=0;
    int ptr1=0;
    int ptr2=0;
    while(ptr2<n){
        if(ptr2==ptr1 or v[ptr2]>v[ptr2-1]){
            currLen=ptr2-ptr1+1;
            maxLen=max(maxLen,currLen);
            ptr2++;
        }

        else{
            ptr1=ptr2;
        }
    }

    cout<<maxLen<<endl;
}