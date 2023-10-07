#include "Functionalities.h"

void createObject(TouristVehicle *arr[SIZE])
{
    arr[0]=new TouristVehicle("V101",VehicleType::CAB,8,59.6f);
    arr[1]=new TouristVehicle("V102",VehicleType::BUS,3,53.7f);
    arr[2]=new TouristVehicle("V103",VehicleType::CAB,4,533.7f);

}

void findInstance(TouristVehicle *arr[SIZE], TouristVehicle *result[SIZE])
{
     if(checkAllNull(arr)){
        std::cout<<"Array is empty";
    }
    int j=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->seatCount()>=4){
            result[j++]=arr[i];
        }
    }
}

float averageCharge(TouristVehicle *arr[SIZE])
{
     if(checkAllNull(arr)){
        std::cout<<"Array is empty";
    }
    float average=0.0f;
    int count=0;
    for(int i=0;i<SIZE;i++){
        if(arr[i]->type()==VehicleType::CAB){
            average+=(arr[i])->perHourBookingCharge();
            count++;
        }
    }
    return (average/count);

}

void maximumPerHourCharge(TouristVehicle *arr[SIZE])
{
    if(checkAllNull(arr)){
        std::cout<<"Array is empty";
    }
    TouristVehicle* vehicle{nullptr};
    float max=arr[0]->perHourBookingCharge();
    float currentMax=0.0f;
    for(int i=0;i<SIZE;i++){
        currentMax=arr[i]->perHourBookingCharge();
        if(max<currentMax){
            max=currentMax;
            vehicle=arr[i];
        }
    }
    std::cout<<"TouristVehicle with Maximum perHourCharge is : \n"<<*vehicle<<"\n";
}

void freeMemory(TouristVehicle *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        delete arr[i];
    }
}

bool checkAllNull(TouristVehicle *arr[SIZE])
{
    for(int i=0;i<SIZE;i++){
        if(arr[i]!=nullptr){
            return false;
        }
    }
    return true;
}
