#include<iostream>
using namespace std;

//3.1
int myWeight()
{
	const int chg = 12;
	int myweight = 0,inch = 0,ft = 0;
	cout << "请输入您的身高（英寸）：__________\b\b\b\b\b\b\b";
	cin >> myweight;
	inch = myweight / chg;
	ft = myweight % chg;
	cout << endl << "您的身高为" << inch << "英尺" << ft << "英寸" << endl;
	return 0;
}

//3.2
int getmyBMI()
{
	const double inch2ft = 12;
	const double ft2met = 0.0254;
	const double b2kg = 1 / 2.2;
	double myinch = 0, myft = 0, mymet = 0, myb = 0, mykg = 0, mybmi = 0;
	cout << "请输入您的身高（英尺+英寸）：________英尺\b\b\b\b\b\b\b\b\b\b";
	cin >> myinch;
	cout << "_______英寸\b\b\b\b\b\b\b\b\b";
	cin >> myft;
	cout << endl << "请输入您的磅数：________\b\b\b\b\b";
	cin >> myb;
	myft = myinch * inch2ft + myft;
	mymet = myft * ft2met;
	mykg = myb * b2kg;
	mybmi = mykg / (mymet*mymet);
	cout << "您的身高为" << mymet << "米，您的体重为" << mykg << "kg，您的BMI为" << mybmi << "." << endl;
	return 0;
}

//3.3
int lat()
{
	double mydegree = 0, mymin = 0, mysec = 0, degr = 0;
	const int d2min = 60, min2sec = 60;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
	cout << "First, enter the degree:";
	cin >> mydegree;
	cout << "Next, enter the minutes of arc:";
	cin >> mymin;
	cout << "Finally, enter the seconds of arc:";
	cin >> mysec;
	degr = mydegree + mymin / d2min + mysec / (d2min*min2sec);
	cout.precision(4);
	cout << mydegree << " degrees, " << mymin << " minutes, " << mysec << " seconds, = " << fixed << degr << " degrees" << endl;
	return 0;
}

//3.4
int sec()
{
	long mysec;
	int days = 0, hours = 0, min = 0, sec = 0;
	const int chg1 = 60, chg2 = 24;
	cout << "Enter the number of seconds:";
	cin >> mysec;
	cout << mysec << " seconds = ";
	sec = mysec % chg1;//除以一分钟的时间的余数是秒钟
	mysec -= sec;
	min = mysec % (chg1*chg1) / chg1;//除以一小时的时间的余数是分钟
	mysec -= min * chg1;
	hours = mysec % (chg1*chg1*chg2) / chg1 / chg1;//除以一天的时间的余数是小时
	mysec -= hours * chg1*chg1;
	days = mysec / (chg1*chg1*chg2);
	cout << days << " days, " << hours << " hours, " << min << " minutes, " << sec << " seconds" << endl;
	return 0;
}

//3.5
int national_popu()
{
	long double nat_po, us_po, bille;
	cout << "Enter the world\'s population:";
	cin >> nat_po;
	//nat_po = 6898758899;
	cout << "Enter the population of the US:";
	cin >> us_po;
	//us_po = 310783781;
	bille = us_po / nat_po * 100;
	cout << "The population of the US is " << bille << "% of the world population.";
	return 0;
}

//3.6
int getmyscrap()
{
	int flag;
	double miles, gas;
	cout << "请选择欧洲风格或者美国风格计算方式，按1欧洲风格，按0美国风格：";
	cin >> flag;
	if (flag)
	{
		cout << "请输入您的公里数：";
		cin >> miles;
		cout << "请输入您的汽油量（升）：";
		cin >> gas;
		cout << "每100公里的耗油量为" << gas / (miles / 100) << "升";
	}
	else
	{
		cout << "请输入您的英里数：";
		cin >> miles;
		cout << "请输入您的汽油量（加仑）：";
		cin >> gas;
		cout << "汽车的耗油量为" << miles/gas  << "英里/加仑";
	}
	return 0;
}

//3.7
int Eu_gas2US_gas()
{
	double eu_gas, us_gas;
	cout << "请按照欧洲风格输入您的汽车的耗油量（升/100公里）：";
	cin >> eu_gas;
	//eu_gas = 8.71;
	us_gas = 1/eu_gas * 3.875*62.14;
	cout << "美国风格的耗油量为" << us_gas << "英里/加仑";
	return 0;
}



int main()
{
	//myWeight();
	//getmyBMI();
	//lat();
	//sec();
	//national_popu();
	//getmyscrap();
	Eu_gas2US_gas();
	return 0;
}