#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ST -100
#define FIN 100
int main(){
    int changex;
    int changey;
    int x,y; 
    int newnum;
    int **a=NULL;
    printf("Enter matrix size: y x\n");
    scanf("%d %d", &x,&y);
    a=(int **) calloc(x,sizeof(int *));

    a=(int **) calloc(x,sizeof(int *));
    for (int i=0;i<x;i++)
        a[i]=(int **) calloc(y,sizeof(int *));

    srand(time(0));
    for (int i=0;i<x;++i){ 
        for (int j=0;j<y;++j){
            *(*(a+i)+j)=rand() % (FIN-ST +1)+ST;  
        }
    }
    printf("main matrix:\n");
    for (int i=0;i<x;++i){
        for (int j=0;j<y;++j){
            printf("%6d ",*(*(a+i)+j));   
    }
            printf("\n");
    }
    for (int m=0;m<1;){
        printf("Enter index, which u wanna change from 0 to x-1/y-1, to stop make -1,-1, first y:\n");
        scanf("%d", &changex);
        printf("Now enter x:\n");
        scanf("%d", &changey);
        if (changex==-1 && changey==-1){printf("TY for using my code!!!\n");break;}
        printf("Enter new number:\n");
        scanf("%d",&newnum);
        *(*(a+changex)+changey) = newnum;
        printf("New matrix:\n");
        for (int i=0;i<x;++i){
            for (int j=0;j<y;++j){
                printf("%6d ",*(*(a+i)+j));   
        }
                printf("\n");
        }
        for (int i=0;i<x;i++)
            free(a[i]);
        free(a);
    }



}