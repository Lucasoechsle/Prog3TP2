
#ifndef TRABAJOFINAL_INFECTEDSTATISTICS_H
#define TRABAJOFINAL_INFECTEDSTATISTICS_H

void InfectedStatistics(string path) {

    Lista<int> lista;
    Lista<int> lista1;
    int aux;
    fstream fin;
    fin.open(path, ios::in);
    Lista<float> listainfectados;
    float   Cont0 = 0;
    float   Cont1 = 0;
    float   Cont2 = 0;
    float   Cont3 = 0;
    float   Cont4 = 0;
    float   Cont5 = 0;
    float   Cont6 = 0;
    float   Cont7 = 0;
    float   Cont8 = 0;
    float   Cont9 = 0;
    Lista<float> lista3;

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


            if (test.classification() == "Confirmado") {
                if (test.Year() == "Meses") {
                    Cont0++;
                } else if (test.Ages() == 10 || test.Ages() == 11 || test.Ages() == 12 || test.Ages() == 13 ||
                           test.Ages() == 14 || test.Ages() == 15 || test.Ages() == 16 || test.Ages() == 17 ||
                           test.Ages() == 18 || test.Ages() == 19) {
                    Cont1++;

                }


                else if (test.Ages() == 20 || test.Ages() == 21 || test.Ages() == 22 || test.Ages() == 23 ||
                         test.Ages() == 24 || test.Ages() == 25 || test.Ages() == 26 || test.Ages() == 27 ||
                         test.Ages() == 28 || test.Ages() == 29) {
                    Cont2++;
                }
                else if (test.Ages() == 30 || test.Ages() == 31 || test.Ages() == 32 || test.Ages() == 33 ||
                         test.Ages() == 34 || test.Ages() == 35 || test.Ages() == 36 || test.Ages() == 37 ||
                         test.Ages() == 38 || test.Ages() == 39) {
                    Cont3++;
                }

                else if (test.Ages() == 40 || test.Ages() == 41 || test.Ages() == 42 || test.Ages() == 43 ||
                         test.Ages() == 44 || test.Ages() == 45 || test.Ages() == 46 || test.Ages()== 47 ||
                         test.Ages() == 48 || test.Ages() == 49) {
                    Cont4++;
                }

                else if (test.Ages() == 50 || test.Ages() == 51 || test.Ages() == 52 || test.Ages() == 53 ||
                         test.Ages() == 54 || test.Ages() == 55 || test.Ages()== 56 || test.Ages() == 57 ||
                         test.Ages() == 58 || test.Ages() == 59) {
                    Cont5++;
                }
                else if (test.Ages() == 60 || test.Ages() == 61 || test.Ages() == 62 || test.Ages() == 63 ||
                         test.Ages() == 64 || test.Ages() == 65 || test.Ages() == 66 || test.Ages() == 67 ||
                         test.Ages() == 68 || test.Ages() == 69) {
                    Cont6++;
                }

                else if (test.Ages() == 70 || test.Ages() == 71 || test.Ages() == 72 || test.Ages() == 73 ||
                         test.Ages() == 74 || test.Ages() == 75 || test.Ages() == 76 || test.Ages() == 77 ||
                         test.Ages() == 78 || test.Ages() == 79) {
                    Cont7++;
                }
                else if (test.Ages() == 80 || test.Ages() == 81 || test.Ages() == 82 || test.Ages() == 83 ||
                         test.Ages() == 84 || test.Ages() == 85 || test.Ages() == 86 || test.Ages() == 87 ||
                         test.Ages() == 88 || test.Ages() == 89) {
                    Cont8++;
                }
                else if (test.Ages() == 90 || test.Ages() == 91 || test.Ages() == 92 || test.Ages() == 93 ||
                         test.Ages() == 94 || test.Ages() == 95 || test.Ages() == 96 || test.Ages() == 97 ||
                         test.Ages() == 98 || test.Ages() == 99) {
                    Cont9++;
                }


            }


        }
    }
    cout << "La cantidad de Contagiados:" << endl;
    cout << "Entre 0 y 9: " << Cont0++ << endl;
    cout << "Entre 10 y 19: " << Cont1++ << endl;
    cout << "Entre 20 y 29: " << Cont2++ << endl;
    cout << "Entre 30 y 39: " << Cont3++ << endl;
    cout << "Entre 40 y 49: " << Cont4++ << endl;
    cout << "Entre 50 y 59: " << Cont5++ << endl;
    cout << "Entre 60 y 69: " << Cont6++ << endl;
    cout << "Entre 70 y 79: " << Cont7++ << endl;
    cout << "Entre 80 y 89: " << Cont8++ << endl;
    cout << "Entre 90 y 99: " << Cont9++ << endl;




}


#endif //TRABAJOFINAL_INFECTEDSTATISTICS_H
