#include<iostream>
using namespace std;

int main(){
    int price=0;
    cin>>price;
    int ten=0,five=0,one=0;
    while(price!=0){
        if(price>=10){
            ten++;
            price-=10;
        }
        else if(price>=5 && price<10){
            five++;
            price-=5;
        }
        else if(price>=1 && price<5){
            one++;
            price-=1;
        }
    }
    cout<<"NT10="<<ten<<endl;
    cout<<"NT5="<<five<<endl;
    cout<<"NT1="<<one<<endl;
}