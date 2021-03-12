//Author: Camden Ruinard
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string colorName;
  string fileName;
  string fileColors;
  fstream reader;

 cout << "Welcome to the Theme Completer. Here, you can enter a color and get back other colors that are color-blind compatible to the one entered." << endl;

  do {
   cout << "Please enter a color, that is either Red, Yellow, Green, Blue, or Purple: " << endl;
   
   cin >> colorName;

    if(colorName != "Red" && colorName != "Yellow" && colorName != "Green" && colorName != "Blue" && colorName != "Purple"){

      cout << "The color you entered is not a valid color. Please enter one of the five colors listed. Be sure to capitalize the first letter of the color you enter." << endl;
    }

  } while (colorName != "Red" && colorName != "Yellow" && colorName != "Green" && colorName != "Blue" && colorName != "Purple");

 cout << "The color you entered is: " << colorName << endl;

  do {
   cout << "Please enter a file name to save your theme to (type the color you chose and add '.css' to the end of the color name): " << endl;
   
   cin >> fileName;

    if(fileName != "Red.css" && fileName != "Yellow.css" && fileName != "Green.css" && fileName != "Blue.css" && fileName != "Purple.css"){

      cout << "The file name you entered is not valid. Please re-enter the file name to have the color you chose and '.css' after the color name." << endl;
    }

  } while (fileName != "Red.css" && fileName != "Yellow.css" && fileName != "Green.css" && fileName != "Blue.css" && fileName != "Purple.css");

 cout << "You chose to save the " << colorName << " theme to the file named " << fileName << "." << endl;

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

  return 0;
}
