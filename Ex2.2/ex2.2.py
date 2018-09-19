def le():
    num1=int(raw_input("digite um numero: "))
    num2=int(raw_input("digite um numero: "))
    return num1 , num2
def impr(num1,num2):
    for i in range(num1+1,num2):
        print i 
    return
#main
num1,num2=le()
impr(num1,num2)
