#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))




int N,M;


int T,k,P;

int temp[10024][10024];

int i,j;

int check(int *sum2,int sum3)
{
    for(i=1;i<=N;i++)
    {
        if(sum2[i]==sum3)
        {
            return i;
        }
    }    
}


int main()
{    
    scanf("%d %d",&N,&M);
    for(i=1;i<=N;i++)
    {
        
        for(j=1;j<=M+1;j++)
        {
            
            scanf("%d",&temp[i][j]);
        }
        
    }
    int sum=0;
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=1;j++)
        {
            sum+=temp[i][j];
            
        }
    }
    int sum1=0;
    for(i=1;i<=N;i++)
    {
        for(j=2;j<=M+1;j++)
        {
            sum1+=temp[i][j];
        }
    }
    T=sum+sum1;
    printf("%d ",T);

    
    int sum2[10024];
    int sum3=0;
    for(i=1;i<=N;i++)
    {
        for(j=2;j<=M+1;j++)
        {
            sum2[i]+=temp[i][j];
        }
        sum3=min(sum3,sum2[i]);
    
    }
    k=check(sum2,sum3);
    printf("%d ",k);

    P=-sum3;
    printf("%d ",P);
    


    return 0;    
}
    


    
    
    

