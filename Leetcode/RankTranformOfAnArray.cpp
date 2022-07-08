#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        int fq[temp.size()];
        set<int> sett;
        for(auto it:arr)
            sett.insert(it);
        for(int it = 0;it!=sett.size();it++){
            for (int i = 0; i < arr.size(); i++)
            {
                if(arr[i]==i){

                }
            }
            
        }
        for (int i = 0; i < temp.size(); i++)
        {
            
        }
        
        for (int i = 0; i<temp.size(); i++)
        {
            for (int j = 0; j < arr.size(); j++)
            {
                if(arr[j]==temp[i]){
                    arr[i]=j;
                }
            }
            
        }
        
        
    }
};

int main(){
    int n;
    vector<int> arr;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
       // arr.push_back()
    }
    
}