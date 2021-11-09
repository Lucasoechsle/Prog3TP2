

#ifndef TRABAJOFINAL_AGECASES_H
#define TRABAJOFINAL_AGECASES_H

/*
void QuickSort(Lista<float>List(), int front, int back){
    float i, j, pivot;
    float c, aux;


    pivot = List.getTamanio() / 2;
    c =  List.insertar(List.getTamanio() / 2, pivot);
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
        QuickSort(a, front, j); //revisar
    }

    if (i < back) {
        QuickSort(a, i, back);
    }
}
*/
void AgeCases(string path, int year) {
/*
    Lista<Test> ListAge;
    int size = 0;
    Test test;
    fstream fin;
    fin.open(path, ios::in);
    if (fin.fail()) {
        cout << "No se pudo abrir el archivo tipo csv" << endl;
    } else {

        string line;
        getline(fin, line);
        while (getline(fin, line)) {
            test.Data(line);


            if (test.Ages() == year) {
                //QuickSortCity(ListAge,0,ListAge.getTamanio());
                ListAge.insertarPrimero(test);

            }
        }



        //QuickSortCity(ListAge,0,ListAge.getTamanio());

        cout << "Casos de "<< year << endl;
        for (int i = 0; i < ListAge.getTamanio(); i++) {
            cout<<ListAge.getDato(i)<<endl;

        }

    }


*/
    Lista<Test> ListAgeBuenosAires;
    Lista<Test> ListAgeCaba;
    Lista<Test> ListAgeCatamarca;
    Lista<Test> ListAgeChaco;
    Lista<Test> ListAgeChubut;
    Lista<Test> ListAgeCordoba;
    Lista<Test> ListAgeCorrientes;
    Lista<Test> ListAgeEntreRios;
    Lista<Test> ListAgeFormosa;
    Lista<Test> ListAgeJujuy;
    Lista<Test> ListAgeLaPampa;
    Lista<Test> ListAgeLaRioja;
    Lista<Test> ListAgeMendoza;
    Lista<Test> ListAgeMisiones;
    Lista<Test> ListAgeNeuquen;
    Lista<Test> ListAgeRioNegro;
    Lista<Test> ListAgeSalta;
    Lista<Test> ListAgeSanJuan;
    Lista<Test> ListAgeSanLuis;
    Lista<Test> ListAgeSantaCruz;
    Lista<Test> ListAgeSantaFe;
    Lista<Test> ListAgeSantiagoDelEstero;
    Lista<Test> ListAgeTierraDelFuego;
    Lista<Test> ListAgeTucuman;
    Lista<Test> ListAgeNoEspecifica;
    Test test;
    fstream fin;
    fin.open(path, ios::in);
    if (fin.fail()) {
        cout << "No se pudo abrir el archivo tipo csv" << endl;
    } else {

        string line;
        getline(fin, line);
        while (getline(fin, line)) {
            test.Data(line);


            if (test.Ages() == year) {
                if(test.city() == "Buenos Aires"){
                    ListAgeBuenosAires.insertarPrimero(test);
                }
                if(test.city() == "CABA"){
                    ListAgeCaba.insertarPrimero(test);
                }
                if(test.city() == "Catamarca"){
                    ListAgeCatamarca.insertarPrimero(test);
                }
                if(test.city() == "Chaco"){
                    ListAgeChaco.insertarPrimero(test);
                }
                if(test.city() == "Chubut"){
                    ListAgeChubut.insertarPrimero(test);
                }
                if(test.city() == "Córdoba"){
                    ListAgeCordoba.insertarPrimero(test);
                }
                if(test.city() == "Corrientes"){
                    ListAgeCorrientes.insertarPrimero(test);
                }
                if(test.city() == "Entre Ríos"){
                    ListAgeEntreRios.insertarPrimero(test);
                }
                if(test.city() == "Formosa"){
                    ListAgeFormosa.insertarPrimero(test);
                }
                if(test.city() == "Jujuy"){
                    ListAgeJujuy.insertarPrimero(test);
                }
                if(test.city() == "La Pampa"){
                    ListAgeLaPampa.insertarPrimero(test);
                }
                if(test.city() == "La Rioja"){
                    ListAgeLaRioja.insertarPrimero(test);
                }
                if(test.city() == "Mendoza"){
                    ListAgeMendoza.insertarPrimero(test);
                }
                if(test.city() == "Misiones"){
                    ListAgeMisiones.insertarPrimero(test);
                }
                if(test.city() == "Neuquén"){
                    ListAgeNeuquen.insertarPrimero(test);
                }
                if(test.city() == "Rio Negro"){
                    ListAgeRioNegro.insertarPrimero(test);
                }
                if(test.city() == "Salta"){
                    ListAgeSalta.insertarPrimero(test);
                }
                if(test.city() == "San Juan"){
                    ListAgeSanJuan.insertarPrimero(test);
                }
                if(test.city() == "San Luis"){
                    ListAgeSanLuis.insertarPrimero(test);
                }
                if(test.city() == "Santa Cruz"){
                    ListAgeSantaCruz.insertarPrimero(test);
                }
                if(test.city() == "Santa Fe"){
                    ListAgeSantaFe.insertarPrimero(test);
                }
                if(test.city() == "Santiago del Estero"){
                    ListAgeSantiagoDelEstero.insertarPrimero(test);
                }
                if(test.city() == "Tierra del Fuego"){
                    ListAgeTierraDelFuego.insertarPrimero(test);
                }
                if(test.city() == "Tucumán"){
                    ListAgeTucuman.insertarPrimero(test);
                }

            }
        }





        cout << "Casos de "<< year << endl;

        for (int i = 0; i < ListAgeBuenosAires.getTamanio(); i++) {
            cout<<ListAgeBuenosAires.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeCaba.getTamanio(); i++) {
            cout<<ListAgeCaba.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeCatamarca.getTamanio(); i++) {
            cout<<ListAgeCatamarca.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeChaco.getTamanio(); i++) {
            cout<<ListAgeChaco.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeChubut.getTamanio(); i++) {
            cout<<ListAgeChubut.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeCordoba.getTamanio(); i++) {
            cout<<ListAgeCordoba.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeCorrientes.getTamanio(); i++) {
            cout<<ListAgeCorrientes.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeEntreRios.getTamanio(); i++) {
            cout<<ListAgeEntreRios.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeFormosa.getTamanio(); i++) {
            cout<<ListAgeFormosa.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeJujuy.getTamanio(); i++) {
            cout<<ListAgeJujuy.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeLaPampa.getTamanio(); i++) {
            cout<<ListAgeLaPampa.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeMendoza.getTamanio(); i++) {
            cout<<ListAgeMendoza.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeMisiones.getTamanio(); i++) {
            cout<<ListAgeMisiones.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeNeuquen.getTamanio(); i++) {
            cout<<ListAgeNeuquen.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeRioNegro.getTamanio(); i++) {
            cout<<ListAgeRioNegro.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeSalta.getTamanio(); i++) {
            cout<<ListAgeSalta.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeSanJuan.getTamanio(); i++) {
            cout<<ListAgeSanLuis.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeSantaCruz.getTamanio(); i++) {
            cout<<ListAgeSantaCruz.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeSantaFe.getTamanio(); i++) {
            cout<<ListAgeSantaFe.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeSantiagoDelEstero.getTamanio(); i++) {
            cout<<ListAgeSantiagoDelEstero.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeTierraDelFuego.getTamanio(); i++) {
            cout<<ListAgeTierraDelFuego.getDato(i)<<endl;

        }
        for (int i = 0; i < ListAgeTucuman.getTamanio(); i++) {
            cout<<ListAgeTucuman.getDato(i)<<endl;

        }

    }



}



#endif TRABAJOFINAL_AGECASES_H

