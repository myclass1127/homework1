#include<bits/stdc++.h>

using namespace std;
class solution
{
public:
    void  huiwen()
    {
        string a;
        int n;
        cin>>a;
        cin>>n;
        while(n>0)
        {
            int p,l;
            cin>>p>>l;
            string tmp=a.substr(p,l);
            int index=p+l;
            reverse(tmp.begin(),tmp.end());
            a.insert(index,tmp);
            n--;
        }
        cout<<a<<endl;
    }
};
int main()
{
   solution a;
   a.huiwen();
    return 0;
}
