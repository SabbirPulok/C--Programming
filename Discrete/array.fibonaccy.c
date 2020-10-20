#include<stdio.h>
int main()
{
    //freopen("arr.txt","r",stdin);
    //freopen("arr1.txt","w",stdout);

    int f[100],i,j,count=0;
    f[0]=0,f[1]=1;

   printf("How many number:\n");
    scanf("%d",&j);
    if(j==0)
    {
        printf("There are no numbers on this series.\n");
    }
    else if(j==1)
        printf("The 1st number of this series : %d\nThe step taken for this algorithm %d, ",f[0],count+1);
    else if(j==2)
        printf("The 2nd number of this series : %d\nThe step taken for this algorithm %d, ",f[1],count+1);
    else{

    for(i=2;i<j;i++)
    {
        f[i]=f[i-2]+f[i-1];
        count++;
    }
    //printf("\nFibonacci number are:");
    /*for(i=0;i<j;i++)
    {
        printf("%d ",f[i]);
    }*/
    printf("The %d th number of the fibonacci series %d\n The step taken for this algorithm %d\n",j,f[j-1],count);
    }
}
