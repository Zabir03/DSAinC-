#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,42,43,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ansSum=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            ansSum += arr[i];

        }
        else{
            ansSum -= arr[i];
        }
    }
    cout<<ansSum;
    return 0;
}