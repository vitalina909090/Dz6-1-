#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class Overcoat {
private:
    string type;
    double price;

public:
    Overcoat() : type(" "), price(0.0) {}
    Overcoat(string typeP, double priceP) : type(typeP), price(priceP) {}

    bool operator==(const Overcoat& other) const {
        return type == other.type;
    }

    Overcoat& operator=(const Overcoat& other) {
        if (this != &other) {
            type = other.type;
            price = other.price;
        }
        return *this;
    }

    bool operator>(const Overcoat& other) const {
        if (type == other.type) {
            return price > other.price;
        }
        else {
            cout << "Різні типи одягу!" << endl;
            return false;
        }
    }

    void print() const {
        cout << "Тип одягу: " << type << ", Ціна: " << price << endl;
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Overcoat outerwear1("Пальто", 1000);
    Overcoat outerwear2("Пальто", 1500);
    Overcoat outerwear3("Куртка", 1200);

    outerwear1.print();
    outerwear2.print();
    outerwear3.print();

    //1 приклад
    if (outerwear1 == outerwear2) {
        cout << "Типи одягу однакові." << endl;
    }
    else {
        cout << "Типи одягу різні." << endl;
    }

    if (outerwear1 == outerwear3) {
        cout << "Типи одягу однакові." << endl;
    }
    else {
        cout << "Типи одягу різні." << endl;
    }

    //2 приклад
    if (outerwear1 > outerwear2) {
        cout << "Пальто 1 дорожче." << endl;
    }
    else {
        cout << "Пальто 2 дорожче." << endl;
    }

    //3 приклад
    outerwear1 = outerwear3;
    outerwear1.print();

    return 0;
}
