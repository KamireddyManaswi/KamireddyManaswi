n=int(input("Enter the number of elements:\n"))
a=[]
top=-1

def push():
   global top
   if top>=n-1:
    print("overflow condition")
   else:
    top=top+1
    print("input the element")
    a.append(input())

def pop():
   global top
   if top<=-1:
     print("underflow codition\n")
   else:
      print('the deleted value:%d',a[top])
      top=top-1
def is_empty():
   global top
   print("is empty function")
   if top<=-1:
     print("true")
   else:
     print("false")

def stack():
  for i in range(0,n):
    push()
  print("number of elements to pop")
  j=input()
  for j in range(j):
   pop()
  is_empty()


if __name__ == "__main__":
   stack()


print("the stack elements\n")
if top>-1:
   for p in range(top+1):
     print(a[p])
else:
  print("stack is empty")