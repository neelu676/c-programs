#include<stdio.h>

int main()
{
    int x = 5;
    float y = 6.5;

    void *ptr = &x;
    printf("%d\n", *(int*)ptr);     // correct

    ptr = &y;
    printf("%f\n", *(float*)ptr);   // now also correct

    return 0;
}

