#include<iostream>
using namespace std;

int main(){
    int input_sec=0;
    int day=0,hour=0,min=0;
    cin>>input_sec;
    while(input_sec>60){
        if(input_sec>86400){
            day++;
            input_sec-=86400;
        }
        else if(input_sec>3600){
            hour++;
            input_sec-=3600;
        }
        else if(input_sec>60){
            min++;
            input_sec-=60;
        }
    }
    cout<<day<<" days"<<endl;
    cout<<hour<<" hours"<<endl;
    cout<<min<<" minutes"<<endl;
    cout<<input_sec<<" seconds"<<endl;
}