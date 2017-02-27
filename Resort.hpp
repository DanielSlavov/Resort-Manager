//Daniel Slavov
//daniel_sl

#ifndef Resort_hpp
#define Resort_hpp
#include <string>
#include"Terrain.hpp"
#include"WaterType.hpp"
class Resort 
{
protected:
	std::string _name;
	std::string _coordinates;
	Terrain _terrain;
	WaterType _waterType;
	short _terrainRating;
	short _waterRating;
	int _yearlyVisitors;
	int _averageCostPerDay; //
	int _raspberryDaiquiriPrice;
	int _mohitoPrice;
	int _orangeJuicePrice;
public:

//getters
	std::string name(){ return _name; }
	std::string coordinates(){ return _coordinates; }
	Terrain terrain(){ return _terrain; }
	WaterType waterType(){return _waterType;}
	short  terrainRating(){ return _terrainRating; }
	short waterRating(){ return _waterRating; }
	int yearlyVisitors(){ return _yearlyVisitors; }
	int averageCostPerDay(){ return _averageCostPerDay; }
	int raspberryDaiquiriPrice(){ return _raspberryDaiquiriPrice; }
	int mohitoPrice(){ return _mohitoPrice; }
	int orangeJuicePrice(){ return _orangeJuicePrice; }


//setters #validation
	void SetName(std::string name){ _name = name; }
	void SetCoordinates(std::string coordinates){ _coordinates = coordinates; }
	void SetTerrain(Terrain terrain){ _terrain = terrain; }
	void SetWaterType(WaterType waterType){ _waterType = waterType; }
	void SetTerrainRating(short terrainRating){ _terrainRating = terrainRating; }
	void SetWaterRating(short waterRating){ _waterRating = waterRating; }
	void SetYearlyVisitors(int yearlyVisitors){ _yearlyVisitors = yearlyVisitors; }
	void SetAverageCostPerDay(int averageCostPerDay){ _averageCostPerDay = averageCostPerDay; }
	void SetRaspberryDaiquiriPrice(int raspberryDaiquiriPrice) { _raspberryDaiquiriPrice = raspberryDaiquiriPrice; }
	void SetMohitoPrice(int mohitoPrice){ _mohitoPrice = mohitoPrice; }
	void SetOrangeJuicePrice(int orangeJuicePrice){ _orangeJuicePrice = orangeJuicePrice; }
//
	Resort();
	Resort(std::string name, std::string coordinates, int terrain, int wt, short terrainRating, short waterRating, int yearlyVisitors, int avrgCost, int raspberyalabalaPrice, int mohitoPrice, int orangeJuicePrice);
	void Display();
};

#endif Resort_hpp