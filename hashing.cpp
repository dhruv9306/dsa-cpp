
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int vec[6];
    for(int i=0; i<n; i++){
        vec[arr[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<vec[num]<<endl;
    }
    return 0;

}