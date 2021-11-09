
#ifndef TRABAJOFINAL_SORTTEST_H
#define TRABAJOFINAL_SORTTEST_H

#include <fstream>
#include <string>
#include <sstream>


void QuickSortTest(Lista<Test> Lista, int front, int back) {
    float i, j;
    Test pivot, aux;
    cout<< "SE EJECUT0 SORT"<<endl;
    pivot = Lista.getDato(Lista.getTamanio() / 2);
    cout<< "SE EJECUTO SORT2"<<endl;
    i = front;
    j = back;;
    cout<< "SE EJECUTO SORT3"<<endl;
    do {
        while (Lista.getDato(i).Date_CUI() < pivot.Date_CUI()) i++;
        while (Lista.getDato(j).Date_CUI() > pivot.Date_CUI()) j--;
        if (i <= j) {
            aux = Lista.getDato(i);
            Lista.getDato(i) = Lista.getDato(j);
            Lista.getDato(j) = aux;
            i++;
            j--;
        }
    } while (i <= j);
    cout<< "SE EJECUTO SORT4"<<endl;
    if (front < j){
        QuickSortTest(Lista, front, j);
        cout<< "SE EJECUTO SORT3"<<endl;
    }
    if (i < back) {
        QuickSortTest(Lista, i, back);
        cout<< "SE EJECUTO SORT3"<<endl;
    }
    cout<< "SE EJECUTA"<<endl;
}

#endif //TRABAJOFINAL_SORTTEST_H
