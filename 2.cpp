#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int input;
    cin>>input;
    double out;
    out=((double)input)*1.6;
    cout<<fixed<<setprecision(1)<<out<<endl;
    return 0;
}