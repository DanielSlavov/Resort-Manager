//Daniel Slavov
//daniel_sl


#include"Country.hpp"
#include <algorithm>
#include <thread>
#include <iostream>
#include <mutex>
std::mutex mtx;
void execSearch(int criteria, std::vector<Resort> resorts)
{
	mtx.lock();
	//Resort *resort;
	if (criteria == 1){
		std::string name;
		std::cout << "Enter name to search: ";
		std::cin >> name;
		bool found = false;
		std::for_each(resorts.begin(), resorts.end(), [&](Resort aResort)
		{
			if (aResort.name() == name)
			{
				found = true;
				aResort.Display();

			}
		});
		if (!found)
		{
			std::cout << "no resorts found :(";
		}
	}

	else if (criteria == 2){
		int price;
		std::cout << "Enter mohito price to search: ";
		std::cin >> price;
		bool found = false;
		std::for_each(resorts.begin(), resorts.end(), [&](Resort aResort)
		{
			if (aResort.mohitoPrice() == price)
			{
				found = true;
				aResort.Display();

			}
		});
		if (!found)
		{
			std::cout << "no resorts found :(";
		}
	}

	else if (criteria == 3){
		int terrain;
		std::cout << "Enter terrain number to search .. 1 for Sand, 2 for Rock etc... : ";
		std::cin >> terrain;
		bool found = false;
		std::for_each(resorts.begin(), resorts.end(), [&](Resort aResort)
		{
			if (aResort.terrain() == (Terrain)terrain)
			{
				found = true;
				aResort.Display();

			}
		});
		if (!found)
		{
			std::cout << "no resorts found :(";
		}
	}
	mtx.unlock();
}

void Country::AddResort(Resort resort)
{
	_resorts.push_back(resort);
}
void Country::RemoveResort(std::string resortName)
{
	for (int i = 0; i < resorts().size(); i++)
	{

		if (resorts().at(i).name() == resortName)
		{
			resorts().erase(resorts().begin()+i);
			break;
		}
	}
}
void Country::FindResortByName()
{
	std::thread t(execSearch, 1, resorts());
	t.join();
}
void Country::FindResortByMohitoPrice()
{
	std::thread t(execSearch, 2, resorts());
	t.join();
}
void Country::FindResortByTerrain()
{
	std::thread t(execSearch, 3, resorts());
	t.join();
}
Country::Country(std::string name)
{
	SetName(name);
}
