#include<iostream>

using namespace std;

int chk(int i)
{
    while(i)
    {
        if(i%1000==666) return 1;
        i/=10;
    }
    return 0;
}


int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=0;N;i++)
    {
        N-=chk(i);
    }
    printf("%d",i-1);
}