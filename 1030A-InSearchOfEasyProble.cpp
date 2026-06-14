#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    vector<int> v(n);
    bool isHard=false;
    while(n--){
        int num;
        cin>>num;
        if(num) isHard=true;
    }

    if(isHard) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;

}
