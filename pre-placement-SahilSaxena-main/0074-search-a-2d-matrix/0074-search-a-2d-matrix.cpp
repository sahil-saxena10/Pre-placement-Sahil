class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int X) {
        bool DTD = false;
        int N=mat.size();
        int M=mat[0].size();
	   for(int i=0;i<N;++i){
	       for(int j=0;j<M;++j){
	           if(mat[i][j]==X){
	               DTD=true;
	           }
	       }
	   }
	   return DTD;
    }
};