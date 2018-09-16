#pragma once
#include "CHelmholtz.hpp"
/*##############################################
## Classes usadas para passar os coeficientes ##
## certos para a equacao de cada substancia ####
##############################################*/
class CHelmholtzAgua: public CHelmholtz{
	public:
		CHelmholtzAgua();
		~CHelmholtzAgua();
};