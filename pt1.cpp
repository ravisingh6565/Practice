#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the umber of row";
    cin>>n;
    for(int i =0; i<n;i++){
        for(int j =0;j<n ; j++){
            cout<<"  this "<<i;
        }
        cout<<"\n";
    }
    return 0;
}