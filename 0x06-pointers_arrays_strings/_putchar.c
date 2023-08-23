#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - writes the character c to stdout                                                                                          
 * @c: The character to print                                                                                                           
 *                                                                                                                                      
 * Return: On succusful execution 1,else -1 on error                                                            
 */                                                                                                                                     
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
        return (write(1, &c, 1));                                                                                                       
}

