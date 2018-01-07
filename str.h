
int length(char *s)
{
	int i,cnt=0;
	for(i=0;s[i]!='\0';i++)
	{
		cnt++;
	}
	return cnt;
}
void concate(char *s1,char*s2)
{
	int i,j;
	char a[1000];
	for(i=0;s1[i]!='\0';i++);
	
	for(j=0;s2[j]!='\0';j++)
	{
		s1[i]=s2[j];
		i++;
	}
	s1[i]='\0';
	
}
int retrive_index(char *s,char a)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]==a)
		return i;
		i++;
	}
	return -1;
}
int last_occurance(char *s,char a)
{
	int i,length1;
	length1=length(s);
	for(i=length1-1;i>=0;i--)
	{
		if(s[i]==a)
		return i;
		
	}
	return -1;
}
void concate_reversal(char *s)
{
	int i,j;
	for(i=0;s[i]!='\0';i++);
	j=i;
	i--;
	while(i)
	{
		s[j]=s[i];
		j++;
		i--;
	}
	s[j]=s[0];
	s[j+1]='\0';
	
}
void concate_duplicate(char *s)
{
	int i=0,j=0;
	i=length(s);
	while(s[j]!='\0')
	{
		s[i]=s[j];
		j++;i++;
	}
	s[i]='\0';
	
}
int  compare_string(char *s1,char *s2)
{
	int i=0;
	while(s1[i]==s2[i])
	{
		if(s1[i]=='\0' && s2[i]=='\0')
		{
			return 1;
		}
		if(s1[i]=='\0' || s2[i]=='\0')
		{
			return 0;
		}
		i++;
	}
	return 0;
}
int compare_noncasesensitive(char *s1,char *s2)
{
	int i;
	if(length(s1)!=length(s2))
		return 0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			if(s1[i]-s2[i]==32 || s1[i]-s2[i]==-32)
			continue;
			else
			{
			
				return 0;
			}
		}
	}
	return 1;
}
void convert_upercase(char *s)
{
	int i=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>90)
		s[i]-=32;
	}
	
}
void lowercase(char *s)
{
	int i=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]<97)
		s[i]+=32;
	}
	
}
void titlecase(char *s)
{
	int i;
	if(s[0]>90)
	s[0]-=32;
	for(i=1;s[i]!='\0';++i)
    {
            if(s[i]==' ' && s[i+1]!=' ')
            {
                i++;
                if(s[i]>=97)
                    s[i]-=32;
            
            else if(s[i]<97)
            {
                s[i]+=32;
            }
        }
    }
	
}
void replace_substring(char *s,char *s1,int pos)
{
		int i,n=pos;
	for(i=0;s1[i]!='\0';++i)
	{
		s[i+n]=s1[i];
	}
	
}
int retrive_index_substring(char *s,char *s1)
{
	int i=0,flag=0;
	while(s[i]!='\0')
	{
		int k=i;
		for(int j=0;s1[j]!='\0';j++)
		{
			if(s[i+j]==s1[j])
			{
				flag=1;
				
				continue;
			}
			else 
			{
				flag=0;
				i++;
				break;
			}
		}
		
		if(flag)
		return i;
	}
	return -1;
}
int palindrome(char *s)
{
	int i,length,j;
	for(i=0;s[i]!='\0';i++);
	length=i;
	for(i=length-1,j=0;i>=0;i--)
	{
		if(s[j++]==s[i])
		continue;
		else
		return 0;	
	}
	return 1;
}
int vowel(char *s)
{
	int i,v=0;
	for(i=0;s[i]!='\0';i++)
	{
		switch(s[i])
        {
            case 'a':v++;
                    break;
            case 'e':v++;
                    break;
            case 'i':v++;
                    break;
            case 'o':v++;
                    break;
            case 'u':v++;
                    break;
            case 'A':v++;
                    break;
            case 'E':v++;
                    break;
            case 'I':v++;
                    break;
            case 'O':v++;
                    break;
            case 'U':v++;
                    break;
        }
	}
	return v;
}
int *char_words(char *s)
{
	int i,c=0,w=1;
	int a[2];
	
	
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122))
		c++;
		if(s[i]==' '&& s[i+1]!=' ')
		w++;
	}
	
	a[0]=c;
	a[1]=w;
	
	return a;
}

	

