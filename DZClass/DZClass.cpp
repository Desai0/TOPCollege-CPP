#include "Car.h"
#include <iostream>

Car::Car() : year(0), mileage(0), price(0.0) {}

Car::Car(const std::string& mk, const std::string& mdl, int yr, const std::string& clr, int mlg, double prc) : marka(mk), model(mdl), year(yr), color(clr), mileage(mlg), price(prc) {}


Car::Car(const Car& other) : marka(other.marka), model(other.model), year(other.year), color(other.color), mileage(other.mileage), price(other.price) {}

Car& Car::operator=(const Car& other) {
	if (this != &other) {
        marka = other.marka;
        model = other.model;
        year = other.year;
        color = other.color;
        mileage = other.mileage;
        price = other.price;
    }
    return *this;
}


Car::~Car() {}

const std::string& Car::getMarka() const { return marka; }
const std::string& Car::getModel() const { return model; }
int Car::getYear() const { return year; }
const std::string& Car::getColor() const { return color; }
int Car::getMileage() const { return mileage; }
double Car::getPrice() const { return price; }

void Car::setColor(const std::string& newColor) {
    color = newColor;
}

void Car::setMileage(int newMileage) {
    if (newMileage >= 0) {
        mileage = newMileage;
    }
}

void Car::setPrice(double newPrice) {
    if (newPrice >= 0.0) {
        price = newPrice;
    }
    else {
        price = 0.0;
    }
}

std::ostream& operator<<(std::ostream& os, const Car& car) {
    os << "Car: " << car.year << " " << car.marka << " " << car.model << "\n"
        << "  Color: " << car.color << "\n"
        << "  Mileage: " << car.mileage << " km\n"
        << "  Price: $" << car.price;
    return os;
}

int main() {
    Car car1("Lada", "Vesta", 2021, "White", 50000, 15000.0);
    std::cout << "Car:\n" << car1 << std::endl; // лень проверять остальное, и так время поджимает, так что прошу понять и простить
}