#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int tmp=x*x+y*y;
    if(tmp<=10000){
        cout<<"inside"<<endl;
    }
    else{
        cout<<"outside"<<endl;
    }
    return 0;
}