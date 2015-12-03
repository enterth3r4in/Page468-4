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

	void displayCarInfo()
	{
		cout << "The VIN (Vehicle Identification Number) is: " << VIN << endl;
		cout << "The MAKE of the vehicle is: " << make << endl;
		cout << "The MODEL of the vehicle is: " << model << endl;
		cout << "The COLOR of the vehicle is: " << color << endl;
	}

	string returnString()
	{
		return "The VIN (Vehicle Identification Number) is: " + VIN +
			"\nThe MAKE of the vehicle is: " + make +
			"\nThe MODEL of the vehicle is: " + model + 
			"\nThe COLOR of the vehicle is: " + color;
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

	myVehicle.displayCarInfo();
	cout << endl << endl;
	cout << myVehicle.returnString();
	cout << endl; 
	//cout << myVehicle.getVIN() << endl << myVehicle.getColor() << " " << myVehicle.getMake() << " " << myVehicle.getModel() << endl;
	//myVehicle.setVIN("NN18842DZ919");
	//cout << myVehicle.getVIN() << endl;

	//Keeps console window open
	system("PAUSE");
	return 0;
}