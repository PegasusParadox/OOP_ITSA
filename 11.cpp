#include<iostream>
using namespace std;

int main(){
    int matrix[100][100];
    int col=0,row=0;
    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[j][i];
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row-1;j++){
            cout<<matrix[i][j];
            cout<<" ";
        }
        cout<<matrix[i][row-1]<<endl;
    }
    return 0;
}
