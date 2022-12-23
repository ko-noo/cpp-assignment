#include <iostream>
#include "inherit.h"

using namespace std;

Student A;

int main() {
	A.name = "고현우";
	A.sex = "남";
	A.age = 19;
	A.school = "대성고등학교";

	A.cprofile();
}
