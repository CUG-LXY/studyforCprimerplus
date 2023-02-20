#include<iostream>
using namespace std;

//2.7-1
void showmyname()
{
	cout << "Tom from Xidian" << endl;
}


//2.7-2 
double longtocode(double ll)
{
	return ll * 220;
}


//2.7-3
void show3_1()
{
	cout << "Three blind mice" << endl;
}
void show3_2()
{
	cout << "See how they run" << endl;
}

//2.7-4
int getmonth()
{
	int myage;
	cout << "Enter your age:";
	cin >> myage;
	cout << "Your age includes " << myage * 12 << " months" << endl;
	return myage * 12;
}

//2.7-5
double get_temp()
{
	double C_temp,F_temp;
	cout << "Please enter a Celsius value:";
	cin >> C_temp;
	F_temp = 1.8*C_temp + 32;
	cout << C_temp << " degrees Celsius is " << F_temp << " degrees Fahrenheit." << endl;
	return F_temp;

}

//2.7-6
double get_Astron_Units()
{
	double light_y,astron_u;
	cout << "Enter the number of light years:";
	cin >> light_y;
	astron_u = 63240 * light_y;
	cout << light_y << " light years = " << astron_u << " astronomical units." << endl;
	return astron_u;
}


//2.7-7
void show_h_m(int hours, int minutes)
{
	cout << "Time: " << hours << ":" << minutes << endl;
}

int main()
{
	//showmyname();
	//double c = longtocode(1.5);
	//cout << c << endl;
	//show3_1();
	//show3_1();
	//show3_2();
	//show3_2();
	//int my_age = getmonth();
	//cout << my_age;
	//double Ftmp = get_temp();
	//cout << Ftmp << endl;
	//double astron = get_Astron_Units();
	//cout << astron << endl;
	int hour, minute;
	cout << "Enter the number of hours:";
	cin >> hour;
	cout << "Enter the number of minutes:";
	cin >> minute;
	show_h_m(hour,minute);
	return 0;
}