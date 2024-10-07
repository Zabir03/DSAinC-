#include<iostream>
using namespace std;
int main(){
    int n=1330;
    int count100=0, count50=0, count20=0, count10=0;
    for(int i = 0; i < 4; i++){
        switch (i)
        {
        case 0:
            count100 = n/100;
            n = n%100;
            break;
         case 1:
              count50 = n/50;
              n = n%50;
              break;
        
         case 2:
             count20 = n/20;
             n = n%20;
             break;

        
         case 3:
             count10 = n/10;
             n = n%10;
             break;
        
        default:
            break;
        }

    }
    cout<<"100 rupe notes is -->"<<count100<<endl;
    cout<<"50 rupe notes is -->"<<count50<<endl;
    cout<<"20 rupe notes is -->"<<count20<<endl;
    cout<<"10 rupe notes is -->"<<count10<<endl;
    return 0;
    
}