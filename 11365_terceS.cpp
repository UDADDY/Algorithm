#include<iostream>
#include<string>

using namespace std;

int uStrlen(char str[])
{
    int index=0;
    while(str[index]!='\0')
    {
        index++;
    }
    return index;
}

bool uStrcmp(char str1[],char str2[])
{
    int str1Len = uStrlen(str1);
    int str2Len = uStrlen(str2);
    
    if(str1Len!=str2Len)
        return false;
    
    for(int i=0;i<str1Len;i++)
    {
        if(str1[i]!=str2[i])
            return false;
    }
    return true;

}

int main()
{
    
    while(true){
        /* code */
        char input[600];
        cin.getline(input,sizeof(input));
        if(string("END").compare(input)==0)
        {
            break;
        }
        int length = uStrlen(input);
        for(int i=0;i<length;i++)
        {
            printf("%c",input[length-1-i]);
        }
        printf("\n");
    }
    
}