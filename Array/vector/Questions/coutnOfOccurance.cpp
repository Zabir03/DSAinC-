#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
     
    cout<<"Enter the x:";
    int x;
    cin>>x;
    int CountOccurance=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            CountOccurance++;
        }
    }
    cout<<CountOccurance;
}