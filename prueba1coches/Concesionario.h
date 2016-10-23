#include <string.h>
#include <iostream>
using namespace std;
#include <vector>
#include "Coche.h"
#include "Cliente.h"

class Concesionario
{
private:
	vector< Coche* > _stock;
	vector< Coche* > _repairing;
public:
	Concesionario(void);
	~Concesionario(void);
	/*! \brief A�ade un nuevo coche al inventario
	 * @returns false si el coche ya estaba en el inventario o en el taller*/
	bool addCarToStock( Coche* car );
	/*! \brief Vende un nuevo coche del inventario al usuario y lo a�ade a su lista de coches
	 * Tras ejecutar esta funci�n se quita el coche del inventario
	 * @returns false si el coche no est� en el inventario o en el clienta no puede pagarlo*/
	bool sellCar( Cliente* client, string license );
	/*! \brief Toma un coche averiado del cliente y lo a�ade al taller
	* @returns false si el cliente no tiene ese coche o el coche no est� averiado*/
	bool checkCarInGarage( Cliente* client, string license );
	/*! \brief Toma un coche listo del taller y se lo devuelve al cliente
	* @returns false si el coche no est� en taller y en estado de listo*/
	bool retrieveCarFromGarage (Cliente* cliente, string license );
};
