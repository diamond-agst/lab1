#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
int incidence[50][50]={0}, adjacency[50][50]={0};
int option, vertices , arcs;
int m, n;
int main()
{
    while(1)
    {
        printf("Choose option:\n");
        printf("1.Incidence matrix input\n");
        printf("2.incidence matrix output\n");
        printf("3.Adjacency matrix output\n");
        printf("4.Displaying an adjacency list \n");
        printf("5.Exit\n");
        scanf("%d",&option);
   if(option==1)
    {
        printf("\nEnter the number of vertices:  ");
        scanf("%d",&vertices);
        printf("\nEnter the number of arcs:  ");
        scanf("%d",&arcs);
        printf("\nEnter incidence matrices:\n");
        for( int a=0;a<arcs;a++)
        {
            for( int j=0;j<vertices;j++)
            {
                scanf("%d",&incidence[a][j]);
            }
        }
    }
    if(option==2)
    {
        printf("\nEnter incidence matrices\n");
        for( int a=0;a<arcs;a++)
        {
            printf("\n");
            for( int j=0;j<vertices;j++)
            {
                printf("  %d",incidence[a][j]);
            }
        }
    }
    if(option==3)
    {
        printf("\nEnter incidence matrices:\n");
        for( int a=0;a<arcs;a++)
        {
            for(int j=0;j<vertices;j++)
            {
                if(incidence[a][j]==-1)
                {
                    m=j;
                }
                if(incidence[a][j]==1)
                {
                    n=j;
                }
                if(incidence[a][j]==2)
                {
                    m=j;
                    n=j;
                }
            }
            adjacency[m][n]=1;
        }
        for( int m=0;m<vertices;m++)
        {
            printf("\n");
            for( int n=0;n<vertices;n++)
            {
              printf("%d  ",adjacency[m][n]);
            }
        }
    }
    if(option==4)
    {
        printf("\nEnter incidence matrices:\n");
        for( int m=0;m<vertices;m++)
        {
            printf("%d:  ",m+1);
        for( int n=0;n<vertices;n++)
        {
            if(adjacency[m][n]==1)
            printf("%d",n+1);
        }
            printf("0\n");
        }
    }
    if(option==5)
    {
        return(1);
    }
  }
}
