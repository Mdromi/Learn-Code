#include<stdio.h>
int main()
{
    int n, i, j, p, q, x = 0;
    int ara[5][5];
    int indexNumberCount = 0;
    scanf("%d", &n);

    while(n--)
    {
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                scanf("%d",&ara[i][j]);

                if(ara[i][j] == 1 )
                {
                    x++;
                }
                else if(ara[i][j] != 1 && x == 0){
                    indexNumberCount++;
                }
            }
            printf("\n");
        }

    }

    int finalNum = (13 - (indexNumberCount+1));
    printf("%d\n", finalNum );

    return 0;
}
