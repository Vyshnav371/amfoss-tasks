#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int* cities[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &cities[i]);
    }
    int q;
    scanf("%d", &q);
    int a;
    int b;

    for(int i = 0; i < q; i++)
    {
        int sum = 0;
        scanf("%d %d", &a, &b);
        for(int j = (a-1); j < b; j ++)
        {
            sum += (int)cities[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
