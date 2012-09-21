

j=0;

for(i=1;i<=n/2;i++)
{
  if(n%i==0))
    divisores[j++]=i;
}
x=0;

for(i=0;i<=j;i++)
{
    x+=divisores[i];
}

if (x==n)
{
  printf("%d is a perfect number",n);
}
else
{
  printf("%d is not a perfect number",n);
}
