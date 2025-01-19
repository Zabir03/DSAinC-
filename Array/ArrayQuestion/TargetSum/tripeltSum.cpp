#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    vector<int> ans;
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout << "Enter triplet number -->";
    cin >> k;
    for(int i = 0; i <= size; i++)
    {
        for(int j = i+1; j <= size; j++)
        {
            for(int k = j+1; k <= size; k++)
            {
                if((arr[i]+arr[j]+arr[k])==k)
                {
                    ans.push_back()
                }
            }

        }
    }
    
}