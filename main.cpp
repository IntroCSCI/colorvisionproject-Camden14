//Author: Camden Ruinard
#include <iostream>
#include <fstream>
#include <vector>
#include "profile.h"
using namespace std;

void colorDarken(vector<int> &);
int timesRun (int);

int main()
{
  int continueCode = 1;
  string colorName;
  string fileName;
  string fileColors;
  fstream reader;
  vector <int> colorValue;
  string darkenResponse;
  int totalCodeCompletions = 0;
  string userName;
  profile user;

 cout << "Welcome to the Theme Completer. Here, you can enter a color and get back other colors that are color-blind compatible to the one entered." << endl;

while (continueCode == 1){
  
  cout << "Please enter your name to start the formation of your new profile: " << endl;
  cin >> userName;

  user.setName(userName);

  do {
   cout << "Please enter a color, that is either Red, Yellow, Green, Blue, or Purple: " << endl;
   
   cin >> colorName;

    if(colorName != "Red" && colorName != "Yellow" && colorName != "Green" && colorName != "Blue" && colorName != "Purple"){

      cout << "The color you entered is not a valid color. Please enter one of the five colors listed. Be sure to capitalize the first letter of the color you enter." << endl;
    }

  } while (colorName != "Red" && colorName != "Yellow" && colorName != "Green" && colorName != "Blue" && colorName != "Purple");

  cout << "The color you entered is: " << colorName << endl;
  user.setColor(colorName);

  do {
   cout << "Please enter a file name to save your theme to (type the color you chose and add '.css' to the end of the color name): " << endl;
   
   cin >> fileName;

    if(fileName != "Red.css" && fileName != "Yellow.css" && fileName != "Green.css" && fileName != "Blue.css" && fileName != "Purple.css"){

      cout << "The file name you entered is not valid. Please re-enter the file name to have the color you chose and '.css' after the color name." << endl;
    }

  } while (fileName != "Red.css" && fileName != "Yellow.css" && fileName != "Green.css" && fileName != "Blue.css" && fileName != "Purple.css");

  cout << "You chose to save the " << colorName << " theme to the file named " <<       fileName << "." << endl;

  if(fileName == "Red.css"){
  
    reader.open(fileName, ios::in);
    if (reader.is_open()){
      cout << "The file for " << colorName << " colors is open." << endl;
  }
    
    while (reader.eof() == false){

      getline(reader, fileColors);
      cout << fileColors << endl;

    }
  }
  
  else if(fileName == "Yellow.css"){
  
    reader.open(fileName, ios::in);
    if (reader.is_open()){
      cout << "The file for " << colorName << " colors is open." << endl;
  }

    while (reader.eof() == false){

      getline(reader, fileColors);
      cout << fileColors << endl;

    }
  }

  else if(fileName == "Green.css"){
  
    reader.open(fileName, ios::in);
    if (reader.is_open()){
      cout << "The file for " << colorName << " colors is open." << endl;
  }

    while (reader.eof() == false){

      getline(reader, fileColors);
      cout << fileColors << endl;

    }
  }

  else if(fileName == "Blue.css"){
  
    reader.open(fileName, ios::in);
    if (reader.is_open()){
      cout << "The file for " << colorName << " colors is open." << endl;
  }

    while (reader.eof() == false){

      getline(reader, fileColors);
      cout << fileColors << endl;

    }
  }

  else if(fileName == "Purple.css"){
  
    reader.open(fileName, ios::in);
    if (reader.is_open()){
      cout << "The file for " << colorName << " colors is open." << endl;
  }

    while (reader.eof() == false){

      getline(reader, fileColors);
      cout << fileColors << endl;

    }
  }

  else {
    cout << "No file has been opened." << endl;
  }

  reader.close();

  if(colorValue.size() > 0){
    colorValue.pop_back();
    colorValue.pop_back();
    colorValue.pop_back();
  }

  if (colorName == "Red"){
    colorValue.push_back(255);
    colorValue.push_back(0);
    colorValue.push_back(0);
    
  }

  else if (colorName == "Yellow"){
    colorValue.push_back(255);
    colorValue.push_back(255);
    colorValue.push_back(0);
    
  }

  else if (colorName == "Green"){
    colorValue.push_back(0);
    colorValue.push_back(255);
    colorValue.push_back(0);
    
  }

  else if (colorName == "Blue"){
    colorValue.push_back(0);
    colorValue.push_back(0);
    colorValue.push_back(255);
    
  }

  else if (colorName == "Purple"){
    colorValue.push_back(153);
    colorValue.push_back(0);
    colorValue.push_back(153);
    
  }

  user.setValue(colorValue);

  cout << "If the color " << colorName << " is to bright of a color for you to see, we can darken the color for you. Would you like to darken the color " << colorName << "?" << endl;

  do {
   cout << "Enter Yes or No to proceed." << endl;
   
   cin >> darkenResponse;

    if(darkenResponse != "Yes" && darkenResponse != "No" && darkenResponse != "yes" && darkenResponse != "no"){

      cout << "The response you gave was not able to be understood. Please enter either Yes or No to proceed." << endl;
    }

  } while (darkenResponse != "Yes" && darkenResponse != "No" && darkenResponse != "yes" && darkenResponse != "no");
  
  if(darkenResponse == "Yes" || darkenResponse == "yes"){
    colorDarken (colorValue);
    user.setValue(colorValue);
    cout << "You chose to darken your color." << endl;

  }

  else{
    cout << "You chose to keep your color the same value." << endl;
  }
  
  totalCodeCompletions = timesRun(totalCodeCompletions);

  user.display();

  cout << "You have run through this program a total number of times of: " << totalCodeCompletions << endl;

  cout << "Would you like to enter another color and file name to complete another theme?" << endl;

  cout << "To complete another theme, enter '1'." << endl;
  cout << "To end the program, enter '2'." << endl;

  cin >> continueCode;
}

  cout << "Thank you for using the Theme Completer. Have a great rest of your day!" << endl;
  return 0;
}


void colorDarken(vector<int> & colorValue){

  for(int index=0; index <= colorValue.size(); index++){
    if(colorValue[index] == 0){

    }

    else if(colorValue[index] > 0){
      colorValue[index] = colorValue[index] / 2;
    }

    else{

    }
  }
}

int timesRun(int number){
   number = number + 1;
  return number;
}
  