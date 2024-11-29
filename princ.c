//Write a program to calculate the total interest based on the following condition
//PRINCIPLE AMOUNT (Rs.)    	                         	Rate of interest (Rs.)
//>=10000                                                                  		20%
//>=8000 && <=9999                                                  		18%
//< 8000                                                                     		16%
//Example Input: Enter loan Amount: 5000
 //   Enter no of years: 3
//Example Output:     	Loan: 5000.00
//Years: 3.00
//Rate:16.00
//Interest:2640.00
#include<stdio.h>
int main()
{
    float principle,rate,years,interest;
    printf("Enter loan amount:");
    scanf("%f", &principle);
    printf("Enter years:");
    scanf("%f", &years);
    if(principle >= 10000)
    {
        rate = 20.0;
    }
    else if(principle >= 8000 && principle <= 9999)
    {
        rate = 18.0;
    }
    else if(principle < 8000)
    {
        rate = 16.0;
    }
    interest = (principle * rate * years) / 100;
    printf("total interest is %f principle, %f rate, %f years, %f interest", principle, rate, years, interest);
    return 0;
}

