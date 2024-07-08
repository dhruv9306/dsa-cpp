#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=1;i<=2*n-1;i++){
        int k=i;
        if(i>n){
            k=2*n-i;
        }
        for(int j=1;j<=k;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void pattern2(int n){
    int start;
    for(int i=0;i<n;i++){
        
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;

        }
        cout<<endl;


    }
}
int main(){
    int n;
    cin>>n;
    pattern2(n); //your function (pattern 1,2,3,4(n))
}