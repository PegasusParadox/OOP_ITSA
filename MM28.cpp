#include<iostream>
using namespace std;

int main(){
    int num=0;
    cin>>num;
    int tmp=35;
    if(num>=35){
        cout<<tmp;
        tmp+=35;
    }
    while(tmp<=num){
        cout<<" "<<tmp;
        tmp+=35;
    }
    cout<<endl;
}