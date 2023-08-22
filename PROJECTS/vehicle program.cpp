#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Vehicle {
    public:
    virtual int newVehicle(int model) = 0;
    
    virtual int tires(int count) = 0;
    
    virtual int seat() = 0;
    
    virtual int totalService() = 0; 
    
    virtual int waterService() = 0;
};

class Bike : public Vehicle {
public:
    int newVehicle(int model) {
        if (model == 0) {
            return 150000;
        } else if(model == 1) {
            return 200000;
        } else if(model == 3) {
            return 250000;
        } else {
            return 110000;
        }
    }
    
    int tires(int count) {
        return count*2000;
    }
    
    int seat() {
        return 1000;
    }
    
    int totalService() {
        return 5000;
    }
    
    int waterService() {
        return 200;
    }
};

class Car : public Vehicle {
public:
    int newVehicle(int model) {
        if (model == 0) {
            return 500000;
        } else if(model == 1) {
            return 700000;
        } else if(model == 3) {
            return 1000000;
        } else {
            return 2500000;
        }
    }
    
    int tires(int count) {
        return count*3000;
    }
    
    int seat() {
        return 3000;
    }
    
    int totalService() {
        return 7000;
    }
    
    int waterService() {
        return 500;
    }
};

int main()
{
    Vehicle* vehicle;
    char temp;
    int totalCost = 0;
    
    cout << "Please select type of Vehicle" << endl;
    cout << "a) Car" << endl;
    cout << "b) Bike" << endl;
    cin >> temp;
    int vehicleType = temp-'a';
    switch(temp) {
        case 'a':
        vehicle = new Car();
        break;
        case 'b':
        vehicle = new Bike();
        break;
    }
    
    cout << "Please select an option to continue" << endl;
    cout << "a) Buy a new vehicle" << endl;
    cout << "b) Vehicle Service" << endl;
    cin >> temp;
    
    if (temp == 'a') {
        cout << "Please select the vehicle model" << endl;
        if (vehicleType == 0) {
            cout << "a) Tata Nano" << endl;
            cout << "b) Suzuki Swift" << endl;
            cout << "c) Tata Nexon" << endl;
            cout << "d) Range Rover" << endl;
        } else {
            cout << "a) Bajaj Pulsar" << endl;
            cout << "b) Yamaha FZ" << endl;
            cout << "c) RE Hunter" << endl;
            cout << "d) Hero Passion" << endl;
        }
        cin >> temp;
        totalCost += vehicle->newVehicle(temp-'a');
    } else {
        
        cout << "How many tires do you want to buy?" << endl;
        cout << "a) 0  b) 1  c) 2  d) 3  e) 4" << endl;
        cin >> temp;
        totalCost += vehicle->tires(temp-'a');
        
        cout << "Do you want to change the seat?" << endl;
        cout << "a) Yes     b) No " << endl;
        cin >> temp;
        if (temp == 'a') totalCost += vehicle->seat();
        
        cout << "Do you want total service?" << endl;
        cout << "a) Yes     b) No " << endl;
        cin >> temp;
        if (temp == 'a') totalCost += vehicle->totalService();
        
        cout << "Do you want water service?" << endl;
        cout << "a) Yes     b) No " << endl;
        cin >> temp;
        if (temp == 'a') totalCost += vehicle->waterService();
    }
    
    cout << "The Totalcost is: " << totalCost;
    

    return 0;
}
