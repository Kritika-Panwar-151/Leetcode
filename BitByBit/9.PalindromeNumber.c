C Code Solution-

bool isPalindrome(int x) {
    if(x<0)//Not a palindrome if negative
    {
        return false;
    }
    int y=x;
    int n;
    double rev=0;
    while(y)//Reversing the number
    {
        n=y%10;
        rev=rev*10+n;
        y=y/10;
        
    }
   
    if(rev==x)
    {
        return true;
    }
    else
    {
        return false;
    }
}