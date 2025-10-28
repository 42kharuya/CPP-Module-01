#ifndef _HARL_H_
#define _HARL_H_

#include <iostream>

class Harl {
	private:
	 void	debug(void);
	 void	info(void);
	 void	warning(void);
	 void	error(void);

	public:
	 Harl();
	 ~Harl();
	 bool checkLevel(std::string level);
	 void complain(std::string level);
};

#endif // _HARL_H_
