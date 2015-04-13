#include <iostream>

using namespace std;

int main()
{
 int spendaYear, rateofInterest, ageNow, agewhenDie, savings, interest, count=0, count1=0;

 cout<<"How Old Are You Now?"<<endl;
 cin>>ageNow;
 cout<<"At What Age Do You Think You Are Going to Die?"<<endl;
 cin>>agewhenDie;
 cout<<"How much money do you spend a year?"<<endl;
 cin>>spendaYear;
 cout<<"How much money do you have saved?"<<endl;
 cin>>savings;
 cout<<"What is the interest rate of your savings"<<endl;
 cin>>rateofInterest;

 rateofInterest/100;

 count=ageNow;
 interest=savings*rateofInterest;
int current=savings+interest;

while(ageNow<agewhenDie && current>0){

    current+=interest;
    current-=spendaYear;
    count++;
}




 //if(count>=agewhenDie){
    // cout<<"You will run out of money after(or during) age : "<<agewhenDie<<", therefore you may retire"<<endl;
 //}
// else{
     cout<<"You will run out of money at age: "<<count<<endl;//", therefore you may retire at "<< count1<<"."<<endl;
 //}
 return 0;












}