#pragma once

class Datos
{
private:
	int datoarray;
public:
	Datos(int dataarray);
	~Datos();
	void setDatoarray(int dataarray);
	int getDatoarray();
};






Datos::Datos(int dataarray=0)
{
	this->datoarray = dataarray;
}

Datos::~Datos()
{
}

void Datos::setDatoarray(int dataarray) {
	this->datoarray = dataarray;
};
int Datos::getDatoarray() {
	return this->datoarray;
};