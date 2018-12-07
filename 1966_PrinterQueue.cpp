#include<iostream>
#include<vector>

using namespace std;

class QUEUE
{
    public:
        int prio,order;
        QUEUE(int a,int b)
        {
            order=a;
            prio=b;
        }
};

int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
    int N,M;
    int i=0;
    scanf("%d %d",&N,&M);
    vector<QUEUE> v;

    for(int i=0;i<N;i++)
    {
        int A;
        scanf("%d",&A);
        v.push_back(QUEUE(i,A));
    }
    
    while(v.size()!=0)
    {
        int max=v[0].prio;
        for(int i=0;i<v.size();i++)
        {
            if(max<v[i].prio)
                max=v[i].prio;
        }
        while(true)
        {
            if(v[0].prio==max)
                break;
            QUEUE temp(v[0].order,v[0].prio);
            v.erase(v.begin());
            v.push_back(temp);
        }
        if(v[0].order==M)
            break;
        v.erase(v.begin());
        i++;
    }
    cout << i+1<<endl;
    }
}