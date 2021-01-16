//\\4.改错题：完成实验8，一、调试示例。
 
int main()
{

int m,x,y,*pm,*px,*py;
scanf("%d%d",&x,&y);
px=&x;
py=&y;
pm=&m;
*pm=*px;
if(*pm<*py)*pm=*py;
printf("max=%d\n",m);


}