#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

//Function to remove punctuation from a word
void remove_punctuation(char *word)
{
   int i = 0, j = 0;
   while(word[i]){
        if(!ispunct(word[i])) {
            word[j++] = word[i];
        }
        i++;
   }
   word[j] = '\0'; // Null-terminate the modified string
}

int main()
{
FILE *file; //Declare a file pointer
char filename[100]; //To store the name of the file
char line[1000]; //Store each line of the file
int line_count = 0; //Variable to count the number of those lines
int word_count = 0; //Variable to count the number of words in the file
int search_count = 0; //Variable to count the number of times a specific word appears in the file
char search_word[100]; // The word you want to search for

// Ask user for the filename
    printf("Please enter the filename to open:");
    scanf("%99s", filename); // Reads Filename (Max of 99 Characters)

//Open's file in read mode
file = fopen(filename, "r");

//Checks if file opened successfully
if (file == NULL)
{
    printf("Could not open file %s\n", filename);
    return 1; //exits the program with an error code
}
//Prompt the user for the word to search
    printf("Enter the word to search for: ");
    scanf("%99s", search_word);

 printf("File %s opened successfully.\n", filename);

 // Converts the search word into lowercase
    remove_punctuation(search_word);
    for (int i = 0; search_word[i]; i++) 
    {
        search_word[i] = tolower(search_word[i]);
    }

 // Read lines from the file until end of file
 while (fgets(line, sizeof(line), file) != NULL)
 {
    line_count++; // increment line count for each line read
 
// Make a copy of the line to avoid modifying the original
    char line_copy[1000];
    strcpy(line_copy, line);

    // Count words in the current line
    char *word = strtok(line_copy, " \t\n");
    while (word != NULL)
    {
        // increment word count for each word found then goes to next word
        word_count++;
        char lower_word[100];

        remove_punctuation(word);
        for (int i = 0; word[i];i++)
        {
            lower_word[i] = tolower(word[i]);
        }
            lower_word[strlen(word)] = '\0'; // Null-terminate the lower_word string

        if (strcmp(lower_word, search_word) == 0) // Compare with the search word
        {
            search_count++;
        }
        word = strtok(NULL, " \t\n");
    }
    
 }

 //Displays line count
    printf("The file %s has %d lines.\n", filename, line_count);
    printf("it also has %d words.\n", word_count);
    printf("The word '%s' appears %d times in the file.\n", search_word, search_count); // Replace "specific_word" with the word you want to search for
 

 //closes the file selected by the user
 fclose(file);
    printf("File closed successfully.\n");


return 0; //exits the program successfully
}