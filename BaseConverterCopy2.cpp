#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<math.h>
#include<string.h>

 using namespace std;

int main()
{ char number[60],integral[150],fractional[100],temp1[60],temp2[60],temp4[60],point='.';
char fractionalf2[62],integralf2[60],integrals[60],fractionals[60],f[60];
  int found=0,integralnum=0,size=strlen(integral),temp3,t,s,l=0,k=0,length,integralInt[60],fractionalInt[60],r=0,temp[60],integralf[60],fractionalf[62];
  float fractionalnum=0;
  int curr_base,targ_base,sum1=0,sum2=0;
  printf("Enter the number whose base you wanna change\n");
  scanf("%s",&number);
  printf("\nEnter the current base and target base of the number\n");
  scanf("%d%d",&curr_base,&targ_base);
  
  
  int i,m;
  for(i=0;number[i]!='\0';i++)
  { 
         if(number[i]=='.')
         { 
		     m=i;int j;
             for( j=0;number[m]!='\0';j++,m++)
             {
             	fractional[j]=number[m];
			 }fractional[j]='\0';
			 break;
         }
	else{
	         integral[i] = number[i];
	    }
  } 
  integral[i]='\0';
  for(int i=0;integral[i]!='\0';i++)
{
	switch(integral[i])
	{
		case 1:integralInt[i]=1;
		case 2:integralInt[i]=2;
		case 3:integralInt[i]=3;
		case 4:integralInt[i]=4;
		case 5:integralInt[i]=5;
		case 6:integralInt[i]=6;
		case 7:integralInt[i]=7;
		case 8:integralInt[i]=8;
		case 9:integralInt[i]=9;
		case 0:integralInt[i]=0;
	case 'a':case 'A':integralInt[i]=10;
	case 'B':case 'b':integralInt[i]=11;
		
	case 'c':case 'C':integralInt[i]=12;	
	case 'd':case 'D':integralInt[i]=13;	
	case 'e':case 'E':integralInt[i]=14;	
	case 'f':case 'F':integralInt[i]=15;	
	
	}
}  
  
  for(int i=0;fractional[i]!='\0';i++)
{
	switch(fractional[i])
	{
		case 1:fractionalInt[i]=1;
		case 2:fractionalInt[i]=2;
		case 3:fractionalInt[i]=3;
		case 4:fractionalInt[i]=4;
		case 5:fractionalInt[i]=5;
		case 6:fractionalInt[i]=6;
		case 7:fractionalInt[i]=7;
		case 8:fractionalInt[i]=8;
		case 9:fractionalInt[i]=9;
		case 0:fractionalInt[i]=0;
	case 'a':case 'A':fractionalInt[i]=10;
	case 'B':case 'b':fractionalInt[i]=11;
	
	case 'c':case 'C':fractionalInt[i]=12;	
	case 'd':case 'D':fractionalInt[i]=13;	
	case 'e':case 'E':fractionalInt[i]=14;	
	case 'f':case 'F':fractionalInt[i]=15;	
	
	}
} 
  for(int i=0;i<strlen(integral);i++)
  {
  	integralnum=+integralInt[strlen(integral)-1-i]*pow(10,i);
  }

  for(int i=0;i<strlen(fractional);i++)
  {
  	fractionalnum=+fractionalInt[strlen(fractional)-1-i]*pow(10,i);
  }  

  
  switch(curr_base)
  { case 8:
     if(targ_base==10)
		{ for(int i=0;integralnum!=0&&temp[i]!='\0';i++)
		{ 
		   r=integralnum%10;
		   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
		      sum1=sum1+r*pow(curr_base,i);
		else printf("You gave invalid octal number ");
			   
		temp[i]=fractionalInt[i];
		if(temp[i]==0||temp[i]==1||temp[i]==2||temp[i]==3||temp[i]==4||temp[i]==5||temp[i]==6||temp[i]==7||temp[i]==8||temp[i]==9)
			sum2=sum2+(temp[i]*pow(curr_base,-i));
		else
		{
			printf("You gave invalid octal number ");
		}
		printf("%d%c%d",sum1,point,sum2);
	}
}
else if(targ_base==2)
{ 
 int temp[200],temp2[100],found=0,flag=0;
 for(int i=0;i<strlen(integral);i++)
 { switch(integralInt[i])
   { case 0: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0; found++;break;
     case 1: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
     case 2: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;break;
     case 3: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;break;
     case 4: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;break;
     case 5: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
     case 6: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=0;found++;break;
     case 7: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=1;found++;break;
     case 8: temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;break;
     case 9: temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
 }
   for(int i=0;i<strlen(fractional);i++)
   { switch(fractionalInt[i])
   { case 0: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;break;
     case 1: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;break;
     case 2: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;break;
     case 3: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;break;
     case 4: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;break;
     case 5: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;break;
     case 6: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;break;
     case 7: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;break;
     case 8: temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;break;
     case 9: temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;break;
   }
   }
}

for(int i=0;i<found;i++)
{printf("%d",temp[i]);
}printf(".");

for(int i=0;i<flag;i++)
{printf("%d",temp2[i]);
}
}else ;

int integralInt2[150],fractionalInt2[100];
   char temp[200],temp2[150],integral2[150],fractional2[100];
if(targ_base==16)
{ int found=0,flag=0;char temps[5],temp4[4];
   for(int i=0;i<strlen(integral);i++)
 { switch(integralInt[i])
   { case 0: temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='0'; found++;break;
     case 1: temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='1';found++;break;
     case 2: temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='1';found++;temp[i++]='0';found++;break;
     case 3: temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='1';found++;temp[i++]='1';found++;break;
     case 4: temp[i++]='0';found++;temp[i++]='1';found++;temp[i++]='0';found++;temp[i++]='0';found++;break;
     case 5: temp[i++]='0';found++;temp[i++]='1';found++;temp[i++]='0';found++;temp[i++]='1';found++;break;
     case 6: temp[i++]='0';found++;temp[i++]='1';found++;temp[i++]='1';found++;temp[i++]='0';found++;break;
     case 7: temp[i++]='0';found++;temp[i++]='1';found++;temp[i++]='1';found++;temp[i++]='1';found++;break;
     case 8: temp[i++]='1';found++;temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='0';found++;break;
     case 9: temp[i++]='1';found++;temp[i++]='0';found++;temp[i++]='0';found++;temp[i++]='1';found++;break;
    }
}
   for(int i=0;fractional[i]='\0';i++)
   { switch(fractionalInt[i])
   { case 0: temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;break;
     case 1: temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='1';flag++;break;
     case 2: temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='1';flag++;temp2[i++]='0';flag++;break;
     case 3: temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='1';flag++;temp2[i++]='1';flag++;break;
     case 4: temp2[i++]='0';flag++;temp2[i++]='1';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;break;
     case 5: temp2[i++]='0';flag++;temp2[i++]='1';flag++;temp2[i++]='0';flag++;temp2[i++]='1';flag++;break;
     case 6: temp2[i++]='0';flag++;temp2[i++]='1';flag++;temp2[i++]='1';flag++;temp2[i++]='0';flag++;break;
     case 7: temp2[i++]='0';flag++;temp2[i++]='1';flag++;temp2[i++]='1';flag++;temp2[i++]='1';flag++;break;
     case 8: temp2[i++]='1';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;break;
     case 9: temp2[i++]='1';flag++;temp2[i++]='0';flag++;temp2[i++]='0';flag++;temp2[i++]='1';flag++;break;
   }
   }temp[i]='\0';temp2[i]='\0';
	
for(int i=0;i<flag;i++)
{
fractional2[i]=temp2[i];	
}
for(int i=0;i<found;i++)
{
integral2[i]=temp[i];	
}

 for(int i=0;integral2[i]!='\0';i++)
{
	switch(integral2[i])
	{
		case 1:integralInt2[i]=1;
		case 2:integralInt2[i]=2;
		case 3:integralInt2[i]=3;
		case 4:integralInt2[i]=4;
		case 5:integralInt2[i]=5;
		case 6:integralInt2[i]=6;
		case 7:integralInt2[i]=7;
		case 8:integralInt2[i]=8;
		case 9:integralInt2[i]=9;
		case 0:integralInt2[i]=0;
	}
}  
  
  for(int i=0;fractional[i]!='\0';i++)
{
	switch(fractional2[i])
	{
		case 1:fractionalInt2[i]=1;
		case 2:fractionalInt2[i]=2;
		case 3:fractionalInt2[i]=3;
		case 4:fractionalInt2[i]=4;
		case 5:fractionalInt2[i]=5;
		case 6:fractionalInt2[i]=6;
		case 7:fractionalInt2[i]=7;
		case 8:fractionalInt2[i]=8;
		case 9:fractionalInt2[i]=9;
		case 0:fractionalInt2[i]=0;
	}
}

int s=(strlen(integral2))%3,t=(strlen(fractional2))%3; found=0,flag=0;char temps2[5];
    if(s==0)
    {
	   int j;
   
      for(j=0;j<strlen(integral2);j++)
      {
      	integralf[j]=integralInt2[j];
      	found++;
	  }
    }else if(s==1)
    { integralf[0]=0;found++;
     int i;
      for( i=0;i<strlen(integral2);i++)
      { 
        integralf[i+1]=integralInt2[i];found++;
	  }
	}
	else if(s==2)
	{ int i;
	  integralf[0]=0;integralf[1]=0;found+=2;
	  for( i=0;i<strlen(integral2);i++)
      { 
        integralf[i+2]=integralInt2[i];found++;
	  }
	  	
	}else;

	  
   
      for(int j=0;j<strlen(fractional2);j++)
      {
      	fractionalf[j]=fractionalInt2[j];
	    flag++;
	  }
    
	if(t==0)
    {
	   int j;
   
      for(int j=0;j<strlen(fractional2);j++)
      {
      	fractionalf[j]=fractionalInt2[j];flag++;
	  }
    }    else if(t==1)
    { fractionalf[(strlen(fractional2))-1]=0;
      flag++;
	}
	else if(s==2)
	{ 
	  fractionalf[(strlen(fractional2)-1)]=0;fractionalf[(strlen(fractional2))]=0;
	  flag+=2;
	}else;
	int j;
  for( j=0;j<found;j++)
  { 
    for(int i=0;i<4;i++)
    { 
      temps2[i]='integralf[j]';
      j++;
	}temps[j]='\0';j--;
   if(temps2=="0000")
      {integralf2[k]='0';k++; }
   else if(temps2=="0001")
      {integralf2[k]='1';k++; }
   else if(temps2=="0010")
      {integralf2[k]='2';k++; }
   else if(temps2=="0011")
      {integralf2[k]='3';k++; }
   else if(temps2=="0100")
      {integralf2[k]='4';k++; }
   else if(temps2=="0101")
      {integralf2[k]='5';k++; }
   else if(temps2=="0110")
      {integralf2[j]='6';k++; }
   else if(temps2=="0111")
      {integralf2[k]='7';k++; }
   else if(temps2=="1000")
      {integralf2[k]='8';k++; }
   else if(temps2=="1001")
      {integralf2[k]='9';k++; }
   else if(temps2=="1010")
      {integralf2[k]='A';k++; }
   else if(temps2=="1011")
      {integralf2[k]='B';k++; }
   else if(temps2=="1100")
      {integralf2[k]='C';k++; }
   else if(temps2=="1101")
      {integralf2[k]='D';k++; }
   else if(temps2=="1110")
      {integralf2[k]='E';k++; }
   else if(temps2=="1111")
      {integralf2[k]='F';k++; }
   else integralf2[found]='\0';
  } integralf2[found]='\0';
   for(int j=0;j<flag;j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp4[i]='fractionalf[j]';
      j++;
	}temp4[j]='\0';j--;
   if(temp4=="0000")
      {fractionalf2[l]='0';l++; }
   else if(temp4=="0001")
      {fractionalf2[l]='1';l++; }
   else if(temp4=="0010")
      {fractionalf2[l]='2';l++; }
   else if(temp4=="0011")
      {fractionalf2[l]='3';l++; }
   else if(temp4=="0100")
      {fractionalf2[l]='4';l++; }
   else if(temp4=="0101")
      {fractionalf2[l]='5';l++; }
   else if(temp4=="0110")
      {fractionalf2[l]='6';l++; }
   else if(temp4=="0111")
      {fractionalf2[l]='7';l++; }
   else if(temp4=="1000")
      {fractionalf2[l]='8';l++; }
   else if(temp4=="1001")
      {fractionalf2[l]='9';l++; }
   else if(temp4=="1010")
      {fractionalf2[l]='A';l++; }
   else if(temp4=="1011")
      {fractionalf2[l]='B';l++; }
   else if(temp4=="1100")
      {fractionalf2[l]='C';l++; }
   else if(temp4=="1101")
      {fractionalf2[l]='D';l++; }
   else if(temp4=="1110")
      {fractionalf2[l]='E';l++; }
   else if(temp4=="1111")
      {fractionalf2[l]='F';l++; }
   else fractionalf2[flag]='\0';
  } fractionalf2[flag]='\0';
   
   for(int i=0;i<flag;i++)
   { 
    printf("%c",integralf2[i]);
   }printf("%c",point);
   
   for(int i=0;i<flag;i++)
   { 
    printf("%c",fractionalf2[i]);
   }

}else;
case 16:
  		if(targ_base==10)
		{ int m;
	
		for( int i=0;i<strlen(integral)&&i<strlen(fractional);i++)
		{ 
		   r=integralInt[strlen(integral)-i-1];
		   
		   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9||r==10||r==11||r==12||r==13||r==14||r==15)
		      sum1=sum1+r*pow(curr_base,i);
		else{
			  printf("There may be an error in integral part of your input");
			}   
		temp[i]=fractionalInt[i];
		if(temp[i]==0||temp[i]==1||temp[i]==2||temp[i]==3||temp[i]==4||temp[i]==5||temp[i]==6||temp[i]==7||temp[i]==8||temp[i]==9||temp[i]==10||temp[i]==11||
		 temp[i]==12||temp[i]==13||temp[i]==14||temp[i]==15)
			sum2=sum2+(temp[i]*pow(curr_base,-i));
		else
		{
			printf("There is having an error in the fractional part of input");
		}
		integralnum=integralnum/10;
		}temp[strlen(fractional)]='\0';
		printf("%d%c%d",sum1,point,sum2);
	
}
else if(targ_base==2)
{ int i;found=0;int flag=0;
 char temp[200],temp2[200];
 for( i=0;integral[i]!='\0';i++)
 { switch(integralInt[i])
   { case 0: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;break;
     case 1: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
     case 2: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;break;
     case 3: temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;break;
     case 4: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;break;
     case 5: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
     case 6: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=0;found++;break;
     case 7: temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=1;found++;break;
     case 8: temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=0;found++;break;
     case 9: temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
case 10: temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=0;found++;break;
case 11: temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=1;found++;temp[i++]=1;found++;break;
case 12: temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=0;found++;break;
case 13: temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=0;found++;temp[i++]=1;found++;break;
case 14: temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=0;found++;break;
case 15: temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=1;found++;temp[i++]=1;found++;break;
   }
   for(int i=0;fractional[i]='\0';i++)
   { switch(fractionalInt[i])
   {  case 0: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;break;
     case 1: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;break;
     case 2: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;break;
     case 3: temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;break;
     case 4: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;break;
     case 5: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;break;
     case 6: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;temp2[i++]=0;flag++;break;
     case 7: temp2[i++]=0;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;temp2[i++]=1;flag++;break;
     case 8: temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;break;
     case 9: temp2[i++]=1;flag++;temp2[i++]=0;flag++;temp2[i++]=0;flag++;temp2[i++]=1;flag++;break;
case 10: temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;temp2[i++]=0;flag+=4;break;
case 11: temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;temp2[i++]=1;flag+=4;break;
case 12: temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;temp2[i++]=0;flag+=4;break;
case 13: temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;temp2[i++]=1;flag+=4;break;
case 14: temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;temp2[i++]=0;flag+=4;break;
case 15: temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;temp2[i++]=1;flag+=4;break;
    
    
   }
   }
}
for(int i=0;i<found;i++)
{printf("%d",temp[i]);
}printf(".");
for(int i=0;i<flag;i++)
{printf("%d",temp2[i]);
}
} else if(targ_base==8)
{
	
	
}else;
break; 
	    
