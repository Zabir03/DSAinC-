#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n>0){
        int lastDigits=n%10;
        sum=sum+lastDigits;
        n=n/10;

    }
    cout<<sum<<endl;
}