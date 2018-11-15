#include <iostream>
#include <vector>

using namespace std;

class Gap{
    public:
        Gap(int a,int b,int c)
        {
            A = a;
            B=b;
            gap=c;
        }
        int gap,A,B;
};

vector<Gap> v;

void A(vector<int>* primeV,int N)
{
    int prime[10001];
    for(int i=0;i<10001;i++)
    {
        prime[i]=-1;
    }
    for(int i=2;i<=N;i++)
    {
        if(prime[i]==-1)
        {
            prime[i]=1;
            (*primeV).push_back(i);
            for(int j=i+i;j<=N;j+=i)
            {
                prime[j]=0;
            }
        }
        else
        {
            continue;
        }
    }
}

bool isPrime(vector<int>* primeV,int N)
{
    for(int i=0;i<(*primeV).size();i++)
    {
        if((*primeV)[i]==N)
            return true;
        if((*primeV)[i]>N)
            break;
    }
    return false;
}

void B(vector<int>* primeV,int N)
{
    for(int i=0;i<(*primeV).size();i++)
    {
        int remainder = N-(*primeV)[i];
        if((*primeV)[i]-remainder>0)
            continue;
        if(isPrime(primeV,remainder))
        {
            // Got it!
            v.push_back(Gap((*primeV)[i],remainder,abs((*primeV)[i]-remainder)));
        }
    }

    int minIndex=0;
    for(int i=0;i<v.size();i++)
    {
        if(v[minIndex].gap>v[i].gap)
            minIndex=i;
    }

    cout << v[minIndex].A << " "<<v[minIndex].B<<endl;


}


int main()
{
    cin.tie(NULL); 
    int T,length=0;
    vector<int> primeV;
    A(&primeV,10000);
    cin >> T;
    while(T--)
    {   
        v.clear();
        int input;
        cin >> input;
        B(&primeV,input);
    }
    return 0;
}