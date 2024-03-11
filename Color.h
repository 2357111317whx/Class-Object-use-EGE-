/*
 * Color.h
 *
 *  Created on: 2024年3月7日
 *      Author: lenovo
 */

#ifndef COLOR_H_
#define COLOR_H_

#include <graphics.h>

class Color {
public:
	Color();
	Color(int , int , int);
	virtual ~Color();
	int getB() const;
	void setB(int b);
	int getG() const;
	void setG(int g);
	int getR() const;
	void setR(int r);

private:
	int R;
	int G;
	int B;

};

#endif /* COLOR_H_ */
