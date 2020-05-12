#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
    int n;
    priority_queue<int,vector<int>,greater<int>> head;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        head.push(x);
    }
    int res=0;
    while(head.size()>1)
    {
        int x=head.top();head.pop();
        int y=head.top();head.pop();
        res+=(x+y);
        head.push(x+y);
    }
     cout<<res<<endl;
     system("pause");
     return 0;
}