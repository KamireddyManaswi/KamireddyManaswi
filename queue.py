a=[]
n=int(input("no of elements in list:\n"))
front,rear=-1,-1
def enqueue(e):
    global rear
    if isfull():
        print("queue is full\n")
    else:
        rear=rear+1
        a.append(e)
def dequeue():
    global front,rear
    if isempty():
       print("underflow condition\n")
    else:
        a.pop(0)
        front+=1
        rear-=1
def peek():
     global front
     if isempty():
        print("queue is empty\n")
     else:
         print(a[front])  
def isfull():
     global rear
     if rear==n-1:
         return 1
     else:
        return 0
def isempty():
     global front,rear
     if len(a)==0:   
         return 1
     else: 
         return 0
def display():
     global front,rear
     if isempty():
        print("queue is empty\n")
     else:
      #for front in range(rear+1):
        print(a)

x=0
while x<=6:
  x=input("1.enqueue\n2.dequeue\n3.front\n4.isfull\n5.isempty\n6.display\nenter other num to exitt\n")
  if x==1:
     if isfull(): 
         print("queue is full")
     else:
          e=input("enter the elemnt:\n")
          enqueue(e)
  elif x==2:
     dequeue()
  elif x==3:
     peek()
  elif x==4:
     if isfull():
        print('true\n')
     else:
        print('false\n')
  elif x==5:
      if isempty():
         print('true\n') 
      else:
        print('false\n')       
  elif x==6:
     display()


    