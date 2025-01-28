bool rotateString(char* s, char* goal) {
    int slen=strlen(s),glen=strlen(goal);
    if(slen==glen){
        int i,j;
        for(i=0;i<slen;i++)
        {
            if(strcmp(s,goal)==0)
            return true;
            char temp=s[0];
            for(j=0;j<slen-1;j++)
                s[j]=s[j+1];
            s[slen-1]=temp;
        }
    }
    return false;
}
