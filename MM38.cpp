#include<iostream>
using namespace std;

int main(){
    int edge1=0,edge2=0,edge3=0;
    cin>>edge1>>edge2>>edge3;
    if(edge1+edge2<=edge3){
        cout<<"unfit"<<endl;
    }
    else if(edge1+edge3<=edge2){
        cout<<"unfit"<<endl;
    }
    else if(edge3+edge2<=edge1){
        cout<<"unfit"<<endl;
    }
    else{
        cout<<"fit"<<endl;
    }
}