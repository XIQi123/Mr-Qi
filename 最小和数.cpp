#include <stdio.h>
int main(){
    int i, x;
    scanf("%d", &x);
    for (i = 2; i < x; i++)
    {
        while (x != i && x % i == 0)
        {
            printf("%d*", i);
            x = x / i;
        }
    }
    printf("%d", x);
    return x;
}
