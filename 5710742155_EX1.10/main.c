#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter integer: ");
    scanf("%d",&x);
    printf("Convert to base 8: %o\n",x);
    printf("Convert to base 16: %x\n",x);
    system("pause");
    return 0;
}
