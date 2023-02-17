// Race.cpp

#include <string>
#include <iostream>
#include <ctime>
#include "Horse.h"
#include "Race.h"

Race::Race(){

} //end constructor

Race::Race(int len){
	
	length = len;
	
} //end Race length

// uses a for loop to print the track
void Race::printTrack() {
	
	int i, j;

	for (i = 0; i < 5; i++)
	  {
		for (j = 0; j < length; j++)
		  {
			// if horse's position is on the track the horse number is printed
			if (arrayOfHorses[i].getPosition() == j)
			  {
				std::cout << i;
			  }
			// if not the a dot is printed
			else
			  {
				std::cout << ".";
			  }
		  }
			std::cout << "\n";
	  }
		std::cout << "\n";

} //end printTrack

// 
bool Race::checkWinner(bool keepGoing) {

	for (int i = 0; i < 5; i++) 
	  {
		// program is ended if a horse's position equals the length
		if (arrayOfHorses[i].getPosition() == length)
		  {
			keepGoing = false;
			std::cout << "Horse "<< i <<" wins!" << std::endl;
		  }
	  }
	return keepGoing;

} //end checkWinner

// starts the race with a while loop to keep going until a horse wins
// the track is printed
void Race::start() {
	
	// makes the outcome pseudo random with implementation of time
    srand(time(NULL));
    
	// prompts the user to enter a random number and store it in input
    int input;
    std::cout << "Please enter a random seed: ";
    std::cin >> input;
	
	// creates a boolean variable and sets it to true
	bool keepGoing = true;
	
	// each horse flips a coin that, if heads (1) the horse advances
	while(keepGoing)
	  {
		for (int i = 0; i < 5; i++)
	  	  {		
			int coin = rand() % 2;
		
			if (coin == 1)
		  	  {
				arrayOfHorses[i].advance();
		  	  }
			else
		  	  {
		  		// do nothing
		  	  }		  
	  	  } //end for loop

			//printTrack
			printTrack();		
			
			// User must press the enter key to print the next track
			std::cin.ignore();
				
			//checkWinner
			keepGoing = checkWinner(keepGoing);

	  }//end while loop
} //end start 