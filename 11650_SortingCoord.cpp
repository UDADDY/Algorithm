#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<int,int> A,pair<int,int> B)
{
    if(A.first<B.first)
    {
        return true;
    }
    else if(A.first==B.first)
    {
        if(A.second<B.second)
            return true;
    }
    return false;
}

int main()
{
    int N;
    vector<pair<int,int> > v;
    scanf("%d",&N);
    while(N--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        v.push_back(make_pair(x,y));
    }
    std::sort(v.begin(),v.end(),compare);
    for(int i=0;i<v.size();i++)
    {
        printf("%d %d\n",v[i].first,v[i].second);
    }
}