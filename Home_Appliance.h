/********************************************************************************************
* @file			Home_Appliance.h  
*  
* @brief		Base class function prototypes for the Home_Appliance driver
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/




#ifndef HOME_APPLIANCE_H
#define HOME_APPLIANCE_H
#include <iostream>
#include <string>

using namespace std;

/** class	Home_Appliance
*	brief	an abstract home appliance 	
*	details	This abstract class incorporates properties common to
*			home appliance types: Refrigerator, Dishwasher and 
*			Washing Machine.
*/


class Home_Appliance
{
	public:
		
		// create a Home_Appliance class
		Home_Appliance(string,int,int,int,string);
		
		/**
		  \brief	Set identification code	
		  \return	void	
		*/
		void setIdentificationCode( string );
		
		/**
		  \brief	Set height of home appliance	
		  \return	void	
		*/
		void setHeight( int );
		
		/**
		  \brief	Set length of home appliance	
		  \return	void	
		*/
		void setLength( int );
		
		/**
		  \brief	Set width of home appliance	
		  \return	void	
		*/
		void setWidth( int );
		
		/**
		  \brief	Set energy consumption class of home appliance	
		  \return	void	
		*/
		void setEnergyConsumptionClass( string );
		
		/**
		  \brief	Print properties of home appliance	
		  \return	void	
		*/
		void printProperties() const;
		
		/**
		  \brief	Get identification code of home appliance	
		  \return	string	
		*/
		string getIdentificationCode() const;
		
		/**
		  \brief	Get height of home appliance	
		  \return	integer	
		*/
		int getHeight() const;
		
		/**
		  \brief	Get length of home appliance	
		  \return	integer	
		*/
		int getLength() const;
		
		/**
		  \brief	Get width of home appliance	
		  \return	integer	
		*/
		int getWidth() const;
		
		/**
		  \brief	Get energy consumption class of home appliance	
		  \return	string	
		*/
		string getEnergyConsumptionClass() const;
		
		/**
		  \brief	Detect if the given string consists of letters	
		  \return	bool
		*/
		bool IsLetter(string input) const;
		
	protected:
		string identificationCode;					
		int height;
		int length;
		int width;
		string energyConsumptionClass;	
};

#endif
