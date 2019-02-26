#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *point, int length, int key, int index){
  if(length == 0) return -1;

  if(*point < key)
  {
    point += length/2;
    index += length/2;
  }

  else if (*point > key)
  {
    point -= length/2;
    index -= length/2;
  }

  if(*point == key) return index;

  return binarySearch(point, (length/2), key, index);
}


int main(int argc, char **argv){
  int i, val = -1, target = 5;
  int list[8] = {1, 3, 5, 7, 11, 42, 55, 100};
  int *pntr = list;
  int length = sizeof(list)/sizeof(int);
  int key = strtol(argv[1], NULL, 10);
  int index = binarySearch((pntr+(length/2)), length, key, (length/2));


  printf("the index is: %d\n", index);



  return 1;
}
