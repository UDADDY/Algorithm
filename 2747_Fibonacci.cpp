#include <iostream>

using namespace std;

int fibonacci[50]={0,1};

int main()
{
  int N;
  cin >> N;

  for(int i=2;i<=N;i++)
  {
    fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
  }
  cout << fibonacci[N]<<endl;

  return 0;
}