case 10:
  	if(targ_base==8||targ_base==2||targ_base==16)
  	{
  	   for( int i=0;fractional[i]!='\0';i++)
  	   {
  	   	fractionalnum=fractionalnum+(fractionalInt[i]*pow(10,i));
	   }
  	for( int i=0;integral[i]!='\0';i++)
  	   {
  	   	integralnum=integralnum+(integralInt[i]*pow(10,i));size++;	
	   }size--;
	 int j;  
	for( j=0;integralnum!=0;j++)
	{  r=integralnum%10;
	   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
	   f[size-j]='r';
	   else
	   switch(r)
	   { case 10:f[size-j]='A';break;
	     case 11:f[size-j]='B';break;
	     case 12:f[size-j]='C';break;
	     case 13:f[size-j]='D';break;
	     case 14:f[size-j]='E';break;
	     case 15:f[size-j]='F';break;
	   }
	   integralnum=integralnum/targ_base;
	  }f[j]='\0';
	  if(targ_base==2)
	  {
	  float fractionalnumf=fractionalnum/pow(10,strlen(fractional)),fractionalnumfbefore;
	  int k;
	  for(k=0;(temp4[k]!=1||k<7);k++)
	   {  
	       fractionalnumfbefore =fractionalnumf;
	       fractionalnumf=fractionalnumfbefore*targ_base;
	     
	       int temp3=fractionalnumf;
	       fractionalnumf-=temp3;
	              
	   if(temp3==0||temp3==1||temp3==2||temp3==3||temp3==4||temp3==5||temp3==6||temp3==7||temp3==8||temp3==9)
	   temp4[k]='temp3';
	   else
	   switch(temp3)
	   { case 10:temp4[size-k]='A';break;
	     case 11:temp4[size-k]='B';break;
	     case 12:temp4[size-k]='C';break;
	     case 13:temp4[size-k]='D';break;
	     case 14:temp4[size-k]='E';break;
	     case 15:temp4[size-k]='F';break;
	   }
	   
       t=k;   
	  }temp4[k]='\0';
	  
     }
    else if(targ_base==8)
     {

     float fractionalnumf=fractionalnum/pow(10,strlen(fractional)),fractionalnumfbefore;
     int k;
	  for(k=0;(temp4[k]!=8||k<7);k++)
	 {
	       fractionalnumfbefore =fractionalnumf;
	       fractionalnumf=fractionalnumfbefore*targ_base;
	     
	       int temp3=fractionalnumf;
	       fractionalnumf-=temp3;
	    
	   
	   if(temp3==0||temp3==1||temp3==2||temp3==3||temp3==4||temp3==5||temp3==6||temp3==7||temp3==8||temp3==9)
	   temp4[k]='temp3';
	   else
	   switch(temp3)
	   { case 10:temp4[size-k]='A';break;
	     case 11:temp4[size-k]='B';break;
	     case 12:temp4[size-k]='C';break;
	     case 13:temp4[size-k]='D';break;
	     case 14:temp4[size-k]='E';break;
	     case 15:temp4[size-k]='F';break;
	   }
	   
       t=k;   
	  }temp4[k]='\0';
     }
    else if(targ_base==16)
    {
    float fractionalnumf=fractionalnum/pow(10,strlen(fractional)),fractionalnumfbefore;
    int k;
	  for( k=0;(temp4[k]!=15||k<7);k++)
	   {
	       fractionalnumfbefore =fractionalnumf;
	       fractionalnumf=fractionalnumfbefore*targ_base;
	     
	       int temp3=fractionalnumf;
	       fractionalnumf-=temp3;
	    
	   if(temp3==0||temp3==1||temp3==2||temp3==3||temp3==4||temp3==5||temp3==6||temp3==7||temp3==8||temp3==9)
	   temp4[k]='temp3';
	   else
	   switch(temp3)
	   { case 10:temp4[size-k]='A';break;
	     case 11:temp4[size-k]='B';break;
	     case 12:temp4[size-k]='C';break;
	     case 13:temp4[size-k]='D';break;
	     case 14:temp4[size-k]='E';break;
	     case 15:temp4[size-k]='F';break;
	   }
	   
       t=k;   
	  }temp4[k]='\0';
    }else printf("you gave an invalid target base");
	    f[strlen(f)]='\0';temp4[strlen(temp4)]='\0';
		for(int j=0;j<strlen(f);j++)
		{printf("%c",f[i]);
		}printf("%c",point);
        for(int j=0;j<strlen(temp4);j++)
		{printf("%c",temp4[i]);
		}

    }else;
    break;
