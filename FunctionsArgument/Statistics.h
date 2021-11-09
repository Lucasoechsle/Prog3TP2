

#ifndef TRABAJOFINAL_STATISTICS_H
#define TRABAJOFINAL_STATISTICS_H



void Statistics(string path) {
    Lista<int> lista;
    Lista<int> lista1;
    int aux;
    fstream fin;
    fin.open(path, ios::in);
    Lista<int> listainfectados;
    float Dead = 0;
    float numbTest = 0;
    Lista<float> listaTotal;
    Lista<float> listaInfected;
    float Infected = 0;

    int AgeInfected[10];
    int AgeDead[10];
    Test test;
    for (int l = 0; l < 10; l++) {
        AgeDead[l] = 0;
        AgeInfected[l] = 0;
    }
    if (fin.fail()) {
        cout << "No se pudo abrir el archivo tipo  csv" << endl;
    } else {

        string line;
        getline(fin, line);


        while (getline(fin, line)) {
            test.Data(line);
            listaTotal.insertarPrimero(0);
            numbTest++;


            if (test.classification() == "Confirmado") {
               Infected++;
               listaInfected.insertarPrimero(1);
            }


            if (test.Deead() == "SI") {
                Dead++;

            }

        }
    }


        cout << "**Usted eligio Estadisticas**" << endl;
        cout<< "Aguarde un segundo mientras traemos su informacion..."<<endl;
        cout << "1. Cantidad total test: " << listaTotal.getTamanio() << endl;
        cout << "2. Cantidad total de contagiados: " << listaInfected.getTamanio()  << endl;
       cout << "3. Cantidad total de fallecidos: " << Dead << endl;
        float PerDead = ((Dead / Infected) * 100);
        float PerInfected = ((Infected / listaTotal.getTamanio()) * 100);
        cout << "4. Porcentaje de Contagiados: " << PerInfected<< "%" <<endl;
        cout << "5. Porcentaje de Muertos respecto de Contagiados: " << PerDead<< "%" <<endl;

    }



#endif //TRABAJOFINAL_STATISTICS_H
