#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary number : ";
    cin>>n;

    int ans=0;
    int power=1;
    while(n>0){
        int lastDigit=n%10;
        ans += lastDigit*power;
        power*=2;
        n/=10;
    }
    cout<<ans<<endl;
}