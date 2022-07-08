// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])
            return image;

        int rows=image.size();
        int columns=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,newColor,rows,columns,source);
        return image;


        // Code here 
    }
    void dfs(vector<vector<int>>& image,int sr,int sc, int newColor,int rows,int cols,int source)
    {
        if(sr<0 || sr>=rows || sc<0 ||sc>=cols)
            return;
        else if(image[sr][sc]!=source)
            return;
        
        image[sr][sc]=newColor;
        dfs(image,sr-1,sc,newColor,rows,cols,source);     //top
        dfs(image,sr+1,sc,newColor,rows,cols,source);     //bottom
        dfs(image,sr,sc-1,newColor,rows,cols,source);     //left
        dfs(image,sr,sc+1,newColor,rows,cols,source);     //right
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends