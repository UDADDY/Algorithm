#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Fibonacci
{

public:
   Fibonacci()
   {
      for (int i = 0; i < 100; i++)
      {
         value[i] = -1;
      }
      digit=0;
   }

public:
   int value[100];
   int digit;
};

int main()
{
   int N;
   scanf("%d", &N);
   Fibonacci fibo[100];
   fibo[0].value[0] = 0;
   fibo[0].digit = 1;
   fibo[1].value[0] = 1;
   fibo[1].digit = 1;

   for (int i = 2; i <= N; i++)
   {
      int digit1, digit2;
      digit1 = fibo[i - 1].digit;
      digit2 = fibo[i - 2].digit;
      for (int k = 0; k < digit1; k++)
      {
         fibo[i].value[k] = fibo[i - 1].value[k];
      }
      for (int k = 0; k < digit2; k++)
      {
         fibo[i].value[k] += fibo[i - 2].value[k];
      }
      for (int k = 0; k < digit1; k++)
      {
         if (fibo[i].value[k] >= 10)
         {
            if (fibo[i].value[k + 1] == -1)
            {
               fibo[i].value[k + 1] = 0;
               fibo[i].digit++;
            }
            fibo[i].value[k + 1]++;
            fibo[i].value[k] -= 10;
         }
      }
      fibo[i].digit += fibo[i - 1].digit;

   }

   //cout << "Digit : "<<fibo[N].digit<<endl;
   //cout << fibo[N].value[0]<<" "<<fibo[N].value[1]<<endl;
   for(int i = fibo[N].digit-1;0<=i;i--)
   {
     cout << fibo[N].value[i];
   }

   return 0;
}
