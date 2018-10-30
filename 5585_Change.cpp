#include <iostream>

using namespace std;

int main()
{
  int N;
  scanf("%d",&N);
  int cnt=0,change = 1000-N;        //620
  int obak = change/500;            //1
  int bak = change/100-5*obak;    //1
  int osip = (change%100)/50;       //0
  int sip = (change%100)/10-5*osip; //2
  int o = (change%10)/5;            //0
  int il = (change%10)-5*o;         //0
  cnt = obak+bak+osip+sip+o+il;
  cout << cnt;
  return 0;
}
