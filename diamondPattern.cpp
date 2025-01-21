#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;

    for(int i =0; i<n;i++){
        for(int j=n-1-i;j>0;j--){
            cout<<"_";

        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    //lower tringle
    for(int i =0; i<n-1;i++){
         for(int k=0;k<=i;k++){
            cout<<"_";
        }
        for(int j=n-1-i;j>0;j--){
            cout<<"* ";

        }
       
        cout<<"\n";
    }
    return 0;
}