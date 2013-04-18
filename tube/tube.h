/*
 * tube.h
 *
 *  Created on: Apr 17, 2013
 *      Author: agu
 */

#ifndef TUBE_H_
#define TUBE_H_

#include "Arduino.h"

class Tube {
public:

	enum Color {
		Black, Blue, Green, Cyan, Red, Magenta, Yellow, White,
	};

	virtual ~Tube();
	virtual byte * getBuff();
	void setBuff(byte *p, byte length);

	virtual byte getBuffLength() = 0;
	virtual void runEffect() = 0;
	virtual void setChar(char c) = 0;
	virtual void setPoint(byte c) = 0;
	virtual void setColor(Tube::Color color) = 0;
protected:
	Tube();
	byte *_buff;
	virtual byte convertCharToIndex(char c) = 0;
};

#endif /* TUBE_H_ */
