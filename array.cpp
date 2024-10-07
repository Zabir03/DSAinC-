#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int, 4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Element at the 2nd index-->"<<a.at(2)<<endl; //Return the 2nd element of the array
    cout<<"Empty or not-->"<<a.empty()<<endl;  //Return the bollen
    cout<<"First element-->"<<a.front()<<endl; //Return the first element of the array
    cout<<"Last element-->"<<a.back()<<endl; //Return the last element of the array
    


}