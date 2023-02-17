// Horse.cpp

#include <iostream>
#include <string>
#include <cstdlib>
#include "Horse.h"

Horse::Horse(){

	// start horses' position at 0	
	position = 0;

} //end default constructor

// advances the horse through the track
void Horse::advance(){

	// advances the horses by 1
	position++;

} //end advance 

// Stores the horses' position for access outside of the class
int Horse::getPosition(){

	return position;

} //end getPosition