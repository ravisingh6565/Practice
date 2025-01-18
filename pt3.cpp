#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter the number : ";
    cin>>n;

    for(int i =0; i<n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";

        }
        for(int k=0;k<=i;k++){
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}