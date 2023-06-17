#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float up=0,down=0,h=0;
    float ans=0;
    cin>>up>>down>>h;
    ans=(up+down)*h/2;
    cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<ans<<endl;
}