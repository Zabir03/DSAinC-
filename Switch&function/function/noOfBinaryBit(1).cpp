#include<iostream>
using namespace std;

int toDeciToBinary(int n){
    int ans = 0;
    int power = 1;
    while(n > 0){
        int paritydigit = n % 2;
        ans = ans + (paritydigit * power);
        power = power * 10;
        n = n / 2;
    }
    cout<< ans;

}
// int NoOfBit(int a){
    // int count = 0;
    // if(1 == toDeciToBinary(a)){
        // count ++;
    // }
    // cout << count;
// 
// 
// }
int main(){
    int n;
    cout << "Enter the number to find binary bit -->";
    cin >> n;
    toDeciToBinary(n);




}