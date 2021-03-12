# Theme Completer with CSS

## Description

The theme completer that I have developed prompts the user for a color that is either Red, Yellow, Green, Blue, or Purple. If the user enters a color other than the ones that are listed, the program asks them to re-enter their choice. After getting the desired color from the user, the program prompts the user to type in the file for the color that they chose. If the file that they typed in is not a valid file, the program prompts the user to re-enter a valid file name. The program then opens the file for the user and reads out the many other colors that are similar to the color that the user entered. The program then asks if the user wants to do it again for another color or if they would like to exit the program. This is my theme completer program for CSCI 111. 

### v0.2 Updates

*Coming soon*

### v1.0 Updates

*Coming soon*


## Developer

Camden Ruinard

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
 g++ -std=c++11 *.cpp -o cvp; ./cvp
Welcome to the Theme Completer. Here, you can enter a color and get back other colors that are color-blind compatible to the one entered.
Please enter a color, that is either Red, Yellow, Green, Blue, or Purple: 
Red
The color you entered is: Red
Please enter a file name to save your theme to (type the color you chose and add '.css' to the end of the color name): 
Red.css
You chose to save the Red theme to the file named Red.css.
The file for Red colors is open.
#p1 {background-color: rgba(255, 0, 0);}
#p2 {background-color: rgba(146, 22, 22);}
#p3 {background-color: rgba(202, 53, 83);}
#p4 {background-color: rgba(243, 0, 57);}
#p5 {background-color: rgba(81, 8, 8);}
#p6 {background-color: rgba(235, 179, 179);}
Would you like to enter another color and file name to complete another theme?
To complete another theme, enter '1'.
To end the program, enter '2'.
2
Thank you for using the Theme Completer. Have a great rest of your day!

```

## C++ Guide

### Variables and Data Types

The multiple variables that I used in this program are integer and string variables. I used an integer variable to be able to hold a value of 1 or 2 which allowed me to loop the program if the use wanted to run the program again or if they wanted to exit it. An example of this can be seen at the end of the program:

Would you like to enter another color and file name to complete another theme?
To complete another theme, enter '1'.
To end the program, enter '2'.
2
Thank you for using the Theme Completer. Have a great rest of your day!

I used multiple string variables to hold names of colors and file names that were entered by the user. This allowed me to run decision checks to make sure what the user entered was valid and could allow the program to coninue to run. Examples of this can be seen in the early stages of the program:

Please enter a color, that is either Red, Yellow, Green, Blue, or Purple: 
Red
The color you entered is: Red
Please enter a file name to save your theme to (type the color you chose and add '.css' to the end of the color name): 
Red.css
You chose to save the Red theme to the file named Red.css.
The file for Red colors is open.

### Console Input and Output


There were multiple occasions when I used console input and output. I had used console input when I wanted to get a color response, a file name, and if the user wanted to continue the program multiple times. I would not have been able to get the user's choice without using "cin" to get a value from them. Examples of this can be seen in the entire program:

Please enter a color, that is either Red, Yellow, Green, Blue, or Purple: 
Red
The color you entered is: Red
Please enter a file name to save your theme to (type the color you chose and add '.css' to the end of the color name): 
Red.css

I had also used many console out commands in the program as well. I used them in a variety of ways, like asking the user which color they wanted to use, asking them to enter a file name, asking them if the wanted to continue, and displaying what color name and file they chose. Examples of this can be seen throughout the entire program:

You chose to save the Red theme to the file named Red.css.
The file for Red colors is open.
.
.
.
Would you like to enter another color and file name to complete another theme?

### Decisions


Many decisions were in place in the program to make it run smoothly and efficiently. The decisions that had to be made ranged from deciding if the color that the user inputed was a valid one, if the file name that the user entered existed, and also deciding based on which file name the user entered, the correct file would be opened. This came with a variety of if, else if, and else statements. Examples of this can be seen throughout the code from start to end:

if(fileName != "Red.css" && fileName != "Yellow.css" && fileName != "Green.css" && fileName != "Blue.css" && fileName != "Purple.css"){
.
.
.
if(fileName == "Red.css"){
.
.
.
else if(fileName == "Yellow.css"){
.
.
.
else {
    cout << "No file has been opened." << endl;

### Iteration

Multiple iterations (or loops) were used in the code to make the program run smoothly. At the start of the program, I used a while loop to have the entire program be able to run over and over again to the users delight as long as they kept entering the value "1" into the continueValue variable. Within this large program-wide loop, I had multiple do-while loops to have the program keep promtping the user to enter a valid color and valid file name until both values were valid for the program to continue running. Also, after the files were open, I had while loops going to keep the file reader going until the end of the file had been reached. All of these iterations were necessary for my code to be able to run correctly and appropriately. Examples of these iterations can be found here:

while (continueValue == 1){
  do {
.
.
.
do{} while(colorName != "Red" && colorName != "Yellow" && colorName != "Green" && colorName != "Blue" && colorName != "Purple");
.
.
.
while (reader.eof() == false){
}

### File Input and Output

Throughout my program, I open different files and also display out the various colors within each of the files when called upon. To do this, I used reader.open statements to be able to get into the specific file that the user wanted to open and get into to read. After the desired file was open, I used get line commands in conjunction with a while loop to read and display each of the lines within the files to the console for the user to be able to see. This would have not been possible if not for file input and output commands. Examples of this can bee seen as follows:

reader.open(fileName, ios::in);
.
.
.
while (reader.eof() == false){

  getline(reader, fileColors);
  cout << fileColors << endl;
.
.
.
reader.close();

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
