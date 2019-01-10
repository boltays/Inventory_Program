/*******************************************************************************************************
* @file			Refrigerator.c  
*  
* @brief		Refrigerator driver as a derived class of home appliance 
* 
* @details		Refrigerator is a derived class of a Home_Appliance and it includes the properties 
*				such as minimum temperature, number of doors, defrost property, number of refrigerators
*				in the inventory and the engine properties as a refigerator engine. Composition of Engine 
*				class to Refrigerator class is used due to the fact that a refrigerator has a engine property.
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
********************************************************************************************************/




#include "Refrigerator.h"

using namespace std;

/**
* @brief	Constructor for refrigerator class
*
* @details	From the first parameter to the temperature parameter, they all belong to the base class Home_Appliance.
*			Refrigerator is inherited from the Home Appliance because refrigerator is a home appliance type.
*			For this reason, in the constructor of refrigerator, Home_Appliance constructor is called for the first five 
*			parameters. In addition, refrigerator has a refrigerator engine and the engine class is added as a composition
*			to refrigerator class. According to the composition basics, referance value in type of Engine is used as a
*			parameter in the refrigerator constructor. Parameter r_engine value is stored in the refrigeratorEngine
*			variable which is decleared in the Refrigerator.h file. This value assignment is done with the
*			member initializer list. At the beginning, the default values written in the main file are sent to the 
*			data members with set functions. This is necessary for creating the default valued- objects and then, 
*			the user is able to give desired values to these variables with directly using constructor. That is why
*			addition set functions and input - output operations beside the member initializer list and the first 
*			four set functions.
*
* @param	Identification code, height, length, width values, energy consumption class, temperature, volume, number of doors,
*			defrost property, engine properties as a referance of type Engine, and a number of refrigerator in the inventory.
*
*/
Refrigerator::Refrigerator(string ID, int varHeight, int varLength, int varWidth,  string energyClass, 
int temperature, int varVolume, int numDoors, char varProperty,Engine &r_engine, int numOfProd)	
	: Home_Appliance(ID, varHeight, varLength, varWidth, energyClass),
	  refrigeratorEngine(r_engine)

{
	
	int coolingCap;
	double r_power;
	int rotation;
	
	setMinTemperature( temperature );
	setVolume( varVolume );
	setNumberOfDoors( numDoors );
	setDefrostProperty( varProperty );
	
	cout << "Enter the refrigerator properties respectively." << endl;
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
	
	
	cout << "\nMinimum Temperature in Celsius: ";
	cin >> temperature;
	setMinTemperature(temperature);
	
	cout << "\nVolume in Liters: ";
	cin >> varVolume;
	setVolume(varVolume);
	
	cout << "\nNumber of Doors: ";
	cin >> numDoors;
	setNumberOfDoors(numDoors);
	
	cout << "\nDefrost Property (T/F): ";
	cin >> varProperty;
	if(varProperty == 'T' || varProperty == 't' || varProperty == 'F' || varProperty == 'f')
		setDefrostProperty(varProperty);
	else	
		throw invalid_argument("\nDefrost property must be either T or F.");
		
		
	cout << "\nPower of Refrigerator Engine in Watts: ";
	cin >> r_power;
	this->refrigeratorEngine.setPower(r_power);
	
	cout << "\nMaximum Number of Rotations of a Refrigerator Engine Per Minute: ";
	cin >> rotation;
	this->refrigeratorEngine.setNumberOfRotations(rotation);
	
	
	
	cout <<"\nMax Cooling Capacity for Refrigerator Engine: ";
	cin >>coolingCap;
	this->refrigeratorEngine.setMaxFeatureCap(coolingCap,1);
	
	cout <<"\nNumber of Products in Inventory :";
	cin	 >>numOfProd;
	setNumberOfProduct(numOfProd);
	
	
}

Refrigerator::~Refrigerator()
{
	
}

/**
* @brief	Set minimum temperature value of refrigerator in celsius
* @param	Temperature value in type of integer
* @retval	void
*/
void Refrigerator::setMinTemperature( int temperature )
{
	minTemperature = temperature;
}

/**
* @brief	Set volume value of refrigerator in liters
* @param	Volume value in type of integer
* @retval	void
*/
void Refrigerator::setVolume( int varVolume)
{
	volume = varVolume;	
}

/**
* @brief	Set number of doors that refrigerator has
* @param	Number of doors in type of integer
* @retval	void
*/
void Refrigerator::setNumberOfDoors( int numDoors)
{
	numberOfDoors = numDoors;
}

/**
* @brief	Set defrost property of refrigerator as T or F
* @param	Defrost property as T or F in type of character
* @retval	void
*/
void Refrigerator::setDefrostProperty(char varProperty)
{
	defrostProperty =varProperty;
}

/**
* @brief	Get minimum temperature value of refrigerator in celsius
* @param	void
* @retval	Temperature value in celsius in type of integer
*/
int Refrigerator::getMinTemperature() const
{
	return minTemperature;
}

/**
* @brief	Set number of refrigerators in the inventory
* @param	Number of refrigerators in type of integer
* @retval	void
*/
void Refrigerator::setNumberOfProduct(int numOfProduct)
{
	this->numberOfProducts = numOfProduct;
}

/**
* @brief	Get volume value of refrigerator in liters
* @param	void
* @retval	Volume in liters in type of integer
*/
int Refrigerator::getVolume() const
{
	return volume;
}

/**
* @brief	Get number of doors of refrigerator 
* @param	void
* @retval	Number of doors in type of integer
*/
int Refrigerator::getNumberOfDoors() const
{
	return numberOfDoors;
}

/**
* @brief	Get defrost property of refrigerator 
* @param	void
* @retval	Defrost property as T or F in type of character
*/
char Refrigerator::getDefrostProperty() const
{
	return defrostProperty;
	
}

/**
* @brief	Get number of refrigerators 
* @param	void
* @retval	Number of refrigerators in type of integer
*/
int Refrigerator::getNumberOfProduct()const
{
	return this->numberOfProducts;
}

/**
* @brief	Print all the associated properties of refrigerator
* @details	The common properties that are inherited from the base class Home_Appliance
*			are printed with the print function that belongs to the same base class 
*			Home_Appliance. Refrigerator's own properties are printed with its own print 
*			function. Engine properties are printed with the function belongs to the Engine
*			class. The decleared refrigeratorEngine variable of type Engine is used to 
*			access to the Engine's print and get functions.
* @param	void
* @retval	void
*/
void Refrigerator::printProperties() const
{
	Home_Appliance::printProperties();
	cout << " " << this->getMinTemperature() << " " << this->getVolume()
		<< " " << this->getNumberOfDoors() << " " << this->getDefrostProperty();
	refrigeratorEngine.printEngine();
	cout << " " << refrigeratorEngine.getMaxCoolingCapacity();
	cout << " " <<this->getNumberOfProduct();


}










