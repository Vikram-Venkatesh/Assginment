/*
 * func1.c
 *
 *  Created on: 02-Jun-2016
 *      Author: emblab
 */
#include "func.h"

int match(char a[] , char b[])
{
    if(a==NULL||b==NULL)
    {
    return 0;
    }
if(a[0] == '\0' && b[0] == '\0')
{
return 1;
}
else if(a[0] == b[0])
{
    return (match(&a[1],&b[1]));   ///< Return function
}


else if(a[0] == '?')
{
    if(b[0] == '\0')
    {
        return 0;
    }
    else
    {
        return (match(&a[1],&b[1]));
    }
}

else if(a[0] == '*')
{
    if(b[0] == '\0')
    {
        return (match(&a[1],&b[0]));
    }
    else
    {
        return (match(&a[1],&b[0])||match(&a[0],&b[1]));  ///< Return function
    }

}
return 0;
}

