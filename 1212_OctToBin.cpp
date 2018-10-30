#include <iostream>
#include <vector>

using namespace std;

int powOct(int n,int power)
{
  for(int i=0;i<power;i++)
  {
    n*=8;
  }
  return n;
}

int main()
{
  int N;
  scanf("%d",&N );
  int integer=0;
  int power=0;

  // Oct To Int
  while (true) {
    /* code */
    if(N==0)
      break;
    integer+=powOct((N%10),power);
    N/=10;
    power++;
  }

  std::vector<int> bin;
  // Int To Bin
  while (true) {
    /* code */
    if(integer==0)
      break;
    if(integer%2==0)
      bin.push_back(0);
    else
      bin.push_back(1);
    integer/=2;
  }

  for(int i=bin.size()-1;0<=i;i--)
  {
    cout << bin[i];
  }
  printf("\n");
}
