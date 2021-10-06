# simple calculator program
def cal(result,val,operator):
    if(operator=='+'):
        return result+val
    elif(operator=='-'):
        return result-val
    elif(operator=='*'):
        return result*val
    elif(operator=='/'):
        return result/val
print("#############")
operator = '+'
val1 = int(input("Enter the value1"))
result = val1
operator = input("enter the operation you want to perform")
val2 = int(input("Enter the value2"))
result=cal(result,val2,operator)
while(operator!='='):
    operator = input("enter the operation you want to perform")
    if(operator!='='):
        value = int(input("Enter value to be performed for operation"))
        result=cal(result,value,operator)
print("#############")
print(f"Result:{result}")
