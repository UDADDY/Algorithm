#include<iostream>
#define W 1
#define B -1

using namespace std;


class Coord
{
    public:
        int x,y;
        Coord(int x,int y)
        {
            this->x=x;
            this->y=y;
        }
};

int map[60][60];
int M,N;

void mapInit();
int getMapChange(Coord startP);
int getMapChangeW(Coord startP);
int getMapChangeB(Coord startP);
int uStrlen(char str[]);

int main()
{
    cin >> M >> N;
    mapInit();
    int height = M-7;
    int width = N-7;
    Coord startP(0,0);

    int min=M*N;

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            startP.x=i,startP.y=j;
            int ret = getMapChange(startP);
            if(ret<min)
                min = ret;
        }
    }
    cout << min <<endl;



}

void mapInit()
{
    for(int i=0;i<M;i++)
    {
        char charMap[60];
        cin >> charMap;
        for(int k=0;k<N;k++)
        {
            if(charMap[k]=='W')
                map[i][k]=W;
            else
                map[i][k]=B;
        }

    }
}


int getMapChange(Coord startP)
{
    if(getMapChangeW(startP)<getMapChangeB(startP))
        return getMapChangeW(startP);
    else
        return getMapChangeB(startP);

}


int getMapChangeW(Coord startP)
{
    int check=W;
    int change = 0;
    for(int i=startP.x;i<startP.x+8;i++)
    {
        for(int j=startP.y;j<startP.y+8;j++)
        {
            if(map[i][j]==check)
            {

            }
            else
            {
                change++;
            }
            check*=-1;
        }
        check*=-1;
    }
    return change;
}

int getMapChangeB(Coord startP)
{
    int check=B;
    int change = 0;
    for(int i=startP.x;i<startP.x+8;i++)
    {
        for(int j=startP.y;j<startP.y+8;j++)
        {
            if(map[i][j]==check)
            {

            }
            else
            {
                change++;
            }
            check*=-1;
        }
        check*=-1;
    }
    return change;

}