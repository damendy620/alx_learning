
/**
*if we wanna call a function before declaration 
*we can use what we call forward declaration exemple
*/

void printHello(char* name)

void printHelloGuys(char* guys){
    printHello("%s", guys)
}
/**
*if function has no return type we put void before that function
*/
void printHello(char* name){
    printf("hello world %s\n", name)
    return;
}

/**
*if function has no return type the return type will be int
*/

printGoodbye(char* name){
    printf("goodbye  %s\n", name)
    return (1);
}



