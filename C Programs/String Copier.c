/*Write a C program that copies a string from one character array to another using a custom function. Your task is to:

Implement a function copy that takes two character pointers, dst (destination) and src (source), and copies the string from src to dst.
Ensure that the copy function adds a null terminator at the end of the destination string.
In the main function, define the source string as "We promptly judged antique ivory buckles for the next prize!".
Calculate the length of the source string and create a destination array of the same length plus one to accommodate the null terminator.
Call the copy function to copy the source string to the destination string.
Print the destination string to verify the copy operation.*/

#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src)
{
  while(*src!='\0')
  {
      *dst = *src;
      src++;
      dst++;
  }
  *dst='\0';
  
}
 
int main(){
char srcString[] = "We promptly judged antique ivory buckles for the next prize!";
  int length=strlen(srcString)+1;
char dstString[length];
copy(dstString,srcString);
printf("%s",dstString);
}

