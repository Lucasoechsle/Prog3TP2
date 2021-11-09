#ifndef TRABAJOFINAL_TEST_H
#define TRABAJOFINAL_TEST_H

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Test {
private:
    int CasosID;
    int Age;
    int CityID;
    string City;
    string Classification;
    string Date;
    string CUI;
    string CUIDate;
    string Dead;


public:

    int IdCases();
    int Ages();
    string Year();
    string Cui();
    string Date_CUI();
    string Deead();
    int City_ID();
    string city();
    string classification();

    friend ostream &operator<<(ostream &os, const Test &casos);
    bool operator<(const Test &rhs) const;
    bool operator>(const Test &rhs) const;
    bool operator<=(const Test &rhs) const;
    bool operator>=(const Test &rhs) const;



    Test();
    Test(string line);
    void Data(string line);
    void TakeID(int id);
    void TakeAge(int age);
    void TakeYear(string year);
    void TakeCUI(string cui);
    void TakeDateCUI(string date);
    void TakeDead(string status);
    void TakeCityID(int idcity);
    void TakeClassification(string clasification);
    void TakeCity(string City);


};

Test::Test() {
    CasosID = 0;
    Age = 0;
    Date = "Anios";
    CUI = "NO";
    CUIDate = "2021-09-09";
    Dead = "NO";
    CityID = 0;
    City = "SinEspecif";
    Classification = "N/A";
}

Test::Test(string line) {
    Data(line);
}

void Test::Data(string line) {
    stringstream s(line);
    string word;
    for (int columnas = 0; getline(s, word, ','); columnas++) {
        if (word.size() <= 0) {
            if(columnas==7) {
                word="SinProvincia";
            }
            if (columnas == 2 || columnas == 0 || columnas == 17) {
                word = "404";
            } else {
                word = "NA";
            }
        } else {
            word = word.substr(1, word.size() - 2);
        }
        switch (columnas) {
            case 0:
                CasosID = (stoi(word));
                break;
            case 2:
                Age = (stoi(word));
                break;
            case 3:
                Date = (word);
                break;
            case 7:
                City = (word);
                break;
            case 12:
                CUI = (word);
                break;
            case 13:
                CUIDate = (word);
                break;
            case 14:
                Dead = (word);
                break;
            case 17:
                CityID = (stoi(word));
                break;
            case 20:
                Classification = (word);
                break;
            default:
                break;
        }
    }
}


void Test::TakeID(int id) {
    CasosID = id;
}

void Test::TakeAge(int age) {
    Age = age;
}

void Test::TakeYear(string year) {
    Date = year;
}

void Test::TakeCUI(string cui) {
    CUI = cui;
}

void Test::TakeDateCUI(string date) {
    CUIDate = date;
}

void Test::TakeDead(string status) {
    Dead = status;
}

void Test::TakeCityID(int idcity) {
    CityID = idcity;
}

void Test::TakeClassification(string clasification) {
    Classification = clasification;
}

void Test::TakeCity(string City) {
    City=City;
}

int Test::IdCases() {
    return CasosID;
}

int Test::Ages() {
    return Age;
}

string Test::Year() {
    return Date;
}

string Test::Cui() {
    return CUI;
}

string Test::Date_CUI() {
    return CUIDate;
}

string Test::Deead() {
    return Dead;
}

int Test::City_ID() {
    return City_ID();
}

string Test::classification() {
    return Classification;
}


string Test::city() {
    return City;
}

bool Test::operator<(const Test &rhs) const {
    return CUIDate < rhs.CUIDate;
}

bool Test::operator>(const Test &rhs) const {
    return CUIDate > rhs.CUIDate;
}

bool Test::operator<=(const Test &rhs) const {
    return !(rhs < *this);
}

bool Test::operator>=(const Test &rhs) const {
    return !(*this < rhs);
}


ostream &operator<<(ostream &os, const Test &cases) {
    os << "Id_Casos:" << cases.CasosID << " Edad:" << cases.Age << " Anios/Meses:" << cases.Date << " CUI:"
       << cases.CUI << " FechaCUI:" << cases.CUIDate << " Fallecio:" << cases.Dead << " IdProvincia:"
       << cases.CityID<< " Provincia:"
       << cases.City << " Clasificacion:" << cases.Classification;
    return os;
}

#endif //TRABAJOFINAL_TEST_H