#include <stdio.h>

//function declartion
void displayList(int * a, int b);


int main(){
  //variables
  typedef enum{true, false} bool;
  bool hasSwaped = false;
  int i, temp;
  int list[7] = {11, 7, 9, 34, 100, 1, 7};
  int length = sizeof(list)/sizeof(int);

  printf("Welcome to the bubble sorting algorithm\n");

  printf("The orignal list is: ");
  displayList(list, length);

  //accending loop
  do
  {
    hasSwaped = false;
    for(i = 0; i < length - 1; i++)
    {
        if(list[i] > list[i + 1]){
          temp = list[i];
          list[i] = list[i + 1];
          list[i + 1] = temp;
          hasSwaped = true;
        }
    }
  } while(hasSwaped != false);

  printf("The accending list is: ");
  displayList(list, length);

  //deccending loop
  do {
    hasSwaped = false;
    for(i = 0; i < length - 1; i++)
    {
      if(list[i] < list[i + 1]){
        temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;
        hasSwaped = true;
      }
    }
  } while(hasSwaped != false);

  printf("The deccending list is: ");
  displayList(list, length);

  return 0;
}

//just loops through and prints the list
void displayList(int *a, int b){
  for (int i = 0; i < b; i++)
  {
    printf("%d ", *a);
    *a++;
  }
  printf("\n");
}
