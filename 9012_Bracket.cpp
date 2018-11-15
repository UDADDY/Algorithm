#include<iostream>
#include<vector>

using namespace std;

void bracket(string str)
{
    if(str.size()%2==1)
    {
        cout << "NO"<<endl;
        return;
    }
    int plus=0,minus=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            plus++;
        }
        else
        {
            if(minus>=plus)
            {
                cout << "NO"<<endl;
                return;
            }
            minus++;

        }
    }
    if(plus==minus)
    {
        cout<<"YES"<<endl;
    }
    
    else
    {
        cout<<"NO"<<endl;
    }
    
    return;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        string str;
        cin >> str;
        bracket(str);
    }
}