#include<bits/stdc++.h>
using namespace std;
long long int fibo(long long int n){
    if (n <= 1) return n;
    return  fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fibo(n);
}