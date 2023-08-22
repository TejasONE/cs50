#include <cs50.h>
#include <math.h>
#include <stdio.h>

int every_other_digit(long cc);
int multiplyAndSum(int lastone);
int number_of_digits(long cc);
bool isValidAmex(long cc, int numDigit);
bool isValidMasterCard(long cc, int numDigits);
bool isValidVisa(long cc, int numDigits);

int main(void)
{
    long cc = get_long("Credit Card ");
    int sum_every_other_digit = every_other_digit(cc);
    int numDigits = number_of_digits(cc);
    bool amex = isValidAmex(cc, numDigits);
    bool master = isValidMasterCard(cc, numDigits);
    bool visa = isValidVisa(cc, numDigits);
    if (sum_every_other_digit % 10 != 0)
    {
        printf("INVALID\n");
        return 0;
    }
    else if (amex == true)
    {
        printf("AMEX\n");
    }
    else if (master == true)
    {
        printf("MASTERCARD\n");
    }
    else if (visa == true)
    {
        printf("VISA\n");
    }
    else {
        printf("INVALID\n");
        return 0;
    }
}

bool isValidAmex(long cc, int numDigits) {
    int ftwo = cc / pow(10, 13);
    if ((numDigits == 15) && (ftwo == 34 || ftwo == 37))
    {
        return true;
    }
    else {
        return false;
    }
}

bool isValidVisa(long cc, int numDigits)
{
    if (numDigits == 13)
    {
        int first_digit = cc / pow(10, 12);
        if (first_digit == 4)
        {
            return true;
        }
    }
    else if (numDigits == 16)
    {
        int first_digit = cc / pow(10, 15);
        if (first_digit == 4)
        {
            return true;
        }
    }
    return false;
}

bool isValidMasterCard(long cc, int numDigits)
{
    int ftwo = cc / pow(10, 14);
    if ((numDigits == 16) && (ftwo > 50 && ftwo < 56))
    {
        return true;
    }
    else {
        return false;
    }
}

int number_of_digits(long cc)
{
    int count = 0;
    while (cc > 0)
    {
        count = count + 1;
        cc = cc / 10;
    }
    return count;
}

int every_other_digit(long cc)
{
    int sum = 0;
    bool isAlternateDigit = false;
    while (cc > 0)
    {
        if (isAlternateDigit == true)
        {
            int lastone = cc % 10;
            int product = multiplyAndSum(lastone);
            sum = sum + product;
        }
        else
        {
            int lastone = cc % 10;
            sum = sum + lastone;
        }
        isAlternateDigit = !isAlternateDigit;
        cc = cc / 10;
    }
    return sum;
}

int multiplyAndSum(int lastone)
{
    int multiply = lastone * 2;
    int sum = 0;
    while (multiply > 0)
    {
        int last_digit_multiply = multiply % 10;
        sum = sum + last_digit_multiply;
        multiply = multiply / 10;
    }
    return sum;
}