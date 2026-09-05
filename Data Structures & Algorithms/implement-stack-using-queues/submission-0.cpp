class MyStack {
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        //cout<<q.front();
    }
    
    int pop() {
        int n=q.size();
        n--;
        while(n--)
        {
            auto it=q.front();
            q.pop();
            q.push(it);
        }
        int a=q.front();
        q.pop();
        return a;
    }
    
    int top() {
        int n=q.size();
        n--;
        while(n--)
        {
            auto it=q.front();
            q.pop();
            q.push(it);
        }
        int a= q.front();
        q.pop();
        q.push(a);
        return a;
    }
    
    bool empty() {
        if(q.empty()) return true;
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */