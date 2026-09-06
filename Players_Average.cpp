#include <bits/stdc++.h>
using namespace std;

int main() {
	string name[3] = {"Sachin" , "Saurav" , "Rahul"};
	int run[3] = {8430 , 4200 , 3350};
	int innings[3] = {230 , 130 , 105};
	int notout[3] = {18 , 9 , 11};
	cout<<setw(8)<<"Name "<<setw(12)<<"Runs "<<setw(12)<<"Innings "<<setw(12)<<"NotOut "<<setw(12)<<"Average "<<endl;
	for(int i=0; i<3; i++)
	{
	    float avg = (float)run[i]/(innings[i] - notout[i]);
	    cout<<setw(8)<<name[i]<<setw(11)<<run[i]<<setw(10)<<innings[i]<<setw(12)<<notout[i]<<setw(14)<<avg<<endl;
	}
	return 0;
}
// #include <iostream>
// using namespace std;
// class Team{
//     public:
//     int runs;
//     int innings;
//     int notOut;
//     float avg;
//     string name;
//     Team(string n,int run, int inn, int nout){
//         name = n;
//         runs = run;
//         innings = inn;
//         notOut = nout;
//     }
    
//     float average(){
//         int out = innings-notOut;
//         avg = (float)runs/out;
//         return (float)avg;
//     }

// };
// void display(Team t){
//     cout<<t.name<<"\t\t"<<t.runs<<"\t\t"<<t.innings<<"\t\t"<<t.notOut<<"\t\t"<<t.average()<<endl;
// }
// int main(){
//     Team sachin("Sachin", 8430, 230, 18);
//     Team saurav("Saurav", 4200, 130, 9);
//     Team rahul("Rahul", 3350, 105, 11);
//     cout<<"Name"<<"\t\t"<<"Runs"<<"\t\t"<<"Innings"<<"\t\t"<<"Not Out"<<"\t\t"<<"Average"<<endl;
//     display(sachin);
//     display(saurav);
//     display(rahul);
//     return 0;
// }