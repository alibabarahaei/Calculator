#include "fg.h"
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
#include<iomanip>

using namespace std;



string fg::remine(string str_1_string, string str_2_string)
{

    int a[3000], b[3000];

    vector<int>multi(6000, 0);
    int i = 0, j = 0, temp;
    int f = 0;
    int N = 0;
    int str_1[3001], str_2[3001];
    int max_dout;
    int size;
    int max_float;
    bool mine = false;
    bool float_1 = false;
    bool float_2 = false;
    bool t = true;
    bool r = true;
    bool w = true;
    int max_float_2;
    int counter = 0;


    string str_1_float_1;
    string str_2_float_2;
    string answer;
    string answer_1;
    string divide;
    string str_1_string_5;



    if (str_1_string == "")
    {
        cout << "0";
        exit(0);
    }
    if (str_2_string == "")
    {
        cout << "Syntax Error";
        exit(0);
    }

    //if input (.12343412) --> (0.12343412)
    if (str_1_string[0] != '-')
    {
        if (str_1_string[0] == '.')
        {
            str_1_string = '0' + str_1_string;
        }
    }
    else
    {
        if (str_1_string[1] == '.')
        {
            str_1_string.replace(0, 1, "-0");
        }
    }
    if (str_2_string[0] != '-')
    {
        if (str_2_string[0] == '.')
        {
            str_2_string = '0' + str_2_string;
        }
    }
    else
    {
        if (str_2_string[1] == '.')
        {
            str_2_string.replace(0, 1, "-0");
        }
    }

    str_1_string_5 = str_1_string;


    if (str_1_string.find_first_of(".") != str_1_string.find_last_of("."))
    {
        cout << "Syntax Error";
        exit(0);
    }

    if (str_2_string.find_first_of(".") != str_2_string.find_last_of("."))
    {
        cout << "Syntax Error";
        exit(0);
    }


    if ((str_1_string.find(".") != -1 && str_2_string.find(".") == -1) || (str_1_string.find(".") == -1 && str_2_string.find(".") != -1))
    {
        if (str_1_string.find(".") == -1)
        {
            str_1_string = str_1_string + ".0";
        }
        else
        {
            str_2_string = str_2_string + ".0";
        }
    }


    if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
    {
        str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
        str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
        str_1_string = str_1_string.substr(0, str_1_string.find("."));
        str_2_string = str_2_string.substr(0, str_2_string.find("."));
        if (str_1_float_1.length() < str_2_float_2.length())
        {
            int size1 = str_1_float_1.length();
            for (int i = 0; i < (str_2_float_2.length() - size1); i++)
            {
                str_1_float_1 += "0";
            }
            str_1_string = str_1_string + str_1_float_1;
            str_2_string = str_2_string + str_2_float_2;
            max_float = str_2_float_2.length();
            float_1 = true;
        }
        else if (str_1_float_1.length() > str_2_float_2.length())
        {
            int size2 = str_2_float_2.length();
            for (int i = 0; i < (str_1_float_1.length() - size2); i++)
            {
                str_2_float_2 += "0";
            }
            str_2_string = str_2_string + str_2_float_2;
            str_1_string = str_1_string + str_1_float_1;
            max_float = str_2_float_2.length();
            float_1 = true;
        }
        else if (str_1_float_1.length() == str_2_float_2.length())
        {
            str_2_string = str_2_string + str_2_float_2;
            str_1_string = str_1_string + str_1_float_1;
            max_float = str_2_float_2.length();
            float_1 = true;

        }
    }

    //clear zero  --->   000003423 ----->   3423
    if (str_1_string[0] == '0')
    {
        for (int i = 0; i < str_1_string.length(); i++)
        {
            if (str_1_string[i] != '0')
            {
                str_1_string.erase(0, i);
                break;
            }
            else if (i == str_1_string.length() - 1)
            {
                str_1_string = "0";
            }
        }
    }


    if (str_2_string[0] == '0')
    {
        for (int i = 0; i < str_2_string.length(); i++)
        {
            if (str_2_string[i] != '0')
            {
                str_2_string.erase(0, i);
                break;
            }
            else if (i == str_2_string.length() - 1)
            {
                str_2_string = "0";
            }
        }
    }


    if (str_1_string.find('.') != -1 && str_1_string[str_1_string.length() - 1] == '0')
    {
        for (int i = str_1_string.length() - 1; i >= 0; i--)
        {
            if (str_1_string[i] != '0')
            {
                str_1_string = str_1_string.substr(0, i + 1);
                break;
            }
        }
    }
    if (str_2_string.find('.') != -1 && str_2_string[str_2_string.length() - 1] == '0')
    {
        for (int i = str_2_string.length() - 1; i >= 0; i--)
        {
            if (str_2_string[i] != '0')
            {
                str_2_string = str_2_string.substr(0, i + 1);
                break;
            }
        }
    }



    for (int i = 0; i < str_1_string.length(); i++)
    {

        if (!(str_1_string[i] >= 46 && str_1_string[i] <= 57))
        {
            cout << "Syntax Error";
            exit(0);
        }

        str_1[i] = str_1_string[i] - 48;
    }
    for (int i = 0; i < str_2_string.length(); i++)
    {

        if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
        {
            cout << "Syntax Error";
            exit(0);
        }

        str_2[i] = str_2_string[i] - 48;
    }

    int l1 = str_1_string.length();
    int l2 = str_2_string.length();





    //if input ---> number-number
    if (str_1_string.length() <= str_2_string.length())
    {
        if (str_1_string.length() == str_2_string.length())
        {
            if (str_1_string.length() - 1 == 0)
            {
                if (str_2_string[0] >= str_1_string[0])
                {
                    t = false;

                }
                else
                {
                    t = false;
                }
            }
            else
            {
                for (int i = 0; i < str_1_string.length() - 1; i++)
                {
                    if (str_2_string[i] > str_1_string[i])
                    {
                        t = false;

                        break;
                    }
                    else if (str_2_string[i] == str_1_string[i])
                    {
                        continue;
                    }
                    else
                    {
                        t = true;
                        break;
                    }

                }
            }
        }
        else
        {
            t = false;

        }
    }
    string str;
    bool  d = true;
    ////////////////////////////////
    char str_2_multi[2001] = { '0' };

    for (int i = 0; i < str_2_string.length(); i++)
    {
        if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
        {
            cout << "Syntax Error";
            exit(0);
        }
        str_2_multi[i] = str_2_string[i];
    }


    l2 = str_2_string.length();
    int i_multi = 0, j_multi = 0;
    int b_multi[2000];
    for (i_multi = l2 - 1, j_multi = 0; i_multi >= 0; i_multi--, j_multi++)
    {
        b_multi[j_multi] = str_2_multi[i_multi] - '0';
    }

    ///////////////////////////////////////


    if (t == true)
    {


        while (t == true)
        {



            if (w == true)
            {
                N = str_2_string.length();
                str = str_1_string.substr(0, N);
                //if input ---> number-number
                if (str_2_string.length() <= str.length())
                {
                    if (str_2_string.length() == str.length())
                    {
                        if (str_2_string.length() - 1 == 0)
                        {
                            if (str[0] >= str_2_string[0])
                            {
                                d = true;

                            }
                            else
                            {
                                d = false;
                            }
                        }
                        else
                        {
                            for (int i = 0; i < str_2_string.length(); i++)
                            {
                                if (str[i] > str_2_string[i])
                                {
                                    d = true;

                                    break;
                                }
                                else if (str_2_string[i] == str[i])
                                {
                                    continue;
                                }
                                else
                                {
                                    d = false;
                                    break;
                                }

                            }
                        }
                    }
                    else
                    {
                        d = true;

                    }
                }
                else
                {
                    d = false;
                }
                if (d == false)
                {
                    N = str_2_string.length() + 1;
                    str = str_1_string.substr(0, N);

                }
                w = false;
            }
            r = true;
            //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
            while (r == true)
            {
                int a_multi[2000];

                int multi_multi[4000] = { 0 };
                int  temp_multi;
                int min_multi;
                int max_multi;
                int max_float_multi;
                int f_multi = 0;
                char str_1_multi[2001] = { '0' };
                i_multi = 0, j_multi = 0;
                bool mine_multi = false;
                bool float_1_multi = false;
                bool max_1_multi = false;
                bool max_2_multi = false;
                bool mine_1_multi = false;

                string str_1_string_multi;
                string str_2_string_multi;
                string str_1_float_1_multi;
                string str_2_float_2_multi;
                string answer_multi;










                //clear zero  ---->   000003423 ----->   3423
                if (str[0] == '0')
                {
                    for (int i = 0; i < str.length(); i++)
                    {
                        if (str[i] != '0')
                        {
                            str.erase(0, i);
                            break;
                        }
                        else if (i == str.length() - 1)
                        {
                            str = "0";
                        }
                    }
                }




                if (str_2_string[0] == '0')
                {
                    for (int i = 0; i < str_2_string.length(); i++)
                    {
                        if (str_2_string[i] != '0')
                        {
                            str_2_string.erase(0, i);
                            break;
                        }
                        else if (i == str_2_string.length() - 1)
                        {
                            str_2_string = "0";
                        }
                    }
                }


                str_1_string_multi = str;
                str_2_string_multi = str_2_string;

                for (int i = 0; i < str_1_string_multi.length(); i++)
                {
                    if (!(str_1_string_multi[i] >= 46 && str_1_string_multi[i] <= 57))
                    {
                        cout << "Syntax Error";
                        exit(0);
                    }
                    str_1_multi[i] = str_1_string_multi[i];
                }

                max_multi = str_1_string_multi.length() - 1;
                min_multi = str_2_string_multi.length() - 1;

                int l1 = str_1_string_multi.length();

                //convert char to int
                for (i_multi = l1 - 1, j_multi = 0; i_multi >= 0; i_multi--, j_multi++)
                {
                    a_multi[j_multi] = str_1_multi[i_multi] - '0';
                }

                //add a number not used

                for (int i = 0; i <= min_multi; i++)
                {
                    multi_multi[i] = a_multi[i] - b_multi[i];
                }
                //add a number not used

                for (int i = min_multi + 1; i <= max_multi; i++)
                {
                    multi_multi[i] = a_multi[i];
                }

                //if >=10 ----> add 1 in next
                for (i_multi = 0; i_multi < l1 + l2; i_multi++)
                {
                    if (multi_multi[i_multi] < 0)
                    {
                        multi_multi[i_multi] += 10;
                        multi_multi[i_multi + 1] -= 1;

                    }

                }

                for (i_multi = l1 + l2; i_multi >= 0; i_multi--)
                {
                    if (multi_multi[i_multi] > 0)
                    {
                        f_multi = i_multi;
                        break;
                    }
                }
                for (f_multi; f_multi >= 0; f_multi--)
                {
                    answer_multi += (multi_multi[f_multi] + 48);
                }
                str = answer_multi;


                //if input ---> number-number
                if (str_2_string.length() <= str.length())
                {
                    if (str_2_string.length() == str.length())
                    {
                        if (str_2_string.length() - 1 == 0)
                        {
                            if (str[0] >= str_2_string[0])
                            {
                                r = true;

                            }
                            else
                            {
                                r = false;
                            }
                        }
                        else
                        {
                            for (int i = 0; i < str_2_string.length(); i++)
                            {
                                if (str[i] > str_2_string[i])
                                {
                                    r = true;

                                    break;
                                }
                                else if (str_2_string[i] == str[i])
                                {
                                    continue;
                                }
                                else
                                {
                                    r = false;
                                    break;
                                }

                            }
                        }
                    }
                    else
                    {
                        r = true;

                    }
                }
                else
                {
                    r = false;
                }
                counter++;
            }


            t = false;
            while (t == false)
            {
                divide += to_string(counter);
                counter = 0;
                if (N == str_1_string.length())
                {
                    return ("divide(" + divide + ")" + "remine(" + str + ")");
                }
                N++;
                str = str + str_1_string[N - 1];
                //if input ---> number-number




                //clear zero  ---->   000003423 ----->   3423
                if (str[0] == '0')
                {
                    for (int i = 0; i < str.length(); i++)
                    {
                        if (str[i] != '0')
                        {
                            str.erase(0, i);
                            break;
                        }
                        else if (i == str.length() - 1)
                        {
                            str = "0";
                        }
                    }
                }

                if (str_2_string[0] == '0')
                {
                    for (int i = 0; i < str_2_string.length(); i++)
                    {
                        if (str_2_string[i] != '0')
                        {
                            str_2_string.erase(0, i);
                            break;
                        }
                        else if (i == str_2_string.length() - 1)
                        {
                            str_2_string = "0";
                        }
                    }
                }

                if (str.length() <= str_2_string.length())
                {
                    if (str.length() == str_2_string.length())
                    {
                        if (str.length() - 1 == 0)
                        {
                            if (str_2_string[0] >= str[0])
                            {
                                t = false;

                            }
                            else
                            {
                                t = true;
                            }
                        }
                        else
                        {
                            for (int i = 0; i < str.length() - 1; i++)
                            {
                                if (str_2_string[i] > str[i])
                                {
                                    t = false;
                                    break;
                                }
                                else if (str_2_string[i] == str[i])
                                {
                                    continue;
                                }
                                else
                                {
                                    t = true;
                                    break;
                                }

                            }
                        }
                    }
                    else
                    {
                        t = false;
                    }

                }
                else
                {
                    t = true;
                }

            }
        }
    }
    else
    {
        return "divide(&)remine(" + str_1_string_5 + ")";
    }

}





// divide ----> /
string fg::divide(string str_1_string, string str_2_string)
{
    string v;
    int a_1;
    int a_2;
    int b_1;
    bool h = false;

    string temp;
    string divide;
    string divide2;
    string remine_1;
    string str_1_float_1;
    string str_2_float_2;
    string s;


    if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
    {
        str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
        str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
        str_1_string = str_1_string.substr(0, str_1_string.find("."));
        str_2_string = str_2_string.substr(0, str_2_string.find("."));
        if (str_1_float_1.length() < str_2_float_2.length())
        {
            int size1 = str_1_float_1.length();
            for (int i = 0; i < (str_2_float_2.length() - size1); i++)
            {
                str_1_float_1 += "0";
            }
            str_1_string = str_1_string + str_1_float_1;
            str_2_string = str_2_string + str_2_float_2;


        }
        else if (str_1_float_1.length() > str_2_float_2.length())
        {
            int size2 = str_2_float_2.length();
            for (int i = 0; i < (str_1_float_1.length() - size2); i++)
            {
                str_2_float_2 += "0";
            }
            str_2_string = str_2_string + str_2_float_2;
            str_1_string = str_1_string + str_1_float_1;


        }
        else if (str_1_float_1.length() == str_2_float_2.length())
        {
            str_2_string = str_2_string + str_2_float_2;
            str_1_string = str_1_string + str_1_float_1;
        }
    }











    v = remine(str_1_string, str_2_string);

    a_1 = v.find("(", v.find("divide"));
    b_1 = v.find(")", v.find("divide"));
    temp = v.substr(a_1 + 1, b_1 - a_1 - 1);
    divide = temp;



    a_1 = v.find("(", v.find("remine"));
    b_1 = v.find(")", v.find("remine"));
    temp = v.substr(a_1 + 1, b_1 - a_1 - 1);
    remine_1 = temp;

    a_2 = str_2_string.length() - remine_1.length() + 7;

    if (divide == "&")
    {
        s = "0.";
        h = true;
    }


    if (remine_1 != "0")
    {
        if (remine_1 != "")
        {
            for (int i = 1; i <= a_2; i++)
            {
                remine_1 += "0";
            }

            v = remine(remine_1, str_2_string);

            a_1 = v.find("(", v.find("divide"));
            b_1 = v.find(")", v.find("divide"));
            temp = v.substr(a_1 + 1, b_1 - a_1 - 1);
            divide2 = temp;

            a_1 = v.find("(", v.find("remine"));
            b_1 = v.find(")", v.find("remine"));
            temp = v.substr(a_1 + 1, b_1 - a_1 - 1);
            remine_1 = temp;

            for (int i = a_2 - divide2.length(); i >= 1; i--)
            {
                divide2 = "0" + divide2;
            }
            if (h == true)
            {
                s = s + divide2;
                return s;
            }
            return divide = divide + "." + divide2;
        }
    }
    else
    {
        return divide;
    }
}




