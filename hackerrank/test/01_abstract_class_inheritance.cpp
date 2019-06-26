#include <bits/stdc++.h>

using namespace std;

class Car {
protected:
    bool isSedan;
    string seats;
    
public:
    Car(bool isSedan, string seats) {
        this->isSedan = isSedan;
        this->seats = seats;
    }

    bool getIsSedan() {
        return this->isSedan;
    }

    string getSeats() {
        return this->seats;
    }

    virtual string getMileage() = 0;

    void printCar(string name) {
        cout << "A " << name << " is " << (this->getIsSedan() ? "" : "not ")
            <<"Sedan, is " << this->getSeats() << "-seater, and has a mileage of around "
            << getMileage() << ".\n";
    }
};

// -------------------------------------- Solution code starts from here ----------------------------------------

/**
*   WagonR class
**/
class WagonR : public Car
{
    public:
        int mileage;

        WagonR(int mi) : mileage(mi), Car(0, "4") {}
        string getMileage() { return to_string(mileage) + " kmpl" ; }

};

/**
*   HondaCity class
**/
class HondaCity : public Car
{
    private:
        int mileage;

    public:
        HondaCity(int mi) : mileage(mi), Car(1, "4") {}
        string getMileage() { return to_string(mileage) + " kmpl" ; }
};

/**
*   InnovaCrysta class
**/
class InnovaCrysta : public Car
{
    private:
        int mileage;

    public:
        InnovaCrysta(int mi) : mileage(mi), Car(0, "6") {}
        string getMileage() { return to_string(mileage) + " kmpl" ; }
};

// ----------------------------- End of solution -----------------------------------

/* ----------------------------- Hackerrank driver code ---------------------------- */
int main()
{
    int carType, carMileage;
    cin >> carType >> carMileage;
    Car *pointer;
    if(carType == 0){
        WagonR wagonR(carMileage);
        pointer = &wagonR;
        wagonR.printCar("WagonR");
    }
    
    if(carType == 1){
        HondaCity hondaCity(carMileage);
        pointer = &hondaCity;
        hondaCity.printCar("HondaCity");
    }
    
    if(carType == 2){
        InnovaCrysta innovaCrysta(carMileage);
        pointer = &innovaCrysta;
        innovaCrysta.printCar("InnovaCrysta");
    }
}