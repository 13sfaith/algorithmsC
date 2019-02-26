#include <stdio.h>

int binarySearch(int *point, int length, int key, int index){
  if(length == 0) return -1;

  //printf("the value:%d, the length:%d\n", *point, length);

  if(*point < key)
  {

    point += length/2;
    index += length/2;
  }

  if (*point > key)
  {
    point -= length/2;
    index -= length/2;
  }

  if(*point == key) return index;

  return binarySearch(point, (length/2), key, index);
}


int main(){
  int i, val = -1, target = 5;
  int list[8] = {1, 3, 5, 7, 11, 42, 55, 100};
  int *pntr = list;
  int length = sizeof(list)/sizeof(int);
  int index = binarySearch((pntr+(length/2)), length, 42, (length/2));

  // while (length > 0 && val == -1){
  //   if (*pntr )
  // }

  printf("the index is: %d\n", index);

  for (i = 0; i < length; i++)
  {
    printf("pointer address is: %x\n", pntr);
    printf("pointer value is: %d\n", *pntr);
    pntr++;
  }


  return 1;
}
