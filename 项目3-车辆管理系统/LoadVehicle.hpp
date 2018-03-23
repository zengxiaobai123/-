//
//  LoadVehicle.hpp
//  C++
//
//  Created by mac on 18/3/23.
//  Copyright © 2018年 zt. All rights reserved.
//

#ifndef LoadVehicle_hpp
#define LoadVehicle_hpp

#include <stdio.h>
#include "Vehicle.hpp"
class LoadVehicle:public Vehicle
{
    LoadVehicle(int numberOfWheels, double loadCapacity, double towingCapacity,char *type,  double gasTankSize, double fuelConsumption);
    
    
private:
    int numberOfWheels;         
    double loadCapacity;    
    double towingCapacity;
public:
};
#endif /* LoadVehicle_hpp */
