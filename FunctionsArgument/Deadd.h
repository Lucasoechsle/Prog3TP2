

#ifndef TRABAJOFINAL_DEADD_H
#define TRABAJOFINAL_DEADD_H


void QuickSortCity(Cities[], int, int);

void Deadd(string path, int cantProv) {
    fstream fin;
    fin.open(path, ios::in);
    Test test;
    const string ListProvincias[] = {"CABA", "Buenos Aires", "Catamarca", "Chaco", "Chubut", "Córdoba", "Corrientes",
                                     "Entre Ríos", "Formosa", "Jujuy", "La Pampa", "La Rioja", "Mendoza", "Misiones",
                                     "Neuquén", "Río Negro", "Salta", "San Juan", "San Luis", "Santa Cruz", "Santa Fe",
                                     "Santiago del Estero", "Tierra del Fuego", "Tucumán"};
    Cities DeadProv[24];

    for (int i = 0; i < 24; i++) {
        DeadProv[i] = Cities(ListProvincias[i], 0);
    }


    if (fin.fail()) {
        cout << "No se pudo abrir el archivo tipo csv" << endl;
    } else {

        string line;
        getline(fin, line);


        while (getline(fin, line)) {
            test.Data(line);
                if (test.Deead() == "SI") {
                    test.Data(line);
                    for (int l = 0; l < 24; l++) {
                        if (test.city() == DeadProv[l].getNombre()) {
                            DeadProv[l].ICounter();
                            break;
                        }
                    }
                }
            }




            QuickSortCity(DeadProv, 0, 23);
            cout << "Fallecidos por provincia: " << endl;
            for (int i = 0; i < cantProv; i++) {
                cout << DeadProv[i] << endl;
            }
    }
}




#endif //TRABAJOFINAL_DEADD_H
