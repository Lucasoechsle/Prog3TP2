
#ifndef TRABAJOFINAL_AGECITY_H
#define TRABAJOFINAL_AGECITY_H


void QuickSortCity(Cities[], int, int);

void AgeCity(string path, int Year) {
    fstream fin;
    fin.open(path, ios::in);
    Test test;
    const string ListProvincias[] = {"CABA", "Buenos Aires", "Catamarca", "Chaco", "Chubut", "Córdoba", " Corrientes",
                                     "Entre Ríos", "Formosa", "Jujuy", "La Pampa", "La Rioja", "Mendoza", "Misiones",
                                     "Neuquén", "Rio Negro", "Salta", "San Juan", "San Luis", "Santa Cruz", "Santa Fe",
                                     "Santiago del Estero", "Tierra del Fuego", "Tucumán"};
    Cities Prov[24];
    Lista<Test> lista;


    for (int i = 0; i < 24; i++) {
        Prov[i] = Cities(ListProvincias[i], 0);

    }


    if (fin.fail()) {
        cout << "No se pudo abrir el archivo tipo csv" << endl;
    } else {

        string line;
        getline(fin, line);


        while (getline(fin, line)) {
            test.Data(line);
                if(test.Ages() == Year) {
                    for (int l = 0; l < 24; l++) {
                        if (test.city() == Prov[l].getNombre()) {
                            Prov[l].ICounter();
                            break;
                        }
                    }
                }
            }
        }






            QuickSortCity(Prov, 0, 23);
            cout << "Casos de "<< Year << " por provincia: " << endl;
            for (int i = 0; i < 24; i++) {
                cout << Prov[i] << endl;
            }
        }



#endif //TRABAJOFINAL_AGECITY_H
