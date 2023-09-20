//
//  main.cpp
//  C++Classes
//
//  Created by Kyle Wilson on 2023-09-20.
//

#include <iostream>

using namespace std;

class My_Class {
public:
    My_Class(){
        cout << "Instantiated a new class" << endl;
    }
    void setName(string n) {
        name = n;
    }
    string getName() {
        return name;
    }
private:
    string name;
};

class Car {
public:
    Car(string b) {
        cout << "New " << b << " generated" << endl;
        brand = b;
    }
    void setModel(string m) {
        model = m;
    }
    void setGasType(bool g) {
        gasType = g;
    }
    string getInfoOnCar() {
        string brandDescription = "Car Brand: " + brand;
        string modelDescription = "Car Model: " + model;
        string gType = (gasType ? "Gas" : "Diesel");
        string gasTypeDescription = "Gas Type: " + gType;
        return brandDescription + "\n" + modelDescription + "\n" + gasTypeDescription;
    }
private:
    string brand;
    string model;
    bool gasType;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    My_Class obj;
    obj.setName("Kyle");
    cout << obj.getName() << endl;
    
    Car jettaTDI("Volkswagen");
    jettaTDI.setModel("Jetta TDI");
    jettaTDI.setGasType(0);
    cout << jettaTDI.getInfoOnCar() << endl;
    
    return 0;
}


