//Daniel Slavov
//daniel_sl


#ifndef Country_hpp
#define Country_hpp
#include "Resort.hpp"
#include <vector>
#include <thread>
#include <map>

enum Currency
{
	C1,
	C2,
	C3
};

class Country
{
protected:
	std::string _name;
	std::vector<Resort> _resorts;
	Currency _currency;
	float _exchangeRate;
public:
	void SetName(std::string name){ _name = name; }
	void SetResorts(std::vector<Resort> resorts) { _resorts = resorts; }
	void SetCurrency(Currency currency)
	{
		_currency = currency;
		switch (currency)
		{
		case C1:
			_exchangeRate = 1.23;
		case C2:
			_exchangeRate = 3.45;
		case C3:
			_exchangeRate = 5.01;
		}
	}

	std::string name(){ return _name; }
	std::vector<Resort> resorts(){ return _resorts; }
	Currency currency(){ return _currency; }
	float exchangeRate(){ return _exchangeRate; }


	//functions
	Country(std::string name);
	Country(std::string name, Currency currency);
	void AddResort(Resort resort);
	void RemoveResort(std::string resortName);
	void FindResortByName();
	void FindResortByMohitoPrice();
	void FindResortByTerrain();
	//void execSearch(int criteria);
};
#endif