#include<iostream>
using namespace std;
main(){
cout<<"Enter the name of the cricket team: ";
string team;
cin >> team;
cout<<"Enter the number of wins: ";
int wins;
cin>>wins;
int twins;
twins=wins*3;
cout<<"Enter the number of draws: ";
int draws;
cin>>draws;
int tdraws;
tdraws=draws*1;
cout<<"Enter the number of losses: ";
int loses;
cin>>loses;
int tloses;
tloses=loses*0;
int obtainedpoints;
obtainedpoints=twins+tdraws+tloses;
cout<<team<< " has obtained "<<obtainedpoints<<" points in the Asia Cup tournament.";
}
