string Solution::simplifyPath(string A) {
    string ans;
    vector<string>res;
    int n=A.length();
    for(int i=0;i<n;i++)
    {
        if(A[i]=='/')
        {
            i++;
            string t;
            while(i<n && A[i]!='/')
            {
                t+=A[i++];
            }
            i--;
            if(t=="..")
            {
                if(!res.empty())
                    res.pop_back();
            }
            else if(t==".")
                continue;
            else if(t.length()!=0)
                res.push_back(t);
        }
    }
    int sz=res.size();
    ans+="/";
    for(int i=0;i<sz;i++)
    {
        ans+=res[i];
        if(i<sz-1)
            ans+="/";
    }
    return ans;
}
