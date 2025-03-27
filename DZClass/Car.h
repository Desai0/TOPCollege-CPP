#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>

class Car {
private:
    std::string marka;
    std::string model;
    int year;
    std::string color;
    int mileage;
    double price;

public:
    Car();
    Car(const std::string& mk, const std::string& mdl, int yr, const std::string& clr, int mlg, double prc);

    Car(const Car& other);            
    Car& operator=(const Car& other);  
    ~Car();                            

    const std::string& getMarka() const;
    const std::string& getModel() const;
    int getYear() const;
    const std::string& getColor() const;
    int getMileage() const;
    double getPrice() const;

    void setColor(const std::string& newColor);
    void setMileage(int newMileage);
    void setPrice(double newPrice);

    friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

#endif // CAR_H