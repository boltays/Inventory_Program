/*******************************************************************************************************
* @file			Washing_Machine.c  
*  
* @brief		Washing_Machine driver as a derived class of home appliance 
* 
* @details		Washing Machine is a derived class of a Home_Appliance and it includes the properties 
*				such as water consumption value, number of programs of dishwasher, capacity, number of racks
*				number of Washing Machine in the inventory and the engine properties as a Washing Machine engine.
*				Composition of Engine class to Washing Machine class is used due to the fact that a Washing Machine has a engine property.
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
********************************************************************************************************/





#include "Washing_Machine.h"
using namespace std;



/**
* @brief	Constructor for washing machine class
*
* @details	From the first parameter to the water consumption parameter, they all belong to the base class Home_Appliance.
*			Washing machine is inherited from the Home Appliance because washing machine is a home appliance type.
*			For this reason, in the constructor of washing machine, Home_Appliance constructor is called for the first five 
*			parameters. In addition, washing machine has a washing machine engine and the engine class is added as a composition
*			to washing machine class. According to the composition basics, referance value in type of Engine is used as a
*			parameter in the washing machine constructor. Parameter w_engine value is stored in the washingMachineEngine
*			variable which is decleared in the Washing_Machine.h file. This value assignment is done with the
*			member initializer list. At the beginning, the default values written in the main file are sent to the 
*			data members with set functions. This is necessary for creating the default valued- objects and then, 
*			the user is able to give desired values to these variables with directly using constructor. That is why
*			addition set functions and input - output operations beside the member initializer list and the first 
*			four set functions.
*
* @param	Identification code, height, length, width values, energy consumption class, water consumption in liters,
*			number of programs that washing machine has, capacity of washing machine, squeeze speed, engine properties as a 
*			referance of type Engine, and a number of washing machines in the inventory.
*
*/
Washing_Machine::Washing_Machine(string ID, int varHeight, int varLength,int varWidth,string energyClass,
		int consumption,int numPrograms,int varCapacity ,int speed, Engine &w_engine, int numOfProd)
		: Home_Appliance(ID,varHeight,varLength,varWidth,energyClass),
		washingMachineEngine(w_engine)

{

	setWaterConsumption(consumption);
	setNumberOfPrograms(numPrograms);
	setCapacityOfWeight(varCapacity);
	setSqueezeSpeed(speed);
	
	
	
	int heatingCap;
	double w_power;
	int rotation;
	
	cout << "Enter the washing machine properties respectively." << endl;
	cout << "\nID: " ;
	cin >> ID;
	setIdentificationCode(ID);
	
	cout << "\nHeight in Centimeters: ";
	cin >> varHeight;
	setHeight(varHeight);
	
	cout << "\nLength in Centimeters: ";
	cin >> varLength;
	setLength(varLength);
	
	cout << "\nWidth in Centimeters: ";
	cin >> varWidth;
	setWidth(varWidth);
	
	cout<< "\nEnergy Consumption Class: " ;
	cin >> energyClass;
	if( Home_Appliance::IsLetter(energyClass) )
		setEnergyConsumptionClass(energyClass);
	else
		throw invalid_argument("Energy consumption class must consist of letter(s).");
		
	
	cout << "\nWater Consumption in Liters: ";
	cin >> consumption;
	setWaterConsumption(consumption);
	
	cout <<"\nNumber of Cleaning Programs: ";
	cin >> numPrograms;
	setNumberOfPrograms(numPrograms);
	
	cout << "\nCapacity of Weight in Kilograms: ";
	cin >> varCapacity;
	setCapacityOfWeight(varCapacity);
	
	cout << "\nSqueeze Speed: ";
	cin >> speed;
	setSqueezeSpeed(speed);
	
	cout << "\nPower of Washing Machine Engine: ";
	cin >> w_power;
	washingMachineEngine.setPower(w_power);
	
	cout << "\nNumber of Rotation of Washing Machine Engine Per Minute: ";
	cin >> rotation;
	washingMachineEngine.setNumberOfRotations(rotation);
	
	cout << "\nMax Heating Capacity: ";
	cin >> heatingCap;
	this->washingMachineEngine.setMaxFeatureCap(heatingCap,3);
	
	cout <<"\nEnter number of product:";
	cin >>numOfProd;
	this->setNumberOfProduct(numOfProd);
	
}

Washing_Machine::~Washing_Machine()
{
	
}



/**
* @brief	Set water consumption value of washing machine in liters
* @param	Water consumption value in type of integer
* @retval	void
*/
void Washing_Machine::setWaterConsumption( int consumption)
{
	waterConsumption = consumption;
}

/**
* @brief	Set number of programs of washing machine 
* @param	Number of programs in type of integer
* @retval	void
*/
void Washing_Machine::setNumberOfPrograms( int numPrograms)
{
	numberOfCleaningPrograms = numPrograms;
}

/**
* @brief	Set capacity of weight of washing machine 
* @param	Capacity of weight in type of integer
* @retval	void
*/
void Washing_Machine::setCapacityOfWeight( int varCapacity )
{
	capacityOfWeight = varCapacity;
}

/**
* @brief	Set squeeze speed of washing machine 
* @param	Squeeze speed in type of integer
* @retval	void
*/
void Washing_Machine::setSqueezeSpeed( int speed)
{
	squeezeSpeed = speed;
}

/**
* @brief	Set number of washing machines in the inventory 
* @param	Number of washing machines in type of integer
* @retval	void
*/
void Washing_Machine::setNumberOfProduct(int numOfProd)
{
	this->numberOfProduct = numOfProd;
}

/**
* @brief	Get water consumption in liters 
* @param	void
* @retval	Water consumption in liter in type of integer
*/
int Washing_Machine::getWaterConsumption() const
{
	return waterConsumption;	
}

/**
* @brief	Get number of programs  
* @param	void
* @retval	Number of programs in type of integer
*/
int Washing_Machine::getNumberOfPrograms() const
{
	return numberOfCleaningPrograms;
}

/**
* @brief	Get capacity of weight  
* @param	void
* @retval	Capacity of weight in type of integer
*/
int Washing_Machine::getCapacityOfWeight() const
{
	return capacityOfWeight;
}

/**
* @brief	Get squeeze speed  
* @param	void
* @retval	Squeeze speed in type of integer
*/
int Washing_Machine::getSqueezeSpeed() const
{
	return squeezeSpeed;
}

/**
* @brief	Get number of washing machines in the inventory 
* @param	void
* @retval	Number of washing machines in type of integer
*/
int Washing_Machine::getNumberOfProduct()const
{
	return this->numberOfProduct;
}

/**
* @brief	Print all the associated properties of washing machine
* @details	The common properties that are inherited from the base class Home_Appliance
*			are printed with the print function that belongs to the same base class 
*			Home_Appliance. Washing Machine's own properties are printed with its own print 
*			function. Engine properties are printed with the function belongs to the Engine
*			class. The decleared washingMachineEngine variable of type Engine is used to 
*			access to the Engine's print and get functions.
* @param	void
* @retval	void
*/
void Washing_Machine::printProperties() const
{
	Home_Appliance::printProperties();
	
	cout << " " << this->getWaterConsumption() << " " << this->getNumberOfPrograms() << " " 
		<< this->getCapacityOfWeight() << " " << this->getSqueezeSpeed();
	
	washingMachineEngine.printEngine();
	cout << " " << washingMachineEngine.getMaxHeatingCapacity();
	
	cout << " " << this->getNumberOfProduct() << endl;
	
		
	
}
