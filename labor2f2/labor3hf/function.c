//
// Created by hodor on 08/03/2021.
//

#include "function.h"
#include <stdio.h>
#include <math.h>

void ora(int second)
{
int hour=0,minute=0;
minute=second/60;
second=second%60;
hour=minute/60;
minute=minute%60;
printf("%d ora %d perc %d maspdperc", hour, minute, second);
    return 0;
}
void tavolsag(int x1, int y1,int x2, int y2)
{
    double tav=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%lf", tav);
}
void gyok(int a, int b, int c)
{
    int delta;
    delta=b*b-(4*a*c);
    double x1,x2;
    x1=(-b+sqrt(delta))/2*a;
    x1=(-b-sqrt(delta))/2*a;
    printf("x1= %lf ", x1);
    printf("x2= %lf ", x2);

}