#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(string type, const NodeInformation &info, bool busy){
	this->type = type;
	this->info = info;
	this->busy = busy;
}

string Vehicle::getType() const{
	return type;
}

NodeInformation Vehicle::getInfo() const{
	return info;
}

vector<int> Vehicle::getWay() const{
	return way;
}

bool Vehicle::getBusy() const{
	return busy;
}

void Vehicle::setInfo(NodeInformation info){
	this->info = info;
}

void Vehicle::setBusy(bool busy){
	this->busy = busy;
}

void Vehicle::setWay(vector<int> & way){
	this->way = way;
}

