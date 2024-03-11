/*
 * Rect.cpp
 *
 *  Created on: 2024年3月8日
 *      Author: lenovo
 */

#include "Rect.h"
#include "Color.h"

Rect::Rect() : Rect({160,120},{480,360},{0,0,255}) {
	// TODO Auto-generated constructor stub

}
Rect::Rect(Point p, Point p1, Color c,bool isf, Color c1)
					: start{p}, end{p1}, borderColor{c},isfill{isf}, fillColor{c1}{

}


Rect::~Rect() {
	// TODO Auto-generated destructor stub
}

const Color& Rect::getBorderColor() const {
	return borderColor;
}

void Rect::setBorderColor(const Color &borderColor) {
	this->borderColor = borderColor;
}

const Point& Rect::getEnd() const {
	return end;
}

void Rect::setEnd(const Point &end) {
	this->end = end;
}

const Color& Rect::getFillColor() const {
	return fillColor;
}

void Rect::setFillColor(const Color &fillColor) {
	this->fillColor = fillColor;
}

const Point& Rect::getStart() const {
	return start;
}


void Rect::setStart(const Point &start) {
	this->start = start;
}

void Rect::draw() {
	setcolor(EGERGB(borderColor.getR(),borderColor.getG(), borderColor.getB()));
	rectangle(start.getX(),start.getY(),end.getX(),end.getY());
	if(isfill){
		setfillcolor(EGERGB(fillColor.getR(),fillColor.getG(), fillColor.getB()));
		floodfill(start.getX()+1, start.getY()+1,
				EGERGB(borderColor.getR(),borderColor.getG(), borderColor.getB()));
	}
}

bool Rect::isIsfill() const {
	return isfill;
}

void Rect::setIsfill(bool isfill) {
	this->isfill = isfill;
}
