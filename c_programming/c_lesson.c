#include <stdio.h>

Dennis MacAlistair Ritchie was a computer scientist  He is most well-known for creating the c programming language
1/why should we learn C 
- C is a widely portable highlevel language programming 

2/ C Standardization
    -"K & R" C  
    -ANSI C -(aka C89 OR C90) this standard will be the most use
    -most portable...
    -ansi, -std=c89
    -C99 
    extend C89/C90, new data types, variable length arrays.
    -gcc by default is C89 +a number of c99
    features to improve usability

    //hello wworld 
    #inclide <stdio.h>

    int main(void){
        printf("Hello World!\n");
        return 0;
    }
    //end hello world

    /*Variable naming convention*/
    * vairiable name start with letter or underscore(_)
    * can be follow by any combinaison of letter digits and underscore
    * can not use reserved word the word that is used or reserved by a syntaxe in the language

    C: intrinsic data type
        - char (character)
            *typically 1 byte
            * ex: 'a', 'b'; '3'
         -int (integer)   
            *typically 4bytes
            *16 (decimal), 020(octal) , 0*10 (hex)
        - float (floating point)
            *typically 4bytes
            * ex 0.45
        - double (extended precision float)    
            *typically 8bytes
            *unless told otherwise(e.g 3.14f) floating point literals are assumed to be double.


     C: Modifiers
        -long, long long , short, unsigned, and signed
            *long , long long extend the space to occupy on some systems
             can be used with int, double
            *short takes half space on some systems
            *signed/unsigned(int or char) 

       SIZES VARY BY COMPILER
        * Sizes of integers and floating point number vary by compiler     
        * ANSI C defines the following rules
            *short int <= int <=long int
            *float <= double <= long double

                      TYPE CASTING   
          This is a kind of defininig a variabe with some type and redifine another variable based to the previous variable value
          float f;
          int i = 10;
          f = (float) i; //assigned 10.0 to f

          f = 3.14
          i = (int) f; //assigned 3 to f


          //PART 2 LEARNING TO PROGRAM WITH C 

          INTRO
            C has no special syntax for input/output
            C defines a library of functions that support intergration with standard input/output
                *functions getchar(), putchar()
                *FUNCTION FOR FORMATTED output
                    -printf() displays formatted output to stdout

                    exemple of use printf
                    printf("who: %s size: %d cost %5.2f","you",12,1.2);
                    on this printf %s will be replaced by a string %d will be replaced by an intiger %5.2f will be replaced by a float
                    we can see that after the first string we have on params you 12 and 1.2
                 *FORMATTED input
                  -scanf() reads formatted input from staandard input
                    syntax scanf(format_str, &arg1, &arg2, arg3,...)
                    exemple of use
                    input data: y 100
                    char c;
                    int i;
                    scanf("%c %d", &c, &i)

                    here scanf() will receive as an argument y 100 and those value will be stored 
                    on char c and int i variable;

                    EXEMPLE OF USE printf see the file io_demo.c

                    EXEMPLE OF USE printf and scanf together see demo2.c


//CCOMPILING PROCESS
    //COMPONENTS OF COMPILER
        *PREPROCESSOR
        *COMPILLER
        *ASSEMBLER
        *LINKER