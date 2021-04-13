//
// Created by hodor on 13/04/2021.
//

#ifndef LABOR7_TOMB_H
#define LABOR7_TOMB_H
typedef struct {
    int meret;
    int *szamok;
}IntArray;
IntArray* createArray(int size);
void tolt(IntArray **array);

#endif //LABOR7_TOMB_H
