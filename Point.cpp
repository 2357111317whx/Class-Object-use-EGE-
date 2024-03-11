/*
 * Point.cpp
 *
 *  Created on: 2024年3月7日
 *      Author: lenovo
 */


#include <iostream>
#include "Point.h"




Point::Point() :Point(0,0){
	// TODO Auto-generated constructor stub

}

Point::Point(int x_,int y_):x{x_},y{y_}{

}

Point::Point(const Point& p){
	x = p.getX();
	y = p.getY();
}

Point::~Point() {
	// TODO Auto-generated destructor stub
}



int Point::getX() const{
	return x;
}

int Point::getY() const{
	return y;
}

void Point::setX(int x_){
	x = x_;
}

void Point::setY(int y_){
	y = y_;
}


void Point::toString(){
	std::cout << "(" << x << " , " << y << ")" << std::endl;
}
