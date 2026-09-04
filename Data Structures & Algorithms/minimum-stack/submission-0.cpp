class MinStack {
public:
    int j=-1;
    vector<int>v;
    MinStack() {
        
    }
    
    void push(int val) {
        j++;
        int a=v.size();
        v.resize(a+1);
        v[j]=val;

    }
    
    void pop() {
        j--;
    }
    
    int top() {
        return v[j];
    }
    
    int getMin() {
        int mina=v[0];
        for(int i=1;i<=j;i++)
        {
            //cout<<v[i]<<" ";
            mina=min(mina,v[i]);
        }
        return mina;

    }
};
