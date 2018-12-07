#include<iostream>
#define CHK 1
#define NONE 0

using namespace std;

int N,M,sum;
int i=0;

void chk(int arr[])
{
    for(int alt=M;alt;)
    {
        i++;
        if(i>N)
        {
            i-=N;
        }
        if(arr[i]==NONE)
        {
            alt--;
        }

    }
}

void J(int* arr)
{
    chk(arr);
    arr[i]=CHK;
    printf("%d",i);
}

int main()
{
    scanf("%d %d",&N,&M);
    sum=N;

    int arr[5001]={NONE,};

    printf("<");
    while(sum!=0){
        /* code */
        J(arr);
        sum--;
        if(sum!=0)
        {
            printf(", ");
        }
    }
    printf(">");
    
}