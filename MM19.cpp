#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int min=0;
    double ans=0;
    cin>>min;
    if(min>=1500){
        ans=min*0.9*0.79;
        int tmp=ans*100;
        if(tmp%10>=5){
            ans+=0.1;
        }
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    else if(min>800){
        ans=min*0.9*0.9;
        int tmp=ans*100;
        if(tmp%10>=5){
            ans+=0.1;
        }
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
    else{
        ans=min*0.9;
        int tmp=ans*100;
        if(tmp%10>=5){
            ans+=0.1;
        }
        cout<<fixed<<setprecision(1)<<ans<<endl;
    }
}