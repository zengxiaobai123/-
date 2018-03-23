//
//  Vehicle.cpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#include "Vehicle.hpp"
#include <string>
using namespace std;
//#include <iostream>
Vehicle:: Vehicle():_licensePlate("ottawa01"),_make(nullptr)
{
    _type=new char[10];
    strcpy(_type, "car");
    _gasTankSise=100;
    _fuelConsumption=10;
    


}
Vehicle::~Vehicle()
{
    if (_type) {
        delete []_type;
        _type=nullptr;
    }
    if (_make)
    {
        delete []_make;
        _make=nullptr;
    }


}
Vehicle::Vehicle(char licence[],char*type,char* make)
{
    for (int i=0; i<strlen(licence); i++)
    {
        _licensePlate[i]=licence[i];
    }  
    if (_type)
    {
        delete []_type;
        _type=nullptr;
    }
    if (type)
    {
        _type=new char[strlen(type)+1];
        strcpy(_type, type);
    }
    _make=new char[strlen(make)+1];
    strcpy(_make, make);

}
Vehicle::Vehicle(const Vehicle&a)
{
    if (a._type)
    {
        if (_type)
        {
            delete []_type;
            _type=nullptr;
        }
                  _type=new char[strlen(a._type)+1];
            strcpy(_type, a._type);
    }
    if (a._make)
    {
        _make=new char[strlen(a._make)+1];
        strcpy(_make, a._make);
    }
    for (int i=0; i<strlen(a._licensePlate); i++)
    {
        _licensePlate[i]=a._licensePlate[i];
    }
    _gasTankSise=a._gasTankSise;
    _fuelConsumption=a._fuelConsumption;

}
const Vehicle &Vehicle:: operator=(const Vehicle &a)
{
    if (this==&a) 
        return *this;
    if (_type)
    {
            delete []_type;
            _type=nullptr;
    }
    if (a._type) 
    {
        _type=new char[strlen(a._type)+1];
        strcpy(_type, a._type);
    }
    if (_make)
    {  delete []_type;
        _type=nullptr;
    }
    if(a._make)
    {
        _make=new char[strlen(a._make)+1];
        strcpy(_make, a._make);
    }
    
    for (int i=0; i<strlen(a._licensePlate); i++)
    {
        _licensePlate[i]=a._licensePlate[i];
    }
    _gasTankSise=a._gasTankSise;
    _fuelConsumption=a._fuelConsumption;

    return *this;


}
void Vehicle:: setMake(char*make)
{
    if(_make)
    {
        delete []_make;
        _make=nullptr;
    }
    if (make)
    {
        _make=new char(strlen(make)+1);
        strcpy(_make, make);
    }
}
void Vehicle:: setFuelDate(double gas,double fuel)
{}
void Vehicle:: setType(char*type)
{
    if(_type)
    {
        delete []_type;
        _type=nullptr;
    }
    if (type)
    {
        _type=new char(strlen(type)+1);
        strcpy(_type, type);
    }

}
void Vehicle:: setLicensePlate(char *license)
{
    for (int i=0; i<strlen(license); i++)
    {
        _licensePlate[i]=license[i];
    }

}

void Vehicle::  printSpecifications()
{
    
    cout<<"车牌："<<endl;
    for (int i=0; i<strlen(_licensePlate); i++)
    {
        cout<<_licensePlate[i];
    }
    cout<<endl;
    cout<<"类型:"<<_type<<endl;
    cout<<"制造商:"<<_make<<endl;
    cout<<"燃油量:"<<_fuelConsumption<<endl;
    cout<<"油箱容量:"<< _gasTankSise<<endl;
    
}
double Vehicle:: computeTravelDistance() 
{
    double f=_fuelConsumption*_gasTankSise;
    return f;

}