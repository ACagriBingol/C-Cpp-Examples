void printText( FILE* fp, char* text1, char* text2){
  if(fp == NULL){
    /*printf("Error opening file\n");*/
  }else{
    /*printf("File opened successfully.\n");*/
    fprintf(fp, "%s", text1);
    fputs(text2, fp);
  }
}