import java.util.*;
public class Electronic {
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int d,n,m;
int max1=-1;
d=sc.nextInt();
n=sc.nextInt();
m=sc.nextInt();
int keyboard[]=new int[n];
int usb[]=new int[m];
int left[]=new int[1000];
for(int i=0;i<n;i++)
{
keyboard[i]=sc.nextInt();	
}
for(int i=0;i<m;i++)
{
usb[i]=sc.nextInt();	
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(keyboard[i]+usb[j]<=d)
{
	//left[j]=keyboard[i]+usb[j];
	left[i]=keyboard[i]+usb[j];
	Math.max(max1,left[i]);
	
}

}
}
/*int max=-1;
for(int i=0;i<1000;i++)
{
if(left[i]>max)
{
	max=left[i];
}

}
*/
System.out.println(max1);
}
}

//this code is not currently working
