#include<iostream>
using namespace std;

//3.1
int myWeight()
{
	const int chg = 12;
	int myweight = 0,inch = 0,ft = 0;
	cout << "������������ߣ�Ӣ�磩��__________\b\b\b\b\b\b\b";
	cin >> myweight;
	inch = myweight / chg;
	ft = myweight % chg;
	cout << endl << "�������Ϊ" << inch << "Ӣ��" << ft << "Ӣ��" << endl;
	return 0;
}

//3.2
int getmyBMI()
{
	const double inch2ft = 12;
	const double ft2met = 0.0254;
	const double b2kg = 1 / 2.2;
	double myinch = 0, myft = 0, mymet = 0, myb = 0, mykg = 0, mybmi = 0;
	cout << "������������ߣ�Ӣ��+Ӣ�磩��________Ӣ��\b\b\b\b\b\b\b\b\b\b";
	cin >> myinch;
	cout << "_______Ӣ��\b\b\b\b\b\b\b\b\b";
	cin >> myft;
	cout << endl << "���������İ�����________\b\b\b\b\b";
	cin >> myb;
	myft = myinch * inch2ft + myft;
	mymet = myft * ft2met;
	mykg = myb * b2kg;
	mybmi = mykg / (mymet*mymet);
	cout << "�������Ϊ" << mymet << "�ף���������Ϊ" << mykg << "kg������BMIΪ" << mybmi << "." << endl;
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
	sec = mysec % chg1;//����һ���ӵ�ʱ�������������
	mysec -= sec;
	min = mysec % (chg1*chg1) / chg1;//����һСʱ��ʱ��������Ƿ���
	mysec -= min * chg1;
	hours = mysec % (chg1*chg1*chg2) / chg1 / chg1;//����һ���ʱ���������Сʱ
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
	cout << "��ѡ��ŷ�޷��������������㷽ʽ����1ŷ�޷�񣬰�0�������";
	cin >> flag;
	if (flag)
	{
		cout << "���������Ĺ�������";
		cin >> miles;
		cout << "������������������������";
		cin >> gas;
		cout << "ÿ100����ĺ�����Ϊ" << gas / (miles / 100) << "��";
	}
	else
	{
		cout << "����������Ӣ������";
		cin >> miles;
		cout << "���������������������أ���";
		cin >> gas;
		cout << "�����ĺ�����Ϊ" << miles/gas  << "Ӣ��/����";
	}
	return 0;
}

//3.7
int Eu_gas2US_gas()
{
	double eu_gas, us_gas;
	cout << "�밴��ŷ�޷���������������ĺ���������/100�����";
	cin >> eu_gas;
	//eu_gas = 8.71;
	us_gas = 1/eu_gas * 3.875*62.14;
	cout << "�������ĺ�����Ϊ" << us_gas << "Ӣ��/����";
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