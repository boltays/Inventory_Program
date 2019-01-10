/********************************************************************************************
* @file			Dishwasher.h  
*  
* @brief		Prototypes for the derived class Dishwasher of a base class called Home_Appliance 
*				and a Dishwasher as a Home Appliance
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/



#ifndef DISHWASHER_H
#define DISHWASHER_H
#include <stdexcept>
#include "Home_Appliance.h"
#include "Engine.h"
using namespace std;



/** class	Dishwasher
*	brief	A derived class of a base class called home appliance
*	details	This derived class includes special properties for Dishwasher 
*			in addition to common properties of a home appliance 	
*/

class Dishwasher : public Home_Appliance
{
	public:
		
		/// create a Dishwasher class
		Dishwasher(string, int , int, int, string,int,int,int,int, Engine &, int);
		
		/// destructs the Dishwasher class
		~Dishwasher();
		
		/**
		  \brief	Set water consumption value liters
		  \return	void	
		*/
		 void setWaterConsumption( int );
		 
		 /**
		  \brief	Set number of cleaning programs
		  \return	void	
		*/
		 void setNumberOfCleaningPrograms( int );
		 
		 /**
		  \brief	Set capasity of dishes
		  \return	void	
		*/
		 void setCapacityOfDishes( int );
		 
		 /**
		  \brief	Set number of racks
		  \return	void	
		*/
		 void setNumberOfRacks( int );
		 
		 /**
		  \brief	Set number of dishwashers in the inventory
		  \return	void	
		*/
		 void setNumberOfProduct(int);
		 
		 /**
		  \brief	Get water consumption value liters
		  \return	Water consumption in liters in type of integer	
		*/
		 int getWaterConsumption() const;
		 
		  /**
		  \brief	Get number of cleaning programs
		  \return	Number of cleaning programs	in type of integer
		*/
		 int getNumberOfCleaningPrograms() const;
		 
		 /**
		  \brief	Get capasity of dishes
		  \return	Capasity of dishes in type of integer
		*/
		 int getCapacityOfDishes() const;
		 
		 /**
		  \brief	Get number of racks of dishwasher
		  \return	Number of racks in type of integer
		*/
		 int getNumberOfRacks() const;
		 
		 /**
		  \brief	Get number of dishwashers in the inventory
		  \return	Number of dishwashers in type of integer
		*/
		 int getNumberOfProduct()const;
		 
		 /**
		  \brief	Print properties of dishwasher
		  \return	void
		*/
		 void printProperties() const;
		 
	protected:
		int waterConsumption;
		int numberOfCleaningPrograms;
		int capacityOfDishes;
		int numberOfRacks;
		int numberOfProduct;
		Engine dishwasherEngine;
};

#endif
