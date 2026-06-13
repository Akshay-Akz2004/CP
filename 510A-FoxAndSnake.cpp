#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    bool flag=true;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i%2==0){
                cout<<"#";
            }
            else if(flag){
                if(j==col-1) cout<<"#";
                else cout<<".";
            }

            else if(!flag){
                if(j==0) cout<<"#";
                else cout<<".";
            }
        }
        if(i%2==1) flag=!flag;
        cout<<endl;
    }
}