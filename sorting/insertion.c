#include <stdio.h>

//function declartion
void displayList(int * a, int b);

int main(){
  int i, j, temp;
  int list[9] = {5, 2, 9, 1, 18, -5, 37, 11, 3};
  int length = sizeof(list)/sizeof(int);

  i = 1;
  while (i < length)
  {
    j = i;
    while (j > 0 && list[j-1]>list[j])
    {
      temp = list[j];
      list[j] = list[j -1];
      list[j - 1] = temp;
      j--;
      printf("Performed swap:\n");
      displayList(list, length);
    }


    displayList(list, length);
    i++;
  }

  return 1;

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
