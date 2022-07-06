#include "main.h"
/**                                                                                                                                                  
 *  main - Program that prints _putchar, followed by a new line.                                                                                     
 *                                                                                                                                                   
 *  Return: 0 (success)                                                                                                                              
 */                                                                                                                                                  
int main(void)                                                                                                                                       
{                                                                                                                                                    
        int i;                                                                                                                                       
        char p[] = "_putchar";                                                                                                                       
        for (i = 0; i <= 8; i++)                                                                                                                     
        {                                                                                                                                            
                _putchar(p[]);                                                                                                                       
        }                                                                                                                                            
        _putchar('\n');                                                                                                                              
        return (0);
}
