//
//  Vehicle.hpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef Vehicle_hpp
#define Vehicle_hpp
#include <iostream>
#include <stdio.h>
class Vehicle
{
private:
    char _licensePlate[10];//车牌
    char*_type;//车的类型
    char*_make;//车的制造商
    double _gasTankSise;//总油量
    double _fuelConsumption;//单位路程耗油量
public:
    Vehicle();
    ~Vehicle();
    Vehicle(char licence[],char*type,char* make);
    Vehicle(const Vehicle&a);
    const Vehicle & operator=(const Vehicle &a);
    void setMake(char*make);
    void setFuelDate(double gas,double fuel);
    void setType(char*type);
    void setLicensePlate(char *license);

    virtual  void printSpecifications();
    virtual double computeTravelDistance() ;//行程


};

#endif /* Vehicle_hpp */
