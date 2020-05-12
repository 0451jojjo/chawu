#include<iostream>
#include<algorithm>
using namespace std;

const int N=100010;
struct Node{
    int l,r;
    bool operator<(const Node &w)const{
        return l<w.l;
    }
}node[N];
int n;

int main()
{
    int st,ed;
    cin>>st>>ed;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        node[i]={l,r};
    }
    sort(node,node+n);
    int res=0;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        int j=i,r=-2e9;
        while(j<n&&node[j].l<=st)
        {
            r=max(r,node[j].r);
            j++;
        }
        if(r<st) {
            res=-1;
            break;
        }
        res++;
        if(r>=ed)
        {
            flag=true;
            break;
        }
        st=r;
        i=j;
    }
    if(!flag) res=-1;
    cout<<res<<endl;
    system("pause");
    return 0;
}