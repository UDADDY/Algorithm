#include<iostream>
#include<queue>

using namespace std;

queue<string> q;

void push(string value)
{
    q.push(value);
}

void pop()
{
    if(q.size()==0)
    {
        cout << "-1"<<endl;
        return;
    }
    cout << q.front()<<endl;
    q.pop();
}

void size()
{
    cout << q.size()<<endl;
}

void empty()
{
    if(q.empty())
        cout <<"1"<<endl;
    else
        cout <<"0"<<endl;
}

void front()
{
    if(q.size()==0)
    {
        cout <<"-1"<<endl;
        return;
    }
    cout << q.front()<<endl;
}

void back()
{
    if(q.size()==0)
    {
        cout <<"-1"<<endl;
        return;
    }
    cout << q.back()<<endl;
}

void A(string command)
{
    if(command.compare(0,4,"push")==0)
    {
        string pushV(command,5,command.size()-5);
        push(pushV);
    }
    if(command.compare("pop")==0)
    {
        pop();
    }
    if(command.compare("size")==0)
    {
        size();
    }
    if(command.compare("empty")==0)
    {
        empty();
    }
    if(command.compare("front")==0)
    {
        front();
    }
    if(command.compare("back")==0)
    {
        back();
    }
}


int main()
{
    
    int T;
    cin >> T;
	cin.ignore();
    while(T--)
    {
        string command;
        std::getline(std::cin, command);
        A(command);

    }
    return 0;
}