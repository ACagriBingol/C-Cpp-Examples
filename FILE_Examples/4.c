void getOddNumbers( FILE* fpRead, FILE* fpWrite){
  char buffer[255];
  if(fpRead == NULL || fpWrite == NULL){
    /*printf("Error opening file\n");*/
  }else{
    /*printf("File opened successfully.\n");*/
    
    while(fgets(buffer, 255, fpRead)) {
        int number = atoi(buffer);
        if(number%2==1){
            fprintf(fpWrite, "%d\n", number);
        }
    }

    fclose(fpRead);
    fclose(fpWrite);
    }
}