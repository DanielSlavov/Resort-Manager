//Daniel Slavov
//daniel_sl


#include<iostream>
#include"Country.hpp"
#include"Resort.hpp"
#include <map>




int main()
{
	//Tests
	Country BG=Country("Bulgaria");
	Resort Albena = Resort("albena", "nqkade tam", 1, 2, 5, 5, 2000, 20, 2, 5, 1);
	Resort Burgas = Resort("burgas", "nqkade tam", 1, 2, 5, 5, 2000, 20, 2, 5, 1);
	Resort Rila = Resort("Rila", "nqkade tam", 1, 2, 5, 5, 2000, 20, 2, 5, 1);
	Resort Nz = Resort("Burzam mnogo", "nqkade tam", 1, 2, 5, 5, 2000, 20, 2, 5, 1);

	BG.AddResort(Albena);
	BG.AddResort(Burgas);
	BG.AddResort(Rila);
	BG.AddResort(Nz);
	BG.FindResortByName();


	system("pause");
	return 0;
}
