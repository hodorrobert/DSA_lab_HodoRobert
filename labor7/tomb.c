//
// Created by hodor on 13/04/2021.
//

#include "tomb.h"
#include <stdlib.h>
#include <stdio.h>
IntArray *createArray(int size)
{
    IntArray *array=(IntArray*)malloc(sizeof(IntArray));
    if(array==NULL)
    {
        printf("Error \n");
        return NULL;
    }
    array->meret=size;
    array->szamok=(int *)malloc(array->meret * sizeof(int));
    if(array->szamok==NULL)
    {
        printf("Error\n");
        free(array);
        return NULL;
    }
    return array;
}
void tolt(IntArray **array)
{
    IntArray *tempA=createArray(20);
    int n=0;
    printf("A szamok:");
    for(int i=1;i<=20;i++)
    {
        tempA->szamok[i]=n;
        printf("%d ", tempA->szamok[i]);
        n+=2;
    }
    (*array)=tempA;
    free(tempA);

}
