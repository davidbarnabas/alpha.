#include <stdio.h>
int main()
{
    double n1, n2, n3;
    printf("Enter three n: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3)
        printf("%.2lf is the largest n.", n1);
    else if (n2>=n1 && n2>=n3)
        printf("%.2lf is the largest n.", n2);
    else
        printf("%.2lf is the largest n.", n3);
    return 0;
}
