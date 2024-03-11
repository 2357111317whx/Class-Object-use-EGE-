/*
 * triangle.cpp
 *
 *  Created on: 2024年3月9日
 *      Author: lenovo
 */

#include "triangle.h"
#include <graphics.h>
triangle::triangle() : triangle({0,0},{100,20},{60,60},{2,20,200}){
	// TODO Auto-generated constructor stub

}

triangle::triangle(Point point1, Point point2, Point point3, Color bColor, bool isf,Color fColor)
			: p1{point1}, p2{point2},p3{point3},borderColor{bColor},isfill{isf},fillColor{fColor} {
}

triangle::~triangle() {
	// TODO Auto-generated destructor stub
}

const Point& triangle::getP1() const {
	return p1;

}

void triangle::setP1(const Point& p) {
	p1 = p;
}

const Point& triangle::getP2() const {
	return p2;
}

void triangle::setP2(const Point& p) {
	p2 = p;
}

const Point& triangle::getP3() const {
	return p3;
}

void triangle::setP3(const Point& p) {
	p3 = p;
}

void triangle::draw(){
	setcolor(EGERGB(borderColor.getR(),borderColor.getG(), borderColor.getB()));

	line(p1.getX(),p1.getY(),p2.getX(),p2.getY());
	line(p2.getX(),p2.getY(),p3.getX(),p3.getY());
	line(p3.getX(),p3.getY(),p1.getX(),p1.getY());
	if(isfill){
		setfillcolor(EGERGB(fillColor.getR(),fillColor.getG(), fillColor.getB()));
		floodfill((p1.getX() + p2.getX())/2,(p1.getY() + p3.getY())/2,
				EGERGB(borderColor.getR(),borderColor.getG(), borderColor.getB()));
	}

}

const Color& triangle::getBorderColor() const {
	return borderColor;
}

void triangle::setBorderColor(const Color &borderColor) {
	this->borderColor = borderColor;
}

const Color& triangle::getFillColor() const {
	return fillColor;
}

void triangle::setFillColor(const Color &fillColor) {
	this->fillColor = fillColor;
}

bool triangle::isIsfill() const {
	return isfill;
}



void triangle::setIsfill(bool isfill) {
	this->isfill = isfill;
}
