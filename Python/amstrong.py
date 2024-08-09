#Amstrong Number - Sum of cube of its digits

num = int(input("Enter number : "))
sum = 0
value = num
while num:
    n = num%10
    sum = sum + n**3
    num = num//10
if sum == value:
    print(value," is an Amstrong Number !")
else:
    print(value," is not a Amstrong Number !")
