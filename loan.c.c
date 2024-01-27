#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Payment
{
float interest;
float principle;
float balance;
};

int main(int argc, char* argv[])
{
float principal, interstRate, monthlyInterestRate;
float emi, startingBalance, interest, principalPaid, endingBalance;
int numOfMonths, month;
float interestArr[30], principalPaidArr[30], endingBalanceArr[30];
struct Payment payments[100];


principal = atof(argv[1]);

interstRate = atof(argv[2]);

numOfMonths = atof(argv[3]);

monthlyInterestRate = (float)(interstRate / (12*100.0));

emi = principal * (monthlyInterestRate / (1 - pow( (1 + monthlyInterestRate) , (-numOfMonths) )));

startingBalance = principal;

printf("\n\n Monthly Payment: $%.2f \n", emi);


for(month = 1; month <= numOfMonths; month++)
{

payments[month-1].interest = (startingBalance * monthlyInterestRate);

payments[month-1].principle = emi - payments[month-1].interest;

payments[month-1].balance = (startingBalance - payments[month-1].principle);

startingBalance = payments[month-1].balance;
}
printf("\n %-8s %10s %14s %10s %10s \n", "#", " Payment ", " Principal ", " Interest ", " Balance ");
