#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //printf("Hello world!\n");
    long t,q,i,j,k;
    scanf("%ld",&t);
    for(q=0;q<t;q++)
    {
        long l,r;

        scanf("%ld %ld",&l,&r);
        for(i=l;i<=r;i++)
        {
            k=0;
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    k++;
                }
                if(k>1)
                {
                    break;
                }
            }
            if(k==1 && i!=1)
                printf("%ld\n",i);
        }
    }
    return 0;
}
