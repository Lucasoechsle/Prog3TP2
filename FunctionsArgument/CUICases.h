
#ifndef TRABAJOFINAL_CUICASES_H
#define TRABAJOFINAL_CUICASES_H


void QuickSortTest(Lista<Test> ListCUI, int, int);

void CUICases(string path, string date) {


    Lista<Test> ListCUI;
    Lista<Test> ListaCUI;
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


            if (test.Cui() == "SI" && test.Date_CUI() > date) {
                ListCUI.insertarPrimero(test);

            }
        }

            cout << "Casos de CUI" << endl;
            for (int i = 0; i < ListCUI.getTamanio(); i++) {
                    cout<<ListCUI.getDato(i)<<endl;

                }

            }



    }



#endif //TRABAJOFINAL_CUICASES_H
