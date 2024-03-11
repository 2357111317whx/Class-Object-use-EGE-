/*
 * Circle.cpp
 *
 *  Created on: 2024年3月9日
 *      Author: lenovo
 */

#include "Circle.h"

Circle::Circle() :Circle({320,240}, 100, {0,0,255}) {
	// TODO Auto-generated constructor stub

}
Circle::Circle(Point c, int r, Color co,bool isf, Color co1)
			: center{c},radius{r}, borderColor{co},isfill{isf}, fillColor{co1}{
}



Circle::~Circle() {
	// TODO Auto-generated destructor stub
}

const Point& Circle::getCenter() const {
	return center;
}

void Circle::setCenter(const Point &center) {
	this->center = center;
}


int Circle::getRadius() const {
	return radius;
}



void Circle::setRadius(int radius) {
	this->radius = radius;
}


void Circle::draw(){
	setcolor(EGERGB(borderColor.getR(),borderColor.getG(),borderColor.getB()));
	circle(center.getX(),center.getY(), radius);
	if(isfill){
		setfillcolor(EGERGB(fillColor.getR(),fillColor.getG(),fillColor.getB()));
		floodfill(center.getX(),center.getY(),EGERGB(borderColor.getR(),borderColor.getG(), borderColor.getB()));
	}



}

const Color& Circle::getBorderColor() const {
	return borderColor;
}

void Circle::setBorderColor(const Color &borderColor) {
	this->borderColor = borderColor;
}

const Color& Circle::getFillColor() const {
	return fillColor;
}


void Circle::setFillColor(const Color &fillColor) {
	this->fillColor = fillColor;
}

bool Circle::isIsfill() const {
	return isfill;
}

void Circle::setIsfill(bool isfill) {
	this->isfill = isfill;
}
