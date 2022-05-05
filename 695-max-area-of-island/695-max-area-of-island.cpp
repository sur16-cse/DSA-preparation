class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int maxm=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1)
                    maxm=max(maxm,AreaIsland(i,j,grid));
            }
        }
        return maxm;
    }
    
    int AreaIsland(int i,int j,vector<vector<int>>& grid){
         if(i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
             grid[i][j]=0;
            return 1+AreaIsland(i-1,j,grid)
                +AreaIsland(i+1,j,grid)
                +AreaIsland(i,j+1,grid)
                +AreaIsland(i,j-1,grid);
         }
        return 0;
    }
};