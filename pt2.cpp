#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            printf("hello");
        }
        printf("\n");
    }
    return 0;
}