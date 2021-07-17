int Solution::solve(string A) {
    stack<char> st;
    int n=A.length();
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
            st.push('(');
        else
        {
            if(!st.empty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
    }
    if(st.empty())
        return 1;
    else
        return 0;
}
