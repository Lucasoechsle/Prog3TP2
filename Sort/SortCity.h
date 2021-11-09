

#ifndef TRABAJOFINAL_SORTCITY_H
#define TRABAJOFINAL_SORTCITY_H

#include <fstream>
#include <string>
#include <sstream>


void QuickSortCity(Cities a[], int front, int back) {
    int i, j, pivot;
    Cities c, aux;
    pivot = (front + back) / 2;
    c = a[pivot];
    i = front;
    j = back;

    do {
        while (a[i] > c) i++;
        while (a[j] < c) j--;
        if (i <= j) {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);
    if (front < j) {
        QuickSortCity(a, front, j); //revisar
    }

    if (i < back) {
        QuickSortCity(a, i, back);
    }
}



#endif //TRABAJOFINAL_SORTCITY_H
