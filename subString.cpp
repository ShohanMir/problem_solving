#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(size_t i=0;i<s.length();i++)
    {if(s[i]=='a'||s[i]=='o'||s[i]=='y'||s[i]=='e'||s[i]=='u'||s[i]=='i')continue;
    else{
 
 
        r+='.';
        r+=s[i];
 
    }
 
    }
 
    cout<<r;
 
    return 0;
}
