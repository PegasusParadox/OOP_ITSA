#include<iostream>
using namespace std;

int main(){
    int num1=0,num2=0;
    while((cin>>num1>>num2) && !cin.eof()){
        cout<<num1+num2<<endl;
    }
}