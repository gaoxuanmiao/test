
int ack(int m,int n){int i;
if(m==0)i=n+1;
else if(n==0&&m>0)i=ack(m-1,1);
else if(m>0&&n>0)i=ack(m-1,ack(m,n-1));
return i;
}
main(){
	int m,n,i;
scanf("%d%d",&m,&n);
i=ack(m,n);
printf("%d",i);
}