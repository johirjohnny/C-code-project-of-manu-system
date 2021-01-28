#include <iostream>
#include<stdio.h>
#include<string.h>
#define MAX 100


void takeInputFromKeyboard(struct player p[]);
void findBestBatsman(struct player p[]);
void displayAllPlayersInfo(struct player p[]);
void display();
int x ,i ;
char input;
int ispopulated = 0;


struct player{
    char name[20];
    char phoneNo[20];
    float battingScore;

};


int main(){

    struct player p[MAX];

    printf("\n======= BCB Cricketers Batting Statistics Menu System =========\n");
        while(1){
            display();
            printf("Enter your choice:");
            input = getc(stdin);
            fflush(stdin);
            switch(input){
                case 'x':
                takeInputFromKeyboard(p);
                ispopulated=1;
                break;
                case 'y':
                    if (ispopulated==1){
                    findBestBatsman(p);
                    break;
                    }
                    else
                        printf("NO BATTING SCORE FOUND,Please populate your batting scores first.\n");
                        break;
                case 'z':
                    if (ispopulated==1){
                    displayAllPlayersInfo(p);
                    break;
                    }
                    else
                        printf("NO BATTING SCORE FOUND,Please populate your batting scores first.\n");
                        break;
                case 'q':
                    return 0;
                default:
                  printf("invalid input\n");
                  break;
                }
            }

    return 0;
}


void display(){
    printf("Enter x to take batting scores\n");
    printf("Enter y to find and display the highest run\n");
    printf("Enter z to display batting scores of all the Cricketers\n");
    printf("Enter q quit/exit the menu system\n");
    fflush(stdin);
}
void takeInputFromKeyboard(struct player p[MAX]){

    printf("enter the number of players input you want to check: ");
    scanf("%d",&x);

    for(i=0;i<x;i++){


        printf("enter the details of players %d \n" ,i+1);
        printf("enter players name :");

        scanf("%s", p[i].name);

        printf("enter the players phoneNO : ");
        scanf("%s", p[i].phoneNo);

        printf("enter the players batting score: ");
        scanf("%f", &p[i].battingScore);
    }

}
void findBestBatsman(struct player p[MAX]){
    int mx  = p[i].battingScore;
    printf("the highest run of all the batting scores\n:");

    for(i=0; i<x; i++)
    {
        if(p[i].battingScore > mx)
        {
            mx = p[i].battingScore;
        }

    }
    printf("Highest run is : %d\n", mx);
}

void displayAllPlayersInfo(struct player p[MAX])
{
    printf("the batting score is\n");
    int j;
        for(i=0;i<x;i++)
        {
            printf("Player Name-Player Phone No - Batting Score");
            for(j=0; j<=i;j++)
            {
                printf(" \n%s         , %s        , %f        \n", p[i].name, p[i].phoneNo, p[i].battingScore);
            }
        }
}


