class Solution {
public:
    int getSum(int a, int b) {
        int ind=0;
        string s1=bitset<32>(a).to_string();
        string s2=bitset<32>(b).to_string();
        string ans="";
        for(int i=31;i>=0;i--)
        {
            if(s1[i]=='1' && s2[i]=='1')
            {
                if(ind==1)
                {
                    ans+='1';
                }
                else
                {
                    ans+='0';
                }
                ind=1;
                

            }
            else if(s1[i]=='0' && s2[i]=='0')
            {
                if(ind==1)
                {
                    ind=0;
                    ans+='1';
                }
                else
                {
                    ans+='0';
                }
            }
            else
            {
                if(ind==1)
                {
                    ans+='0';
                    ind=1;
                }
                else
                {
                    ans+='1';
                }
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
        int ans1=(int)bitset<32>(ans).to_ulong();
        // int p=0;
        // for(int i=9;i>=0;i--)
        // {
        //     if(ans[i]=='1')
        //     {
        //         ans1+=pow(2,p);
        //     }
        //     p++;
        // }
        return ans1;
    }
};
