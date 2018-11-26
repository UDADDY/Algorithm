#include<iostream>
using namespace std;
long long int Euclidean(long long int A,long long int B)
{
    if(A<B)
        swap(A,B);
    while(true)
    {
        if(B==0)
            break;
        long long int tmp = A;
        A=B;
        B=tmp%B;
    }
    return A;
}


long long int LCM(long long int A,long long int B)
{
    
    long long int gcd = Euclidean(A,B);

    return A*B/gcd;
}

int main()
{
    long long int A,B;
    cin >> A >> B;
    long long int lcm = LCM(A,B);
    cout << lcm;
}