#include<iostream>

using namespace std;

int main()
{
    int N;
    scanf("%d",&N);

    if(N==0)
    {
        cout << 1<<endl;
        return 0;
    }

    int cnt=0;
    int alt = N;
    while(alt)
    {
        cnt++;
        alt/=10;
    }
    
    int one=1;
    int sum=0;

    for(int i=0;i<cnt;i++)
    {
        sum+=one;
        one*=10;
    }

    if(N>=sum)
        cout << cnt<<endl;
    else
        cout << cnt-1;

}