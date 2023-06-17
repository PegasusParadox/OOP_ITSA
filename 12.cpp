#include<iostream>
#include<cmath>
using namespace std;

int recursive(int n){
    if(n==0){
        return n+1;
    }
    else{
        return recursive(n-1)+recursive((n/2));
    }
}

int main(){
    int num;
    cin>>num;
    int tmp=recursive(num);
    cout<<tmp<<endl;
}