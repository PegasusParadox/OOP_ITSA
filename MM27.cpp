#include<iostream>
using namespace std;

int main(){
    int num1=0,num2=0;
    cin>>num1>>num2;
    int ans=0;
    if(num1<=num2){
        for(int i=num1;i<=num2;i++){
            ans+=i;
        }  
    }
    else{
        for(int i=num2;i<=num1;i++){
            ans+=i;
        }
    }
    cout<<ans<<endl;
}