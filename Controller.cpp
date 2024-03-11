/*
 * Controller.cpp
 *
 *  Created on: 2024年3月7日
 *      Author: lenovo
 */

#include "Controller.h"
#include <graphics.h>

Controller::Controller() {
	// TODO Auto-generated constructor stub

}

Controller::~Controller() {
	// TODO Auto-generated destructor stub
}

void Controller::getEnv(){
	initgraph(640, 480);
	setbkcolor(WHITE);
}

void Controller::delEnv(){
	getch();
	closegraph();
}
