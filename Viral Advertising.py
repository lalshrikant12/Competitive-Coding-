n=int(input())
t=5
sum=0
for i in range (1,n+1):
	p=int(t/2)
	q=p*3
	sum=sum+p
	t=q
print(sum)
