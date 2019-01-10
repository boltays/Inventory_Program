/********************************************************************************************
* @file			Engine.h  
*  
* @brief		Prototypes for the engine class that is used for composition
*
* @author		Aysenur Bolat
*
* @version		V1.0
*
* @date			28. December 2018
*********************************************************************************************/





#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

using namespace std;



/** union	maxCap
*	brief	Maximum capacities for each home appliances
*	details	Each home appliance own only one of the three parameters			 		 	
*/

typedef union maxCap{
	int maxCoolingCapacity;	//refrigerator
	int maxWaterSprayCapacity;//dishwasher
	int maxHeatingCapacity;
}maxCaps;



/** class	Engine
*	brief	Engine class prototypes
*	details	This class includes engine properties for  various
*			home appliances. 		 	
*/

class Engine
{
	
	public:
		
		/// create a Engine class
		Engine(double =0.0, int=0, int = 0 );	
		
		/**
		  \brief	Set power value in watts
		  \return	void	
		*/
		void setPower( double);	
		
		/**
		  \brief	Set number of rotations 
		  \return	void	
		*/
		void setNumberOfRotations( int );
		
		/**
		  \brief	Set maximum cooling capacity
		  \return	void	
		*/
		void setMaxCoolingCapacity(int);
		
		/**
		  \brief	Set maximum water spray capacity
		  \return	void	
		*/
		void setMaxWaterSprayCapacity(int);
		
		/**
		  \brief	Set maximum heating capacity
		  \return	void	
		*/
		void setMaxHeatingCapacity(int);
		
		/**
		  \brief	Set maximum capacities for home appliances
		  \return	void	
		*/
		void setMaxFeatureCap(int,int);
		
		/**
		  \brief	Get power value in watts
		  \return	Power value in watts in type of double
		*/
		double getPower() const;
		
		/**
		  \brief	Get number of rotations
		  \return	Number of rotations in type of integer
		*/
		int getNumberOfRotations() const;
		
		/**
		  \brief	Get maximum cooling capacity
		  \return	Maximum cooling capacity in type of integer
		*/
		int getMaxCoolingCapacity() const;
		
		/**
		  \brief	Get maximum water spray capacity
		  \return	Maximum water spray capacity in type of integer
		*/
		int getMaxWaterSprayCapacity() const;
		
		/**
		  \brief	Get maximum heating capacity
		  \return	Maximum heating capacity in type of integer
		*/
		int getMaxHeatingCapacity() const;
		
		/**
		  \brief	Print common engine properties
		  \return	void
		*/
		void printEngine() const;
		
	private:
		double power;	
		int maxNumberOfRotations;	
		maxCaps maxCapacity;
		maxCaps maxFeatureCap;
		
		
		
};

#endif
