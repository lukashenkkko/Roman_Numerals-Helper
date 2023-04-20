#include <iostream>
#include <string>

class RomanHelper {
public:
    std::string to_roman(unsigned int n) {

        std::string answer = "";
        while (n >= 1000)
        {
            answer += 'M';
            n -= 1000;
        }
        while (n >= 900)
        {
            answer += "CM";
            n -= 900;
        }
        while (n >= 500)
        {
            answer += 'D';
            n -= 500;
        }
        while (n >= 400)
        {
            answer += "CD";
            n -= 400;
        }
        while (n >= 100)
        {
            answer += 'C';
            n -= 100;
        }
        while (n >= 90)
        {
            answer += "XC";
            n -= 90;
        }
        while (n >= 50)
        {
            answer += 'L';
            n -= 50;
        }
        while (n >= 40)
        {
            answer += "XL";
            n -= 40;
        }
        while (n >= 10)
        {
            answer += 'X';
            n -= 10;
        }
        while (n >= 9)
        {
            answer += "IX";
            n -= 9;
        }
        while (n >= 5)
        {
            answer += 'V';
            n -= 5;
        }
        while (n >= 4)
        {
            answer += "IV";
            n -= 4;
        }
        while (n >= 1)
        {
            answer += "I";
            n -= 1;
        }

        return answer;
    }

    int from_roman(std::string rn) {
        int answer1 = 0;

        for (int i = rn.size()-1; i >= 0; i--)
        {
            switch (rn[i])
            {
                //I
            case'I': answer1 += 1;
                break;
                //V
            case'V':
                if (i == 0) {
                    answer1 += 5;
                    break;
                }
                if (rn[i - 1] == 'I')
                {
                    answer1 += 4;
                    i--;
                }
                else answer1 += 5;
                break;
                //X
            case'X':
                if (i == 0) {
                    answer1 += 10;
                    break;
                }
                if (rn[i - 1] == 'I')
                {
                    answer1 += 9;
                    i--;
                }
                else answer1 += 10;
                break;
                //L
            case'L':
                if (i == 0) {
                    answer1 += 50;
                    break;
                }
                if (rn[i - 1] == 'X')
                {
                    answer1 += 40;
                    i--;
                }
                else answer1 += 50;
                break;
                //C
            case'C':
                if (i == 0) {
                    answer1 += 100;
                    break;
                }
                if (rn[i - 1] == 'X')
                {
                    answer1 += 90;
                    i--;
                }
                else answer1 += 100;
                break;

                //D
            case'D':
                if (i == 0) {
                    answer1 += 500;
                    break;
                }
                if (rn[i - 1] == 'C')
                {
                    answer1 += 400;
                    i--;
                }
                else answer1 += 500;
                break;
                //M
            case'M':
                if (i == 0) {
                    answer1 += 1000;
                    break;
                }
                if (rn[i - 1] == 'C')
                {
                    answer1 += 900;
                    i--;
                }
                else answer1 += 1000;
                break;
            }
        }
        return answer1;
    }//RomanNumerals;
};
    
int main()
{
    RomanHelper rh;
    //std::cout<< rh.to_roman(156);
   // std::cout << "\n";
    std::cout << rh.from_roman("CLVI");


} 
