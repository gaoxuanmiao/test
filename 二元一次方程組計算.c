main(){
	double i,j,n,m,g,h,a,b,c,aa,bb,cc,x,y,quit;
	beginning:
	printf("ax+by=c,aax+bby=cc\n");
	scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&aa,&bb,&cc);
	i=a*aa;j=b*aa;g=c*aa;n=aa*a;m=bb*a;h=cc*a;
	y=(g-h)/(j-m);
	x=(c-b*y)/(a);
	printf("x=%lf,y=%lf",x,y);
	//if(a*x+b*y==c&&aa*x+bb*y==cc)printf("correct");else printf("wrong");
	printf("next by 1,quit by 2");scanf("%lf",&quit);if(quit==1) goto beginning;
	}