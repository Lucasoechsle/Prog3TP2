
#ifndef TRABAJOFINAL_INFECTEDDEAD_H
#define TRABAJOFINAL_INFECTEDDEAD_H

void QuickSortCity(Cities[], int, int);

void InfectedDead(string path, int cantProv) {
    fstream fin;
    fin.open(path, ios::in);
    Test test;
    const string ListProvincias[] = {"CABA", "Buenos Aires", "Catamarca", "Chaco", "Chubut", "Córdoba", "Corrientes",
                                     "Entre Ríos", "Formosa", "Jujuy", "La Pampa", "La Rioja", "Mendoza", "Misiones",
                                     "Neuquén", "Río Negro", "Salta", "San Juan", "San Luis", "Santa Cruz", "Santa Fe",
                                     "Santiago del Estero", "Tierra del Fuego", "Tucumán"};
    Cities InfectedProv[24];
    Cities DeadProv[24];

    for (int i = 0; i < 24; i++) {
        InfectedProv[i] = Cities(ListProvincias[i], 0);
        DeadProv[i] = Cities(ListProvincias[i], 0);
    }


    if (fin.fail()) {
        cout << "No se pudo abrir el archivo tipo csv" << endl;
    } else {

        string line;
        getline(fin, line);


        while (getline(fin, line)) {
            test.Data(line);
            if (test.classification() == "Confirmado") {
                for (int l = 0; l < 24; l++) {
                    if (test.city() == InfectedProv[l].getNombre()) {
                        InfectedProv[l].ICounter();
                        break;
                    }
                }
            }
        }





            QuickSortCity(InfectedProv, 0, 23);
            cout << "Confirmados por provincia: " << endl;
            for (int i = 0; i < cantProv; i++) {
                cout << InfectedProv[i] << endl;
            }

    }
}
#endif //TRABAJOFINAL_INFECTEDDEAD_H
