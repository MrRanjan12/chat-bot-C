#include<stdio.h>
#include<string.h>
#include<conio.h>
// this is a simple ai chat bot programe ;
// in this programe i am trying to develop a simple ai programe ;
int main() {
	int pin;
	printf("Enter PIN to access\n");
	scanf("%d",pin);
	if(pin==1826){
	
  //  char input[100];
        char input[200];

    printf("Chat bot  : Hello! mai apki kya madad kar sakta hu ?\n");
    // in this i have used loop ;
    while(1) {
    	 
    	//now starts if else codition ;
        fgets(input, 100, stdin);
        if (strstr(input, "hello") || strstr(input, "hi")) {
            printf("Chat bot : Hi there!\n");
        }
        
        //now applied else if codition ;
        // for using this to create a simple chat bot comand as input output ;
        else if (strstr(input,"namaste")||strstr(input,"namaskar")){
            printf("Chat bot :namaskar\n");
        }
        else if (strstr(input, "where are you from")||strstr(input,"what is your address")){
            printf(" Chat bot :I don't have a physical location,\n");
            printf("          :As I exist in the digital realm,\n");
            printf("          :But I was developed by [Techtelligence AI]\n");
      }
        else if (strstr(input, "what is your name")||strstr(input,"who are you")) {
            printf(" Chatbot :  I'm an AI chatbot created by techtelligence.\n");
            printf("            you can call me Chat-PTI\n ");
            printf("            Designed by Techtelligence AI}. \n");
            printf(" Chatbot :And you\n");
            printf("please enter your first name only\n ");
           
		    char name[50];
         scanf("%s",name);
         printf("Chat bot : Thanks %s\n",name);
         printf("Chat bot : How may I help you ?\n");
    
        }
        else if (strstr(input, "bye")) {
            printf("Chatbot : Goodbye!\n");
           
           // even it has no any break applied for stop the progrmae ;
        }
        else if(strstr(input,"how are you")){
		printf("Chat bot:I'm an AI, so I don't have feelings,\n");
		printf("         butI'm here and ready to assist you\n");
		}
        else if(strstr(input,"what can you do")||strstr(input,"what is your work ")){
        	printf("Chat bot: I am designed for give you information,about company data.\n");
        	printf("          I  can help you to find a better path of work \n ");
		}
		else if(strstr(input,"ok")||strstr(input,"thik hai ")){
			printf("Chatbot :Thank you \n");
		}
		else if(strstr(input,"thanks")||strstr(input,"thank you\n ")){
			printf("Chatbot :welcome\n");
			printf("        it's our pleasure\n");
			
		}
		else if(strstr(input,"can i change your name")||strstr(input,"i want to change your name ")){
			printf("Chatbot:I'm sorry ,User not allow change my name\n");
		}
		else if(strstr(input,"write counting ")||strstr(input,"count numbers")){
			
	//here i have used some mathematical question ;
	// I have used loop for the this programe ;		
			
int a;
printf("Chat bot: tell me the last number\n");
scanf("%d",&a);
   printf("Chat bot: sure,Let's Go:\n");
   
   
   for(int i=1; i<=a;i++){
   	
   


   printf("%d\n", i );
   printf("\n");
}
   printf("here's the counting as much you want");
   printf("\n");

// I have not used here return 0 bcouse it stop and end the continuity of programs;


	}
else if(strstr(input,"do calculation")||strstr(input,"open calculator")){

    char symbol;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /):\n ");
    scanf("%c",&symbol);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (symbol) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }
    printf("\n");
printf(" calculator closed\n ");
printf(" Re-Open to do more calculation\n ");

}

	

else {
            printf("Chatbot :I'm sorry, I don't understand.\n");
            printf("         thank you for using me\n");
            
        }
        	
		
        getch();
    }
    
}
else{
	printf("You have entered wrong pin\n");
}

}
/* TODO (#1#): getch(); */

