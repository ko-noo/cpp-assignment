#pragma once
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	string sex;

private:

};

class Student : public Person {
public:
	string school;
	

	void cprofile() {
		cout << "이름: " << name << endl;
		cout << "성별: " << sex << endl;
		cout << "나이: " << age << endl;
		cout << "학교: " << school << endl;
	}
};
