#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<string.h>

 using namespace std;

int main()
{ char number[60],integral[60],fractional[60],temp[60],temp1[60],temp2[60],temp4[60],point='.',r;
char fractionalf2[62],integralf2[60],integrals[60],fractionals[60],integralf[60],fractionalf[62],f[60];
  int found=0,count=1,integralnum=0,size=strlen(integral),temp3,t,s,l=0,k=0,length;
  float fractionalnum=0;
  int curr_base,targ_base,sum1=0,sum2=0;
  printf("Enter the number whose base you wanna change\n");
  scanf("%s",&number);
  printf("\nEnter the current base and target base of the number\n");
  scanf("%d%d",&curr_base,&targ_base);
  int i;
  for(i=0;number[i]!='\0';i++)
  { 
      if(!found)
      { 
         if(number[i]!='.')
         { 
             found=1;
             number[i]='\0';
             continue;
		 }
		integral[i] = number[i];
		count++;
		
	  }
  	else
  	   fractional[i-count]=number[i];
  } 
  fractional[i-count] ='\0';
  
  for(int i=0;integral[i]!='\0';i++)
  {
  	integralnum=+integral[strlen(integral)-1-i]*pow(10,i);
  }

  for(int i=0;fractional[i]!='\0';i++)
  {
  	fractionalnum=+fractional[strlen(fractional)-1-i]*pow(10,i);
  }  

  
  switch(curr_base)
  { case 8:
     if(targ_base==10)
		{ for(int i=0;integralnum!=0&&temp[i]!='\0';i++)
		{ 
		   r=integralnum%10;
		   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
		      sum1=sum1+r*pow(curr_base,i);
		else{
			switch(r)
			{ case 'a':
			  case 'A' : r=10;break;
			  case 'b':
			  case 'B' : r=11;break;
			  case 'c':
			  case 'C' : r=12;break;
			  case 'd':
			  case 'D' : r=13;break;
			  case 'e':
			  case 'E' : r=14;break;
			  case 'f':
			  case 'F' : r=15;break;
			  	
			}
		    sum1=sum1+ r*pow(curr_base,i);
			}   
		temp[i]=fractional[i];
		if(temp[i]==0||temp[i]==1||temp[i]==2||temp[i]==3||temp[i]==4||temp[i]==5||temp[i]==6||temp[i]==7||temp[i]==8||temp[i]==9)
			sum2=sum2+(temp[i]*pow(curr_base,-i));
		else
		{
			switch(temp[i])
			{ case 'a':
			  case 'A' : temp[i]=10;break;
			  case 'b':
			  case 'B' : temp[i]=11;break;
			  case 'c':
			  case 'C' : temp[i]=12;break;
			  case 'd':
			  case 'D' : temp[i]=13;break;
			  case 'e':
			  case 'E' : temp[i]=14;break;
			  case 'f':
			  case 'F' : temp[i]=15;break;
			  	
			}
		    sum1=sum1+ (temp[i]*pow(curr_base,i));
		    integralnum=integralnum/10;
		    
		}
		printf("%d%c%d",sum1,point,sum2);
	}
}
else if(targ_base==2)
{ 
 char temp[200];
 for(int i=0;integral[i]!='\0';i++)
 { switch(integral[i])
   {case 0: temp[i++]=0;temp[i++]=0;temp[i++]=0;temp[i++]=0;break;
     case 1: temp[i++]=0;temp[i++]=0;temp[i++]=0;temp[i++]=1;break;
     case 2: temp[i++]=0;temp[i++]=0;temp[i++]=1;temp[i++]=0;break;
     case 3: temp[i++]=0;temp[i++]=0;temp[i++]=1;temp[i++]=1;break;
     case 4: temp[i++]=0;temp[i++]=1;temp[i++]=0;temp[i++]=0;break;
     case 5: temp[i++]=0;temp[i++]=1;temp[i++]=0;temp[i++]=1;break;
     case 6: temp[i++]=0;temp[i++]=1;temp[i++]=1;temp[i++]=0;break;
     case 7: temp[i++]=0;temp[i++]=1;temp[i++]=1;temp[i++]=1;break;
     case 8: temp[i++]=1;temp[i++]=0;temp[i++]=0;temp[i++]=0;break;
     case 9: temp[i++]=1;temp[i++]=0;temp[i++]=0;temp[i++]=1;break;
 }
   for(int i=0;fractional[i]='\0';i++)
   { switch(fractional[i])
   { case 0: temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;break;
     case 1: temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;break;
     case 2: temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;break;
     case 3: temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;break;
     case 4: temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;break;
     case 5: temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;break;
     case 6: temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;break;
     case 7: temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;break;
     case 8: temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;break;
     case 9: temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;break;
   }
   }
}temp[i]='\0';temp2[i]='\0';

for(int i=0;i<strlen(temp);i++)
{printf("%d",temp[i]);
}printf(".");

for(int i=0;i<strlen(temp2);i++)
{printf("%d",temp2[i]);
}
}else ;
if(targ_base==16)
{ char temp[200];
   for(int i;integral[i]!='\0';i++)
 { switch(integral[i])
   { case 0: temp[i++]=0;temp[i++]=0;temp[i++]=0;temp[i++]=0;break;
     case 1: temp[i++]=0;temp[i++]=0;temp[i++]=0;temp[i++]=1;break;
     case 2: temp[i++]=0;temp[i++]=0;temp[i++]=1;temp[i++]=0;break;
     case 3: temp[i++]=0;temp[i++]=0;temp[i++]=1;temp[i++]=1;break;
     case 4: temp[i++]=0;temp[i++]=1;temp[i++]=0;temp[i++]=0;break;
     case 5: temp[i++]=0;temp[i++]=1;temp[i++]=0;temp[i++]=1;break;
     case 6: temp[i++]=0;temp[i++]=1;temp[i++]=1;temp[i++]=0;break;
     case 7: temp[i++]=0;temp[i++]=1;temp[i++]=1;temp[i++]=1;break;
     case 8: temp[i++]=1;temp[i++]=0;temp[i++]=0;temp[i++]=0;break;
     case 9: temp[i++]=1;temp[i++]=0;temp[i++]=0;temp[i++]=1;break;   }
   for(int i=0;fractional[i]='\0';i++)
   { switch(fractional[i])
   {  case 0: temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;break;
     case 1: temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;break;
     case 2: temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;break;
     case 3: temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;break;
     case 4: temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;break;
     case 5: temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;break;
     case 6: temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;break;
     case 7: temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;break;
     case 8: temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;break;
     case 9: temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;break;
    
   }
   }
}	temp[i]='\0';temp2[i]='\0';
for(int i=0;temp2[i]<strlen(temp2);i++)
{
fractional[i]=temp2[i];	
}
for(int i=0;temp1[i]<strlen(temp1);i++)
{
integral[i]=temp[i];	
}


int s=(strlen(integral))%3,t=(strlen(fractional))%3;
    if(s==0)
      strcpy(integralf,integral);
    else if(s==1)
    { integralf[0]=0;
     int i;
      for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+1]=integral[i];
	  }
	  integralf[i]='\0';
	}
	else if(s==2)
	{ int i;
	  integralf[0]=0;integralf[1]=0;
	  for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+2]=integral[i];
	  }
	  integralf[i]='\0';	
	}else;
	strcpy(fractionalf,fractional);
	if(t==0)
      strcpy(fractionalf,fractional);
    else if(t==1)
    { fractionalf[(strlen(fractional))-1]=0;fractionalf[(strlen(fractional))]='\0';
      
	}
	else if(s==2)
	{ 
	  fractionalf[(strlen(fractional)-1)]=0;fractionalf[(strlen(fractional))]=0;
	fractionalf[(strlen(fractional)+1)]='\0';
	 }else;
	int j;
  for( j=0;j<strlen(integralf);j++)
  { 
    for(int i=0;i<4;i++)
    { 
      temp[i]=integralf[j];
      j++;
	}temp[j]='\0';j--;
   if(temp=="0000")
      {integralf2[k]=0;k++; }
   else if(temp=="0001")
      {integralf2[k]=1;k++; }
   else if(temp=="0010")
      {integralf2[k]=2;k++; }
   else if(temp=="0011")
      {integralf2[k]=3;k++; }
   else if(temp=="0100")
      {integralf2[k]=4;k++; }
   else if(temp=="0101")
      {integralf2[k]=5;k++; }
   else if(temp=="0110")
      {integralf2[j]=6;k++; }
   else if(temp=="0111")
      {integralf2[k]=7;k++; }
   else if(temp=="1000")
      {integralf2[k]=8;k++; }
   else if(temp=="1001")
      {integralf2[k]=9;k++; }
   else if(temp=="1010")
      {integralf2[k]='A';k++; }
   else if(temp=="1011")
      {integralf2[k]='B';k++; }
   else if(temp=="1100")
      {integralf2[k]='C';k++; }
   else if(temp=="1101")
      {integralf2[k]='D';k++; }
   else if(temp=="1110")
      {integralf2[k]='E';k++; }
   else if(temp=="1111")
      {integralf2[k]='F';k++; }
   else integralf2[strlen(integralf2)]='\0';
  } integralf2[strlen(integralf2)]='\0';
   for(int j=0;j<(strlen(fractionalf))+2;j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp2[i]=fractional[j];
      j++;
	}temp[j]='\0';j--;
   if(temp=="0000")
      {fractionalf2[l]=0;l++; }
   else if(temp=="0001")
      {fractionalf2[l]=1;l++; }
   else if(temp=="0010")
      {fractionalf2[l]=2;l++; }
   else if(temp=="0011")
      {fractionalf2[l]=3;l++; }
   else if(temp=="0100")
      {fractionalf2[l]=4;l++; }
   else if(temp=="0101")
      {fractionalf2[l]=5;l++; }
   else if(temp=="0110")
      {fractionalf2[l]=6;l++; }
   else if(temp=="0111")
      {fractionalf2[l]=7;l++; }
   else if(temp=="1000")
      {fractionalf2[l]=8;l++; }
   else if(temp=="1001")
      {fractionalf2[l]=9;l++; }
   else if(temp=="1010")
      {fractionalf2[l]='A';l++; }
   else if(temp=="1011")
      {fractionalf2[l]='B';l++; }
   else if(temp=="1100")
      {fractionalf2[l]='C';l++; }
   else if(temp=="1101")
      {fractionalf2[l]='D';l++; }
   else if(temp=="1110")
      {fractionalf2[l]='E';l++; }
   else if(temp=="1111")
      {fractionalf2[l]='F';l++; }
   else fractionalf2[strlen(fractionalf2)]='\0';
  } fractionalf2[strlen(fractionalf2)]='\0';
   
   for(int i=0;i<strlen(integralf2);i++)
   { 
    printf("%c",integralf2[i]);
   }printf("%c",point);
   
   for(int i=0;i<strlen(fractionalf2);i++)
   { 
    printf("%c",fractionalf2[i]);
   }

}else;break;
case 16:
  		if(targ_base==10)
		{
			for(int i=0;integral[i]!='\0';i++)
  {
  	integralnum=+integral[strlen(integral)-1-i]*pow(10,i);
  }
		for( int i=0;r>0||integralnum!=0&&i<strlen(temp);i++)
		{ 
		   r=integralnum%10;
		   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
		      sum1=sum1+r*pow(curr_base,i);
		else{
			switch(r)
			{ case 'a':
			  case 'A' : r=10;break;
			  case 'b':
			  case 'B' : r=11;break;
			  case 'c':
			  case 'C' : r=12;break;
			  case 'd':
			  case 'D' : r=13;break;
			  case 'e':
			  case 'E' : r=14;break;
			  case 'f':
			  case 'F' : r=15;break;
			  	
			}
		    sum1=sum1+ r*pow(curr_base,i);
			}   
		temp[i]=fractional[i];
		if(temp[i]==0||temp[i]==1||temp[i]==2||temp[i]==3||temp[i]==4||temp[i]==5||temp[i]==6||temp[i]==7||temp[i]==8||temp[i]==9)
			sum2=sum2+(temp[i]*pow(curr_base,-i));
		else
		{
			switch(temp[i])
			{ case 'a':
			  case 'A' : temp[i]=10;break;
			  case 'b':
			  case 'B' :  temp[i]=11;break;
			  case 'c':
			  case 'C' :  temp[i]=12;break;
			  case 'd':
			  case 'D' :  temp[i]=13;break;
			  case 'e':
			  case 'E' :  temp[i]=14;break;
			  case 'f':
			  case 'F' :  temp[i]=15;break;
			  	
			}
		    sum2=sum2+ (temp[i]*pow(curr_base,i));
		    integralnum=integralnum/10;
		    
		}
		printf("%d%c%d",sum1,point,sum2);
	}temp[strlen(temp)]='\0';
}
else if(targ_base==2)
{ int i;
 char temp[200];
 for( i=0;integral[i]!='\0';i++)
 { switch(integral[i])
   { case 0: temp[i++]=0;temp[i++]=0;temp[i++]=0;temp[i++]=0;break;
     case 1: temp[i++]=0;temp[i++]=0;temp[i++]=0;temp[i++]=1;break;
     case 2: temp[i++]=0;temp[i++]=0;temp[i++]=1;temp[i++]=0;break;
     case 3: temp[i++]=0;temp[i++]=0;temp[i++]=1;temp[i++]=1;break;
     case 4: temp[i++]=0;temp[i++]=1;temp[i++]=0;temp[i++]=0;break;
     case 5: temp[i++]=0;temp[i++]=1;temp[i++]=0;temp[i++]=1;break;
     case 6: temp[i++]=0;temp[i++]=1;temp[i++]=1;temp[i++]=0;break;
     case 7: temp[i++]=0;temp[i++]=1;temp[i++]=1;temp[i++]=1;break;
     case 8: temp[i++]=1;temp[i++]=0;temp[i++]=0;temp[i++]=0;break;
     case 9: temp[i++]=1;temp[i++]=0;temp[i++]=0;temp[i++]=1;break;
case'A':case 'a': temp[i++]=1;temp[i++]=0;temp[i++]=1;temp[i++]=0;break;
case'B':case 'b': temp[i++]=1;temp[i++]=0;temp[i++]=1;temp[i++]=1;break;
case'C':case 'c': temp[i++]=1;temp[i++]=1;temp[i++]=0;temp[i++]=0;break;
case'D':case 'd': temp[i++]=1;temp[i++]=1;temp[i++]=0;temp[i++]=1;break;
case'E':case 'e': temp[i++]=1;temp[i++]=1;temp[i++]=1;temp[i++]=0;break;
case'F':case 'f': temp[i++]=1;temp[i++]=1;temp[i++]=1;temp[i++]=1;break;
   }
   for(int i=0;fractional[i]='\0';i++)
   { switch(fractional[i])
   { case 0: temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;break;
     case 1: temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;break;
     case 2: temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;break;
     case 3: temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;break;
     case 4: temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;break;
     case 5: temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;break;
     case 6: temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;break;
     case 7: temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;break;
     case 8: temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;temp2[i++]=0;break;
     case 9: temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;temp2[i++]=1;break;
case 'A':case 'a': temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;break;
case 'B':case 'b': temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;break;
case 'C':case 'c': temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;break;
case 'D':case 'd': temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;break;
case 'E':case 'e': temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;break;
case 'F':case 'f': temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;break;
   
    
   }
   }
}temp[i]='\0';temp2[i]='\0';
for(int i=0;i<strlen(temp);i++)
{printf("%d",temp[i]);
}printf(".");
for(int i=0;i<strlen(temp2);i++)
{printf("%d",temp2[i]);
}
} else;
break; 
	    
