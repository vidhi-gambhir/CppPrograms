// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    string rremove(string s){
        int n=s.length();

        if (s.length() <= 1) {
        return s;
    }
        int flag=0;
        int i=0;
        while(i<s.length()){
            int j=i+1;
            if(s[i]==s[i+1] && i+1<s.length()){
                while(j+1<s.length() && s[j]==s[j+1]){
                    j++;
                }
                s.erase(i,j-i+1);
            }else{
                i++;
            }
            
        }
    for(int i=0;i<=s.size()-1;){
        if(s[i]==s[i+1]){
            return rremove(s);
        }else i++;
    }return s;
    //     return rremove(s);


    //  int i=0,n=s.size();
    //  string temp;
    //  while(i<n)
    //  {
    //      int j=i+1;
    //      while(s[i]==s[j]&&j<n)
    //      j++;
    //      if(j==i+1)temp+=s[i];
    //      i=j;
    //  }
     
    //  if(s.size()==temp.size()){
    //     cout<<temp.size();
    //     cout<<s.size();
    //     return temp;
    //  }
     
    //  else
    //  return rremove(temp);

        // code here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends