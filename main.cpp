#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Headers/Lista.h"
#include "Headers/HashMap.h"
#include "Headers/Test.h"
#include "Headers/Cities.h"
#include "FunctionsArgument/Statistics.h"
#include "FunctionsArgument/InfectedDead.h"
#include "FunctionsArgument/AgeCases.h"
#include "FunctionsArgument/CUICases.h"
#include "FunctionsArgument/DeadStatistics.h"
#include "FunctionsArgument/InfectedStatistics.h"
#include "FunctionsArgument/AgeCity.h"
#include "FunctionsArgument/Deadd.h"
#include "Sort/SortTest.h"
#include "Sort/SortCity.h"
using namespace std;

int main(int argc, char **argv) {

    string date = "2020-12-12";
    string path = argv[argc - 1];
    int TotalCity = 0;

    for (int i = 1; i < argc - 1; i++) {
        string argument = argv[i];



        if (argument == "-estad") {
            cout<< "Aguarde un tiempo hasta que le demos su informacion... "<<endl;
            Statistics(path);


            cout<< "Aguarde un minuto, a la brevedad le daremos los fallecidos por rango etario.."<<endl;
            DeadStatistics(path);


            cout<< "Aguarde un minuto, a la brevedad le daremos los contagiados por rango etario.."<<endl;
            InfectedStatistics(path);


        }

        if (argument == "-p_casos") {
                try {
                    TotalCity = stoi(argv[i + 1]);
                    i++;
                } catch (...) {

                    TotalCity = 24;
                }
                InfectedDead(path, TotalCity);
            }



        if (argument == "-p_muertes") {
            try {
                TotalCity = stoi(argv[i + 1]);
                i++;
            } catch (...) {

                TotalCity = 24;
            }
            Deadd(path, TotalCity);
        }

        if (argument == "-casos_CUI") {
                if (argv[i + 1][0] == '2') {
                            date = argv[i + 1];
                            i++;
                }
                CUICases(path, date);
        }


        if (argument == "-casos_edad") {
            int edad = 0;// auxiliar para la edad
            try {
                edad = stoi(argv[i + 1]);
                i++;
            }
            catch (...) {
                throw "No puso edad";
            }

            AgeCases(path, edad);
            cout<< "Aguarde un minuto, ya le mostramos el orden de provincias con mas casos: "<<endl;
            AgeCity(path, edad);
        }
    }

    return 0;
}






