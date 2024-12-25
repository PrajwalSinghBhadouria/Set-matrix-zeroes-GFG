//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        map<int,int> mp;
        int n = mat.size();
        int m = mat[0].size();
        vector<int> p;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0){
                    p.push_back(i);
                    p.push_back(j);
                }
            }
        }
        int x,y;
        int k=0;
        for(int i=0; i<p.size()/2; i++){
            x = p[k];
            for(int j=0; j<m; j++){
                mat[x][j]=0;
                
            }
            k++;
            y = p[k];
            for(int j=0; j<n; j++){
                mat[j][y]=0;
            }
            k++;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends
