// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        string s1="";
        int i=s.length()-1;
        int t=i;
        while(i>=0){
            if(s[i]=='.'){
                for(int j=i+1;j<t;i++){
                    s1.append(s,j,t);
                    if(i!=0){
                    s1.append(".");
                    }
                    t=j;
                }
            }
            i--;
        }
        return s1;
        // code here 
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends