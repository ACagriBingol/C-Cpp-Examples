
//Return Type Methods

#include <stdio.h>

int return_Type_Method();

int main(){
	
	int returned_value;
	
	returned_value = return_Type_Method();
	
	printf("%d",returned_value);

		
}

//METHOD 1 You can return either any integer,char or whichever you want
/*
int return_Type_Method()
{
	return 5;
}
*/


//METHOD 2 Or any variable that you've taken from user

int return_Type_Method()
{
	int input;
	scanf("%d",&input);
	return input;
}



