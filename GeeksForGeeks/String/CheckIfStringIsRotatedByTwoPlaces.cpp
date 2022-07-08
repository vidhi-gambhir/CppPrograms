// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        if(str1.length()!=str2.length()){
            return false;
        }

        string temp=leftrotate(str1,2);
        string tempr=rightrotate(str1);
        cout<<temp<<"\n";
        cout<<tempr;
        if(temp==str2){
            return true;
        }
        if(tempr==str2){
            return true;
        }
        return false;
        // Your code here
    }

    string leftrotate(string str,int d){
        reverse(str.begin(),str.begin()+d);
        reverse(str.begin()+d,str.end());
        reverse(str.begin(),str.end());
        return str;
    }

    string rightrotate(string str){
        string tempp;
        tempp=leftrotate(str,str.length()-2);
        return tempp;
    }

};


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends