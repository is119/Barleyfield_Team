#include <stdio.h>
#include <windows.h>
#include <conio.h>
void printMaze(char *strs[][36])
{
    int i,j;
    for(i=0;i<25;i++)
    {
        for(j=0;j<36;j++)
        {
            printf("%s",strs[i][j]);
        }
        printf("\n");
    }    
}
void goalin(void)
{
    int i;
    system("cls");
    
    while(i<25)
    {
        printf("Congratulation! You Win!!\n");
        i++;
    }
}
int main(void)
{
    int key=0;
    int x=1,y=0; //별의 좌표역할 변수 
     
    char* strs[25][36]={{"■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■"},
                        {"  ","  ","  ","  ","  ","  ","  ","  ","  ","■","  ","  ","  ","■","■","■","■","■","■","■","  ","  ","  ","  ","■","  ","  ","■","■","  ","  ","  ","  ","  ","  ","■"},
                        {"■","■","■","■","■","■","■","■","  ","■","  ","■","  ","■","  ","  ","  ","  ","  ","  ","  ","■","■","  ","  ","■","  ","  ","■","  ","■","■","■","■","  ","■"},
                        {"  ","  ","  ","■","■","  ","  ","  ","  ","■","  ","■","  ","  ","  ","■","■","■","■","  ","■","■","■","  ","■","■","■","  ","■","  ","  ","■","■","  ","  ","■"},
                        {"  ","  ","  ","■","■","  ","■","■","  ","  ","  ","■","■","■","■","■","  ","  ","  ","  ","■","  ","  ","  ","■","■","  ","  ","  ","■","  ","■","■","a ","■","■"},
                        {"  ","w ","  ","■","  ","  ","  ","■","  ","■","  ","■","■","■","  ","  ","  ","■","■","  ","■","  ","■","■","■","  ","  ","■","  ","■","  ","  ","■","■","■","■"},
                        {"a ","s ","d ","■","  ","■","  ","■","  ","■","  ","  ","  ","■","■","  ","■","■","■","■","■","  ","  ","  ","■","  ","■","■","  ","  ","■","  ","  ","■","■","■"},
                        {"  ","  ","  ","■","  ","■","  ","  ","  ","■","■","■","  ","■","■","  ","■","■","■","■","■","■","■","  ","■","  ","■","■","■","  ","■","■","  ","  ","  ","■"},
                        {"  ","  ","  ","■","  ","■","■","■","■","■","■","■","  ","  ","  ","  ","  ","  ","  ","  ","■","■","■","  ","  ","  ","  ","  ","■","  ","  ","  ","■","■","  ","■"},
                        {"  ","  ","  ","■","  ","  ","  ","  ","  ","■","■","■","■","  ","■","■","■","  ","■","  ","  ","■","■","■","■","  ","■","  ","■","■","■","  ","  ","■","  ","■"},
                        {"  ","  ","  ","■","■","  ","■","■","  ","■","■","■","■","  ","■","■","■","  ","■","■","  ","■","■","■","  ","  ","■","  ","  ","■","■","■","  ","■","  ","■"},
                        {"  ","  ","  ","■","  ","  ","■","■","  ","  ","  ","  ","  ","  ","■","  ","  ","  ","■","■","  ","  ","■","  ","  ","  ","■","■","  ","■","■","  ","  ","■","  ","■"},
                        {"  ","  ","  ","■","  ","■","■","■","■","■","  ","■","■","  ","■","■","■","  ","■","■","■","  ","  ","  ","■","  ","  ","  ","■","■","  ","  ","■","■","  ","■"},
                        {"  ","  ","  ","■","  ","  ","  ","■","■","■","  ","  ","■","  ","  ","■","■","  ","  ","■","■","■","■","■","■","■","■","  ","■","  ","  ","■","■","■","  ","■"},
                        {"  ","  ","  ","■","■","■","  ","■","■","■","■","■","■","■","  ","  ","■","■","  ","■","■","■","■","  ","  ","  ","■","  ","  ","■","  ","  ","  ","■","  ","■"},
                        {"  ","  ","  ","■","■","■","  ","■","■","■","■","■","  ","  ","  ","■","  ","  ","  ","■","■","■","  ","  ","■","  ","  ","  ","  ","■","■","■","  ","  ","  ","■"},
                        {"  ","  ","  ","■","■","  ","  ","■","■","■","■","■","  ","■","■","■","  ","■","  ","  ","  ","  ","■","  ","■","■","■","■","  ","■","■","■","■","■","  ","■"},
                        {"  ","  ","  ","■","■","  ","■","■","■","■","  ","  ","  ","■","■","  ","  ","■","  ","■","■","  ","■","  ","  ","  ","■","  ","■","  ","  ","  ","  ","  ","  ","■"},
                        {"  ","  ","  ","■","■","  ","■","■","■","  ","  ","■","  ","■","■","  ","■","■","■","■","■","  ","  ","■","  ","■","  ","■","■","  ","■","■","■","  ","■","■"},
                        {"  ","  ","  ","■","  ","  ","■","■","  ","  ","■","■","  ","  ","■","  ","  ","  ","  ","  ","■","■","  ","  ","■","■","■","  ","■","  ","  ","  ","■","■","■","■"},
                        {"  ","  ","  ","■","  ","■","■","■","■","  ","■","■","■","  ","■","■","  ","  ","■","  ","■","■","■","  ","  ","  ","■","  ","  ","■","■","  ","  ","■","■","■"},
                        {"  ","  ","  ","■","  ","  ","  ","■","■","  ","■","■","■","  ","■","■","  ","■","■","  ","■","  ","  ","  ","■","ⓑ","■","■","  ","■","■","■","  ","  ","b ","■"},
                        {"  ","  ","  ","■","■","■","  ","■","■","  ","■","■","■","  ","■","  ","  ","■","■","  ","■","■","■","■","■","  ","  ","■","ⓒ","■","■","■","■","■","■","■"},
                        {"  ","  ","  ","■","c ","  ","  ","■","■","■","■","■","■","  ","  ","  ","■","■","  ","  ","  ","  ","  ","ⓐ","  ","  ","  ","  ","  ","  ","  ","  ","□","Go","al","□"},
                        {"  ","  ","  ","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■","■"}};

    strs[x][y]="★";
    printMaze(strs);
    
    char moving=0;
    
    while(1)
    {
            moving=getch();
            switch(moving)
            {
                case 'w':
                    if(strs[x-1][y]=="■")
                        continue;
                    else if(strs[x-1][y]=="  "){
                        strs[x--][y]="  ";
                        strs[x][y]="★";
                    }
                    break;
                case 'a':
                    if(strs[x][y-1]=="■")
                        continue;
                    else if(strs[x][y-1]=="  "){
                        strs[x][y--]="  ";
                        strs[x][y]="★";
                    }
                    else if(strs[x][y-1]=="c "){
                        strs[x][y--]="  ";
                        strs[x][y]="☆";
                        key=3;
                    }
                    break;
                case 's':
                    if(strs[x+1][y]=="■")
                        continue;
                    else if(strs[x+1][y]=="  "){
                        strs[x++][y]="  ";
                        strs[x][y]="★";
                    }
                    else if(strs[x+1][y]=="a "){
                        strs[x++][y]="  ";
                        strs[x][y]="☆";
                        key=1;
                    }
                    else if(strs[x+1][y]=="ⓑ"){
                        if(key==2){
                        strs[x++][y]="  ";
                        strs[x][y]="☆";
                        }
                        else
                            continue;
                    }
                    else if(strs[x+1][y]=="ⓒ"){
                        if(key==3){
                        strs[x++][y]="  ";
                        strs[x][y]="☆";
                        }
                        else
                            continue;
                    }
                    break;
                case 'd':
                    if(strs[x][y+1]=="■")
                        continue;
                    else if(strs[x][y+1]=="  "){
                        strs[x][y++]="  ";
                        strs[x][y]="★";
                    }
                    else if(strs[x][y+1]=="b "){
                        strs[x][y++]="  ";
                        strs[x][y]="☆";
                        key=2;
                    }
                    else if(strs[x][y+1]=="ⓐ"){
                        if(key==1){
                        strs[x][y++]="  ";
                        strs[x][y]="☆";
                        }
                        else
                            continue;
                    }
                    else if(strs[x][y+1]=="□"){
                        strs[x][y++]="  ";
                        strs[x][y]="  ";
                        goto Goal;
                    }
                    break;
            }
            system("cls");
            printMaze(strs);
      
    }
    Goal:
       goalin();
    system("pause");
    return 0;
}
