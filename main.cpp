
#include "triangle.h"

#include <iostream>
using std::cout;
using std::endl;

void PrintTriangleData(const Triangle& triangle);

int main() {
	Triangle t1(4,3,5);
	PrintTriangleData(t1);

	Triangle t2(1,2,2);
	PrintTriangleData(t2);

	return 0;
}
void PrintTriangleData(const Triangle& triangle){
	cout << triangle.ToString() << endl;
	cout << triangle.Area() << endl;
	cout << triangle.Perimeter() << endl;
	cout << triangle.AngleAB() << "\t" << triangle.AngleBC() << "\t" << triangle.AngleAC() << endl;
	cout << endl;
}