string fg::submultiple(string a, string b)
{




    string s;
    string a_float;
    string b_float;
    string answer;
    bool a_bool = false;
    bool b_bool = false;

    /*

    if (a.find_first_of(".") != a.find_last_of("."))
    {
        cout << "Syntax Error";
        exit(0);
    }


    if (b.find_first_of(".") != b.find_last_of("."))
    {
        cout << "Syntax Error";
        exit(0);
    }
    */





    //if input (.12343412) --> (0.12343412)
    if (a[0] != '-')
    {
        if (a[0] == '.')
        {
            a = '0' + a;
        }
    }
    else
    {
        if (a[1] == '.')
        {
            a.replace(0, 1, "-0");
        }
    }
    if (b[0] != '-')
    {
        if (b[0] == '.')
        {
            b = '0' + b;
        }
    }
    else
    {
        if (b[1] == '.')
        {
            b.replace(0, 1, "-0");
        }
    }

    if (a[0] == '-')
    {
        a.erase(0, 1);
        a_bool = true;
    }
    if (b[0] == '-')
    {
        b.erase(0, 1);
        b_bool = true;
    }


    if ((a.find(".") != -1 && b.find(".") == -1) || (a.find(".") == -1 && b.find(".") != -1))
    {
        if (a.find(".") == -1)
        {
            a = a + ".0";
        }
        else
        {
            b = b + ".0";
        }
    }




    if (a.find(".") != -1 && b.find(".") != -1)
    {
        a_float = a.substr(a.find(".") + 1, a.length() - a.find("."));
        b_float = b.substr(b.find(".") + 1, b.length() - b.find("."));
        a = a.substr(0, a.find("."));
        b = b.substr(0, b.find("."));
        if (a_float.length() < b_float.length())
        {
            int size1 = a_float.length();
            for (int i = 0; i < (b_float.length() - size1); i++)
            {
                a_float += "0";
            }
            a = a + a_float;
            b = b + b_float;


        }
        else if (a_float.length() > b_float.length())
        {
            int size2 = b_float.length();
            for (int i = 0; i < (a_float.length() - size2); i++)
            {
                b_float += "0";
            }
            b = b + b_float;
            a = a + a_float;


        }
        else if (a_float.length() == b_float.length())
        {
            b = b + b_float;
            a = a + a_float;
        }
    }







    //clear zero  --->   000003423 ----->   3423
    if (a[0] == '0')
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != '0')
            {
                a.erase(0, i);
                break;
            }
            else if (i == a.length() - 1)
            {
                a = "0";
            }
        }
    }


    if (b[0] == '0')
    {
        for (int i = 0; i < b.length(); i++)
        {
            if (b[i] != '0')
            {
                b.erase(0, i);
                break;
            }
            else if (i == b.length() - 1)
            {
                b = "0";
            }
        }
    }


    if (a == "0")
    {
        return "0";
    }

    s = divide(a, b);

    //if input (.12343412) --> (0.12343412)
    if (s[0] != '-')
    {
        if (s[0] == '.')
        {
            s = '0' + s;
        }
    }
    else
    {
        if (s[1] == '.')
        {
            s.replace(0, 1, "-0");
        }
    }
    if (s[0] != '-')
    {
        if (s[0] == '.')
        {
            s = '0' + s;
        }
    }
    else
    {
        if (s[1] == '.')
        {
            s.replace(0, 1, "-0");
        }
    }



    if ((a_bool == true && b_bool == false) || (a_bool == false && b_bool == true))
    {
        s = "-" + s;
    }


    //clear zero next the demical
    if (s.find(".") != -1 && s[s.length() - 1] == '0')
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                s = s.substr(0, i + 1);
                break;
            }
            else if (i == s.find(".") + 1)
            {
                s = s.substr(0, i - 1);
                break;
            }
        }
    }
    answer = s;

    //cout ---> 5 demical
    if (s.find(".") != -1)
    {
        if (s.length() - 1 - s.find(".") < 5)
        {
            ;
        }
        else
        {
            answer = s.substr(0, s.find(".") + 1);
            answer += s[s.find(".") + 1];
            answer += s[s.find(".") + 2];
            answer += s[s.find(".") + 3];
            answer += s[s.find(".") + 4];
            answer += s[s.find(".") + 5];
            answer;
        }
    }
    else
        answer;





    //clear zero next the demical
    if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
    {
        for (int i = answer.length() - 1; i >= 0; i--)
        {
            if (answer[i] != '0')
            {
                answer = answer.substr(0, i + 1);
                break;
            }
            else if (i == answer.find(".") + 1)
            {
                answer = answer.substr(0, i - 1);
                break;
            }
        }
    }

    return answer;
}




























//create function of stack
string fg::stack(string str_1)
{

    vector <string> array_number(100, "&");
    vector <char> array_operator(100, '&');

    string str_2;
    int j = 0, t = 0;
    str_1 += ' ';
    int count = 0;
    bool d = true;

    
    for (int i = 0; i < str_1.length(); i++)
    {
        if (str_1[i] >= 65 && str_1[i] <= 122)
        {
            return "Syntax Error";
        }
    }
    
    //complet array_number
    for (int i = 0; i < str_1.length(); i++)
    {
        if (str_1[i] == ')' || str_1[i] == '(' || str_1[i] == '+' || str_1[i] == '-' || str_1[i] == '*' || str_1[i] == '/' || i == str_1.length() - 1)
        {
            if (j != i)
            {
                str_2 = str_1.substr(j, i - j);
                array_number[t] = str_2;
                t += 1;
                str_2 = {};
            }
            j = i + 1;
            if (str_1[i] == str_1[i + 1] && (str_1[i] == '+' || str_1[i] == '-'))
            {
                str_1[i] = '+';
                str_1[i + 1] = '+';
                array_number[t] = '0';
                t++;
            }
        }
    }


    int r = 0;
    for (int i = 0; i < str_1.length(); i++)
    {
        if (str_1[i] == '+' || str_1[i] == '-' || str_1[i] == '*' || str_1[i] == '/')
        {
            array_operator[r] = str_1[i];
            r++;

            if (i != 0)
            {
                if (count != 0 || (count == 0 && (array_operator[r - 1] == '/' || array_operator[r - 1] == '*')))
                {

                    if ((r == 1) || (array_operator[r - 2] == '-' || array_operator[r - 2] == '+') && (array_operator[r - 1] == '*' || array_operator[r - 1] == '/'))
                    {
                        switch (array_operator[r - 1])
                        {
                        case '*':
                        {
                            if (str_1[i + 1] == str_1[i + 2] && str_1[i + 1] == '+')
                            {
                                array_number[r - 1] = multi(array_number[r - 1], array_number[r + 1]);
                                i = i + 2;
                            }
                            else if (str_1[i + 1] == '-')
                            {
                                array_number[r - 1] = multi(array_number[r - 1], ("-" + array_number[r]));
                                i++;
                            }

                            else
                                array_number[r - 1] = multi(array_number[r - 1], array_number[r]);
                            for (int n = r; n < 50; n++)
                            {
                                array_number[n] = array_number[n + 1];
                            }
                            r--;
                            break;
                        }
                        case '/':
                        {
                            if (stod(array_number[r]) == 0)
                            {
                                return "Syntax Error";
                            }
                            if (str_1[i + 1] == str_1[i + 2] && str_1[i + 1] == '+')
                            {
                                array_number[r - 1] = to_string(stod(array_number[r - 1]) / stod(array_number[r + 1]));
                                i = i + 2;
                            }


                            else if (str_1[i + 1] == '-')
                            {
                                array_number[r - 1] = to_string(stod(array_number[r - 1]) / stod(array_number[r]) * -1);
                                i++;
                            }


                            else
                                array_number[r - 1] = to_string(stod(array_number[r - 1]) / stod(array_number[r]));
                            for (int n = r; n < 50; n++)
                            {
                                array_number[n] = array_number[n + 1];
                            }
                            r--;
                            break;
                        }
                        }
                    }
                }
            }
        }count++;
    }





    for (int aaa = 0; aaa < 30; aaa++)
    {
        int lll = 0;
        if ((array_number[1] == "&") && (d == true) && (array_operator[0] == '+' || array_operator[0] == '-'))

        {
            array_number[1] = array_number[0];
            array_number[0] = "0";
            d = false;
        }

        if (array_operator[lll] == '+')
        {
            array_number[lll] = sum(array_number[lll], array_number[lll + 1]);
            for (int n = lll + 1; n < 50 && array_number[n] != "&"; n++)
            {
                array_number[n] = array_number[n + 1];
            }
            for (int n = lll; n < 50 && array_operator[n] != '&'; n++)
            {
                array_operator[n] = array_operator[n + 1];
            }
        }
        if (array_operator[lll] == '-')
        {
            array_number[lll] = mine(array_number[lll], array_number[lll + 1]);
            for (int n = lll + 1; n < 50 && array_number[n] != "&"; n++)
            {
                array_number[n] = array_number[n + 1];
            }
            for (int n = lll; n < 50 && array_operator[n] != '&'; n++)
            {
                array_operator[n] = array_operator[n + 1];
            }
        }
    }
    return array_number[0];
}



////////////////////////////////////////////////////////////////////////////////


string fg::parentheses(string num_1)
{
    num_1 = "(" + num_1 + ")";
    int g = 0;
    int count_3 = 0;
    string num_2;
    for (int i = 0; i < num_1.length(); i++)
    {
        if (num_1[i] == '(')
        {
            count_3++;
        }

    }

    for (int i = 1; i <= count_3; i++)
    {
        int kjh = num_1.find_last_of("(") + 1;
        for (int i = kjh; i < num_1.length(); i++)
            if (num_1[i] == ')')
            {
                g = i;
                break;
            }

        int kjhg = g - num_1.find_last_of("(") - 1;

        num_2 = num_1.substr(kjh, kjhg);
        for (int lk = num_2.length(); lk >= 0; lk--)
        {

            if (num_2[lk] == '-' && lk == 0)
            {
                num_2.replace(lk, 1, "0-");
            }

        }
        int b;
        if (num_2 != "")
            num_2 = stack(num_2);
        if (num_2 != "Syntax Error")
        {
            //  +- ----> -
            num_1.replace(kjh - 1, kjhg + 2, num_2);
            for (int i = 0; i < num_1.length() - 1; i++)
            {
                if (num_1[i] == '+')
                {
                    if (num_1[i + 1] == '-')
                    {
                        num_1.replace(i, 2, "-");
                    }
                }

            }
        }
    }
    if (num_2 != "Syntax Error")
    {
        if (num_1 != "")
        {
            int yuyu = 0;
            if (num_1.find(".") != -1)
            {
                yuyu = num_1.find(".");

            }

            return num_1;

        }
    }
    else
    {
        return "Syntax Error";
    }
}

////////////////////////////////////////////////////////////////

