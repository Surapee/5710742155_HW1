#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%-10d\n", 10000);
    printf("%c\n", "This is a string");
    printf("%*.*lf\n", 8, 3, 1024.987654);
    printf("% ld\n%+ld\n", 1000000, 1000000);
    printf("%10.2E\n", 444.93738);
    printf("%d\n", 10.987);
    system("pause");
    return 0;
}
