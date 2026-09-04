#include <stack>
#include <algorithm>
using namespace std;

class MinStack {
    stack<int> s;      
    stack<int> minS;    
    
public:
    MinStack() {}

    void push(int val) {
        s.push(val);
        if (minS.empty()) {
            minS.push(val);
        } else {
            minS.push(min(val, minS.top()));
        }
    }
    
    void pop() {
        s.pop();
        minS.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
    }
};
