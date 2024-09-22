#include<stdio.h>
#include<string.h>

/*void Fun (int x )
{
    x++;
}

int main ()
{
    int a = 10 ;

    printf("%d\n",a);
    Fun(a);

    printf("%d\n",a);
    
    return 0 ;
}*/

/*int array_sum (int x[100] , int n )
{
    int i , sum = 0;
    for ( i = 0 ; i < n ; i++)
    {
        sum += x[i];
    }
    return sum ;
}

int main ()
{
    int n,arr[100],i , s;

    scanf("%d",&n);

    for ( i= 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    s = array_sum(arr,n);

    printf("%d", s);
    
    return 0 ;
}*/

/*int array_sum (int x[100] , int n )
{
    int i , sum = 0;
    for ( i = 0 ; i < n ; i++)
    {
        //sum += x[i];
        x[i] += 10 ;
    }
    //return sum ;
}

int main ()
{
    int n,arr[100],i , s;

    scanf("%d",&n);

    for ( i= 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    array_sum(arr, n);

    ///printf("%d", s);

    for ( i= 0 ; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0 ;
}*/

/*int array_sum (int x[100] , int n )
{
    int i , sum = 0;
    for ( i = 0 ; i < n ; i++)
    {
        //sum += x[i];
        x[i] += 10 ;
    }
    n += 100 ;
    //return sum ;
}

int main ()
{
    int n,arr[100],i , s;

    scanf("%d",&n);

    for ( i= 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    array_sum(arr, n);

    ///printf("%d", s);

    for ( i= 0 ; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d ", n);
    
    return 0 ;
}*/

/// reverse array

/*void reverse_array (int x[100] , int n )
{
    int i , temp , j;
    for ( i = 0 , j = n-1 ; i < n/2 ; j--, i++)
    {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
}

int main ()
{
    int n,arr[100],i , s;

    scanf("%d",&n);

    for ( i= 0 ; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }

    reverse_array(arr, n);

    for ( i= 0 ; i < n ; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0 ;
}*/

//// string pass

/*int lowerCount (char str[100] )
{
    int i ,cnt = 0;
    for ( i = 0 ; str[i] != '\0';i++)
    {
        if ( str [i] >= 'a' && str[i] <= 'z')
        {
            cnt++;
        }
    }
    return cnt ;
}

int main ()
{
    int n,arr[100],i , s;
    char str[100];
    scanf("%s",str);

    printf("%d\n", lowerCount(str));
    
    return 0 ;
}*/

/// reverse string

/*const char *reverse (char str[100] )
{
    char rev[100];
    int len = strlen(str), i = 0 , j;
    for ( i= 0 , j = len - 1 ; i < len ; i++ , j--)
    {
        rev[i] = str[j] ;
        rev [i]= '\0' ;
    }
    return rev;
}

int main ()
{
    int n,arr[100],i , s;
    char str[100];
    scanf("%s",str);

    printf("%s\n", reverse(str));
    
    return 0 ;
}*/

char *reverse (char str[100] )
{
    char rev[100];
    int len = strlen(str), i = 0 , j;
    for ( i= 0 , j = len - 1 ; i < len ; i++ , j--)
    {
        rev[i] = str[j] ;
        rev [i]= '\0' ;
    }
    return rev;
}

int main ()
{
    int n,arr[100],i , s;
    char str[100];
    char str2 ;
    scanf("%s",str);
    
    //str2 = reverse(str);
    strcpy(str2 , reverse(str));

    printf("%s\n", str2);
    
    return 0 ;
}