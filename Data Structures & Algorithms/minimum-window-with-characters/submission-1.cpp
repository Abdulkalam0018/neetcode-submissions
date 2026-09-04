class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int k=0;
        int i=0;
        int j=n-1;
        map<char,int>mp;
        bool found=false;
        for(auto &x:t){
            if(mp[x]==0) k++;
            mp[x]++;
        }
        int x=0;
        int y=0;
        while(x<n)
        {
            if(mp.find(s[x])!=mp.end())
            {
                mp[s[x]]--;
                if(mp[s[x]]==0) k--;
                if(k==0)
                {
                    while(k==0)
                    {
                        found=true;
                        if(mp.find(s[y])!=mp.end())
                        {
                            if(mp[s[y]]==0)
                            {
                                mp[s[y]]++;
                                if(j-i>x-y)
                                {
                                    i=y;
                                    j=x;
                                }
                                cout<<i<<" "<<j<<endl;
                                y++;
                                k++;
                                break;

                            }
                            else
                            {
                                mp[s[y]]++;

                            }
                        }
                        y++;
                    }
                    // if(mx<x-i+1)
                    // {
                    //     mx=min(mx,x-i+1);
                    //     j=x;
                    // }
                    // while(k>0)
                    // {
                    //     if(mp.find(s[i])!=mp.end())
                    //     {
                    //         // mp[s[i]]++;
                    //         // i++;
                    //         if(mp[s[i]]==0) k++;
                    //         mp[s[i]]++;
                    //         i++;
                    //     }
                    // }
                }

            }
            x++;
        }
            string ans="";
            for(int a=i;a<=j;a++)
            {
                ans+=s[a];
            }
            if(found==false) return "";
            return ans;
    }
};
