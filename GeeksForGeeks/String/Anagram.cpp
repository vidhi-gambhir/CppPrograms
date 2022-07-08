// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        // char arr1[a.size()];
        // char arr2[b.size()];
        //int x;
        sort(&a[0],&a[0]+a.size());
        // for(int i=0;i<a.size();i++){
        //     arr1[i]=a[i];
        // }
        sort(&b[0],&b[0]+b.size());
        // for(int i=0;i<b.size();i++){
        //     arr2[i]=b[i];
        // }
        if(a==b){
            return true;
        }
        return false;
        //int x=strcmp(arr1,arr2);
        // cout<<x;
        // if(x!=0)
        //     return false;
        // else return true;
        
        // Your code here
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends