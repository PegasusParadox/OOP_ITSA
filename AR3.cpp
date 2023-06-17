#include<iostream>
using namespace std;

int main(){
    int num=0,ans=0;
    for(int i=0;i<6;i++){
        cin>>num;
        ans=ans+num*num*num; 
    }    
    cout<<ans<<endl;
}