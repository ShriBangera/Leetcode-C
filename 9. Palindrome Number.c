bool isPalindrome(int x) {
    double rev=0,rem,num=x;
    while(x>0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(rev==num)
        return true;
    else
        return false;
}
