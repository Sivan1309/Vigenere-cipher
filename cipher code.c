#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function prototypes
void encrypt(char *message, char *key);  
void decrypt(char *message, char *key);

int main() 
{

  // Pointer variables to hold message and key
  char *message, *key;
  
  // Variable to hold user's choice
  int choice;
 
  // Dynamically allocate memory for message and key
  message = (char*) malloc(100 * sizeof(char));
  key = (char*) malloc(100 * sizeof(char));
  char input[100];

// Get user's message 
  printf("Hi Buddy! Enter your secret message: ");
  fgets(input, 99, stdin);
  input[strlen(input)-1] = '\0'; // remove newline 
  strcpy(message, input);

 // Convert message to uppercase
 for(int i=0; i<strlen(message); i++) {
    message[i] = toupper(message[i]); 
  }

 // Get user's key
  printf("Enter your secret key: ");
  fgets(input, 99, stdin);
  input[strlen(input)-1] = '\0';
  strcpy(key, input);  

 // Convert key to uppercase
  for(int i=0; i<strlen(key); i++) {
    key[i] = toupper(key[i]);
  }
  printf("Encrypt(1) or Decrypt(2)? ");
  scanf("%d", &choice); 
  

  // Call encryption or decryption based on choice
  if(choice == 1) {
    encrypt(message, key); 
  }
  else {
    decrypt(message, key);
  }

  // Convert decrypted message back to original case
  for(int i=0; i<strlen(message); i++) {
    message[i] = tolower(message[i]);
  }

  // Print out final result
  printf("Result: %s", message);

  // Free allocated memory
  free(message);
  free(key);

  return 0;
}

// Vigenere cipher encryption 
void encrypt(char *message, char *key) {

  int msgLen = strlen(message);
  int keyLen = strlen(key);

  for(int i=0, j=0; i<msgLen; i++) {

    // Reset key index if needed
    if(j >= keyLen) {
      j = 0; 
    }

    // Encrypt using Vigenere cipher logic
    message[i] = (message[i] - 'A' + key[j] - 'A') % 26 + 'A';

    j++;
  }
}

// Vigenere cipher decryption
void decrypt(char *message, char *key) {

  int msgLen = strlen(message);
  int keyLen = strlen(key);

  for(int i=0, j=0; i<msgLen; i++) {
    
    // Reset key index if needed
    if(j >= keyLen) {
      j = 0;
    }

    // Decrypt using Vigenere cipher logic 
    message[i] = (message[i] - 'A' - (key[j] - 'A') + 26) % 26 + 'A';

    j++;
  }
}