case 2:
	if(targ_base==10)
		{int i;
        for( i=0;integralnum!=0&&i<strlen(fractional);i++)
		{ 
		   r=integralnum%10;
		   if(r==0||r==1||r==2||r==3||r==4||r==5||r==6||r==7||r==8||r==9)
		      sum1=sum1+r*pow(curr_base,i);
		else{
		   	printf("You gave wrong binary number or number is not of base 2");
			}   
		temp[i]=fractional[i];
		if(temp[i]==0||temp[i]==1||temp[i]==2||temp[i]==3||temp[i]==4||temp[i]==5||temp[i]==6||temp[i]==7||temp[i]==8||temp[i]==9)
			sum2=sum2+(temp[i]*pow(curr_base,-i));
		else
		    
		integralnum=integralnum/10;
	    }temp[i]='\0';
		printf("%d%c%d",sum1,point,sum2);
		}
			
  
else if(targ_base==8)
  {
	int s=(strlen(integral))%3,t=(strlen(fractional))%3;int found=0,flag=0;
    if(s==0)
    {
	   int j;
   
      for(j=0;j<strlen(integral);j++)
      {
      	integralf[j]=integralInt[j];
      	found++;
	  }
    }else if(s==1)
    { integralf[0]=0;found++;
     int i;
      for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+1]=integralInt[i];found++;
	  }
	}
	else if(s==2)
	{ int i;
	  integralf[0]=0;integralf[1]=0;found+=2;
	  for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+2]=integralInt[i];found++;
	  }
	  	
	}else;

	  int j;
   
      for(j=0;j<strlen(fractional);j++)
      {
      	fractionalf[j]=fractionalInt[j];
	    flag++;
	  }
    
	if(t==0)
    {
	   int j;
   
      for(j=0;j<strlen(fractional);j++)
      {
      	fractionalf[j]=fractionalInt[j];flag++;
	  }
    }    else if(t==1)
    { fractionalf[(strlen(fractional))-1]=0;
      flag++;
	}
	else if(s==2)
	{ 
	  fractionalf[(strlen(fractional)-1)]=0;fractionalf[(strlen(fractional))]=0;
	  flag+=2;
	 }else;
	k=0;
  for(int j=0;j<found;j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp[i]='integralf[j]';
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
   else ;
  }
    
   for(int j=0;j<k+2;j++)
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
   else ;
   }
   for(int i=0;i<k;i++)
   { 
    printf("%c",integralf2[i]);
   }printf("%c",point);
   
   for(int i=0;i<l;i++)
   { 
    printf("%c",fractionalf2[i]);
   }
}
else if(targ_base==16)
 {
		int s=(strlen(integral))%3,t=(strlen(fractional))%3;int found=0,flag=0;char temps[5];
    if(s==0)
    {
	   int j;
   
      for(j=0;j<strlen(integral);j++)
      {
      	integralf[j]=integralInt[j];
      	found++;
	  }
    }else if(s==1)
    { integralf[0]=0;found++;
     int i;
      for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+1]=integralInt[i];found++;
	  }
	}
	else if(s==2)
	{ int i;
	  integralf[0]=0;integralf[1]=0;found+=2;
	  for( i=0;i<strlen(integral);i++)
      { 
        integralf[i+2]=integralInt[i];found++;
	  }
	  	
	}else;

	  int j;
   
      for(j=0;j<strlen(fractional);j++)
      {
      	fractionalf[j]=fractionalInt[j];
	    flag++;
	  }
    
	if(t==0)
    {
	   int j;
   
      for(j=0;j<strlen(fractional);j++)
      {
      	fractionalf[j]=fractionalInt[j];flag++;
	  }
    }    else if(t==1)
    { fractionalf[(strlen(fractional))-1]=0;
      flag++;
	}
	else if(s==2)
	{ 
	  fractionalf[(strlen(fractional)-1)]=0;fractionalf[(strlen(fractional))]=0;
	  flag+=2;
	 }else;
	
  for( int j=0;j<found;j++)
  { 
    for(int i=0;i<4;i++)
    { 
      temps[i]='integralf[j]';
      j++;
	}temps[j]='\0';j--;
   if(temps=="0000")
      {integralf2[k]='0';k++; }
   else if(temps=="0001")
      {integralf2[k]='1';k++; }
   else if(temps=="0010")
      {integralf2[k]='2';k++; }
   else if(temps=="0011")
      {integralf2[k]='3';k++; }
   else if(temps=="0100")
      {integralf2[k]='4';k++; }
   else if(temps=="0101")
      {integralf2[k]='5';k++; }
   else if(temps=="0110")
      {integralf2[j]='6';k++; }
   else if(temps=="0111")
      {integralf2[k]='7';k++; }
   else if(temps=="1000")
      {integralf2[k]='8';k++; }
   else if(temps=="1001")
      {integralf2[k]='9';k++; }
   else if(temps=="1010")
      {integralf2[k]='A';k++; }
   else if(temps=="1011")
      {integralf2[k]='B';k++; }
   else if(temps=="1100")
      {integralf2[k]='C';k++; }
   else if(temps=="1101")
      {integralf2[k]='D';k++; }
   else if(temps=="1110")
      {integralf2[k]='E';k++; }
   else if(temps=="1111")
      {integralf2[k]='F';k++; }
   else integralf2[found]='\0';
  } integralf2[found]='\0';
   for(int j=0;j<flag;j++)
  { 
    for(int i=0;i<3;i++)
    { 
      temp4[i]='fractionalf[j]';
      j++;
	}temp4[j]='\0';j--;
   if(temp4=="0000")
      {fractionalf2[l]='0';l++; }
   else if(temp4=="0001")
      {fractionalf2[l]='1';l++; }
   else if(temp4=="0010")
      {fractionalf2[l]='2';l++; }
   else if(temp4=="0011")
      {fractionalf2[l]='3';l++; }
   else if(temp4=="0100")
      {fractionalf2[l]='4';l++; }
   else if(temp4=="0101")
      {fractionalf2[l]='5';l++; }
   else if(temp4=="0110")
      {fractionalf2[l]='6';l++; }
   else if(temp4=="0111")
      {fractionalf2[l]='7';l++; }
   else if(temp4=="1000")
      {fractionalf2[l]='8';l++; }
   else if(temp4=="1001")
      {fractionalf2[l]='9';l++; }
   else if(temp4=="1010")
      {fractionalf2[l]='A';l++; }
   else if(temp4=="1011")
      {fractionalf2[l]='B';l++; }
   else if(temp4=="1100")
      {fractionalf2[l]='C';l++; }
   else if(temp4=="1101")
      {fractionalf2[l]='D';l++; }
   else if(temp4=="1110")
      {fractionalf2[l]='E';l++; }
   else if(temp4=="1111")
      {fractionalf2[l]='F';l++; }
   else fractionalf2[flag]='\0';
  } fractionalf2[flag]='\0';
   
   for(int i=0;i<flag;i++)
   { 
    printf("%c",integralf2[i]);
   }printf("%c",point);
   
   for(int i=0;i<flag;i++)
   { 
    printf("%c",fractionalf2[i]);
   }

}else ;  break; 
  
   }
return 0;}
