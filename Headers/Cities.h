//
// Created by Lucas Oechsle on 16/10/2021.
//

#ifndef TRABAJOFINAL_CITIES_H
#define TRABAJOFINAL_CITIES_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Test.h"
#include "Lista.h"
using namespace std;
class Cities {
private:
    string name;
    int count;
public:
    Cities(){
        count=0;
        name="Not Define";
    }
    Cities(const string &data, int cont) : name(data) {
        count=cont;
    }

    friend ostream &operator<<(ostream &os, const Cities &cities) {
        os << "Provincia: " << cities.name << ": cantidad:  " << cities.count;
        return os;
    }
    void ICounter(){
        count++;
    }



    const string &getNombre() const {
        return name;
    }
    void setNombre(const string &name) {
        Cities::name = name;
    }


    bool operator==(const Cities &rhs) const {
        return name == rhs.name ;
    }
    bool operator<(const Cities &rhs) const {
        return count < rhs.count;
    }
    bool operator>(const Cities &rhs) const {
        return count > rhs.count;
    }
    bool operator<=(const Cities &rhs) const {
        return !(rhs < *this);
    }
    bool operator>=(const Cities &rhs) const {
        return !(*this < rhs);
    }
    bool operator!=(const Cities &rhs) const {
        return !(rhs == *this);
    }


};

#endif //TRABAJOFINAL_CITIES_H