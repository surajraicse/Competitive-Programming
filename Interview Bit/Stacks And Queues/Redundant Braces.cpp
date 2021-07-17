int Solution::braces(string A) {
    int n=A.length();
    int i=0;
    stack<char> ans;
    while(i<n)
    {
        if(A[i]==')')
        {
            int f1=0,f2=0;
            while(ans.top()!='(')
            {
                f1=1;
                char c=ans.top();
                if(c=='+' ||c=='-' ||c=='*' ||c=='/')
                    f2=1;    
                ans.pop();
            }
            ans.pop();
            if(f1==0 || f2==0)
                return 1;
        }
        else
            ans.push(A[i]);
        i++;
    }
    return 0;
}
