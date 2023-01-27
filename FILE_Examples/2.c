void readNumber(FILE* fp, int* number){
  if(fp == NULL){
    /*printf("Error opening file\n");*/
  }else{
    /*printf("File opened successfully.\n");*/
    fscanf(fp,"%d", number);
    printf("Value of number = %d", *number);
  }
}