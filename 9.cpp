#include<iostream>
using namespace std;

int main(){
    int num,sum;
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
}