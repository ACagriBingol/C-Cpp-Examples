int readNumbers(FILE* fp){
  int number1, number2;
  char buff[255];
  if(fp == NULL){
    /*printf("Error opening file\n");*/
  }else{
    /*printf("File opened successfully.\n");*/
    fscanf(fp,"%d", &number1);
    fgets(buff, 255, fp);
    fgets(buff, 255, fp);
    number2 = atoi(buff);
    return number1>number2 ? number1 : number2;
  }
  return -1;
}