string fg::function(string num_3)
{

    //tavan(power)
    while (num_3.find("power") != -1)
    {
        int a_1;
        int b_1;
        int tavan;
        long double power_base_double;
        long double answer_double = 1;
        string power;
        string power_base_string;
        a_1 = num_3.find("(", num_3.find("power"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        power = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        power_base_string = power.substr(0, power.find(","));
        power_base_string = syntax_error(power_base_string);
        power_base_double = stod(power_base_string);
        tavan = stod(power.substr(power.find(",") + 1, power.length() - 2));

        if (tavan == 0)
        {
            answer_double = 1;
        }
        else if (tavan < 0)
        {
            for (int i = 1; i <= -tavan; i++)
            {
                answer_double *= power_base_double;
            }
            answer_double = 1 / answer_double;
        }
        else
        {
            for (int i = 1; i <= tavan; i++)
            {
                answer_double *= power_base_double;
            }
        }
        num_3.replace(num_3.find("power"), power.length() + 7, to_string(answer_double));
    }


    //absolute value ------> |...|
    while (num_3.find("|") != -1)
    {
        string absolute_value;
        string absolute_value_1;
        int a_1 = 0;
        int b_1 = 0;
        a_1 = num_3.find("|", num_3.find("|"));
        b_1 = num_3.find("|", num_3.find("|") + 1);
        absolute_value = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        absolute_value_1 = absolute_value;
        absolute_value = syntax_error(absolute_value);
        if (absolute_value[0] == '-')
        {
            absolute_value.erase(0, 1);
        }
        num_3.replace(num_3.find("|"), absolute_value_1.length() + 2, absolute_value);
    }


    //Brackets ----> [...]
    while (num_3.find("[") != -1)
    {
        string Brackets;
        string Brackets_1;
        int Brackets_int;
        int a_1 = 0;
        int b_1 = 0;
        a_1 = num_3.find("[", num_3.find("["));
        b_1 = num_3.find("]", num_3.find("[") + 1);
        Brackets = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        Brackets_1 = Brackets;
        Brackets = syntax_error(Brackets);
        Brackets_int = stoi(Brackets);
        if (Brackets_int < 0)
        {
            if (Brackets.find(".") != -1)
            {
                Brackets_int += -1;
            }
        }
        Brackets = to_string(Brackets_int);
        num_3.replace(num_3.find("["), Brackets_1.length() + 2, Brackets);
    }




    // factorial
    while (num_3.find("fact") != -1)
    {
        string  str_1;
        int a, i;
        str_1 = num_3.substr(num_3.find("fact") + 5, num_3.find(")", num_3.find_first_of("fact")) - (num_3.find("fact") + 5));
        a = stoi(str_1);
        if (a < 0)
        {
            return "can not factorial Negative numbers";
        }
        a = factorial(a);
        num_3.replace(num_3.find("fact"), str_1.length() + 6, to_string(a));
    }





    //log
    while (num_3.find("log") != -1)
    {
        long double t, k, z, w, sum, ln_1, ln_2, h = 0.0, d_2 = 1.0, d_1 = 1.0, ln_3 = 0;
        long double x, y;
        long long int LN_3;
        string log_string;
        int log_int;
        int a_1 = 0;
        int b_1 = 0;
        a_1 = num_3.find("(", num_3.find("log"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }

        log_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        x = stod(syntax_error(log_string.substr(0, log_string.find(","))));
        y = stod(syntax_error(log_string.substr(log_string.find(",") + 1, log_string.length() - 2)));
        if (x < 0)
        {
            return  "logarithm argument is Negative";
        }
        if (x == 0)
        {
            return  "logarithm argument is zero";
        }
        if (y == 1)
        {
            return "Basic logarithm is one ";
        }
        if (y < 0)
        {
            return "Basic logarithm is Negative ";
        }
        if (y == 0)
        {
            return "Basic logarithm is zero ";
        }

        t = (y - 1) / (y + 1);
        k = t * t;
        z = t;
        w = z;
        sum = w;
        while (sum != h)
        {
            h = sum;
            d_1 += 2.0;
            z *= k;
            sum += z / d_1;
        }
        ln_2 = 2.0 * sum;
        t = (x - 1) / (x + 1);
        k = t * t;
        z = t;
        w = z;
        sum = w;
        while (sum != h)
        {
            h = sum;
            d_2 += 2.0;
            z *= k;
            sum += z / d_2;
        }
        ln_1 = 2.0 * sum;
        ln_3 = ln_1 / ln_2;
        LN_3 = ln_3 * 1000;
        ln_3 = LN_3 / 1000.0;
        num_3.replace(num_3.find("log"), log_string.length() + 5, to_string(ln_3));

    }

    //ln
    while (num_3.find("ln") != -1)
    {
        long double t, k, z, w, sum, ln_1, ln_2, h = 0.0, d_2 = 1.0, d_1 = 1.0, ln_3 = 0;
        long double x, y = e;
        long long int LN_3;
        string log_string;
        int log_int;
        int a_1 = 0;
        int b_1 = 0;
        a_1 = num_3.find("(", num_3.find("ln"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        log_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        string log_string_1 = log_string;
        log_string = syntax_error(log_string);
        

        //if input (.12343412) --> (0.12343412)
        if (log_string[0] != '-')
        {
            if (log_string[0] == '.')
            {
                log_string = '0' + log_string;
            }
        }
        else
        {
            if (log_string[1] == '.')
            {
                log_string.replace(0, 1, "-0");
            }
        }




        x = stod(log_string.substr(0, log_string.find(",")));


        if (x == 0)
        {
            return  "ln argument is zero";
        }
        if (x < 0)
        {
            return "logarithm argument is Negative";
        }

        t = (y - 1) / (y + 1);
        k = t * t;
        z = t;
        w = z;
        sum = w;
        while (sum != h)
        {
            h = sum;
            d_1 += 2.0;
            z *= k;
            sum += z / d_1;
        }
        ln_2 = 2.0 * sum;
        t = (x - 1) / (x + 1);
        k = t * t;
        z = t;
        w = z;
        sum = w;
        while (sum != h)
        {
            h = sum;
            d_2 += 2.0;
            z *= k;
            sum += z / d_2;
        }
        ln_1 = 2.0 * sum;
        ln_3 = ln_1 / ln_2;
        LN_3 = ln_3 * 1000;
        ln_3 = LN_3 / 1000.0;
        num_3.replace(num_3.find("ln"), log_string_1.length() + 4, to_string(ln_3));

    }

    //radical
    while (num_3.find("radical") != -1)
    {
        double squareroot = 0;
        double number;
        int forge;
        int a_1 = 0;
        int b_1 = 0;
        int x;
        int y;
        long double z = 0;
        string radical_string;
        a_1 = num_3.find("(", num_3.find("radical"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        radical_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);

        number = stod(syntax_error(radical_string.substr(0, radical_string.find(","))));
        if (number < 0)
        {
            return "can not calculate Negative radical";
        }
        forge = stod(syntax_error(radical_string.substr(radical_string.find(",") + 1, radical_string.length() - 2)));
        while (z < number)
        {
            squareroot += 0.000001;
            z = 1;
            for (int i = 1; i <= forge; i++)
            {
                z *= squareroot;
            }
        }
        num_3.replace(num_3.find("radical"), radical_string.length() + 9, to_string(squareroot));
    }

    //arcsinh
    while (num_3.find("arcsinh") != -1)
    {
        int a_1;
        int b_1;
        string arcsinh;
        string arcsinh_string;
        long double arcsinh_float;
        a_1 = num_3.find_first_of("(", num_3.find("arcsinh"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        arcsinh = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arcsinh_string = syntax_error(arcsinh);
        arcsinh_float = stod(arcsinh_string);
        long double x = arcsinh_float;
        if (x == 0)
        {
            arcsinh_float = 0;
        }
        else if (x >= -1 && x <= 1)
        {
            arcsinh_float = x - (1 / ((x * x * x) * 6)) + 3 / ((x * x * x * x * x) * 40) - 15 * ((x * x * x * x * x * x * x) * 336);
        }
        if (x >= 1)
        {
            string a = "ln(2*" + to_string(x) + ")";
            a = syntax_error(a);
            arcsinh_float = stod(a) - (1 / ((x * x) * 4) + 3 / ((x * x * x * x) * 32) - 15 / ((x * x * x * x * x * x) * 288));
        }
        if (x <= -1)
        {
            string a = "-2*" + to_string(x);
            arcsinh_float = -1 * stod(syntax_error(a)) + (1 / ((x * x) * 4) + 3 / ((x * x * x * x) * 32) - 15 / ((x * x * x * x * x * x) * 288));
        }






        num_3.replace(num_3.find("arcsinh"), arcsinh.length() + 9, to_string(arcsinh_float));

    }


    //arccosh
    while (num_3.find("arccosh") != -1)
    {
        int a_1;
        int b_1;
        string arccosh;
        string arccosh_string;
        long double arccosh_float;
        a_1 = num_3.find_first_of("(", num_3.find("arccosh"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        arccosh = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccosh_string = syntax_error(arccosh);
        arccosh_float = stod(arccosh_string);
        long double x = arccosh_float;
        if (x >= 1)
        {
            string a = "ln(2*" + to_string(x) + ")";
            a = syntax_error(a);
            arccosh_float = stod(a) - (1 / ((x * x) * 4) + 3 / ((x * x * x * x) * 32) + 15 / ((x * x * x * x * x * x) * 288));
        }
        else
        {
            return "Not defined in mathematics";
        }
        num_3.replace(num_3.find("arccosh"), arccosh.length() + 9, to_string(arccosh_float));
    }



    //arctanh
    while (num_3.find("arctanh") != -1)
    {
        int a_1;
        int b_1;
        string arctanh;
        string arctanh_string;
        long double arctanh_float;
        a_1 = num_3.find_first_of("(", num_3.find("arctanh"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        arctanh = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arctanh_string = syntax_error(arctanh);
        arctanh_float = stod(arctanh_string);
        long double x = arctanh_float;
        if (x < 1 && x > -1)
        {
            arctanh_float = x + ((x * x * x) / 3) + ((x * x * x * x * x) / 5) + ((x * x * x * x * x * x * x) / 7) + ((x * x * x * x * x * x * x * x * x) / 9);
        }
        else
        {
            return "Not defined in mathematics";
        }
        num_3.replace(num_3.find("arctanh"), arctanh.length() + 9, to_string(arctanh_float));
    }

    //arccoth
    while (num_3.find("arccoth") != -1)
    {

        int a_1;
        int b_1;
        string arccoth;
        string arccoth_string;
        long double arccoth_float;
        a_1 = num_3.find_first_of("(", num_3.find("arccoth"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        arccoth = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccoth_string = syntax_error(arccoth);
        arccoth_float = stod(arccoth_string);
        long double x = arccoth_float;
        if (x > 1 || x < -1)
        {
            arccoth_float = (1 / x) + 1 / (((x * x * x) / 3)) + 1 / (((x * x * x * x * x) / 5)) + 1 / (((x * x * x * x * x * x * x) / 7)) + 1 / (((x * x * x * x * x * x * x * x * x) / 9));
        }
        else
        {
            return "Not defined in mathematics";
        }
        num_3.replace(num_3.find("arccoth"), arccoth.length() + 9, to_string(arccoth_float));
    }

    //arcsech
    while (num_3.find("arcsech") != -1)
    {
        int a_1;
        int b_1;
        string arcsech;
        string arcsech_string;
        string h;
        long double arcsech_float;
        a_1 = num_3.find_first_of("(", num_3.find("arcsech"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        arcsech = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arcsech_string = syntax_error(arcsech);
        arcsech_float = stod(arcsech_string);
        long double x = arcsech_float;
        if (x>0&&x<1)
        {
            long double  f = 1 / (x * x) - 1;
            string a = "ln(1/"+to_string(x)+"+"+"radical("+to_string(f)+",2))";
            
            h=syntax_error(a);
           /*
            string a = "ln(2*" + to_string(x) + ")";
            a = syntax_error(a);
            arcsech_float = stod(a) - (1 / ((x * x) * 4) + 3 / ((x * x * x * x) * 32) + 15 / ((x * x * x * x * x * x) * 288));
            */
            

        }
        else if (x == 0)
        {
            return "+ Binahayat";
        }
        else if (x == 1)
        {
            return "0";
        }
        else
        {
            return "Not defined in mathematics";
        }
        num_3.replace(num_3.find("arcsech"), arcsech.length() + 9, h);
    }

    //arccsch
    while (num_3.find("arccsch") != -1)
    {
        int a_1;
        int b_1;
        string arccsch;
        string arccsch_string;
        string h;
        long double arccsch_float;
        a_1 = num_3.find_first_of("(", num_3.find("arccsch"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        arccsch = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccsch_string = syntax_error(arccsch);
        arccsch_float = stod(arccsch_string);
        long double x = arccsch_float;
        if (x == 0)
        {
            return "Not defined in mathematics";
        }
        else
        {
            long double  f = 1 / (x * x) + 1;
            string a = "ln(1/" + to_string(x) + "+" + "radical(" + to_string(f) + ",2))";
            h = syntax_error(a);
        }
        num_3.replace(num_3.find("arccsch"), arccsch.length() + 9, to_string(1 / arccsch_float));

    }

    //arcsin
    while (num_3.find("arcsin") != -1)
    {

        int a_1;
        int b_1;
        string arcsin;
        string arcsin_string;
        long double arcsin_float;
        a_1 = num_3.find_first_of("(", num_3.find("arcsin"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman arcsin
        arcsin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arcsin_string = syntax_error(arcsin);

        arcsin_float = stod(arcsin_string);
        long double x = arcsin_float;
        arcsin_float = x + (x * x * x) / 6 + (x * x * x * x * x) * 3 / 8 + (x * x * x * x * x * x * x) * 15 / 336;

        if (deg_arc == true)
        {
            arcsin_float = stod(convert_rad_to_deg(to_string(arcsin_float)));
        }
        if (grad_arc == true)
        {
            arcsin_float = stod(convert_rad_to_grad(to_string(arcsin_float)));
        }
        num_3.replace(num_3.find("arcsin"), arcsin.length() + 8, to_string(arcsin_float));

    }
    //arctan
    while (num_3.find("arctan") != -1)
    {

        int a_1;
        int b_1;
        string arctan;
        string arctan_string;
        long double arctan_float;
        a_1 = num_3.find_first_of("(", num_3.find("arctan"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman arctan
        arctan = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arctan_string = syntax_error(arctan);
        arctan_float = stod(arctan_string);
        long double x = arctan_float;

        if (x <= 1 && x >= -1)
        {
            arctan_float = x - (x * x * x) / 3 + (x * x * x * x * x) / 5 - (x * x * x * x * x * x * x) / 7+ (x *x*x* x * x * x * x * x * x) / 9- (x * x *x*x* x * x * x * x * x * x * x) / 11;
        }
        else if (x >= 1)
        {
            arctan_float = p / 2 - 1 / x + 1 / ((x * x * x) / 3) - 1 / ((x * x * x * x * x) / 5);
        }
        else
        {
            arctan_float = -p / 2 - 1 / x + 1 / ((x * x * x) / 3) - 1 / ((x * x * x * x * x) / 5);
        }

        if (deg_arc == true)
        {
            arctan_float = stod(convert_rad_to_deg(to_string(arctan_float)));
        }
        if (grad_arc == true)
        {
            arctan_float = stod(convert_rad_to_grad(to_string(arctan_float)));
        }
        num_3.replace(num_3.find("arctan"), arctan.length() + 8, to_string(arctan_float));
    }


    //arccos

    while (num_3.find("arccos") != -1)
    {
        int a_1;
        int b_1;
        string arccos;
        string arccos_string;
        long double arccos_float;
        a_1 = num_3.find_first_of("(", num_3.find("arccos"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman arccos
        arccos = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccos_string = syntax_error(arccos);
        arccos_float = stod(arccos_string);
        long double x = arccos_float;
        arccos_float = p / 2 - (x + ((x * x * x) / 6) + (3 * (x * x * x * x * x) / 8) + (15 * (x * x * x * x * x * x * x) / 336));
        if (deg_arc == true)
        {
            arccos_float = stod(convert_rad_to_deg(to_string(arccos_float)));
        }
        if (grad_arc == true)
        {
            arccos_float = stod(convert_rad_to_grad(to_string(arccos_float)));
        }
        num_3.replace(num_3.find("arccos"), arccos.length() + 8, to_string(arccos_float));
    }



    //arccot
    while (num_3.find("arccot") != -1)
    {

        int a_1;
        int b_1;
        string arccot;
        string arccot_string;
        long double arccot_float;
        a_1 = num_3.find_first_of("(", num_3.find("arccot"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman arccot
        arccot = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccot_string = syntax_error(arccot);
        arccot_float = stod(arccot_string);
        long double x = arccot_float;

        if (x <= 1 && x >= -1)
        {
            arccot_float = p / 2 - (x - (x * x * x) / 3 + (x * x * x * x * x) / 5 - (x * x * x * x * x * x * x) / 7);
        }
        else if (x >= 1)
        {
            arccot_float = p / 2 - (p / 2 - 1 / x + 1 / ((x * x * x) / 3) - 1 / ((x * x * x * x * x) / 5));
        }
        else
        {
            arccot_float = p / 2 - (-p / 2 - 1 / x + 1 / ((x * x * x) / 3) - 1 / ((x * x * x * x * x) / 5));
        }
        if (deg_arc == true)
        {
            arccot_float = stod(convert_rad_to_deg(to_string(arccot_float)));
        }
        if (grad_arc == true)
        {
            arccot_float = stod(convert_rad_to_grad(to_string(arccot_float)));
        }
        num_3.replace(num_3.find("arccot"), arccot.length() + 8, to_string(arccot_float));
    }



    //arcsec

    while (num_3.find("arcsec") != -1)
    {
        int a_1;
        int b_1;
        string arccos;
        string arccos_string;
        long double arccos_float;
        a_1 = num_3.find_first_of("(", num_3.find("arcsec"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman arcsec
        arccos = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccos_string = syntax_error(arccos);
        arccos_float = stod(arccos_string);
        if (arccos_float< 1 && arccos_float > -1)
            return "Syntax Error";
        long double x = 1/arccos_float;
        arccos_float = p / 2 - (x + (x * x * x) / 6 + (x * x * x * x * x) * 3 / 8 + (x * x * x * x * x * x * x) * 15 / 336);

        

        if (deg_arc == true)
        {
            arccos_float = stod(convert_rad_to_deg(to_string(arccos_float)));
        }
        if (grad_arc == true)
        {
            arccos_float = stod(convert_rad_to_grad(to_string(arccos_float)));
        }
        num_3.replace(num_3.find("arcsec"), arccos.length() + 8, to_string(arccos_float));
    }





    //arccsc
    while (num_3.find("arccsc") != -1)
    {

        int a_1;
        int b_1;
        string arccsc;
        string arccsc_string;
        long double arccsc_float;
        a_1 = num_3.find_first_of("(", num_3.find("arccsc"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman arccsc
        arccsc = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        arccsc_string = syntax_error(arccsc);
        arccsc_float = stod(arccsc_string);
        if (arccsc_float < 1 && arccsc_float > -1)
            return "Syntax Error";
        long double x = 1/arccsc_float;
     
        arccsc_float = x + (x * x * x) / 6 + (x * x * x * x * x) * 3 / 8 + (x * x * x * x * x * x * x) * 15 / 336;
        
        arccsc_float = 1 / arccsc_float;

        if (deg_arc == true)
        {
            arccsc_float = stod(convert_rad_to_deg(to_string(arccsc_float)));
        }
        if (grad_arc == true)
        {
            arccsc_float = stod(convert_rad_to_grad(to_string(arccsc_float)));
        }
        num_3.replace(num_3.find("arccsc"), arccsc.length() + 8, to_string(arccsc_float));

    }






    //sinh
    while (num_3.find("sinh") != -1)
    {
        int a_1;
        int b_1;
        string sinh;
        string sinh_string;
        long double sinh_float;
        a_1 = num_3.find_first_of("(", num_3.find("sinh"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sinh
        sinh = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sinh_string = syntax_error(sinh);
        sinh_float = stod(sinh_string);
        //sin  taylor
        double sign = 1;
        /*
        sin_float *= p / 180.0;
        */
        double r = 0;
        double term = sinh_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= sinh_float * sinh_float / k / (k - 1);
        }
        sinh = to_string(sign * r);
        num_3.replace(a_1 - 4, b_1 - a_1 + 5, sinh);
    }
    //cosh
    while (num_3.find("cosh") != -1)
    {
        int a_1;
        int b_1;
        string cosh_string;
        long double cosh_float;

        a_1 = num_3.find_first_of("(", num_3.find("cosh"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }

        // cut arguman cosh
        cosh_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        cosh_string = syntax_error(cosh_string);
        cosh_float = stod(cosh_string);

        /*
        cosh_float *= p / 180.0;
        */
        double res = 0;
        double term = 1;
        int k = 0;
        while (res + term != res) {
            res += term;
            k += 2;
            term *= cosh_float * cosh_float / k / (k - 1);
        }
        cosh_string = to_string(res);
        num_3.replace(a_1 - 4, b_1 - a_1 + 5, cosh_string);
    }
    //tanh
    while (num_3.find("tanh") != -1)
    {
        long double coth;
        //sin
        int a_1;
        int b_1;
        string sin;
        string sin_string;
        string cos_string;
        long double cos_float;
        long double sin_float;
        a_1 = num_3.find_first_of("(", num_3.find("tanh"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman tanh
        sin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sin_string = syntax_error(sin);
        sin_float = stod(sin_string);
        cos_float = sin_float;
        //sinh  taylor
        double sign = 1;
        /*
        sin_float *= p / 180.0;
        */
        double r = 0;
        double term = sin_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= sin_float * sin_float / k / (k - 1);
        }
        sin = to_string(sign * r);
        //cosh
        /*
        cos_float *= p / 180.0;
        */
        double res = 0;
        term = 1;
        k = 0;
        while (res + term != res) {
            res += term;
            k += 2;
            term *= cos_float * cos_float / k / (k - 1);
        }

        coth = (sign * r) / res;
        num_3.replace(a_1 - 4, b_1 - a_1 + 5, to_string(coth));
    }
    //coth
    while (num_3.find("coth") != -1)
    {
        long double coth;
        //sin
        int a_1;
        int b_1;
        string sin;
        string sin_string;
        string cos_string;
        long double cos_float;
        long double sin_float;
        a_1 = num_3.find_first_of("(", num_3.find("coth"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman coth
        sin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sin_string = syntax_error(sin);
        sin_float = stod(sin_string);
        cos_float = sin_float;
        //sinh  taylor
        double sign = 1;
        /*
        sin_float *= p / 180.0;
        */
        double r = 0;
        double term = sin_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= sin_float * sin_float / k / (k - 1);
        }
        sin = to_string(sign * r);
        //cosh
        /*
        cos_float *= p / 180.0;
        */
        double res = 0;
        term = 1;
        k = 0;
        while (res + term != res) {
            res += term;
            k += 2;
            term *= cos_float * cos_float / k / (k - 1);
        }
        if (sign * r == 0)
        {
            return "Not defined in mathematics";
        }
        coth = res / (sign * r);
        num_3.replace(a_1 - 4, b_1 - a_1 + 5, to_string(coth));
    }
    //csch
    while (num_3.find("csch") != -1)
    {
        int a_1;
        int b_1;
        string csch;
        string sinh_string;
        long double sinh_float;
        a_1 = num_3.find_first_of("(", num_3.find("csch"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman csch
        csch = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sinh_string = syntax_error(csch);
        sinh_float = stod(sinh_string);
        //sin  taylor
        double sign = 1;
        /*
        sin_float *= p / 180.0;
        */
        double r = 0;
        double term = sinh_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= sinh_float * sinh_float / k / (k - 1);
        }
        csch = to_string(1 / (sign * r));




        //clear zero  --->   000003423 ----->   3423
        if (sinh_string[0] == '0')
        {
            for (int i = 0; i < sinh_string.length(); i++)
            {
                if (sinh_string[i] != '0')
                {
                    sinh_string.erase(0, i);
                    break;
                }
                else if (i == sinh_string.length() - 1)
                {
                    sinh_string = "0";
                }
            }
        }



        //if input (.12343412) --> (0.12343412)
        if (sinh_string[0] != '-')
        {
            if (sinh_string[0] == '.')
            {
                sinh_string = '0' + sinh_string;
            }
        }
        else
        {
            if (sinh_string[1] == '.')
            {
                sinh_string.replace(0, 1, "-0");
            }
        }


        //clear zero next the demical
        if (sinh_string.find(".") != -1 && sinh_string[sinh_string.length() - 1] == '0')
        {
            for (int i = sinh_string.length() - 1; i >= 0; i--)
            {
                if (sinh_string[i] != '0')
                {
                    sinh_string = sinh_string.substr(0, i + 1);
                    break;
                }
                else if (i == sinh_string.find(".") + 1)
                {
                    sinh_string = sinh_string.substr(0, i - 1);
                    break;
                }
            }
        }
        string a = syntax_error("|" + sinh_string+ "|");
        long double f = stod(a);
        if (sinh_string == "0")
        {
            return "Not defined in mathematics";
        }
        if (f < 0.001)
        {
            if (stod(sinh_string) >0)
            {
                return "+ Binahayat";
            }
            else
            {
                return "- Binahayat";
            }

        }
        if (sinh_string == "0")
        {
            return "Not defined in mathematics";
        }
        num_3.replace(a_1 - 4, b_1 - a_1 + 5, csch);
    }
    //sech
    while (num_3.find("sech") != -1)
    {
        int a_1;
        int b_1;
        string sech_string;
        long double cosh_float;

        a_1 = num_3.find_first_of("(", num_3.find("sech"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }

        // cut arguman cos
        sech_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sech_string = syntax_error(sech_string);
        cosh_float = stod(sech_string);

        /*
        cosh_float *= p / 180.0;
        */
        double res = 0;
        double term = 1;
        int k = 0;
        while (res + term != res) {
            res += term;
            k += 2;
            term *= cosh_float * cosh_float / k / (k - 1);
        }
        sech_string = to_string(1 / res);
        num_3.replace(a_1 - 4, b_1 - a_1 + 5, sech_string);
    }

    //tan
    while (num_3.find("tan") != -1)
    {
        long double tan;
        //sin
        int a_1;
        int b_1;
        string sin;
        string sin_string;
        string cos_string;
        long double cos_float;
        long double sin_float;
        a_1 = num_3.find_first_of("(", num_3.find("tan"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        sin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sin_string = syntax_error(sin);

        if (rad == true)
        {
            sin_string = convert_rad_to_deg(sin_string);
        }
        if (grad == true)
        {
            sin_string = convert_grad_to_deg(sin_string);
        }
        sin_float = stod(sin_string);
        cos_float = sin_float;
        //sin  taylor
        double sign = 1;
        if (sin_float < 0)
        {
            sign = -1.0;
            sin_float = -sin_float;
        }
        if (sin_float > 360)
        {
            sin_float -= int(sin_float / 360) * 360;
        }
        sin_float *= p / 180.0;
        double r = 0;
        double term = sin_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= -sin_float * sin_float / k / (k - 1);
        }
        sin = to_string(sign * r);
        //cos
        if (cos_float < 0)
        {
            cos_float = -cos_float;
        }
        if (cos_float > 360)
        {
            cos_float -= int(cos_float / 360) * 360;
        }
        cos_float *= p / 180.0;
        long double res = 0;
        term = 1;
        k = 0;
        while (res + term != res)
        {
            res += term;
            k += 2;
            term *= -cos_float * cos_float / k / (k - 1);
        }
       
        string a = syntax_error("|"+to_string(res)+"|");
        long double f = stod(a);
        if (f == 0)
        {
            return  "Not defined in mathematics";
        }
        if (f < 0.00001)
        {
            if ((res > 0 && sign * r > 0) || (res < 0 && sign * r < 0))
            {
                return "+ Binahayat";
            }
            else
            {
                return "- Binahayat";
            }

        }
        tan = (sign * r) / res;
        num_3.replace(num_3.find("tan"), sin_string.length()+5, to_string(tan));
    }


    //cot
    while (num_3.find("cot") != -1)
    {
        long double cot;
        //sin
        int a_1;
        int b_1;
        string sin;
        string sin_string;
        string cos_string;
        long double cos_float;
        long double sin_float;
        a_1 = num_3.find_first_of("(", num_3.find("cot"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        // cut arguman sin
        sin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sin_string = syntax_error(sin);
        if (rad == true)
        {
            sin_string = convert_rad_to_deg(sin_string);
        }
        if (grad == true)
        {
            sin_string = convert_grad_to_deg(sin_string);
        }
        sin_float = stod(sin_string);
        cos_float = sin_float;
        //sin  taylor
        double sign = 1;
        if (sin_float < 0)
        {
            sign = -1.0;
            sin_float = -sin_float;
        }
        if (sin_float > 360)
        {
            sin_float -= int(sin_float / 360) * 360;
        }
        sin_float *= p / 180.0;
        double r = 0;
        double term = sin_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= -sin_float * sin_float / k / (k - 1);
        }
        sin = to_string(sign * r);
        //cos
        if (cos_float < 0)
        {
            cos_float = -cos_float;
        }
        if (cos_float > 360)
        {
            cos_float -= int(cos_float / 360) * 360;
        }
        cos_float *= p / 180.0;
        double res = 0;
        term = 1;
        k = 0;
        while (res + term != res) {
            res += term;
            k += 2;
            term *= -cos_float * cos_float / k / (k - 1);
        }
        string a = syntax_error("|" + to_string(sign * r) + "|");
        long double f = stod(a);
        if (f == 0)
        {
            return  "Not defined in mathematics";
        }
        if (f < 0.0001)
        {
            if ((res > 0 && sign * r > 0) || (res < 0 && sign * r < 0))
            {
                return "+ Binahayat";
            }
            else
            {
                return "- Binahayat";
            }

        }
        cot = res / (sign * r);
        num_3.replace(a_1 - 3, b_1 - a_1 + 4, to_string(cot));
    }
    //sin
    while (num_3.find("sin") != -1)
    {
        int a_1;
        int b_1;
        string sin;
        string sin_string;
        long double sin_float;
        a_1 = num_3.find_first_of("(", num_3.find("sin"));
        int hg = 0;
        for (int i=a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }
        
        // cut arguman sin
        sin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sin_string = syntax_error(sin);
        if (rad == true)
        {
            sin_string = convert_rad_to_deg(sin_string);
        }
        if (grad == true)
        {
            sin_string = convert_grad_to_deg(sin_string);
        }
        sin_float = stod(sin_string);
        //sin  taylor
        double sign = 1;
        if (sin_float < 0)
        {
            sign = -1.0;
            sin_float = -sin_float;
        }
        if (sin_float > 360)
        {
            sin_float -= int(sin_float / 360) * 360;
        }
        sin_float *= p / 180.0;
        double r = 0;
        double term = sin_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= -sin_float * sin_float / k / (k - 1);
        }
        sin = to_string(sign * r);
        num_3.replace(a_1 - 3, b_1 - a_1 + 4, sin);
    }
    //csc
    while (num_3.find("csc") != -1)
    {
        int a_1;
        int b_1;
        string sin;
        string sin_string;
        long double sin_float;
        long double csc;
        a_1 = num_3.find_first_of("(", num_3.find("csc"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }

        // cut arguman sin
        sin = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        sin_string = syntax_error(sin);
        if (rad == true)
        {
            sin_string = convert_rad_to_deg(sin_string);
        }
        if (grad == true)
        {
            sin_string = convert_grad_to_deg(sin_string);
        }
        sin_float = stod(sin_string);
        //sin  taylor
        double sign = 1;
        if (sin_float < 0)
        {
            sign = -1.0;
            sin_float = -sin_float;
        }
        if (sin_float > 360)
        {
            sin_float -= int(sin_float / 360) * 360;
        }
        sin_float *= p / 180.0;
        double r = 0;
        double term = sin_float;
        int k = 1;
        for (int i = 0; i < 40; i++)
        {
            r += term;
            k += 2;
            term *= -sin_float * sin_float / k / (k - 1);
        }


        
        string a = syntax_error("|" + to_string(sign * r) + "|");
        long double f = stod(a);
        if (f == 0)
        {
            return  "Not defined in mathematics";
        }

        if (f < 0.00001)
        {
            if (sign * r > 0)
            {
                return "+ Binahayat";
            }
            else
            {
                return "- Binahayat";
            }

        }






        sin = to_string(sign * r);
        csc = 1 / stod(sin);
        num_3.replace(a_1 - 3, b_1 - a_1 + 4, to_string(csc));
    }
    // cos  
    while (num_3.find("cos") != -1)
    {
        int a_1;
        int b_1;
        string cos_string;
        long double cos_float;

        a_1 = num_3.find_first_of("(", num_3.find("cos"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }

        // cut arguman cos
        cos_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        cos_string = syntax_error(cos_string);
        if (rad == true)
        {
            cos_string = convert_rad_to_deg(cos_string);
        }
        if (grad == true)
        {
            cos_string = convert_grad_to_deg(cos_string);
        }
        cos_float = stod(cos_string);

        if (cos_float < 0)
        {
            cos_float = -cos_float;
        }
        if (cos_float > 360)
        {
            int a = cos_float / 360;
            long double v= a * 360;
            cos_float -= v;
        }
        cos_float *= p / 180.0;
        double res = 0;
        double term = 1;
        int k = 0;
        while (res + term != res) {
            res += term;
            k += 2;
            term *= -cos_float * cos_float / k / (k - 1);
        }



        cos_string = to_string(res);
        num_3.replace(a_1 - 3, b_1 - a_1 + 4, cos_string);

    }
    // sec 
    while (num_3.find("sec") != -1)
    {
        int a_1;
        int b_1;
        string cos_string;
        long double cos_float;
        long double sec;
        a_1 = num_3.find_first_of("(", num_3.find("sec"));
        int hg = 0;
        for (int i = a_1; i < num_3.length(); i++)
        {
            if (num_3[i] == ')')
                hg++;
            else if (num_3[i] == '(')
                hg--;
            if (hg == 0)
            {
                b_1 = i;
                break;
            }
        }

        // cut arguman cos
        cos_string = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        cos_string = syntax_error(cos_string);
        if (rad == true)
        {
            cos_string = convert_rad_to_deg(cos_string);
        }
        if (grad == true)
        {
            cos_string = convert_grad_to_deg(cos_string);
        }
        cos_float = stod(cos_string);

        if (cos_float < 0)
        {
            cos_float = -cos_float;
        }
        if (cos_float > 360)
        {
            cos_float -= int(cos_float / 360) * 360;
        }
        cos_float *= p / 180.0;
        double res = 0;
        double term = 1;
        int k = 0;
        while (res + term != res)
        {
            res += term;
            k += 2;
            term *= -cos_float * cos_float / k / (k - 1);
        }

        string a = syntax_error("|" + to_string(res) + "|");
        long double f = stod(a);
        if (f == 0)
        {
            return  "Not defined in mathematics";
        }
        
        if (f < 0.00001)
        {
            if (res > 0)
            {
                return "+ Binahayat";
            }
            else
            {
                return "- Binahayat";
            }

        }

        sec = 1 / res;
        num_3.replace(num_3.find("sec"), b_1 - a_1 + 5, to_string(sec));
    }




    // replace e & p  ----> 2.7 & 3.14
    for (int i = 0; i < num_3.length(); i++)
    {
        if (num_3[i] == 'e')
        {
            num_3.replace(i, 1, "2.718281828");
        }
        if (num_3[i] == 'p')
        {
            num_3.replace(i, 1, "3.141592654");
        }
    }












    return parentheses(num_3);
}



////////////////////////////////////////////////////////////



string fg::syntax_error(string num_8787)
{
    int j = 0;
    string str_4;
    num_8787 = "(" + num_8787 + ")";
    for (int i = 0; i < num_8787.length(); i++)
    {
        if (num_8787[i] == ')' || num_8787[i] == '(' || num_8787[i] == '+' || num_8787[i] == '-' || num_8787[i] == '*' || num_8787[i] == '/' || ((int)num_8787[i] >= 65 && (int)num_8787[i] <= 122) || i == num_8787.length() - 1)
        {
            if (j != i)
            {
                str_4 = num_8787.substr(j, i - j);
                if (str_4.find_first_of(".") != str_4.find_last_of("."))
                {
                    syntax_error_1 = 1;
                }
            }
            j = i + 1;
            str_4 = {};
        }
        if (i != num_8787.length() && num_8787[i] == num_8787[i + 1] && (num_8787[i] == '+' || num_8787[i] == '-' || num_8787[i] == '/' || num_8787[i] == '*'))
        {
            syntax_error_1 = 1;
        }
    }

    int i = 0, f = 0, hg = 0;
    bool a = true;

    for (i; i < num_8787.length(); i++)
    {

        if (num_8787[i] == ')')
            hg++;
        else if (num_8787[i] == '(')
            hg--;
        if (hg > 0)
        {
            syntax_error_1 = 1;

            break;
        }
    }
    if (!(hg == 0 && num_8787[0] != ')' && num_8787[num_8787.length() - 1] != '(' && syntax_error_1 == 0))
    {
        syntax_error_1 = 1;

    }
    if (syntax_error_1 == 1)
    {
        return "syntax error";
    }
    else
    {
        return function(num_8787);
    }
}



/////////////////////////////////////////////////////////


//grade_2_equation
string fg::grade_2_equation(string num_5)
{
    long double a_11;
    long double b_22;
    long double c_33;
    int a_1 = 0;
    int b_1 = 0;
    string str_1;
    a_1 = num_5.find("(", num_5.find("x^2"));
    b_1 = num_5.find(")", num_5.find("x^2"));
    str_1 = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (str_1 == "")
    {
        str_1 = "0";
    }
    a_11 = stod(str_1);
    a_1 = num_5.find("(", num_5.find("x("));
    b_1 = num_5.find(")", num_5.find("x("));
    str_1 = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (str_1 == "")
    {
        str_1 = "0";
    }
    b_22 = stod(str_1);
    a_1 = num_5.find("(", num_5.find("c"));
    b_1 = num_5.find(")", num_5.find("c"));
    str_1 = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (str_1 == "")
    {
        str_1 = "0";
    }
    c_33 = stod(str_1);

    if (c_33 == 0 && b_22 == 0 && a_11 == 0)
    {
        return "Syntax error";
    }
    double d;
    d = (b_22 * b_22) - (4 * a_11 * c_33);

    if (d < 0)
    {
        return "javab nadarad";
    }
    else if (d == 0)
    {
        double squareroot = 0;
        double number = ((b_22 * b_22) - (4 * a_11 * c_33));
        int forge = 2;
        int a_1 = 0;
        int b_1 = 0;
        int x;
        int y;
        long double z = 0;
        if (number < 0)
        {
            return "Syntax error";
        }
        while (z < number)
        {
            squareroot += 0.000001;
            z = 1;
            for (int i = 1; i <= forge; i++)
            {
                z *= squareroot;
            }
        }
        long double x_1;
        x_1 = (-b_22 + squareroot) / (2 * a_11);
        string answer;
        string s = to_string(x_1);
        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;

        //cout ---> 5 demical
        if (s.find(".") != -1)
        {
            if (s.length() - 1 - s.find(".") < 5)
            {
                ;
            }
            else
            {
                answer = s.substr(0, s.find(".") + 1);
                answer += s[s.find(".") + 1];
                answer += s[s.find(".") + 2];
                answer += s[s.find(".") + 3];
                answer += s[s.find(".") + 4];
                answer += s[s.find(".") + 5];
                answer;
            }
        }
        else
            answer;




        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        if (answer == "-0")
        {
            answer.erase(0, 1);
        }
        return answer;
    }



    else
    {
        //////   x1
        double squareroot = 0;
        double number = ((b_22 * b_22) - (4 * a_11 * c_33));
        int forge = 2;
        int a_1 = 0;
        int b_1 = 0;
        int x;
        int y;
        long double z = 0;
        if (number < 0)
        {
            return "Syntax error";
        }
        while (z < number)
        {
            squareroot += 0.000001;
            z = 1;
            for (int i = 1; i <= forge; i++)
            {
                z *= squareroot;
            }
        }
        long double x_1;
        x_1 = (-b_22 + squareroot) / (2 * a_11);
        string x_1_string;
        string answer;
        string s=to_string(x_1);
        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;

        //cout ---> 5 demical
        if (s.find(".") != -1)
        {
            if (s.length() - 1 - s.find(".") < 5)
            {
                ;
            }
            else
            {
                answer = s.substr(0, s.find(".") + 1);
                answer += s[s.find(".") + 1];
                answer += s[s.find(".") + 2];
                answer += s[s.find(".") + 3];
                answer += s[s.find(".") + 4];
                answer += s[s.find(".") + 5];
                answer;
            }
        }
        else
            answer;




        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }

    
        if (answer == "-0")
        {
            answer.erase(0, 1);
        }
        x_1_string = answer;
        squareroot = 0;
        number = ((b_22 * b_22) - (4 * a_11 * c_33));
        forge = 2;
        a_1 = 0;
        b_1 = 0;
        z = 0;
        if (number < 0)
        {
            return "Syntax error";
        }
        while (z < number)
        {
            squareroot += 0.000001;
            z = 1;
            for (int i = 1; i <= forge; i++)
            {
                z *= squareroot;
            }
        }
        long double x_2;
        x_2 = (-b_22 - squareroot) / (2 * a_11);
        string x_2_string;
        s = to_string(x_2);
        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;

        //cout ---> 5 demical
        if (s.find(".") != -1)
        {
            if (s.length() - 1 - s.find(".") < 5)
            {
                ;
            }
            else
            {
                answer = s.substr(0, s.find(".") + 1);
                answer += s[s.find(".") + 1];
                answer += s[s.find(".") + 2];
                answer += s[s.find(".") + 3];
                answer += s[s.find(".") + 4];
                answer += s[s.find(".") + 5];
                answer;
            }
        }
        else
            answer;




        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
    if (answer == "-0")
    {
        answer.erase(0, 1);
    }
    x_2_string = answer;
        return "x1="+x_1_string+"\nx2="+ x_2_string;
    }
}



///////////////////////////////////////////////////////



string fg::device_two_equation(string num_5)
{
    string num_1;
    string num_2;
    string answer;
    string x3_string;
    string y3_string;
    int a_1 = num_5.find("(", num_5.find("x1"));
    int b_1 = num_5.find(")", num_5.find("x1"));
    string temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    long double a1 = stod(temp);
    a_1 = num_5.find("(", num_5.find("y1"));
    b_1 = num_5.find(")", num_5.find("y1"));
    temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    long double b1 = stod(temp);
    a_1 = num_5.find("(", num_5.find("c1"));
    b_1 = num_5.find(")", num_5.find("c1"));
    temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    long double c1 = stod(temp);
    a_1 = num_5.find("(", num_5.find("x2"));
    b_1 = num_5.find(")", num_5.find("x2"));
    temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    long double a2 = stod(temp);
    a_1 = num_5.find("(", num_5.find("y2"));
    b_1 = num_5.find(")", num_5.find("y2"));
    temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    long double b2 = stod(temp);
    a_1 = num_5.find("(", num_5.find("y1"));
    b_1 = num_5.find(")", num_5.find("y1"));
    temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    long double c2 = stod(temp);
    a_1 = num_5.find("(", num_5.find("k"));
    b_1 = num_5.find(")", num_5.find("k"));
    temp = num_5.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    int k = stod(temp);







    long double x, y, x3, y3, t = 1;
    if (a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0 && c1 == 0 && c2 == 0)
    {
        return "True for all values";
    }
    else if ((a1 == 0 && b1 == 0 && c1 != 0) || (a2 == 0 && b2 == 0 && c2 != 0))
    {
        return "Syntax Error";
    }
    else if (a1 == a2 && b2 - b1 != 0 && a1 == 0)
    {
        y = (c1 - c2) / (b1 - b2);
        for (int i = 1; i <= k; i++)
        {
            t *= 10;
        }
        y = y * t;
        y = (int)y;
        y3 = y / (double)t;
        answer = to_string(y3);
        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        y3_string = answer;
        return "True for all x\ny = " + y3_string;
    }
    else if (a1 == a2 && b2 - b1 == 0 && a1 == 0)
    {
        {
            y = c1 / b1;
            for (int i = 1; i <= k; i++)
            {
                t *= 10;
            }
            y = y * t;
            y = (int)y;
            y3 = y/ (double)t;
            answer = to_string(y3);
            //clear zero next the demical
            if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
            {
                for (int i = answer.length() - 1; i >= 0; i--)
                {
                    if (answer[i] != '0')
                    {
                        answer = answer.substr(0, i + 1);
                        break;
                    }
                    else if (i == answer.find(".") + 1)
                    {
                        answer = answer.substr(0, i - 1);
                        break;
                    }
                }
            }
            y3_string = answer;
            return  "True for all x\ny = "+ y3_string;
        }
    }
    else if (b1 == b2 && a2 - a1 != 0 && b1 == 0)
    {
        x = (c1 - c2) / (a1 - a2);
        for (int i = 1; i <= k; i++)
        {
            t *= 10;
        }
        x = x * t;
        x = (int)x;
        x3 = x / (double)t;
        answer = to_string(x3);
        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        x3_string = answer;
        return "x = " +x3_string+"\nTrue for all y";
    }
    else if (b1 == b2 && a2 - a1 == 0 && b1 == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            t *= 10;
        }
        x = x * t;
        x = (int)x;
        x3 = x / (double)t;
        answer = to_string(x3);
        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        x3_string = answer;
        return "x = "+x3_string+"\nTrue for all y";
        
    }
    else if (((a1 == 0 && b1 == 0 && c1 == 0) && (a2 != 0 && b2 != 0 && c2 != 0)) || ((a2 == 0 && b2 == 0 && c2 == 0) && (a1 != 0 && b1 != 0 && c1 != 0)) || (a1 * b2 == b1 * a2 && a1 * c2 == a2 * c1))
    {
        return "True for Many values";
    }
    else if (a1 / a2 == b1 / b2 && a1 / a2 != c1 / c2)
    {
        return "False for all values";
    }
    else
    {
        x = (((b2 * c1) / b1) - c2) / (((b2 * a1) / b1) - a2);
        y = ((c1 - (a1 * x)) / b1);
        t = 1;
        for (int i = 1; i <= k; i++)
        {
            t *= 10;
        }
        x = x * t;
        x = (int)x;
        x3 = x / (double)t;
        answer = to_string(x3);
        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        x3_string = answer;
        y = y * t;
        y = (int)y;
        y3 = y / (double)t;
        answer = to_string(y3);
        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        y3_string = answer;
        return "x = "+x3_string+" \ny = "+y3_string;
    }
}



//////////////////////////////////////////////////////////////////////////


//factorial ---->  !
int fg::factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}



//////////////////////////////////////////////



//MATRIX
string fg::Matrix(string num_3)
{

    int m, n, p, s;
    int a_1 = 0;
    int b_1 = 0;

    long double Matrix_1[5][5];
    long double Matrix_2[5][5];
    long double Matrix_3[5][5] = { 0,0,0,0,0,
                                   0,0,0,0,0,
                                   0,0,0,0,0,
                                   0,0,0,0,0,
                                   0,0,0,0,0 };

    string temp;
    
    a_1 = num_3.find("(", num_3.find("Width1"));
    b_1 = num_3.find(")", num_3.find("Width1"));
    m = stoi(num_3.substr(a_1 + 1, b_1 - a_1 - 1));
    a_1 = num_3.find("(", num_3.find("length1"));
    b_1 = num_3.find(")", num_3.find("length1"));
    n = stoi(num_3.substr(a_1 + 1, b_1 - a_1 - 1));
    a_1 = num_3.find("(", num_3.find("Width2"));
    b_1 = num_3.find(")", num_3.find("Width2"));
    s = stoi(num_3.substr(a_1 + 1, b_1 - a_1 - 1));
    a_1 = num_3.find("(", num_3.find("length2"));
    b_1 = num_3.find(")", num_3.find("length2"));
    p = stoi(num_3.substr(a_1 + 1, b_1 - a_1 - 1));
    //a11


    a_1 = num_3.find("(", num_3.find("a11"));
    b_1 = num_3.find(")", num_3.find("a11"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[0][0] = stod(temp);


    //a12
    a_1 = num_3.find("(", num_3.find("a12"));
    b_1 = num_3.find(")", num_3.find("a12"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[0][1] = stod(temp);


    //a13
    a_1 = num_3.find("(", num_3.find("a13"));
    b_1 = num_3.find(")", num_3.find("a13"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[0][2] = stod(temp);


    //a14
    a_1 = num_3.find("(", num_3.find("a14"));
    b_1 = num_3.find(")", num_3.find("a14"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[0][3] = stod(temp);


    //a15
    a_1 = num_3.find("(", num_3.find("a15"));
    b_1 = num_3.find(")", num_3.find("a15"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[0][4] = stod(temp);


    //a21


    a_1 = num_3.find("(", num_3.find("a21"));
    b_1 = num_3.find(")", num_3.find("a21"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[1][0] = stod(temp);


    //a22
    a_1 = num_3.find("(", num_3.find("a22"));
    b_1 = num_3.find(")", num_3.find("a22"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[1][1] = stod(temp);


    //a23
    a_1 = num_3.find("(", num_3.find("a23"));
    b_1 = num_3.find(")", num_3.find("a23"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[1][2] = stod(temp);


    //a24
    a_1 = num_3.find("(", num_3.find("a24"));
    b_1 = num_3.find(")", num_3.find("a24"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[1][3] = stod(temp);


    //a25
    a_1 = num_3.find("(", num_3.find("a25"));
    b_1 = num_3.find(")", num_3.find("a25"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[1][4] = stod(temp);


    //a31


    a_1 = num_3.find("(", num_3.find("a31"));
    b_1 = num_3.find(")", num_3.find("a31"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[2][0] = stod(temp);


    //a32
    a_1 = num_3.find("(", num_3.find("a32"));
    b_1 = num_3.find(")", num_3.find("a32"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[2][1] = stod(temp);


    //a33
    a_1 = num_3.find("(", num_3.find("a33"));
    b_1 = num_3.find(")", num_3.find("a33"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[2][2] = stod(temp);


    //a34
    a_1 = num_3.find("(", num_3.find("a34"));
    b_1 = num_3.find(")", num_3.find("a34"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[2][3] = stod(temp);


    //a35
    a_1 = num_3.find("(", num_3.find("a35"));
    b_1 = num_3.find(")", num_3.find("a35"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[2][4] = stod(temp);



    //a41


    a_1 = num_3.find("(", num_3.find("a41"));
    b_1 = num_3.find(")", num_3.find("a41"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[3][0] = stod(temp);


    //a42
    a_1 = num_3.find("(", num_3.find("a42"));
    b_1 = num_3.find(")", num_3.find("a42"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[3][1] = stod(temp);


    //a43
    a_1 = num_3.find("(", num_3.find("a43"));
    b_1 = num_3.find(")", num_3.find("a43"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[3][2] = stod(temp);
    //a44
    a_1 = num_3.find("(", num_3.find("a44"));
    b_1 = num_3.find(")", num_3.find("a44"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[3][3] = stod(temp);
    //a45
    a_1 = num_3.find("(", num_3.find("a45"));
    b_1 = num_3.find(")", num_3.find("a45"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[3][4] = stod(temp);
    //a51
    a_1 = num_3.find("(", num_3.find("a51"));
    b_1 = num_3.find(")", num_3.find("a51"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[4][0] = stod(temp);
    //a52
    a_1 = num_3.find("(", num_3.find("a52"));
    b_1 = num_3.find(")", num_3.find("a52"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[4][1] = stod(temp);
    //a53
    a_1 = num_3.find("(", num_3.find("a53"));
    b_1 = num_3.find(")", num_3.find("a53"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[4][2] = stod(temp);
    //a54
    a_1 = num_3.find("(", num_3.find("a54"));
    b_1 = num_3.find(")", num_3.find("a54"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[4][3] = stod(temp);
    //a55
    a_1 = num_3.find("(", num_3.find("a55"));
    b_1 = num_3.find(")", num_3.find("a55"));
    temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (temp == "")
    {
        temp = "0";
    }
    Matrix_1[4][4] = stod(temp);
    string type;
    a_1 = num_3.find("(", num_3.find("type"));
    b_1 = num_3.find(")", num_3.find("type"));
    type = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
    if (type != "T")
    {
        //b11
        a_1 = num_3.find("(", num_3.find("b11"));
        b_1 = num_3.find(")", num_3.find("b11"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[0][0] = stod(temp);
        //b12
        a_1 = num_3.find("(", num_3.find("b12"));
        b_1 = num_3.find(")", num_3.find("b12"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[0][1] = stod(temp);
        //b13
        a_1 = num_3.find("(", num_3.find("b13"));
        b_1 = num_3.find(")", num_3.find("b13"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[0][2] = stod(temp);
        //b14
        a_1 = num_3.find("(", num_3.find("b14"));
        b_1 = num_3.find(")", num_3.find("b14"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[0][3] = stod(temp);
        //b15
        a_1 = num_3.find("(", num_3.find("b15"));
        b_1 = num_3.find(")", num_3.find("b15"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[0][4] = stod(temp);
        //b21
        a_1 = num_3.find("(", num_3.find("b21"));
        b_1 = num_3.find(")", num_3.find("b21"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[1][0] = stod(temp);
        //b22
        a_1 = num_3.find("(", num_3.find("b22"));
        b_1 = num_3.find(")", num_3.find("b22"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[1][1] = stod(temp);
        //b23
        a_1 = num_3.find("(", num_3.find("b23"));
        b_1 = num_3.find(")", num_3.find("b23"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[1][2] = stod(temp);


        //b24
        a_1 = num_3.find("(", num_3.find("b24"));
        b_1 = num_3.find(")", num_3.find("b24"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[1][3] = stod(temp);


        //b25
        a_1 = num_3.find("(", num_3.find("b25"));
        b_1 = num_3.find(")", num_3.find("b25"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[1][4] = stod(temp);


        //b31


        a_1 = num_3.find("(", num_3.find("b31"));
        b_1 = num_3.find(")", num_3.find("b31"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[2][0] = stod(temp);
        //b32
        a_1 = num_3.find("(", num_3.find("b32"));
        b_1 = num_3.find(")", num_3.find("b32"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[2][1] = stod(temp);
        //b33
        a_1 = num_3.find("(", num_3.find("b33"));
        b_1 = num_3.find(")", num_3.find("b33"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[2][2] = stod(temp);
        //b34
        a_1 = num_3.find("(", num_3.find("b34"));
        b_1 = num_3.find(")", num_3.find("b34"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[2][3] = stod(temp);
        //b35
        a_1 = num_3.find("(", num_3.find("b35"));
        b_1 = num_3.find(")", num_3.find("b35"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[2][4] = stod(temp);
        //b41
        a_1 = num_3.find("(", num_3.find("b41"));
        b_1 = num_3.find(")", num_3.find("b41"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[3][0] = stod(temp);
        //b42
        a_1 = num_3.find("(", num_3.find("b42"));
        b_1 = num_3.find(")", num_3.find("b42"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[3][1] = stod(temp);
        //b43
        a_1 = num_3.find("(", num_3.find("b43"));
        b_1 = num_3.find(")", num_3.find("b43"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[3][2] = stod(temp);
        //b44
        a_1 = num_3.find("(", num_3.find("b44"));
        b_1 = num_3.find(")", num_3.find("b44"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[3][3] = stod(temp);
        //b45
        a_1 = num_3.find("(", num_3.find("b45"));
        b_1 = num_3.find(")", num_3.find("b45"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[3][4] = stod(temp);
        //b51
        a_1 = num_3.find("(", num_3.find("b51"));
        b_1 = num_3.find(")", num_3.find("b51"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[4][0] = stod(temp);
        //b52
        a_1 = num_3.find("(", num_3.find("b52"));
        b_1 = num_3.find(")", num_3.find("b52"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[4][1] = stod(temp);
        //b53
        a_1 = num_3.find("(", num_3.find("b53"));
        b_1 = num_3.find(")", num_3.find("b53"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[4][2] = stod(temp);
        //b54
        a_1 = num_3.find("(", num_3.find("b54"));
        b_1 = num_3.find(")", num_3.find("b54"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[4][3] = stod(temp);
        //b55
        a_1 = num_3.find("(", num_3.find("b55"));
        b_1 = num_3.find(")", num_3.find("b55"));
        temp = num_3.substr(a_1 + 1, b_1 - a_1 - 1);
        if (temp == "")
        {
            temp = "0";
        }
        Matrix_2[4][4] = stod(temp);
    }
    //type
    a_1 = num_3.find("(", num_3.find("type"));
    b_1 = num_3.find(")", num_3.find("type"));
    type = num_3.substr(a_1 + 1, b_1 - a_1 - 1);

    if (type == "*" && n != s)
    {
        return "Syntax Error";
    }

    if (type == "*")
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                for (int u = 0; u < s; u++)
                {
                    Matrix_3[i][j] = Matrix_3[i][j] + Matrix_1[i][u] * Matrix_2[u][j];
                }
            }
        }
    }


    else if (type == "+")
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                Matrix_3[i][j] = Matrix_2[i][j] + Matrix_1[i][j];
            }
        }
    }

    else if (type == "-")
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < p; j++)
            {
                Matrix_3[i][j] = Matrix_2[i][j] - Matrix_1[i][j];
            }
        }
    }
    else if (type == "T")
    {
        long double d;
        int temp_1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                Matrix_3[j][i] = Matrix_1[i][j]; 
            }
        }
        d = m;
        m = p;
        p = d;
    }
    string answer;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            answer+="c("+to_string(i+1)+to_string(j+1)+")"+"="+(to_string(Matrix_3[i][j])+" ");
        }
        answer += "\n";
    }
    return answer;
}

///////////////////////////////////////////////////////////////////////////





//   sum --->  +
string fg::sum(string str_1_string, string str_2_string)
{

    int a[4000], b[4000];
    int multi[8000] = { 0 };
    int i = 0, j = 0, temp;
    int min;
    int max;
    int N = 0;
    int max_float;

    int f = 0;
    char str_1[4001], str_2[4001];

    bool mine = false;
    bool float_1 = false;
    bool max_1 = false;
    bool max_2 = false;
    bool mine_1 = false;

    string str_1_float_1;
    string str_2_float_2;
    string answer;
    string s;




    //if input = empety  ---->  input=0
    if (str_1_string == "")
    {
        str_1_string = "0";
    }
    if (str_2_string == "")
    {
        str_2_string = "0";
    }

    //if input (.12343412) --> (0.12343412)
    if (str_1_string[0] != '-')
    {
        if (str_1_string[0] == '.')
        {
            str_1_string = '0' + str_1_string;
        }
    }
    else
    {
        if (str_1_string[1] == '.')
        {
            str_1_string.replace(0, 1, "-0");
        }
    }
    if (str_2_string[0] != '-')
    {
        if (str_2_string[0] == '.')
        {
            str_2_string = '0' + str_2_string;
        }
    }
    else
    {
        if (str_2_string[1] == '.')
        {
            str_2_string.replace(0, 1, "-0");
        }
    }







    if ((str_1_string[0] == '-') && (str_2_string[0] == '-') || (str_1_string[0] != '-') && (str_2_string[0] != '-'))
    {
        if ((str_1_string.find(".") != -1 && str_2_string.find(".") == -1) || (str_1_string.find(".") == -1 && str_2_string.find(".") != -1))
        {
            if (str_1_string.find(".") == -1)
            {
                str_1_string = str_1_string + ".0";
            }
            else
            {
                str_2_string = str_2_string + ".0";
            }
        }
        if ((str_1_string[0] == '-') && (str_2_string[0] == '-'))
        {
            str_1_string.erase(0, 1);
            str_2_string.erase(0, 1);
            mine = true;
        }
        if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
        {
            str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
            str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
            str_1_string = str_1_string.substr(0, str_1_string.find("."));
            str_2_string = str_2_string.substr(0, str_2_string.find("."));
            if (str_1_float_1.length() < str_2_float_2.length())
            {
                int size1 = str_1_float_1.length();
                for (int i = 0; i < (str_2_float_2.length() - size1); i++)
                {
                    str_1_float_1 += "0";
                }
                str_1_string = str_1_string + str_1_float_1;
                str_2_string = str_2_string + str_2_float_2;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() > str_2_float_2.length())
            {
                int size2 = str_2_float_2.length();
                for (int i = 0; i < (str_1_float_1.length() - size2); i++)
                {
                    str_2_float_2 += "0";
                }
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() == str_2_float_2.length())
            {
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
        }










        //clear zero  ---->   000003423 ----->   3423
        if (str_1_string[0] == '0')
        {
            for (int i = 0; i < str_1_string.length(); i++)
            {
                if (str_1_string[i] != '0')
                {
                    str_1_string.erase(0, i);
                    break;
                }
                else if (i == str_1_string.length() - 1)
                {
                    str_1_string = "0";
                }
            }
        }




        if (str_2_string[0] == '0')
        {
            for (int i = 0; i < str_2_string.length(); i++)
            {
                if (str_2_string[i] != '0')
                {
                    str_2_string.erase(0, i);
                    break;
                }
                else if (i == str_2_string.length() - 1)
                {
                    str_2_string = "0";
                }
            }
        }









        //if input ---> number-number
        if (str_1_string.length() <= str_2_string.length())
        {
            if (str_1_string.length() == str_2_string.length())
            {
                if (str_1_string.length() - 1 == 0)
                {
                    if (str_2_string[0] > str_1_string[0])
                    {
                        swap(str_1_string, str_2_string);

                    }
                }
                else
                {
                    for (int i = 0; i < str_1_string.length() ; i++)
                    {
                        if (str_2_string[i] > str_1_string[i])
                        {
                            swap(str_1_string, str_2_string);

                            break;
                        }

                    }
                }
            }
            else
            {
                swap(str_1_string, str_2_string);

            }
        }

        for (int i = 0; i < str_1_string.length(); i++)
        {

            if (!(str_1_string[i] >= 46 && str_1_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_1[i] = str_1_string[i];
        }
        for (int i = 0; i < str_2_string.length(); i++)
        {

            if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_2[i] = str_2_string[i];
        }
        max = str_1_string.length() - 1;
        min = str_2_string.length() - 1;

        int l1 = str_1_string.length();
        int l2 = str_2_string.length();






        //convert char to int
        for (i = l1 - 1, j = 0; i >= 0; i--, j++)
        {
            a[j] = str_1[i] - '0';
        }
        for (i = l2 - 1, j = 0; i >= 0; i--, j++)
        {
            b[j] = str_2[i] - '0';
        }
        //add a number not used

        for (int i = 0; i <= min; i++)
        {
            multi[i] = a[i] + b[i];
        }
        //add a number not used

        for (int i = min + 1; i <= max; i++)
        {
            multi[i] = a[i];
        }

        //if >=10 ----> add 1 in next
        for (i = 0; i < l1 + l2; i++)
        {
            temp = multi[i] / 10;
            multi[i] = multi[i] % 10;
            multi[i + 1] = multi[i + 1] + temp;
        }
        if (mine == true)
        {
            s += "-";
        }
        for (i = l1 + l2; i >= 0; i--)
        {
            if (multi[i] > 0)
            {
                f = i;
                break;
            }
        }
        if (float_1 == true)
        {
            if ((max_float > f + 1))
            {
                s += "0.";
                for (int i = 1; i < max_float - f; i++)
                {
                    s += "0";
                }
            }
        }
        for (f; f >= 0; f--)
        {
            if (float_1 == true)
            {
                if (f - max_float + 1 == 0)
                {
                    s += ".";
                }
            }
            s += (multi[f] + 48);
        }






        //if input (.12343412) --> (0.12343412)
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }













        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;



        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        if (answer == "-0")
        {
            answer.erase(0, 1);
        }
        return answer;
    }


    else
    {


        if (str_1_string[0] == '-')
        {
            str_1_string.erase(0, 1);
        }
        if (str_2_string[0] == '-')
        {
            str_2_string.erase(0, 1);
            mine_1 = true;
        }

        if ((str_1_string.find(".") != -1 && str_2_string.find(".") == -1) || (str_1_string.find(".") == -1 && str_2_string.find(".") != -1))
        {
            if (str_1_string.find(".") == -1)
            {
                str_1_string = str_1_string + ".0";
            }
            else
            {
                str_2_string = str_2_string + ".0";
            }
        }

        if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
        {
            str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
            str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
            str_1_string = str_1_string.substr(0, str_1_string.find("."));
            str_2_string = str_2_string.substr(0, str_2_string.find("."));
            if (str_1_float_1.length() < str_2_float_2.length())
            {
                int size1 = str_1_float_1.length();
                for (int i = 0; i < (str_2_float_2.length() - size1); i++)
                {
                    str_1_float_1 += "0";
                }
                str_1_string = str_1_string + str_1_float_1;
                str_2_string = str_2_string + str_2_float_2;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() > str_2_float_2.length())
            {
                int size2 = str_2_float_2.length();
                for (int i = 0; i < (str_1_float_1.length() - size2); i++)
                {
                    str_2_float_2 += "0";
                }
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() == str_2_float_2.length())
            {
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
        }


        //clear zero  ---->   000003423 ----->   3423
        if (str_1_string[0] == '0')
        {
            for (int i = 0; i < str_1_string.length(); i++)
            {
                if (str_1_string[i] != '0')
                {
                    str_1_string.erase(0, i);
                    break;
                }
                else if (i == str_1_string.length() - 1)
                {
                    str_1_string = "0";
                }
            }
        }




        if (str_2_string[0] == '0')
        {
            for (int i = 0; i < str_2_string.length(); i++)
            {
                if (str_2_string[i] != '0')
                {
                    str_2_string.erase(0, i);
                    break;
                }
                else if (i == str_2_string.length() - 1)
                {
                    str_2_string = "0";
                }
            }
        }







        //if input ---> number-number
        if (str_1_string.length() <= str_2_string.length())
        {
            if (str_1_string.length() == str_2_string.length())
            {
                if (str_1_string.length() - 1 == 0)
                {
                    if (str_2_string[0] > str_1_string[0])
                    {
                        swap(str_1_string, str_2_string);
                        mine = true;
                    }
                }
                else
                {
                    for (int i = 0; i < str_1_string.length() ; i++)
                    {
                        if (str_2_string[i] > str_1_string[i])
                        {
                            swap(str_1_string, str_2_string);
                            mine = true;
                            break;
                        }
                    }
                }
            }
            else
            {
                swap(str_1_string, str_2_string);
                mine = true;
            }
        }
        for (int i = 0; i < str_1_string.length(); i++)
        {

            if (!(str_1_string[i] >= 46 && str_1_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_1[i] = str_1_string[i];
        }
        for (int i = 0; i < str_2_string.length(); i++)
        {

            if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_2[i] = str_2_string[i];
        }
        max = str_1_string.length() - 1;
        min = str_2_string.length() - 1;

        int l1 = str_1_string.length();
        int l2 = str_2_string.length();
        //convert char to int
        for (i = l1 - 1, j = 0; i >= 0; i--, j++)
        {
            a[j] = str_1[i] - '0';
        }
        for (i = l2 - 1, j = 0; i >= 0; i--, j++)
        {
            b[j] = str_2[i] - '0';
        }
        //add a number not used

        for (int i = 0; i <= min; i++)
        {
            multi[i] = a[i] - b[i];
        }
        //add a number not used

        for (int i = min + 1; i <= max; i++)
        {
            multi[i] = a[i];
        }
        //if <0 ----> mine 1 in past
        for (i = 0; i <= max; i++)
        {
            if (multi[i] < 0)
            {
                multi[i] += 10;
                multi[i + 1] -= 1;
            }
        }
        for (i = l1 + l2; i >= 0; i--)
        {
            if (multi[i] > 0)
            {
                f = i;
                break;
            }
        }

        if (mine == false && mine_1 == false)
        {
            s += "-";
        }
        if (mine == true && mine_1 == true)
        {
            s += "-";
        }
        bool n = true;
        //cout
        if ((max_float > f + 1))
        {
            s += "0.";
            for (int i = 1; i < max_float - f; i++)
            {
                s += "0";
            }
        }
        for (f; f >= 0; f--)
        {
            if (float_1 == true)
            {
                if (f - max_float + 1 == 0)
                {
                    s += ".";
                    n = false;
                }
            }
            s += (multi[f] + 48);
        }







        //if input (.12343412) --> (0.12343412)
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }


















        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;





        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }

    }
    if (answer == "-0")
    {
        answer.erase(0, 1);
    }
    return answer;
}



//   mine ----> -
string fg::mine(string str_1_string, string str_2_string)
{
    int a[4000], b[4000];
    int multi[8000] = { 0 };
    int i = 0, j = 0, temp;
    int min;
    int max;
    int N = 0;
    int max_float;

    int f = 0;
    char str_1[4001], str_2[4001];

    bool mine = false;
    bool float_1 = false;
    bool max_1 = false;
    bool max_2 = false;
    bool mine_1 = false;

    string str_1_float_1;
    string str_2_float_2;
    string answer;
    string s;




    //if input = empety  ---->  input=0
    if (str_1_string == "")
    {
        str_1_string = "0";
    }
    if (str_2_string == "")
    {
        str_2_string = "0";
    }

    //if input (.12343412) --> (0.12343412)
    if (str_1_string[0] != '-')
    {
        if (str_1_string[0] == '.')
        {
            str_1_string = '0' + str_1_string;
        }
    }
    else
    {
        if (str_1_string[1] == '.')
        {
            str_1_string.replace(0, 1, "-0");
        }
    }
    if (str_2_string[0] != '-')
    {
        if (str_2_string[0] == '.')
        {
            str_2_string = '0' + str_2_string;
        }
    }
    else
    {
        if (str_2_string[0] == '.')
        {
            str_2_string.replace(0, 2, "-0");
        }
    }

    if ((str_1_string[0] == '-' && str_2_string[0] != '-') || (str_2_string[0] == '-' && str_1_string[0] != '-'))
    {
        if (str_1_string[0] == '-' && str_2_string[0] != '-')
        {
            str_1_string.replace(0, 1, "0");
            mine = true;
        }
        else
        {
            str_2_string.replace(0, 1, "0");
            mine = false;

        }




        if ((str_1_string.find(".") != -1 && str_2_string.find(".") == -1) || (str_1_string.find(".") == -1 && str_2_string.find(".") != -1))
        {
            if (str_1_string.find(".") == -1)
            {
                str_1_string = str_1_string + ".0";
            }
            else
            {
                str_2_string = str_2_string + ".0";
            }
        }



        if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
        {
            str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
            str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
            str_1_string = str_1_string.substr(0, str_1_string.find("."));
            str_2_string = str_2_string.substr(0, str_2_string.find("."));
            if (str_1_float_1.length() < str_2_float_2.length())
            {
                int size1 = str_1_float_1.length();
                for (int i = 0; i < (str_2_float_2.length() - size1); i++)
                {
                    str_1_float_1 += "0";
                }
                str_1_string = str_1_string + str_1_float_1;
                str_2_string = str_2_string + str_2_float_2;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() > str_2_float_2.length())
            {
                int size2 = str_2_float_2.length();
                for (int i = 0; i < (str_1_float_1.length() - size2); i++)
                {
                    str_2_float_2 += "0";
                }
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() == str_2_float_2.length())
            {
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
        }

        //if input ---> number-number
        if (str_1_string.length() <= str_2_string.length())
        {
            if (str_1_string.length() == str_2_string.length())
            {
                if (str_1_string.length() - 1 == 0)
                {
                    if (str_2_string[0] > str_1_string[0])
                    {
                        swap(str_1_string, str_2_string);

                    }
                }
                else
                {
                    for (int i = 0; i < str_1_string.length() ; i++)
                    {
                        if (str_2_string[i] > str_1_string[i])
                        {
                            swap(str_1_string, str_2_string);

                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                }
            }
            else
            {
                swap(str_1_string, str_2_string);

            }
        }

        for (int i = 0; i < str_1_string.length(); i++)
        {

            if (!(str_1_string[i] >= 46 && str_1_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_1[i] = str_1_string[i];
        }
        for (int i = 0; i < str_2_string.length(); i++)
        {

            if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_2[i] = str_2_string[i];
        }
        max = str_1_string.length() - 1;
        min = str_2_string.length() - 1;

        int l1 = str_1_string.length();
        int l2 = str_2_string.length();
        //convert char to int
        for (i = l1 - 1, j = 0; i >= 0; i--, j++)
        {
            a[j] = str_1[i] - '0';
        }
        for (i = l2 - 1, j = 0; i >= 0; i--, j++)
        {
            b[j] = str_2[i] - '0';
        }
        //add a number not used

        for (int i = 0; i <= min; i++)
        {
            multi[i] = a[i] + b[i];
        }
        //add a number not used

        for (int i = min + 1; i <= max; i++)
        {
            multi[i] = a[i];
        }

        //if >=10 ----> add 1 in next
        for (i = 0; i < l1 + l2; i++)
        {
            temp = multi[i] / 10;
            multi[i] = multi[i] % 10;
            multi[i + 1] = multi[i + 1] + temp;
        }
        if (mine == true)
        {
            s += "-";
        }
        for (i = l1 + l2; i >= 0; i--)
        {
            if (multi[i] > 0)
            {
                f = i;
                break;
            }
        }
        if (float_1 == true)
        {
            if ((max_float > f + 1))
            {
                s += "0.";
                for (int i = 1; i < max_float - f; i++)
                {
                    s += "0";
                }
            }
        }
        for (f; f >= 0; f--)
        {
            if (float_1 == true)
            {
                if (f - max_float + 1 == 0)
                {
                    s += ".";
                }
            }
            s += (multi[f] + 48);
        }




        //if input (.12343412) --> (0.12343412)
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }













        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;



        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        if (answer == "-0")
        {
            answer.erase(0, 1);
        }
        return answer;
    }


    else
    {



        if (str_1_string[0] == '-' && str_2_string[0] == '-')
        {
            str_1_string.replace(0, 1, "0");
            str_2_string.replace(0, 1, "0");
            mine_1 = true;

        }

        if ((str_1_string.find(".") != -1 && str_2_string.find(".") == -1) || (str_1_string.find(".") == -1 && str_2_string.find(".") != -1))
        {
            if (str_1_string.find(".") == -1)
            {
                str_1_string = str_1_string + ".0";
            }
            else
            {
                str_2_string = str_2_string + ".0";
            }
        }

        if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
        {
            str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
            str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
            str_1_string = str_1_string.substr(0, str_1_string.find("."));
            str_2_string = str_2_string.substr(0, str_2_string.find("."));
            if (str_1_float_1.length() < str_2_float_2.length())
            {
                int size1 = str_1_float_1.length();
                for (int i = 0; i < (str_2_float_2.length() - size1); i++)
                {
                    str_1_float_1 += "0";
                }
                str_1_string = str_1_string + str_1_float_1;
                str_2_string = str_2_string + str_2_float_2;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() > str_2_float_2.length())
            {
                int size2 = str_2_float_2.length();
                for (int i = 0; i < (str_1_float_1.length() - size2); i++)
                {
                    str_2_float_2 += "0";
                }
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
            else if (str_1_float_1.length() == str_2_float_2.length())
            {
                str_2_string = str_2_string + str_2_float_2;
                str_1_string = str_1_string + str_1_float_1;
                max_float = str_2_float_2.length();
                float_1 = true;
            }
        }







        //if input ---> number-number
        if (str_1_string.length() <= str_2_string.length())
        {
            if (str_1_string.length() == str_2_string.length())
            {
                if (str_1_string.length() - 1 == 0)
                {
                    if (str_2_string[0] > str_1_string[0])
                    {
                        swap(str_1_string, str_2_string);
                        mine = true;
                    }
                }
                else
                {
                    for (int i = 0; i < str_1_string.length() ; i++)
                    {
                        if (str_2_string[i] > str_1_string[i])
                        {
                            swap(str_1_string, str_2_string);
                            mine = true;
                            break;
                        }
                    }
                }
            }
            else
            {
                swap(str_1_string, str_2_string);
                mine = true;
            }
        }
        for (int i = 0; i < str_1_string.length(); i++)
        {

            if (!(str_1_string[i] >= 46 && str_1_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_1[i] = str_1_string[i];
        }
        for (int i = 0; i < str_2_string.length(); i++)
        {

            if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
            {
                cout << "Syntax Error";
                exit(0);
            }
            str_2[i] = str_2_string[i];
        }
        max = str_1_string.length() - 1;
        min = str_2_string.length() - 1;

        int l1 = str_1_string.length();
        int l2 = str_2_string.length();
        //convert char to int
        for (i = l1 - 1, j = 0; i >= 0; i--, j++)
        {
            a[j] = str_1[i] - '0';
        }
        for (i = l2 - 1, j = 0; i >= 0; i--, j++)
        {
            b[j] = str_2[i] - '0';
        }
        //add a number not used

        for (int i = 0; i <= min; i++)
        {
            multi[i] = a[i] - b[i];
        }
        //add a number not used

        for (int i = min + 1; i <= max; i++)
        {
            multi[i] = a[i];
        }
        //if <0 ----> mine 1 in past
        for (i = 0; i <= max; i++)
        {
            if (multi[i] < 0)
            {
                multi[i] += 10;
                multi[i + 1] -= 1;
            }
        }
        for (i = l1 + l2; i >= 0; i--)
        {
            if (multi[i] > 0)
            {
                f = i;
                break;
            }
        }
        if (mine_1 == false)
        {
            if (mine == true)
            {
                s += "-";
            }
        }
        else if (mine_1 == true && mine == false)
        {
            s += "-";
        }
        //cout
        if (float_1 == true)
        {
            if ((max_float > f + 1))
            {
                s += "0.";
                for (int i = 1; i < max_float - f; i++)
                {
                    s += "0";
                }
            }
        }
        for (f; f >= 0; f--)
        {
            if (float_1 == true)
            {
                if (f - max_float + 1 == 0)
                {
                    s += ".";
                }
            }
            s += (multi[f] + 48);
        }


        //if input (.12343412) --> (0.12343412)
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }













        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;

        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }
        if (answer == "-0")
        {
            answer.erase(0, 1);
        }
        return answer;
    }
}


///////////////////////////////////////////////////////////////////




//convert rad to deg
string fg::convert_rad_to_deg(string num_6)
{
    /*
     for (int i = 0; i < num_6.length(); i++)
     {


         if (num_6[i] == 'e')
         {
             num_6.replace(i, 1, "2.718281828");
         }
         if (num_6[i] == 'p')
         {
             num_6.replace(i, 1, "3.141592654");
         }
         */
    num_6 = to_string(stod(num_6) * 180 / p);
    return num_6;
}





//////////////////////////////////////////////////////////////////




//convert grad to deg
string  fg::convert_grad_to_deg(string num_6)
{
    /*
     for (int i = 0; i < num_6.length(); i++)
     {


         if (num_6[i] == 'e')
         {
             num_6.replace(i, 1, "2.718281828");
         }
         if (num_6[i] == 'p')
         {
             num_6.replace(i, 1, "3.141592654");
         }
         */
    num_6 = to_string(stod(num_6) * 360 / 400);
    return num_6;
}






//////////////////////////////////////////////////////////////////////








//convert any base to 10
string fg::convert_to_10(string num_7)
{
    char base_digits[16] = { '0', '1', '2', '3', '4', '5', '6', '7','8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int converted_number[64];
    long long int number;
    int next_digit;
    int i = 0;
    int p = 1;
    int num = 0;
    int d;
    int base1;
    int base2;
    string str;
    string answer;
    /// ////
    int a_1;
    int b_1;
    string temp;

    a_1 = num_7.find("(", num_7.find("base1"));
    b_1 = num_7.find(")", num_7.find("base1"));
    temp = num_7.substr(a_1 + 1, b_1 - a_1 - 1);

    base1 = stoi(temp);


    a_1 = num_7.find("(", num_7.find("base2"));
    b_1 = num_7.find(")", num_7.find("base2"));
    temp = num_7.substr(a_1 + 1, b_1 - a_1 - 1);

    base2 = stoi(temp);


    a_1 = num_7.find("(", num_7.find("Number"));
    b_1 = num_7.find(")", num_7.find("Number"));
    temp = num_7.substr(a_1 + 1, b_1 - a_1 - 1);

    str = temp;



    ////////
    for (i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            d = (int)str[i] - '0';
        }
        else
        {
            d = (int)str[i] - 'A' + 10;
        }
        num += d * p;
        p = p * base1;
    }
    ////////////
    i = 0;
    while (num != 0)
    {
        converted_number[i] = num % base2;
        num = num / base2;
        i++;
    }
    i = i - 1;
    for (; i >= 0; i--)
    {
       answer+=base_digits[converted_number[i]];
    }
    return answer;
}





//////////////////////////////////////////////////////////////////////






//covert_Angle       deg       grad      rad
string fg::covert_Angle(string num_6)
{
    int a_1;
    int b_1;
    string temp;
    string Angle1;
    string Angle2;
    string number;


    a_1 = num_6.find("(", num_6.find("Angle1"));
    b_1 = num_6.find(")", num_6.find("Angle1"));
    temp = num_6.substr(a_1 + 1, b_1 - a_1 - 1);

    Angle1 = temp;


    a_1 = num_6.find("(", num_6.find("Angle2"));
    b_1 = num_6.find(")", num_6.find("Angle2"));
    temp = num_6.substr(a_1 + 1, b_1 - a_1 - 1);

    Angle2 = temp;



    a_1 = num_6.find("(", num_6.find("number"));
    b_1 = num_6.find(")", num_6.find("number"));
    temp = num_6.substr(a_1 + 1, b_1 - a_1 - 1);

    number = temp;



    if (Angle1 == "deg")
    {
        if (Angle2 == "deg")
        {
            return number;
        }
        else if (Angle2 == "rad")
        {
            return to_string(stod(number) * p / 180);
        }
        else if (Angle2 == "grad")
        {
            return to_string(stod(number) * 400 / 360);
        }
    }


    else if (Angle1 == "rad")
    {
        if (Angle2 == "")
        {
            return number;
        }
        else if (Angle2 == "deg")
        {
            return to_string(stod(number) * 180 / p);
        }
        else if (Angle2 == "grad")
        {
            return to_string(stod(number) * 400 / 2 * p);
        }
    }


    else if (Angle1 == "grad")
    {
        if (Angle2 == "grad")
        {
            return number;
        }
        else if (Angle2 == "rad")
        {
            return to_string(stod(number) * 2 * p / 400);
        }
        else if (Angle2 == "deg")
        {
            return to_string(stod(number) * 360 / 400);
        }
    }
}





/////////////////////////////////////////////////////////////////////////////



string fg::calculator_1(string s)
{
    string answer;



    if (s.find("&") != -1)
    {
        int a_1 = 0;
        int b_1 = 0;
        string type;
        a_1 = s.find("(", s.find("&"));
        b_1 = s.find(")", s.find("&") + 1);
        type = s.substr(a_1 + 1, b_1 - a_1 - 1);
        if (type == "deg")
        {
            deg = true;
            s.erase(0, 6);
        }
        else if (type == "rad")
        {
            rad = true;
            s.erase(0, 6);
        }
        else if (type == "grad")
        {
            grad = true;
            s.erase(0, 7);
        }
    }


    if (s.find("convert") != -1)
    {
        convert_to_10(s);
        exit(0);
    }
    //Matrix
    else if (s.find("Matrix") != -1)
    {
        Matrix(s);
        exit(0);
    }
    else if (s.find("grade_2_equation") != -1)
    {
        grade_2_equation(s);
        exit(0);
    }
    else if (s.find("device_two_equation") != -1)
    {
        device_two_equation(s);
    }
    else
    {
        s = syntax_error(s);





        //if input (.12343412) --> (0.12343412)
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }
        if (s[0] != '-')
        {
            if (s[0] == '.')
            {
                s = '0' + s;
            }
        }
        else
        {
            if (s[1] == '.')
            {
                s.replace(0, 1, "-0");
            }
        }


















        //clear zero next the demical
        if (s.find(".") != -1 && s[s.length() - 1] == '0')
        {
            for (int i = s.length() - 1; i >= 0; i--)
            {
                if (s[i] != '0')
                {
                    s = s.substr(0, i + 1);
                    break;
                }
                else if (i == s.find(".") + 1)
                {
                    s = s.substr(0, i - 1);
                    break;
                }
            }
        }
        answer = s;

        //cout ---> 5 demical
        if (s.find(".") != -1)
        {
            if (s.length() - 1 - s.find(".") < 5)
            {
                ;
            }
            else
            {
                answer = s.substr(0, s.find(".") + 1);
                answer += s[s.find(".") + 1];
                answer += s[s.find(".") + 2];
                answer += s[s.find(".") + 3];
                answer += s[s.find(".") + 4];
                answer += s[s.find(".") + 5];
                answer;
            }
        }
        else
            answer;




        //clear zero next the demical
        if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
        {
            for (int i = answer.length() - 1; i >= 0; i--)
            {
                if (answer[i] != '0')
                {
                    answer = answer.substr(0, i + 1);
                    break;
                }
                else if (i == answer.find(".") + 1)
                {
                    answer = answer.substr(0, i - 1);
                    break;
                }
            }
        }

    }
    if (answer == "-0")
    {
        answer.erase(0, 1);
    }
    return answer;
    exit(0);
}






///////////////////////////////////////////////////////////////////////////////





    //  multi  --->  *
string fg::multi(string str_1_string, string str_2_string)
{



    int a[3000], b[3000];

    int multi[6000] = { 0 };
    int i = 0, j = 0, temp;
    int f = 0;
    int N = 0;
    char str_1[3001], str_2[3001];
    int max_dout;
    int size;
    int max_float;
    bool mine = false;
    bool float_1 = false;
    bool float_2 = false;
    int max_float_2;


    string str_1_float_1;
    string str_2_float_2;
    string answer;
    string answer_1;
    string s;



    if (str_1_string == "")
    {
        return "0";
    }
    if (str_2_string == "")
    {
        return "0";
    }



    if (str_1_string[0] == '.')
    {
        str_1_string = '0' + str_1_string;
    }
    if (str_2_string[0] == '.')
    {
        str_2_string = '0' + str_2_string;
    }

    //if input (.12343412) --> (0.12343412)
    if (str_1_string[0] != '-')
    {
        if (str_1_string[0] == '.')
        {
            str_1_string = '0' + str_1_string;
        }
    }
    else
    {
        if (str_1_string[1] == '.')
        {
            str_1_string.replace(0, 1, "-0");
        }
    }
    if (str_2_string[0] != '-')
    {
        if (str_2_string[0] == '.')
        {
            str_2_string = '0' + str_2_string;
        }
    }
    else
    {
        if (str_2_string[1] == '.')
        {
            str_2_string.replace(0, 1, "-0");
        }
    }




    if (str_1_string[0] == '-' && str_2_string[0] != '-')
    {
        str_1_string.erase(0, 1);
        mine = true;
    }
    if (str_2_string[0] == '-' && str_1_string[0] != '-')
    {
        str_2_string.erase(0, 1);
        mine = true;
    }
    if (str_1_string[0] == '-' && str_2_string[0] == '-')
    {
        str_1_string.erase(0, 1);
        str_2_string.erase(0, 1);
    }












    if ((str_1_string.find(".") != -1 && str_2_string.find(".") == -1) || (str_1_string.find(".") == -1 && str_2_string.find(".") != -1))
    {
        if (str_1_string.find(".") == -1)
        {
            str_1_string = str_1_string + ".0";
        }
        else
        {
            str_2_string = str_2_string + ".0";
        }
    }



    if (str_1_string.find(".") != -1 && str_2_string.find(".") != -1)
    {
        str_1_float_1 = str_1_string.substr(str_1_string.find(".") + 1, str_1_string.length() - str_1_string.find("."));
        str_2_float_2 = str_2_string.substr(str_2_string.find(".") + 1, str_2_string.length() - str_2_string.find("."));
        str_1_string = str_1_string.substr(0, str_1_string.find("."));
        str_2_string = str_2_string.substr(0, str_2_string.find("."));
        if (str_1_float_1.length() < str_2_float_2.length())
        {
            int size1 = str_1_float_1.length();
            for (int i = 0; i < (str_2_float_2.length() - size1); i++)
            {
                str_1_float_1 += "0";
            }
            str_1_string = str_1_string + str_1_float_1;
            str_2_string = str_2_string + str_2_float_2;
            max_float = str_2_float_2.length();
            float_1 = true;
        }
        else if (str_1_float_1.length() > str_2_float_2.length())
        {
            int size2 = str_2_float_2.length();
            for (int i = 0; i < (str_1_float_1.length() - size2); i++)
            {
                str_2_float_2 += "0";
            }
            str_2_string = str_2_string + str_2_float_2;
            str_1_string = str_1_string + str_1_float_1;
            max_float = str_2_float_2.length();
            float_1 = true;
        }
        else if (str_1_float_1.length() == str_2_float_2.length())
        {
            str_2_string = str_2_string + str_2_float_2;
            str_1_string = str_1_string + str_1_float_1;
            max_float = str_2_float_2.length();
            float_1 = true;

        }
    }




















    if (str_1_string.find('.') != -1 && str_1_string[str_1_string.length() - 1] == '0')
    {
        for (int i = str_1_string.length() - 1; i >= 0; i--)
        {
            if (str_1_string[i] != '0')
            {
                str_1_string = str_1_string.substr(0, i + 1);
                break;
            }
        }
    }
    if (str_2_string.find('.') != -1 && str_2_string[str_2_string.length() - 1] == '0')
    {
        for (int i = str_2_string.length() - 1; i >= 0; i--)
        {
            if (str_2_string[i] != '0')
            {
                str_2_string = str_2_string.substr(0, i + 1);
                break;
            }
        }
    }

    /*
    if (dout_1 != -1)
    {
        str_1_string += "0";
    }
    if (dout_2 != -1)
    {
        str_2_string += "0";
    }
    */



    for (int i = 0; i < str_1_string.length(); i++)
    {

        if (!(str_1_string[i] >= 46 && str_1_string[i] <= 57))
        {
            cout << "Syntax Error";
            exit(0);
        }

        str_1[i] = str_1_string[i];
    }
    for (int i = 0; i < str_2_string.length(); i++)
    {

        if (!(str_2_string[i] >= 46 && str_2_string[i] <= 57))
        {
            cout << "Syntax Error";
            exit(0);
        }

        str_2[i] = str_2_string[i];
    }
    if (str_1[0] == '-' || str_2[0] == '-')
    {
        if (str_1[0] == str_2[0])
        {
            str_1[0] = '0';
            str_1[0] = '0';
        }
        else
        {
            if (str_1[0] == '-')
            {
                str_1[0] = '0';
            }
            else
            {
                str_2[0] = '0';
            }
            N = 1;
        }
    }
    int l1 = str_1_string.length();
    int l2 = str_2_string.length();


    for (i = l1 - 1, j = 0; i >= 0; i--, j++)
    {
        if (str_1[i] != '.')
            a[j] = str_1[i] - '0';
        else
        {
            j--;
            l1--;
        }
    }
    for (i = l2 - 1, j = 0; i >= 0; i--, j++)
    {
        if (str_2[i] != '.')
            b[j] = str_2[i] - '0';
        else
        {
            j--;
            l2--;
        }
    }
    for (i = 0; i < l2; i++)
    {
        for (j = 0; j < l1; j++)
        {

            multi[i + j] += b[i] * a[j];
        }
    }
    for (i = 0; i < l1 + l2; i++)
    {
        temp = multi[i] / 10;

        multi[i] = multi[i] % 10;

        multi[i + 1] = multi[i + 1] + temp;

    }
    for (i = l1 + l2; i >= 0; i--)
    {
        if (multi[i] > 0)
        {
            f = i;
            break;
        }
    }
    int g = f;
    if (mine == true)
    {
        s += "-";
    }
    for (f; f >= 0; f--)
    {
        if (float_1 == true)
        {
            if (f <= 2 * max_float - 1 && g == f)
            {
                s += "0.";
                for (int i = 1; i < 2 * max_float - f; i++)
                {
                    s += "0";
                }

            }
            if (f == 2 * max_float - 1 && g != f)
            {
                s += ".";
            }
        }
        s += (multi[f] + 48);
    }


    //if input (.12343412) --> (0.12343412)
    if (s[0] != '-')
    {
        if (s[0] == '.')
        {
            s = '0' + s;
        }
    }
    else
    {
        if (s[1] == '.')
        {
            s.replace(0, 1, "-0");
        }
    }
    if (s[0] != '-')
    {
        if (s[0] == '.')
        {
            s = '0' + s;
        }
    }
    else
    {
        if (s[1] == '.')
        {
            s.replace(0, 1, "-0");
        }
    }










    //clear zero next the demical
    if (s.find(".") != -1 && s[s.length() - 1] == '0')
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] != '0')
            {
                s = s.substr(0, i + 1);
                break;
            }
            else if (i == s.find(".") + 1)
            {
                s = s.substr(0, i - 1);
                break;
            }
        }
    }
    answer = s;

    //clear zero next the demical
    if (answer.find(".") != -1 && answer[answer.length() - 1] == '0')
    {
        for (int i = answer.length() - 1; i >= 0; i--)
        {
            if (answer[i] != '0')
            {
                answer = answer.substr(0, i + 1);
                break;
            }
            else if (i == answer.find(".") + 1)
            {
                answer = answer.substr(0, i - 1);
                break;
            }
        }
    }
    if (answer == "-0")
    {
        answer.erase(0, 1);
    }
    return answer;
}


////////////////////////////////////////////////////////////////


string fg::convert_rad_to_grad(string num_6)
{
   return num_6=to_string(stod(num_6) * 400 / (2 *3.14159265358979323846));
}

/////////////////////////////////////////////////////
