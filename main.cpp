//Author: Camden Ruinard
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  string colorName;
  string fileName;
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

if(colorName == "Red"){
  
  fileName = "RedColors.css";
  
  reader.open(fileName, ios::in);
}
  
else if(colorName == "Yellow"){
  
  fileName = "YellowColors.css";
  
  reader.open(fileName, ios::in);
}

else if(colorName == "Green"){
  
  fileName = "GreenColors.css";
  
  reader.open(fileName, ios::in);
}

else if(colorName == "Blue"){
  
  fileName = "BlueColors.css";
  
  reader.open(fileName, ios::in);
}

else if(colorName == "Purple"){
  
  fileName = "PurpleColors.css";
  
  reader.open(fileName, ios::in);
}

if (reader.is_open()){
  cout << "The file for " << colorName << " colors is open." << endl;
}

  return 0;
}