case 10:
  	if(targ_base==8||targ_base==2||targ_base==16)
  	{int i;
  	   for( i=0;fractional[i]!='\0';i++)
  	   {
  	   	fractionalnum=fractionalnum+(fractional[i]*pow(10,i));
	   }
  	for( i=0;integral[i]!='\0';i++)
  	   {
  	   	integralnum=integralnum+(integral[i]*pow(10,i));size++;	
	   }size--;
	   
	for(int  i=0;integralnum!=0||(temp4[i]!=1||temp4[i]!=7);i++)
	{  r=integralnum%10;
	   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
	   f[size-i]=r;
	   else
	   switch(r)
	   { case 10:f[size-i]='A';break;
	     case 11:f[size-i]='B';break;
	     case 12:f[size-i]='C';break;
	     case 13:f[size-i]='D';break;
	     case 14:f[size-i]='E';break;
	     case 15:f[size-i]='F';break;
	   }
	   integralnum=integralnum/targ_base;
	   fractionalnum=fractionalnum/pow(10,strlen(fractional));
	   temp3=(fractionalnum)*targ_base;
	   if(temp3==0||temp3==1||temp3==2||temp3==3||temp3==4||temp3==5||temp3==6||temp3==7||temp3==8||temp3==9)
	   temp4[i]=temp3;
	   else
	   switch(temp3)
	   { case 10:temp4[size-i]='A';break;
	     case 11:temp4[size-i]='B';break;
	     case 12:temp4[size-i]='C';break;
	     case 13:temp4[size-i]='D';break;
	     case 14:temp4[size-i]='E';break;
	     case 15:temp4[size-i]='F';break;
	   }
	   
       t=i;   
	}f[strlen(f)]='\0';temp4[strlen(temp4)]='\0';
		for(int j=0;j<strlen(f);j++)
		{printf("%d",f[i]);
		}printf("%c",point);
        for(int j=0;j<strlen(temp4);j++)
		{printf("%d",temp4[i]);
		}

    }else;
    break;
