#include<iostream>

using namespace std;

long long int arr[106]={0,1,1,1,2,2};

long long int padovan(int N)
{
    if(1<=N && N<=5)
    {
        return arr[N];
    }
    if(arr[N]!=0) return arr[N];
    return arr[N] = padovan(N-1)+padovan(N-5);
}
int main()
{
    int T;
    scanf("%d",&T);
    
    while(T--){
        /* code */

    int N;
    scanf("%d",&N);
    printf("%lld\n",padovan(N));
    }
    

}