#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
struct stdData
{string stdName[5];
  int stdID[5];
  int stdAge[5];
  char stdGend[5];
  double stdSc[5];
  char stdGr[5];
};
int main()
{ stdData Access;
  int mCount=0,fCount=0,TotAge=0;
  double avSc=0,TotSc=0,avAge=0;
  for(int i=0;i<=4;i++)

 {
  cout<<"Input student "<<i+1<<"'s name and press enter"<<endl;
cin>>Access.stdName[i];
cout<<"Input student "<<i+1<<"'s ID and press enter"<<endl;
cin>>Access.stdID[i];
cout<<"Input student "<<i+1<<"'s age and press enter"<<endl;
cin>>Access.stdAge[i];
TotAge=TotAge+Access.stdAge[i];
cout<<"Input student "<<i+1<<"'s gender, \"f\" for female or \"m\" for male and press enter"<<endl;
cin>>Access.stdGend[i];
if (Access.stdGend[i]=='f')
    fCount++;
else if (Access.stdGend[i]=='m')
    mCount++;
cout<<"Input student "<<i+1<<"'s score and press enter"<<endl;
cin>>Access.stdSc[i];
TotSc=TotSc+Access.stdSc[i];
if (Access.stdSc[i] >= 90)
Access.stdGr[i]= 'A';
else if (Access.stdSc[i] >= 80)
Access.stdGr[i]= 'B';
else if (Access.stdSc[i] >= 70)
Access.stdGr[i] = 'C';
else if (Access.stdSc[i] >= 60)
Access.stdGr[i]= 'D';
else
Access.stdGr[i]= 'F';
 }
 avAge=TotAge/5;
 avSc=TotSc/5;
//output into file
ofstream std;
std.open("new.txt", ios::app);
std<<"**************************************************************"<<endl;
std<<"ID number"<<"\tName"<<"\tAge"<<"\tGender"<<"\tScore"<<"\tGrade"<<endl;
for(int i=0;i<=4;i++)
   {
    std<<i+1<<"."<<Access.stdID[i]<<"\t\t"<<Access.stdName[i]<<"\t"<<Access.stdAge[i]<<"\t"<<Access.stdGend[i];
    std<<"\t"<<Access.stdSc[i]<<"\t"<<Access.stdGr[i]<<endl;
   }
    std<<endl;
    std<<"The average age is "<<round(avAge)<<endl;
    std<<"The average score is "<<avSc<<endl;
    std<<"The total number of males is "<<mCount<<endl;
    std<<"The total number of females is "<<fCount<<endl;
    std.close();
return 0;
}
