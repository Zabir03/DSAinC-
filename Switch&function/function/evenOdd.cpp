#include<iostream>
using namespace std;
bool boolNumber(int n1){
    
        if(n1 % 2 == 0){
            cout<<" Number is even !"<<endl;
        }
        else{
            cout<<" Number is odd !" << endl;
        }
  

}
int main(){
    int n;
    cout<< "Enter the number -->"<<" ";
    cin >> n;
    int answer = boolNumber(n);
}