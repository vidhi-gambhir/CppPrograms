// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
        // int flag=0;
        // for(int i=0;i<n-1;i++){
        //     if(dep[i]>=arr[i+1]){
        //         flag++;
        //     }
        // }
        // if(flag==0){
        //     return 1;
        // }else return flag;

        int platform=1;
        int min_plat=1;
        sort(arr,arr+n);
        sort(dep,dep+n);
        int i=1;
        int j=0;

        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                platform++;
                i++;
            }else{
                platform--;
                j++;
            }
            min_plat=max(platform,min_plat);
        }
        return min_plat;

    	// Your code here
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends