/*******************************************************************************************************
* @file			Engine.c  
*  
* @brief		Engine driver for Engine.h file 
* 
* @details		Engine is a class that has the common engine properties and their set and get functions,
*				and it is used as a composition class for home appliances.
*		
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
********************************************************************************************************/




#include "Engine.h"
using namespace std;
/**
* @brief	Constructor for engine class
*
* @details	This constructor is used for the assignment of common engine properties of refrigerators,
*			washingmachines and dishwashers. The common power and power rotation values are assigned 
*			to the corresponding values via set functions. Because engine capacity value is not common
*			for home appliances, it is only used by the corresponding home appliances. This is achieved
*			by receiving request value from main file. The request is default zero and thus, program does nothing.
*			It must be inserted as 1 for maximum cooling capacity for refrigerator, 2 to maximum water spray capacity
*			for dishwasher and 3 for maximum heating capacity for washing machine. 
*
* @param	Power value in watts, power rotation value, and a request for the special property
*
*/




Engine::Engine(double varPower, int rotation,int request)
{
	int valRequest;
	setPower( varPower );
	setNumberOfRotations(rotation);
	switch(request){
		case 0: break;
		case 1:
			cout <<"Enter max cooling capacity for refrigerator: ";
			cin >>valRequest;
			this->maxFeatureCap.maxCoolingCapacity = valRequest;
			break;
		case 2:
			cout <<"Enter max Water Spray Capacity for dishwasher: ";
			cin >>valRequest;
			this->maxFeatureCap.maxWaterSprayCapacity = valRequest;
			break;
		case 3: 
			cout <<"Enter max Heating Capacity for washing machine: ";
			cin >>valRequest;
			this->maxFeatureCap.maxHeatingCapacity = valRequest;
			break;
		
	}
}

/**
* @brief	Set power in watts 
* @param	Power in watts in type of double
* @retval	void
*/
void Engine::setPower( double varPower)
{
	power = varPower;
}

/**
* @brief	Set number of rotations 
* @param	Number of rotations in type of integer
* @retval	void
*/
void Engine::setNumberOfRotations( int rotation )
{
	maxNumberOfRotations = rotation;
}

/**
* @brief	Set maximum cooling capacity for refrigerator engine 
* @param	Maximum cooling capacity for refrigerator engine in type of integer
* @retval	void
*/
void Engine::setMaxCoolingCapacity(int coolingCap)
{
	this->maxFeatureCap.maxCoolingCapacity   = coolingCap;
}


/**
* @brief	Set maximum water spray capacity for dishwasher engine 
* @param	Maximum water spray capacity for dishwasher engine in type of integer
* @retval	void
*/
void Engine::setMaxWaterSprayCapacity(int waterCap)
{
	this->maxFeatureCap.maxWaterSprayCapacity = waterCap;
}

/**
* @brief	Set maximum heating capacity for washing machine engine 
* @param	Maximum heating capacity for washing machine engine in type of integer
* @retval	void
*/	
void Engine::setMaxHeatingCapacity(int heatingCap)
{
	this->maxFeatureCap.maxHeatingCapacity = heatingCap;
}

/**
* @brief	Get number of rotations 
* @param	void
* @retval	Number of rotations in type of integer
*/
int Engine::getNumberOfRotations() const
{
	return maxNumberOfRotations;
}

/**
* @brief	Get power in watts 
* @param	void
* @retval	Power in watts in type of double
*/
double Engine::getPower() const
{
	return power;
}

/**
* @brief	Get maximum cooling capacity for refrigerator engine 
* @param	void
* @retval	Maximum cooling capacity for refrigerator engine in type of integer
*/
int Engine::getMaxCoolingCapacity() const
{
	return this->maxFeatureCap.maxCoolingCapacity;
}

/**
* @brief	Get maximum water spray capacity for dishwasher engine 
* @param	void
* @retval	Maximum water spray capacity for dishwasher engine in type of integer
*/
int Engine::getMaxWaterSprayCapacity() const
{
	return this->maxFeatureCap.maxWaterSprayCapacity ;
}

/**
* @brief	Get maximum heating capacity for washing machine engine 
* @param	void
* @retval	Maximum heating capacity for washing machine engine in type of integer
*/
int Engine::getMaxHeatingCapacity() const
{
	return this->maxFeatureCap.maxHeatingCapacity;
}

/**
* @brief	Print the engine common properties 
* @param	void
* @retval	void
*/
void Engine::printEngine() const
{
	cout << " " << this->getPower() << " " << this->getNumberOfRotations();
		
}



/**
* @brief	Assign the maximum capacity value to the corresponding variable according to the request type 
* @param	capacity value and request type for home appliance
* @retval	void
*/
void Engine::setMaxFeatureCap(int cap, int request)
{
	switch(request){
	
		case 1:
		{	
			this->maxFeatureCap.maxCoolingCapacity = cap;
			break;
		}
	
		case 2:
		{
			this->maxFeatureCap.maxWaterSprayCapacity = cap;
			break;
		}
	
		case 3:
		{
			this->maxFeatureCap.maxHeatingCapacity = cap;
			break;
		}
	
	}
}
