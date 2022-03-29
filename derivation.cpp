#include<stdio.h>
//#include<stdlib.h>
#include<math.h>
double power(double x)//derivative of power function
{
	double exp,der1,der2,y0,y1,y2,y3,y4,sum=0,dx=0.01,coeff;//y2-y1,y4-y3 are used to divided by dx to get derivatives
	int num;//number of terms
	printf("please input the number of terms like x^a(项数）\n");
	scanf("%d",&num);
	for(int j=1;j<=num;j++)
	{
		printf("please input the exponential（指数） of x\n");
		scanf("%lf",&exp);
		printf("please input the coefficient（系数） of it\n");
		scanf("%lf",&coeff);
		y0=pow(x,exp);
		for(int i=0;i<=100;i++)
		{
			y1=pow(x-dx,exp);
			y2=pow(x+dx,exp);
			y3=pow(x-2*dx,exp);
			y4=pow(x+2*dx,exp);
			der2=(y4-y3)/(4*dx);
			der1=(y2-y1)/(2*dx);
			if(fabs(der1-der2)<=1e-6)//compare derivative1 and derivateive2 to ensure the accurence has been reduced to 1e-6
			{
				break;
				}
			else
				dx=dx/10;
		}
		sum+=coeff*der1;
	}
	if(num==0)
		sum=0;
	printf("%lf\n",sum);
	return sum;
}
double exp(double x)//derivative of exponential function
{
	double base,der1,der2,y0,y1,y2,y3,y4,sum=0,dx=0.01,coeff;
	int num;
	printf("please input the number of terms like a^x(项数）\n");
	scanf("%d",&num);
	if(num!=0)
	{
		for(int j=1;j<=num;j++)
		{
			printf("please input the base（底数） of x\n");
			scanf("%lf",&base);
			printf("please input the coefficient（系数） of it\n");
			scanf("%lf",&coeff);
			y0=pow(base,x);
			for(int i=0;i<=100;i++)
			{
				y1=pow(base,x-dx);
				y2=pow(base,x+dx);
				y3=pow(base,x-2*dx);
				y4=pow(base,x+2*dx);
				der1=(y4-y3)/(4*dx);
				der2=(y2-y1)/(2*dx);
				printf("%lf\n",der1);
				printf("%lf\n",der2);
				if(fabs(der1-der2)<=1e-6)
				{
					break;
				}
				else
					dx=dx/10;	
			}
			sum=sum+coeff*der1;
		}
	}
	else
		sum=0;
	printf("%lf\n",sum);
	return sum;
}
double log(double x)//derivative of logarithmic functions
{
	double base,sum=0,dx=0.01,coeff;
	int num,j;
	printf("please input the number of terms like log a x(项数）\n");
	scanf("%d",&num);
	if(num!=0)
	{
		for(j=1;j<=num;j++)
		{
			printf("please input the base（底数） of x\n");
			scanf("%lf",&base);
			printf("please input the coefficient（系数） of it\n");
			scanf("%lf",&coeff);
			sum=sum+coeff/(x*log(base));
			printf("%lf\n",sum);
		}
	}
	else
	{
		sum=0;
	}
	return sum;
}

int main()
{
	double a,b,c,x;
	printf("please input the value of x（取值）\n") ;
	scanf("%lf",&x);
	a=power(x);
	b=exp(x);
	c=log(x);
	printf("%lf",a+b);
	return 0;
}
