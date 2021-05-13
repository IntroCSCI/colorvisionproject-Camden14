#ifndef PROFILE_H //Pre-processor directives
#define PROFILE_H
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class profile{
  private:

    string usersName;
    string issueColor;
    vector <int> colorValue;

  public:

    profile();

    void setName (string);

    void setValue (vector <int>);

    void setColor (string);

    void display();


};

#endif