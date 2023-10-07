#include "Functionalities.h"

int main(){
    TouristVehicle* a[SIZE]{nullptr};
    TouristVehicle* resul[SIZE]{nullptr};

    createObject(a);
    std::cout<<"\nAverage of PerHourBookingPrice of CAB: "<<averageCharge(a);

    std::cout<<"\nVehicles with minimum seat Count of 4 : "<<std::endl;
    findInstance(a,resul);
    for(int i=0;i<SIZE;i++){
        if(resul[i]==nullptr){
            break;
        }
        std::cout<<*resul[i]<<std::endl;
    }

    std::cout<<"\nAverage PerHourPrice of CAB : "<<averageCharge(a)<<std::endl;

    std::cout<<"\n";
    maximumPerHourCharge(a);

    std::cout<<"Destroying heap Memory allocation\n";
    freeMemory(a);


}