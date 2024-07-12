#include<bits/stdc++.h>
using namespace std;
int countsetbits(int n){
    int cnt=0;
    while(n>=1){
        // if(n%2==1){
        //     cnt++;
        // }
        cnt+=n&1; //alternative methdod by bitwise operation and
        n=n>>1; // right shift
    } 
    return cnt;
}
int main(){
    int n;
    cin >> n;
    cout<<countsetbits(n);
    return 0;
}