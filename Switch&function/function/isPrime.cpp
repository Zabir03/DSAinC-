#include<iostream>
using namespace std;
bool isPrime(int num1){
    if(num1/2 == 0){
        cout<<"Number is not a prime -->"<<endl;
    }
    else{
        cout<<"Number is a prime";
    }

}
int main(){
    int n;
    cout<<"Enter the positive number -->"<<" ";
    cin>>n;
    int answer = isPrime(n);
    cout<< answer;


}