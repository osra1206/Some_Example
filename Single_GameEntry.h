#ifndef GAMEENTRY_H
#define GAMEENTRY_H

#include <iostream>
using namespace std;

class GameEntry
{
      public:
             GameEntry(const string&n="",int s=0);  //constructor
             string getName() const; //get name
             int getScore() const; //get score
                     string name;//player's name
                     int score;//player's score
                     };
                     
                     GameEntry::GameEntry(const string&n,int s)//constructor
                     :name(n),score(s)
                     {}
                     
                     string GameEntry::getName()const
                     {
                            return name;
                            }
                            int GameEntry::getScore() const
                            {
                                return score;
                                }
                                
                                
#endif
