/*
Editor: Jeremy Burke
CPE 422 Homework 6
*/

/*
This code takes a text fill, read it, and copies it in the same directory
used new libraries called cstdio and cstdlib which are c libraries to open text files and read them
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {
  FILE* inputFile = fopen(argv[1], "r");
  FILE* outputFile = fopen(argv[2], "w");

  char buffer[1024];
  while (fgets(buffer, sizeof(buffer), inputFile)){
    fputs(buffer, outputFile);
  }

  fclose(inputFile);
  fclose(outputFile);

  cout << "File copied successfully from " << argv[1] << " to " << argv[2] << endl;
  return 0;
}

