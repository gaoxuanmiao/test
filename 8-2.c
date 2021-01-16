double p(int n,double x);
int main()
{
	int n;
	double x,result;
scanf("%d%lf",&n,&x);
result=p(n,x);
printf("%d  %.2lf  %.2lf",n,x,result);}


double p(int n,double x)
{double i;
if(n==0)i=1;
else if(n==1)i=x;
else if(n>1)
i=((2*n-1)*p((n-1),x)-(n-1)*p((n-2),x))/n;
return i;}