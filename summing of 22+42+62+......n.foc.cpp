int main()
{
    int n,sum=0;
    printf("enter the number of terms:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        sum+=(20*i+2);
    }
    printf("%d",sum);
}
