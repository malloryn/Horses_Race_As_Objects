// Race.h 

#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS
#include <string>
#include "Horse.h"

class Race{
	private:
		Horse arrayOfHorses[5]; //creates an instance of a horse array	
	public:
		int length; // 15
		Race();
		Race(int len);
		void printTrack(); 
		bool checkWinner(bool keepGoing);
		void start();
};
#endif