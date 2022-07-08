#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int speedTest(string a, string b){
        int flag=0;
        // sort(&a[0],&a[0]+a.size());
        // sort(&b[0],&b[0]+b.size());
        for(int i=0,j=0;i<a.length(),j<b.length();){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                b.erase(j,j);
                flag++;
                i++;
                j++;
            }
        }
        cout<<b;
        cout<<flag;
        if(a.length()!=b.length()){
            return 0;
        }
        for(int i=0;i<a.length();i++){
            if(a[i]==b[i]){
                return flag;
            }else return 0;
        }
        
        //return flag;

    }
};

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        int x=obj.speedTest(c,d);
        if(x==0 || x==d.length())
            cout<<"Case #"<<t<<": "<<"IMPOSSIBLE\n";
        else cout<<"Case #"<<t<<": "<<x<<"\n";
    }

}