case 2:
	if(targ_base==10)
		{int i;
         		  for(int i=0;integral[i]!='\0';i++)
            {
  	           integralnum=+integral[strlen(integral)-1-i]*pow(10,i);
            }
		for( i=0;r>0||integralnum!=0&&temp[i]<strlen(temp);i++)
		{ 
		   r=integralnum%10;
		   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
		      sum1=sum1+r*pow(curr_base,i);
		else{
			switch(r)
			{ case 'a':
			  case 'A' : r=10;break;
			  case 'b':
			  case 'B' : r=11;break;
			  case 'c':
			  case 'C' : r=12;break;
			  case 'd':
			  case 'D' : r=13;break;
			  case  'e':
			  case 'E' : r=14;break;
			  case 'f':
			  case 'F' : r=15;break;
			  	
			}
		    sum1=sum1+ r*pow(curr_base,i);
			}   
		temp[i]=fractional[i];
		if(temp[i]==0||temp[i]==1||temp[i]==2||temp[i]==3||temp[i]==4||temp[i]==5||temp[i]==6||temp[i]==7||temp[i]==8||temp[i]==9)
			sum2=sum2+(temp[i]*pow(curr_base,-i));
		else
		{
			switch(temp[i])
			{ case 'a':
			  case 'A' : temp[i]=10;break;
			  case 'b':
			  case 'B' : temp[i]=11;break;
			  case 'c':
			  case 'C' : temp[i]=12;break;
			  case 'd':
			  case 'D' : temp[i]=13;break;
			  case 'e':
			  case 'E' : temp[i]=14;break;
			  case 'f':
			  case 'F' : temp[i]=15;break;
			  	
			}
		    sum1=sum1+ (temp[i]*pow(curr_base,i));
		    integralnum=integralnum/10;
		    
		}
		printf("%d%c%d",sum1,point,sum2);
		}temp[i]='\0';;
		}	
  
