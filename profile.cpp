#include "profile.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

profile::profile(){
  usersName = "name not provided";
  colorValue = {};
  issueColor = "";
}

void profile::setName(string firstName){

  usersName = firstName;
}

void profile::setValue(vector <int> values){

  colorValue = values;
}

void profile::setColor(string randomColor){

  issueColor = randomColor;
}

void profile::display(){
  cout << "Your profile for the Theme Completer is: " << endl;
  cout << "Name: " << usersName << endl;
  cout << "Completed Color: " << issueColor << endl;
  cout << "Desired Color Value: " << endl;

  for(int index=0; index < colorValue.size(); index++){
        cout << colorValue[index] << endl;
      }

}
