#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
struct Car1
{
char model1[16];
int price;
float average;
}car1;
struct Car2
{
char model2[16];
int price;
float average;
}car2;
struct Car3
{
char model3[16];
int price;
float average;
}car3;
struct Car4
{
char model4[16];
int price;
float average;
}car4;
struct Car5
{
char model5[16];
int price;
float average;
}car5;
void provide_details()
{
int dln[17];
char d_name[20];
Provide_Details:
cout<<"Enter your Drivers License No.";
cin>>dln[17];
int c=sizeof(dln)/sizeof(dln[0]);
cout<<"Enter driver's name";
cin>>d_name;
if(c!=16)
{
cout<<"Please enter a valid dln";
goto Provide_Details;
}
}
void main()
{
void main_menu();
void confirmation();
void login();
void payment_page();
char car1_name[16]="Scoda_Rapid";
strncpy(car1.model1,car1_name,15);
car1.price=17000;
car1.average=16.24;
char car2_name[16]="Tata_Punch";
strncpy(car2.model2,car2_name,15);
car2.price=16000;
car2.average=18.82;
char car3_name[16]="Maruti_Celerio";
strncpy(car3.model3,car3_name,15);
car3.price=15000;
car3.average=26.0;
char car4_name[16]="Hyundai_Creta";
strncpy(car4.model4,car4_name,15);
car4.price=16000;
car4.average=16.8;
char car5_name[16]="Maruti_Vitara";
strncpy(car5.model5,car5_name,15);
car5.price=15000;
car5.average=18.76;
main_menu();
confirmation();
login();
payment_page();
getch();
}
void main_menu()
{
int choice;
Main_Menu:
system("cls");
cout<<"Welcome to Car Rental Service"<<endl;
cout<<"Press 1 to book "<<car1.model1<<endl;
cout<<"Press 2 to book "<<car2.model2<<endl;
cout<<"Press 3 to book "<<car3.model3<<endl;
cout<<"Press 4 to book "<<car4.model4<<endl;
cout<<"Press 5 to book "<<car5.model5<<endl;
cin>>choice;
switch(choice)
{
case 1:
cout<<"Are you sure you want to book"<<car1.model1;
break;
case 2:
cout<<"Are you sure you want to book"<<car2.model2;
break;
case 3:
cout<<"Are you sure you want to book"<<car3.model3;
break;
case 4:
cout<<"Are you sure you want to book"<<car4.model4;
break;
case 5:
cout<<"Are you sure you want to book"<<car5.model5;
break;
default:
cout<<"Please enter a valid option";
goto Main_Menu;
}
}
void confirmation()
{
int a;
cout<<"\nPress 1 for Yes and 0 for No";
cin>>a;
if(a==0)
{
main_menu();
}
}
void login()
{
char user_id[10];
char User_ID[10]={"monachaud"};
long Password=123456;
long password;
Login:
system("cls");
cout<<"Enter your user id ";
cin.read(user_id,10);
cout<<"Enter password ";
cin>>password;
if(Password==password)
{
provide_details();
}
else
{
cout<<"Please enter a valid response";
}
}
void payment_page()
{
int amount,d;
Payment_Page:
cout<<"Please enter the amount you want to pay for booking";
cin>>amount;
if(amount>=15000 && amount<=17000)
{
cout<<"Payment Successful!";
cout<<"You have succesfully booked the car and it will be delivered to the desired address within 5 hrs";
}
else
{
cout<<"Payment unsuccessful.";
main_menu();
}
}