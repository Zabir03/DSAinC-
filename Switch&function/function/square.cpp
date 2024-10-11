#include<iostream>
using namespace std;

int pow(int n1, int n2){
    int ans = 1;
    for(int i = 1; i <= n2; i++){
        ans = ans * n1;
    }
    // cout<<"answer is -->"<< ans <<endl;
    return ans;

}
int main(){
    int a,b;
    cin >> a >> b;
    int answer = pow( a, b);
    cout<< " answer is -->" << answer;
   

}