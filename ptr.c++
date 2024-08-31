#include <iostream>
using namespace std;

int main()
{
	int *ptr = new int; // cấp phát động một số nguyên
	int *otherPtr = ptr; // otherPtr và ptr đang cùng trỏ đến một vùng nhớ

	// giải phóng vùng nhớ cho hệ điều hành, ptr và otherPtr đang là con trỏ lơ lửng
	delete ptr;

	ptr = nullptr; // ptr đang là con trỏ null

	// tuy nhiên, otherPtr vẫn là con trỏ lơ lửng!

	return 0;
}
