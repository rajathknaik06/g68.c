/*In a data entry application used by a company, employees are required to input their department codes. The company has a rule that department codes should only consist of uppercase letters.



The system needs to verify and display the department code entered by the user, ensuring that it only contains uppercase letters. If the entered code contains any lowercase letters or other characters, it should be truncated at the occurrence of a non-uppercase letter.

Input format :
The input consists of a string, a single line of input containing the department code.

Output format :
The output displays a single line output containing the substring of the department code consisting of only uppercase letters from the beginning until the occurrence of a non-uppercase letter.*/


#include <stdio.h>
 
int main()
{
    char str[250];
    scanf("%[A-Z]s", str);
    printf("%s", str);
    return 0;
    
}
