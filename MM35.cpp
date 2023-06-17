#include<iostream>
using namespace std;

int main(){
    int year=0;
    cin>>year;
    if(year%400==0){
        cout<<"Bissextile Year"<<endl;
    }
    else if(year%4==0){
        if(year%100!=0){
            cout<<"Bissextile Year"<<endl;
        }
        else{
            cout<<"Common Year"<<endl;
        }        
    }
    else{
        cout<<"Common Year"<<endl;
    } 
}