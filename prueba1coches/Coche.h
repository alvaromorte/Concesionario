#include <string.h>
#include <iostream>
using namespace std;
#include <vector>

class Coche
{
	/*! Posibles estados del coche */
	enum status {
		_status_ok, /*!< Situación normal */
		_status_broken, /*!< El coche debe ir al taller */
		_status_repairing, /*!< El coche está siendo reparado en el taller */
		_status_ready, /*!< El coche ha sido reparado y el dueño puede recogerlo */
	};

private:
	string _license;
	status _status;
	unsigned int price;

public:
	Coche( string license );
	virtual ~Coche(void);

	int getPrice();
	//status methods
	bool isOk();
	void toogleOK();
	bool isBroken();
	void toogleBroken();
	bool isRepairing();
	bool isReady();
	void toogleReady();
};
