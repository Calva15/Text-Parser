#include <stdio.h>

int main()
{
FILE *file; //Declare a file pointer
char filename[100]; //To store the name of the file
char line[1000]; //Store each line of the file
int line_count = 0; //Variable to count the number of those lines
int word_count = 0; //Variable to count the number of words in the file

// Ask user for the filename
    printf("Please enter the filename to open:");
       scanf("%99s", filename); //Read's Filename (Max of 99 Characters)");

//Open's file in read mode
file = fopen(filename, "r");

//Checks if file opened successfully
if (file == NULL)
{
    printf("Could not open file %s", filename);
    return 1; //exits the program with an error code
}
 printf("File %s opened successfully.\n", filename);

 // Read lines from the file until end of file
 while (fgets(line, sizeof(line), file) != NULL)
 {
    line_count++; //increment line count for eachc line to read
 
    // Count words in the current line
    char *word = strtok(line, " \t\n");
    while (word != NULL)
    {
        // increment word count for each word found then goes to next word
        word_count++;
        word = strtok(NULL, " \t\n");
    }
    
 }

 //Displays line count
    printf("The file %s has %d lines.\n", filename, line_count);
    printf("it also has %d words.\n", word_count);
 

 //closes the file selected by the user
 fclose(file);
    printf("File closed successfully.\n");


return 0; //exits the program successfully
}