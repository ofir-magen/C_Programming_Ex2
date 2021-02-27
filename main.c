#include<stdio.h>
#include"myBank.h"


int main(){
char c;

while(c !='E'){
printf("\n Please choose a transaction type: \n O-Open Account \n B-Balance Inquiry \n D-Deposit \n W-Withdrawal \n C-Close Account \n I-Interest \n P-Print \n E-Exit");

printf("\nTransaction Type? ");
scanf("%s",&c);
switch(c){
	case 'O':
	open_acount();
	break;
	case 'B':
	check_balance();
	break;
	case 'D':
	deposit();
	break;
	case 'W':
	withdrawal();
	break;
	case 'C':
	closed();
	break;
	case 'I':
	add_interest();
	break;
	case 'p':
	toString();
	break;
	case 'E':
	CloseAll();
	break;
	default:
	printf("Transaction type error , please Enter Again");
	break;
		
}
}

printf("Thank you for choosing Yuval&Ofir bank ltd Hope to see you soon! \n");
return 0;

}

