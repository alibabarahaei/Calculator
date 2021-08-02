#pragma once
#include<string>
using namespace std;
ref class fg
{
public:
	int syntax_error_1 = 0;
	const long double p = 3.1415926535897932384650288;
	const long double e = 2.718281828;
	bool deg = false;
	bool rad = true;
	bool grad = false;
	bool deg_arc = false;
	bool rad_arc = true;
	bool grad_arc = false;
	bool quadratic_equation = false;
	bool simultaneous_equation = false;
	bool binary_conversion = false;
	bool Matrix_bool = false;
	bool conversion_of_unit = false;
	bool Normal = true;

	string stack(string str_1);
	string parentheses(string num_1);
	string function(string num_3);
	string syntax_error(string num_8787);
	string grade_2_equation(string num_5);
	string device_two_equation(string num_5);
	string sum(string str_1_string, string str_2_string);
	string mine(string str_1_string, string str_2_string);
	string multi(string str_1_string, string str_2_string);
	string convert_rad_to_deg(string num_6);
	string convert_grad_to_deg(string num_6);
	string convert_rad_to_grad(string num_6);
	string covert_Angle(string num_6);
	string calculator_1(string s);
	string divide(string str_1_string, string str_2_string);
	string remine(string str_1_string, string str_2_string);
	string submultiple(string a, string b);
	string Matrix(string num_3);
	string convert_to_10(string num_7);
	int    factorial(int n);

};

