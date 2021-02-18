#include <iostream>
#include <string.h>
using namespace std;

double meeting(string str)
{
  double hour = stoi(str.substr(0,2));
  double minutes = stoi(str.substr(3,2));
  if(str[5] == 'A')
  {
      if(hour == 12)
      {
          hour = 0 + (minutes)/100;
      }
      else if(hour >=1 && hour<12)
      {
          hour = hour*100 + (minutes)/100;
      }
   }
  else if(str[5] == 'P')
  {
      if(hour == 12)
      {
          hour = (hour)*100 + (minutes)/100;
      }
      else if(hour >=1 && hour<12)
      {
          hour = (hour + 12)*100 + (minutes)/100;
      }
  }
  return hour;
}

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
     // cout << "testcase started " << endl;
      int n;
      string s="";
      //cin.ignore();
     // cout << "enter party time : ";
      char sc;
      for(int i=0; i<7; i++)
      {
          cin>>sc;
          s.push_back(sc);
      }
      double s_hour = meeting(s);
     // cout << s_hour << " is the party time " << endl;
      //cout << "number of friends: ";
      cin>>n;                    //number of friends
      cin.ignore();
      while(n--)                //for friends ka time
      {
          string l="",r="";
          char l1,r1;
          for(int i=0; i<7; i++)
          {
              cin>>l1;
              l.push_back(l1);
          }
          for(int j=0; j<7; j++)
          {
              cin>>r1;
              r.push_back(r1);
          }
          double l_hour = meeting(l);
          double r_hour = meeting(r);
         /* cout << l_hour << " is the friend's leaving time " << endl;
          cout << r_hour << " is the friend's return time " << endl;
          cout << s_hour << "is the party time" << endl; */
          if(s_hour>=l_hour && s_hour<=r_hour)
          {
              cout<<"1";
          }
          else
          {
              cout<<"0";
          }
          
      }
     cout<<endl;
      //cout << "testcase over" << endl;
    }
    return 0;
}