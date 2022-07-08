// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    int i;
    for(i=0;i<s.size();i++){
        string temp="";
            for (int j = i; j < x.size()+i; j++)
            {
                temp=temp+s[j];
                
                /* code */
            }
            if(temp==x)
                return i;
            
        }
        return -1;
        
    }
    
