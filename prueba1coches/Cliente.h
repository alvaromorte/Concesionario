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
	 * 	\brief A�ade un nuevo coche
	 * 	@returns true si se a�ade correctamente, false si el coche
	 * 	ya estaba a�adido
	 */
	bool addCar(Coche* car );
	/*!
	 *	\brief Elimina un coche del parque del cliente
	 *	@returns true si se Elimina correctamente, false si no
	 *	estaba a�adido
	 */
	bool removeCar( std::string licesnse );
	/*!
	 * 	\brief Busca un coche en el parque del cliente
	 * 	@returns el coche en cuesti�n, NULL si no se encuentra
	 */
	Coche* searchCar( std::string license );

	virtual ~Cliente(void);
};
