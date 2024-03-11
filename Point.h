/*
 * Point.h
 *
 *  Created on: 2024年3月7日
 *      Author: lenovo
 */

#ifndef POINT_H_
#define POINT_H_

class Point {
public:
	Point();
	Point(int,int);
	Point(const Point&);
	virtual ~Point();
	int getX()const;
	int getY()const;
	void setX(int);
	void setY(int);
	void toString();
private:
	int x;
	int y;
};

#endif /* POINT_H_ */
