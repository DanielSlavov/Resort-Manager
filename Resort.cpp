//Daniel Slavov
//daniel_sl

#include"Resort.hpp"
#include <iostream>


Resort::Resort(std::string name, std::string coordinates, int terrain, int wt, short terrainRating, short waterRating, int yearlyVisitors, int avrgCost, int raspberyalabalaPrice, int mohitoPrice, int orangeJuicePrice)
{
	SetName(name);
	SetCoordinates(coordinates);
	SetTerrain((Terrain)terrain);
	SetWaterType((WaterType)wt);
	SetTerrainRating(terrainRating);
	SetWaterRating(waterRating);
	SetYearlyVisitors(yearlyVisitors);
	SetAverageCostPerDay(avrgCost);
	SetRaspberryDaiquiriPrice(raspberyalabalaPrice);
	SetMohitoPrice(mohitoPrice);
	SetOrangeJuicePrice(orangeJuicePrice);
}
void Resort::Display()
{
	std::cout << name() << std::endl;
	std::cout << coordinates() << std::endl;
	std::cout << (Terrain)terrain() <<std::endl;
	std::cout << (WaterType) waterType()<< std::endl;
	std::cout << terrainRating() << std::endl;
	std::cout << waterRating() << std::endl;
	std::cout << yearlyVisitors() << std::endl;
	std::cout << averageCostPerDay() << std::endl;
	std::cout << raspberryDaiquiriPrice() << std::endl;
	std::cout << mohitoPrice() << std::endl;
	std::cout << orangeJuicePrice() << std::endl;



}