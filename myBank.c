#include<stdio.h>
#include"myBank.h"

  double disp[50][2];

void open_acount(){

int i=0;
while(disp[i][0]==1){
i++;
}

if(i<=50){
double amount;
printf("Please enter amount for deposit: ");
int flag;
flag=scanf("%lf",&amount); 
if(amount<0){
printf("Invalid amount");	
return;
}
if(flag==1){
disp[i][0]=1;
disp[i][1]=amount;
printf("Account number: %d",i+901);
}
if(flag==0){
printf("Failed to read the amount");
}
}				
else{
printf("\nthere is no space in the bank");
}

}

void check_balance(){
int account;
int flag;
printf("\nPlease enter account number:");
flag = scanf("%d",&account);
if(flag==0){
printf("\nFailed to read the account number");
}
if(950>=account&&account>=901){
if(disp[account-901][0] == 1 ){
printf("The balance of account %d is: %lf",account ,disp[account-901][1]);
}

else{//closed account
printf("there is no such account");
}
}
else{//not in range account
printf("Account number is not valid");
}
}


void deposit(){
int flag;
int account;
double Amount;
printf("\nPlease enter account number:");
flag = scanf("%d",&account);
if(flag==0){
printf("\nFailed to read the account number");	
}
if(950>=account&&account>=901){

if(disp[account-901][0] == 1 ){
printf("Please enter the amount to deposit:");
flag = scanf("%lf",&Amount);
if(flag==0){
printf("Failed to read the amount");		
}
else{
if(Amount<0){
printf("Cannot deposit a negative amount");	
}
else{
disp[account-901][1]+=Amount;
printf("The new balance is: %0.2lf",disp[account-901][1]);//"The balance of account (מספר) is: (מספר)"
}
}
}

if((disp[account-901][0] == 0 )&&(flag==1)){
printf("This account is closed");
}
}
if((950<account||account<901)&&(flag==1)){
printf("Invalid account number");
}
}

void withdrawal(){
int account;
double Amount;
int flag; 
printf("\nAccount number? ");
flag = scanf("%d",&account);
if(flag == 1){
	
if(950>=account&&account>=901){
if(disp[account-901][0] == 1 ){
printf("Please enter the amount to withdraw: ");
scanf("%lf",&Amount);
if(Amount < 0){
printf("negative amount cant withdraw");
}
else{
if(disp[account-901][1]<Amount){
printf("Cannot withdraw more than the balance");
}
else{
disp[account-901][1]-=Amount;
printf("The new balance is: %0.2lf",disp[account-901][1]);
}
}
}
else{
printf("This account is closed");
}
}
else{
printf("Account number is not valid");
}
}
else{
printf("Failed to read the account number");
}
}

void closed(){
int account;
int flag;
printf("\nAccount number? ");
flag = scanf("%d",&account);
if(flag == 1){
if(account>= 901 && account<= 950){
if(disp[account-901][0] == 1 ){
disp[account-901][0]=0;
disp[account-901][1]=0;
printf("Closed account number %d",account);
}
else{
printf("This account is already closed");
}
}
else{
printf("Account number is not valid");
}
}
else{
printf("Failed to read the account number");
}
}


void add_interest(){
double interest;
double a;
int i = 0;
int flag;
printf("\nPlease enter interest rate: ");
flag = scanf("%lf",&interest);
if(flag == 1){
if(interest >= 0){
while(i<=50){
a=disp[i][1]*(interest/100);
disp[i][1]+=a;
i++;
}
}
else{
printf("Invalid interest rate");
}
}
else{
printf("Failed to read the interest rate");
}
}

 void toString(){
int i=0;
while(i<=50){
if(disp[i][0]==1){
printf("The balance of account %d is: %0.2lf \n",(i+901),disp[i][1]);

}
i++;
}
}

void CloseAll(){
int i = 0;
while(i<=50){
disp[i][0] = 0;
disp[i][1] = 0;
i++;
}

}













