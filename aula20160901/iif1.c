#include<stdio.h>
#include <float.h> //RAND_MAX
#include <time.h>
#include <stdlib.h>
int main()
{
    int i;
    srand(time(0));
    if(1.0 > 1.0 - DBL_EPSILON/4.0)
        printf("maior\n");
    else
        printf("igual ?!?! delta = %le",DBL_EPSILON/4.0);
        for(i=0; i< 10; i++)
    printf("%g\n",(float)rand()/(float)RAND_MAX);

    return 0;
}
