stack<pair<int,int>>s;
MinStack::MinStack() {
    stack<pair<int,int>>().swap(s);
}

void MinStack::push(int x) {
    int min,c;
    if(s.empty())
        c=x;
    else
        c=getMin();
    
    if(x<c)
        min=x;
    else
        min=c;
    s.push(make_pair(x,min));
}

void MinStack::pop() {
    if(s.empty())
        return;
    s.pop();
}

int MinStack::top() {
    if(s.empty())
        return -1;
    pair<int,int> ans=s.top();
    return ans.first;
}

int MinStack::getMin() {
    if(s.empty())
        return -1;
    pair<int,int> ans=s.top();
    return ans.second;
}

