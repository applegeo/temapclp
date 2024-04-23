#include "mama.h";
#include <iostream>

using namespace std;

int main()
{
	triunghi t1(3, 10, 11.6, 18.3, 2.5, 14.9);
	cout << "Aria triunghiului este " << t1.arie() << endl;
	t1.setV1(0, 0);
	t1.setV2(3, 0);
	t1.setV3(0, 5);
	cout << "Noile coordonate ale varfurilor sunt: [(" << t1.getV1x() << ","
		<< t1.getV1y() << ");(" << t1.getV2x() << "," << t1.getV2y() << ");(" <<
		t1.getV3x() << "," << t1.getV3y() << ")]" << endl;
	cout << "Aria triunghiului este: " << t1.arie() << endl;
	cout << "Triunghiul este dreptunghic? " << t1.isDreptunghic() << endl;
	return 0;
}