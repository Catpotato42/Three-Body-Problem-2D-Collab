#pragma once
#include <iostream>
#include <vector>

class Calculations {
public:
	Calculations(int planets) { //in the future will also take initial positions based on height of the window
		this->planets = planets;
	};
	int planets; //must be 3 right now
	std::vector<int> initialPositions = { 500,0,100,100,200,200 }; //placeholder, x1,y1,x2,y2,...


};