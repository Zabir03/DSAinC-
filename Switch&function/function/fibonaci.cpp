#include<iostream>
using namespace std;
int toFindFibonaci(int num){

        if(num <= 1){
        return num;
    }

    else{
    return toFindFibonaci(num-1 ) + toFindFibonaci(num-2);
    }
    

    
}
int main(){
    int n;
    cout << "Enter number to find fibonaci serise -->";
    cin >> n;
    cout << "The serise is -->"<< endl;
    for( int i = 0; i <= n; i++){
        int answer = toFindFibonaci(i);  
        cout << answer <<" ";  
    }
  
    
    

}