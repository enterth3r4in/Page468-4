//Page 468, problem 4, Automobile class

//Includes
#include <iostream>
#include <string>

//Namespace declaration for convenience
using namespace std;

//Automobile class declaration
class automobile
{
private:
	string VIN; //Vehicle Identification Number
	string make; //Make of vehicle
	string model; //Model of vehicle
	string color; //Color of vehicle

public:
	//Constructor injection sets member variables
	automobile(string vehicleID, string vehicleMake, string vehicleModel, string vehicleColor)
	{
		VIN = vehicleID;
		make = vehicleMake;
		model = vehicleModel;
		color = vehicleColor;
	}

	//Set VIN for private member variable
	void setVIN(string vehicleID)
	{
		VIN = vehicleID;
	}
	void setMake(string vehicleMake)
	{
		make = vehicleMake;
	}
	void setModel(string vehicleModel)
	{
		model = vehicleModel;
	}
	void setColor(string vehicleColor)
	{
		color = vehicleColor;
	}

	//Getters for private member variables
	string getVIN()
	{
		return VIN;
	}
	string getMake()
	{
		return make;
	}
	string getModel()
	{
		return model;
	}
	string getColor()
	{
		return color;
	}
};

int main()
{
	//Instance of automobile class
	automobile myVehicle("YA1029LL110", "Nissan", "Altima", "Silver");
	cout << myVehicle.getVIN() << endl;
	myVehicle.setVIN("NN18842DZ919");
	cout << myVehicle.getVIN() << endl;

	//Keeps console window open
	system("PAUSE");
	return 0;
}