else if(targ_base==8)
    {
	int s=(strlen(integral))%3,t=(strlen(fractional))%3;
    if(s==0)
      strcpy(integralf,integral);
    else if(s==1)
    { integralf[0]=0;int i;
      for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+1]=integral[i];
	  }integralf[i]='\0';
	}
	else if(s==2)
	{ int i;
	  integralf[0]=0;integralf[1]=0;
	  for(int i=0;i<strlen(integral);i++)
      { 
        integralf[i+2]=integral[i];
	  }	integralf[i]='\0';
	}else;
	strcpy(fractionals,fractional);
	if(t==0)
      strcpy(fractionals,fractional);
    else if(t==1)
    { integralf[(strlen(fractional))-1]=0;
      
	}
	else if(t==2)
	{ 
	  fractionalf[(strlen(fractional))-1]=0;fractionalf[strlen(fractional)]=0;
	 }else;
	
  for(int j=0;j<strlen(integralf);j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp[i]=integralf[j];
      j++;
	}temp[strlen(temp)]='\0';j--;
   if(temp=="000")
      {integralf2[j]=0;k++; }
   else if(temp=="001")
      {integralf2[j]=1;k++; }
   else if(temp=="010")
      {integralf2[j]=2;k++; }
   else if(temp=="011")
      {integralf2[j]=3;k++; }
   else if(temp=="100")
      {integralf2[j]=4;k++; }
   else if(temp=="101")
      {integralf2[j]=5;k++; }
   else if(temp=="110")
      {integralf2[j]=6;k++; }
   else if(temp=="111")
      {integralf2[j]=7;k++; }
   else;
  }integralf2[(strlen(integralf2))]='\0';
    
   for(int j=0;j<(strlen(fractionalf))+2;j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp2[i]=fractional[j];
      j++;
	}temp2[strlen(temp2)]='\0';j--;
   if(temp2=="000")
      {fractionalf2[j]=0;l++; }
   else if(temp2=="001")
      {fractionalf2[j]=1;l++; }
   else if(temp2=="010")
      {fractionalf2[j]=2;l++; }
   else if(temp2=="011")
      {fractionalf2[j]=3;l++; }
   else if(temp2=="100")
      {fractionalf2[j]=4;l++; }
   else if(temp2=="101")
      {fractionalf2[j]=5;l++; }
   else if(temp2=="110")
      {fractionalf2[j]=6;l++; }
   else if(temp2=="111")
      {fractionalf2[j]=7;l++; }
   else;
   }
   fractionalf2[strlen(fractionalf2)]='\0';
   for(int i=0;i<strlen(integralf2);i++)
   { 
    printf("%c",integralf2[i]);
   }printf("%c",point);
   
   for(int i=0;i<strlen(fractionalf2);i++)
   { 
    printf("%c",fractionalf2[i]);
   }
}else
 if(targ_base==16)
 {
	int s=(strlen(integral))%3,t=(strlen(fractional))%3;
    if(s==0)
      strcpy(integralf,integral);
    else if(s==1)
    { integralf[0]=0;int i;
      for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+1]=integral[i];
	  }integralf[i]='\0';
	}
	else if(s==2)
	{ int i;
	  integralf[0]=0;integralf[1]=0;
	  for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+2]=integral[i];
	  }	integralf[i]='\0';
	}else;
	strcpy(fractionals,fractional);
	if(t==0)
      strcpy(fractionals,fractional);
    else if(t==1)
    { fractionalf[(strlen(fractional))]=0;
      fractionalf2[(strlen(fractionalf2))]='\0';
	}
	else if(t==2)
	{ 
	  fractionalf[(strlen(fractional))]=0;fractionalf[(strlen(fractional))+1]=0;
	 fractionalf2[(strlen(fractionalf2))]='\0';}else;
	
  for(int j=0;j<strlen(integralf);j++)
  { int i;
    for( i=0;i<4;i++)
    { 
      temp[i]=integralf[j];
      j++;
	}temp[strlen(temp)]='\0';
   if(temp=="0000")
      {integralf2[j]=0;k++; }
   else if(temp=="0001")
      {integralf2[j]=1;k++; }
   else if(temp=="0010")
      {integralf2[j]=2;k++; }
   else if(temp=="0011")
      {integralf2[j]=3;k++; }
   else if(temp=="0100")
      {integralf2[j]=4;k++; }
   else if(temp=="0101")
      {integralf2[j]=5;k++; }
   else if(temp=="0110")
      {integralf2[j]=6;k++; }
   else if(temp=="0111")
      {integralf2[j]=7;k++; }
   else if(temp=="1000")
      {integralf2[j]=8;k++; }
   else if(temp=="1001")
      {integralf2[j]=9;k++; }
   else if(temp=="1010")
      {integralf2[j]='A';k++; }
   else if(temp=="1011")
      {integralf2[j]='B';k++; }
   else if(temp=="1100")
      {integralf2[j]='C';k++; }
   else if(temp=="1101")
      {integralf2[j]='D';k++; }
   else if(temp=="1110")
      {integralf2[j]='E';k++; }
   else if(temp=="1111")
      {integralf2[j]='F';k++; }
   else integralf2[(strlen(integralf2))]='\0' ;
  }
    integralf2[(strlen(integralf2))]='\0';
   for(int j=0;j<(strlen(fractionalf))+2;j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp2[i]=fractional[j];
      j++;
	}temp2[strlen(temp)]='\0';
   if(temp2=="0000")
      {fractionalf2[j]=0;l++; }
   else if(temp2=="0001")
      {fractionalf2[j]=1;l++; }
   else if(temp2=="0010")
      {fractionalf2[j]=2;l++; }
   else if(temp2=="0011")
      {fractionalf2[j]=3;l++; }
   else if(temp2=="0100")
      {fractionalf2[j]=4;l++; }
   else if(temp2=="0101")
      {fractionalf2[j]=5;l++; }
   else if(temp2=="0110")
      {fractionalf2[j]=6;l++; }
   else if(temp2=="0111")
      {fractionalf2[j]=7;l++; }
   else if(temp2=="1000")
      {fractionalf2[j]=8;l++; }
   else if(temp2=="1001")
      {fractionalf2[j]=9;l++; }
   else if(temp2=="1010")
      {fractionalf2[j]='A';l++; }
   else if(temp2=="1011")
      {fractionalf2[j]='B';l++; }
   else if(temp2=="1100")
      {fractionalf2[j]='C';l++; }
   else if(temp2=="1101")
      {fractionalf2[j]='D';l++; }
   else if(temp2=="1110")
      {fractionalf2[j]='E';l++; }
   else if(temp2=="1111")
      {fractionalf2[j]='F';l++; }
   else fractionalf2[(strlen(fractionalf2))]='\0';;
  }
   fractionalf2[(strlen(fractionalf2))]='\0';
   for(int i=0;i<strlen(integralf2);i++)
   { 
    printf("%c",integralf2[i]);
   }printf("%c",point);
   
   for(int i=0;i<strlen(fractionalf2);i++)
   { 
    printf("%c",fractionalf2[i]);
   }
}else ;  break; 
  
   }
return 0;}
