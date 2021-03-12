# Theme Completer with CSS

## Description

The theme completer that I have developed promts the user for a color that is either Red, Yellow, Green, Blue, or Purple. If the user enters a color other than the ones that are listed, the program asks them to re-enter their choice. After getting the desired color from the user, the program promts the user to type in the file for the color that they chose. If the file that they typed in is not a valid file, the program promts the user to re-enter a valid file name. The program then opens the file for the user and reads out the many other colors that are similar to the color that the user entered. The program then asks if the user wants to do it again for another color or if they would like to exit the program. This is my theme completer program for CSCI 111. 

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

!!!Replace with a summary and examples of how multiple decision constructs have been used effectively and appropriately!!!
Many decisions were in place in the program to make it run smootly and efficiently. The decisions that had to be made ranged from deciding if the color that the user inputed was a valid one, if the file name that the user entered existed, and also deciding based on which file name the user entered, the correct file would be opened. This came with a variety of if, else if, and else statements. Examples of this can be seen throughout the code from start to end:

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

!!!Replace with a summary and examples of how iteration has been used effectively and appropriately!!!

### File Input and Output

!!!Replace with a summary and examples of how input and/or output of files have been used effectively and appropriately!!!

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*
