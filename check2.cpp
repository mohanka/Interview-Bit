#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
typedef long long ll;
#define enter printf("\n");
vector<string> v;
void perm(string &s, int l, int r)
{
    if(l==r)
        v.push_back(s);
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(s[l],s[i]);
            perm(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main()
 {
	{
        float ans,a=-5,b=-3;
        ans=a/b;
        cout<<ans<<endl;
	}
	return 0;
}