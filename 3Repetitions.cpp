#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ans=1,c=1;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])    c+=1;
        else c=1;
        ans=max(c,ans);
    }
    cout<<ans<<endl;
    return 0;
}