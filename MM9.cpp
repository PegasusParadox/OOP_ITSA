#include<iostream>
using namespace std;

int main(){
    int num=0;
    cin>>num;
    int ans=2;
    if(num>31){
        cout<<"Value of more than 31"<<endl;
    }
    else{
        for(int i=1;i<num;i++){
            ans=ans*2;
        }
        cout<<ans<<endl;
    }  
}