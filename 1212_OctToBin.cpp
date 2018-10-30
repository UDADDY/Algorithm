#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  string str;
  bool first = true;
  cin >> str;
  if(str.size()==1 && str[0]-48==0)
  {
    cout << "0"<<endl;
    return 0;
  }
  for(int i=0;i<str.size();i++)
  {
    int oct = str[i]-48;
    int bin[3];
    for(int j=0;j<3;j++)
    {
      bin[j]=oct%2;
      oct/=2;
    }
    for(int j=2;0<=j;j--)
    {
      if(i==0)
      {
        if(first && bin[j]==0)
          cout << "";
        else if(first && bin[j]==1)
        {
          cout << bin[j];
          first=false;
        }
        else
          cout << bin[j];
      }
      else
        cout << bin[j];
    }
  }
}
