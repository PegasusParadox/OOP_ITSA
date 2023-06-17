#include<iostream>
using namespace std;

int main(){
    int num=0,ans=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        ans+=i;
        if(i==num){
            cout<<i<<" = "<<ans<<endl;
            break;
        }
        cout<<i<<" + ";
    }
}