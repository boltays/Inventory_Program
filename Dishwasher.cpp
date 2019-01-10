/*******************************************************************************************************
* @file			Dishwasher.c  
*  
* @brief		Dishwasher driver as a derived class of home appliance 
* 
* @details		Dishwasher is a derived class of a Home_Appliance and it includes the properties 
*				such as water consumption value, number of programs of dishwasher, capacity, number of racks
*				number of dishwashers in the inventory and the engine properties as a dishwasher engine.
*				Composition of Engine class to Dishwasher class is used due to the fact that a dishwasher has a engine property.
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
********************************************************************************************************/



#include "Dishwasher.h"
using namespace std;





/**
* @brief	Constructor for dishwasher class
*
* @details	From the first parameter to the water consumption parameter, they all belong to the base class Home_Appliance.
*			Dishwasher is inherited from the Home Appliance because dishwasher is a home appliance type.
*			For this reason, in the constructor of dishwasher, Home_Appliance constructor is called for the first five 
*			parameters. In addition, dishwasher has a dishwasher engine and the engine class is added as a composition
*			to dishwasher class. According to the composition basics, referance value in type of Engine is used as a
*			parameter in the dishwasher constructor. Parameter d_engine value is stored in the dishwasherEngine
*			variable which is decleared in the Dishwasher.h file. This value assignment is done with the
*			member initializer list. At the beginning, the default values written in the main file are sent to the 
*			data members with set functions. This is necessary for creating the default valued- objects and then, 
*			the user is able to give desired values to these variables with directly using constructor. That is why
*			addition set functions and input - output operations beside the member initializer list and the first 
*			four set functions.
*
* @param	Identification code, height, length, width values, energy consumption class, water consumption in liters,
*			number of programs that dishwasher has, capacity of dishwasher, number of racks, engine properties as a 
*			referance of type Engine, and a number of dishwashers in the inventory.
*
*/
Dishwasher::Dishwasher(string ID, int varHeight,int varLength,int varWidth,string energyClass,
int consumption,int numPrograms, int varCapacity, int numRacks, Engine &d_engine, int numOfProd)
		 : Home_Appliance( ID, varHeight, varLength, varWidth, energyClass),
		 dishwasherEngine(d_engine)
{
	setWaterConsumption(consumption);
	setNumberOfCleaningPrograms(numPrograms),
	setCapacityOfDishes(varCapacity);
	setNumberOfRacks(numRacks);

	
	int waterSprayCap;
	double d_power;
	int rotation;
	
	cout << "Enter the dishwasher properties respectively." << endl;
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
	setNumberOfCleaningPrograms(numPrograms);
	
	cout << "\nCapacity as Number of Dishes: ";
	cin >> varCapacity;
	setCapacityOfDishes(varCapacity);
	
	cout << "\nNumber of Racks: ";
	cin >> numRacks;
	setNumberOfRacks(numRacks);
	
	cout << "\nPower of Dishwasher Engine: ";
	cin >> d_power;
	this->dishwasherEngine.setPower(d_power);
	
	cout << "\nRotation of Dishwasher Engine: ";
	cin >> rotation;
	this->dishwasherEngine.setNumberOfRotations(rotation);
	
	cout << "\nWater Spray Capacity of Dishwasher Engine: ";
	cin >> waterSprayCap;
	this->dishwasherEngine.setMaxFeatureCap(waterSprayCap,2);
	
	cout <<"\nEnter number of products:";
	cin>>numOfProd;
	this->setNumberOfProduct(numOfProd);
	
	
	
	
}
Dishwasher::~Dishwasher()
{
	
}

/**
* @brief	Set water consumption value of dishwasher in liters
* @param	Water consumption value in type of integer
* @retval	void
*/
void Dishwasher::setWaterConsumption( int consumption )
{
	waterConsumption = consumption;
}

/**
* @brief	Set number of cleaning programs of dishwasher 
* @param	Number of cleaning programs in type of integer
* @retval	void
*/
void Dishwasher::setNumberOfCleaningPrograms( int numPrograms )
{
	numberOfCleaningPrograms =	numPrograms;
}

/**
* @brief	Set capacity of dishes of dishwasher 
* @param	Capacity of dishes in type of integer
* @retval	void
*/
void Dishwasher::setCapacityOfDishes( int varCapacity)
{
	capacityOfDishes = varCapacity;
}

/**
* @brief	Set number of racks of dishwasher
* @param	Number of racks in type of integer
* @retval	void
*/
void Dishwasher::setNumberOfRacks( int numRacks)
{
	numberOfRacks =	numRacks;
}

/**
* @brief	Set number of dishwashers in the inventory
* @param	Number of dishwashers in type of integer
* @retval	void
*/
void Dishwasher::setNumberOfProduct(int numOfProd)
{
	this->numberOfProduct = numOfProd;
}		 

/**
* @brief	Get water consumption in liters
* @param	void 
* @retval	Water consumption in type of integer
*/
int Dishwasher::getWaterConsumption() const
{
	return waterConsumption;	
}

/**
* @brief	Get number of cleaning programs of dishwasher
* @param	void 
* @retval	number of cleaning programs in type of integer
*/
int Dishwasher::getNumberOfCleaningPrograms() const
{
	return numberOfCleaningPrograms;
}

/**
* @brief	Get capacity of dishes of dishwasher
* @param	void 
* @retval	capacity of dishes in type of integer
*/
int Dishwasher::getCapacityOfDishes() const
{
	return capacityOfDishes;
}

/**
* @brief	Get number of racks of dishwasher
* @param	void 
* @retval	Number of racks in type of integer
*/
int Dishwasher::getNumberOfRacks() const
{
	return numberOfRacks;
}

/**
* @brief	Get number of dishwashers
* @param	void 
* @retval	Number of dishwashers in type of integer
*/
int Dishwasher::getNumberOfProduct()const
{
	return this->numberOfProduct;
}

/**
* @brief	Print all the associated properties of dishwasher
* @details	The common properties that are inherited from the base class Home_Appliance
*			are printed with the print function that belongs to the same base class 
*			Home_Appliance. Dishwasher's own properties are printed with its own print 
*			function. Engine properties are printed with the function belongs to the Engine
*			class. The decleared dishwasherEngine variable of type Engine is used to 
*			access to the Engine's print and get functions.
* @param	void
* @retval	void
*/
void Dishwasher::printProperties() const
{
	Home_Appliance::printProperties();
	
	cout << " " << this->getWaterConsumption() << " " << this->getNumberOfCleaningPrograms() << " " 
		<< this->getCapacityOfDishes() << " " << this->getNumberOfRacks();
		
	dishwasherEngine.printEngine();
	cout << " " << dishwasherEngine.getMaxWaterSprayCapacity();
	cout <<" " <<this->getNumberOfProduct();
	
	
	
	
}
