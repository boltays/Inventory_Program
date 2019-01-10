/********************************************************************************************
* @file			Washing_Machine.h  
*  
* @brief		Prototypes for the derived class Washing_Machine of a base class called Home_Appliance 
*				and a Washing Machine as a Home Appliance
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/



#ifndef WASHING_MACHINE_H
#define WASHING_MACHINE_H
#include <stdexcept>
#include "Home_Appliance.h"
#include "Engine.h"	
using namespace std;


/** class	Washing_Machine
*	brief	A derived class of a base class called home appliance
*	details	This derived class includes special properties for Washing Machine 
*			in addition to common properties of a home appliance 	
*/

class Washing_Machine : public Home_Appliance
{
	public:
		
		/// create a Washing_Machine class
		Washing_Machine(string, int , int, int, string,int, int, int, int, Engine &, int);
		
		/// destructs a Washing_Machine class
		~Washing_Machine();
		
		/**
		  \brief	Set water consumption value liters
		  \return	void	
		*/
		void setWaterConsumption( int );
		
		/**
		  \brief	Set number of programs
		  \return	void	
		*/
		void setNumberOfPrograms( int );
		
		/**
		  \brief	Set capacity of weight of washing machine
		  \return	void	
		*/
		void setCapacityOfWeight( int );
		
		/**
		  \brief	Set squeeze speed of washing machine
		  \return	void	
		*/
		void setSqueezeSpeed( int );
		
		/**
		  \brief	Set number of washing machines in the inventory
		  \return	void	
		*/
		void setNumberOfProduct(int);
		
		/**
		  \brief	Get water consumption in liters
		  \return	Water consumption in liters	in type of integer
		*/
		int getWaterConsumption() const;
		
		/**
		  \brief	Get number of programs
		  \return	Number of programs in type of integer
		*/
		int getNumberOfPrograms() const;
		
		/**
		  \brief	Get capacity of weight
		  \return	Capacity of weight in type of integer
		*/
		int getCapacityOfWeight() const;
		
		/**
		  \brief	Get squeeze speed
		  \return	Squeeze speed in type of integer
		*/
		int getSqueezeSpeed() const;
		
		/**
		  \brief	Get number washing machines
		  \return	Number of washing machines in type of integer
		*/
		int getNumberOfProduct()const;
		
		/**
		  \brief	Print all the properties of washing machine
		  \return	void
		*/
		void printProperties() const;
		
	protected:
		int waterConsumption;
		int numberOfCleaningPrograms;
		int capacityOfWeight;
		int squeezeSpeed;
		int numberOfProduct;
		Engine washingMachineEngine;
};

#endif
