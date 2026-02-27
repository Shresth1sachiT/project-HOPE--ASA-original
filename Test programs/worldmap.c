#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{


int mapsize = 100;
int map[mapsize*mapsize];
int t;
int l;
for(t = 0; t < mapsize*mapsize; t++)
{
 map[t] = 0;
}

//make the path
int currPos[2] = {0,50};
map[currPos[0]+(currPos[1]*mapsize)] = 1;
int landTiles = 20000;
int dir[2];

for(l = 0; l < landTiles; l++)
{
    
    int next[2] = {currPos[0]+dir[0], currPos[1]+dir[1]};

    map[next[0]+(next[1]*mapsize)] = 1;
    currPos = next;
}

//Draw the map
for(var row = 0; row < mapSize; row++){
    for(var col = 0; col < mapSize; col++){
        cout << map[col+(row*mapSize)];
    }
    cout << endl;
}

getch();
}
