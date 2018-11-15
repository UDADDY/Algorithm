#include<iostream>
#include<vector>
using namespace std;

void B(vector<int>* v)
{
    (*v).push_back(50);
    (*v).push_back(60);
    cout << "B = " << (*v)[4]<<endl;
}

void A(vector<int>* v)
{
    (*v).push_back(30);
    (*v).push_back(40);
    B(v);
}


int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(20);
    A(&a);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] <<endl;
    }
}