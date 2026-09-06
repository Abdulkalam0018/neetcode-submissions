class Solution {
public:
    bool isok(int i,int j,int n,int m)
    {
        if(i>=0 && i<n && j>=0 && j<m) return true;
        return false;
    }
    int swimInWater(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        using ii=pair<int,pair<int,int>>;
        int dir1[]={0,0,1,-1};
        int dir2[]={1,-1,0,0};

        priority_queue<ii,vector<ii>,greater<>>pq;
        pq.push({grid[0][0],{0,0}});
        

        set<pair<int,int>>vis;
        vis.insert({0,0});
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            if(it.second.first==n-1 && it.second.second==m-1) return it.first;

            int x=it.second.first;

            //cout<<it.first<<endl;
            int y=it.second.second;
            for(int i=0;i<4;i++)
            {
                int a=x+dir1[i];
                int b=y+dir2[i];
                //cout<<a<<" "<<b<<endl;
                if(isok(a,b,n,m) && !vis.count({a,b}))
                {
                    
                    int c=max(grid[a][b],it.first);
                    if(a==n-1 && b==m-1) return c;
                    pq.push({c,{a,b}});
                    vis.insert({a,b});
                }


            }

        }
        return 0;
    }
};
