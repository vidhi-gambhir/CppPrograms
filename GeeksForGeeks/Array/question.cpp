#include <iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a==b){
        return a;
    }
    if(a>b)
        return gcd(a-b,b);
    return gcd(a,b-a);
}

int querys(string str,int k){
    int x,l,r,t,i,flag=0;
    if(str[0]==1){
        i=str[1];
        x=str[2];
        str[i]=x;
    }
    if(str[0]==2){
        l=str[1];
        r=str[2];
        for(int i=l;i<r;i++){
            int z=gcd(str[i],k);
            if(z==1)
                flag++;
        }
    }
    return flag;
}
int main() {
    int n,k,q;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    cin>>k;
    string query[q];
    for(int i=0;i<q;i++){
        cin>>query[i];
        cout<<"\n";
    }

    querys(query,k);
    
	// your code goes here
	return 0;
}

