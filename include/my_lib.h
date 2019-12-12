#ifndef _MY_LIB_H
#define _MY_LIB_H

#include <iostream>

enum color
{
	RED,
	GREEN,
	BLUE,
	YELLOW,
	WHITE
};

enum style
{
	NORMAL,
	BOLD,
	KUR,
	UNDERLINE,
	BLINK = 5,
	INVERT = 7,
	DOUBLE_UNDERLINE = 21,
	OVERLINE = 53
};

#define __ERROR my::edit_output(RED,BLINK);
#define __CORRECT my::edit_output(GREEN,BOLD);
#define __NORMAL my::edit_output(WHITE);

namespace my
{
	void edit_output(color c)
	{
		std::cout << "\033[00m";
		switch(c)
		{
			case RED:
				std::cout << "\033[01;31m";
				break;
			case GREEN:
				std::cout << "\033[01;32m";
				break;
			case BLUE:
				std::cout << "\033[01;36m";
				break;
			case YELLOW:
				std::cout << "\033[01;33m";
				break;
			case WHITE:
				std::cout << "\033[00;00m";
				break;
			default:
				std::cout << "Unknown color. Valid values are:" << std::endl << "RED, GREEN, BLUE, YELLOW, WHITE" << std::endl;
		}
	}

	void edit_output(color c,style s)
	{
		char format[31];

		std::cout << "\033[00m";
		switch(c)
		{
			case RED:
				std::cout << "\033[01;31m";
				sprintf(format,"\033[%02d;31m",s);
				std::cout << format;
				break;
			case GREEN:
				sprintf(format,"\033[%02d;32m",s);
				std::cout << format;
				break;
			case BLUE:
				sprintf(format,"\033[%02d;36m",s);
				std::cout << format;
				break;
			case YELLOW:
				sprintf(format,"\033[%02d;33m",s);
				std::cout << format;
				break;
			case WHITE:
				sprintf(format,"\033[%02d;00m",s);
				std::cout << format;
				break;
			default:
				std::cout << "Unknown color. Valid values are:" << std::endl << "RED, GREEN, BLUE, YELLOW, WHITE" << std::endl;
		}
	}

}


#endif /*_MY_LIB_H*/
