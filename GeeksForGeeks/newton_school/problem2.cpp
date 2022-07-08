#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int l,flag1=0,flag2=0;
    string s;
    cin>>l;
    cin>>s;
    for (int i = 0; i < l; i++)
    {
        if(s[i]=='N'){
            flag1++;
        }else if(s[i]=='T'){
            flag2++;
        }
    }
    if(flag1>flag2){
        cout<<"Nutan";
    }else cout<<"Tusla";
    

	// Your code here
	return 0;
}