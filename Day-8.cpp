// Count number of free cell

// Link - https://practice.geeksforgeeks.org/problems/90a81c305b1fe939b9230a67824749ceaa493eab/1

class Solution{
  public:  
  vector<long long int> countZero(int n, int k, vector<vector<int>>& arr){
      //Code Here
      vector<int> row(n,0);
      vector<int> col(n,0);
      int row_cnt = 0;
      int col_cnt = 0;
      vector<long long int> ans;
      
      for(int i = 0; i < k; i++){
          int r = arr[i][0]-1;
          int c = arr[i][1]-1;
          
          if(row[r] == 0){
              row[r] = 1;
              row_cnt++;
          }
          if(col[c] == 0){
              col[c] = 1;
              col_cnt++;
          }
          
          ans.push_back(n*n - (row_cnt*n) - (col_cnt*n) + (row_cnt*col_cnt));
      }
      return ans;
  }
};
