int a(int n){
int i;
if(n>=10){i=a(n/10);i=n-i;}
else i=n;
printf("%d\n",i);return n*10;

}
main(){

int n;
scanf("%d",&n);
a(n);
}