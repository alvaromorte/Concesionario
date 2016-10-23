#include <string.h>
#include <iostream>
using namespace std;
#include <vector>
#include "Coche.h"

class Cliente
{
private:
	string _name;
	vector< Coche* > _cars;
	unsigned int _money;
public:
	Cliente ( std::string name);

	//getters & setters
	std::string getName();

	void addMoney( unsigned int amount );
	void expendMoney( unsigned int amount );
	unsigned int getMoneyAmount();

	/*!
	 * 	\brief Añade un nuevo coche
	 * 	@returns true si se añade correctamente, false si el coche
	 * 	ya estaba añadido
	 */
	bool addCar(Coche* car );
	/*!
	 *	\brief Elimina un coche del parque del cliente
	 *	@returns true si se Elimina correctamente, false si no
	 *	estaba añadido
	 */
	bool removeCar( std::string licesnse );
	/*!
	 * 	\brief Busca un coche en el parque del cliente
	 * 	@returns el coche en cuestión, NULL si no se encuentra
	 */
	Coche* searchCar( std::string license );

	virtual ~Cliente(void);
};
