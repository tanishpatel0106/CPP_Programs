#include <stdio.h>
#include <math.h>
int main()
{
    int n, c, k,arr[100],m,i;
    scanf("%d", &n);
    m=pow(2,n);
    for(i=0;i<m;i++)
    {
        arr[i]=i;
        for(i=0;i<m;i++)
        {
            for (c = n-1; c >= 0; c--)
            {
                k = arr[i] >> c;
                if (k & 1)
                {
                    printf("true ");
                }
                else
                {
                    printf("false ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}