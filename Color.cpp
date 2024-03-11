/*
 * Color.cpp
 *
 *  Created on: 2024年3月7日
 *      Author: lenovo
 */

#include "Color.h"

Color::Color() :Color(0,0,0){
	// TODO Auto-generated constructor stub

}
Color::Color(int r,int g,int b):R{r}, G{g}, B{b}{

}

Color::~Color() {
	// TODO Auto-generated destructor stub
}

int Color::getB() const {
	return B;
}

void Color::setB(int b) {
	B = b;
}

int Color::getG() const {
	return G;
}

void Color::setG(int g) {
	G = g;
}

int Color::getR() const {
	return R;
}

void Color::setR(int r) {
	R = r;
}
