#include <iostream>

int main()
{
    int N;
    scanf("%d",&N);
    int A=0;
    if(N==64)
    {
        printf("0");
        return 0;
    }

    while(true)
    {
        /* code */
        if(N==0)
            break;
        if(N%2==1)
        {
            A++;
        }   
        N/=2;
    }
    printf("%d",A);
    
    return 0;
}