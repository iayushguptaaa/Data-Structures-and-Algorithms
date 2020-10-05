'''
Author : ADITI JAIN
Date : 05-10-2020  Time : 19:20

Title : Stack And its operations using Arrays
Description : Stack is an ADT which follows the LastInFirstOut (LIFO) rule and essentially
                has the following methods: 
                -push()- means insertion on top  -pop()-means deletion from top.
 '''


def isEmpty(stack):  #to check if the stack is empty
    return stack == []

def push(item):  #to add an element on top
    stack.append(item)
    return stack

def pop():   #to delete an element from top and print it
    return stack.pop()

def peek():   #to see the element on top and not delete
    return stack[len(stack)-1]

def size():   #to check the size of the stack
    return len(stack)

def display():
    print(stack)

#driver code#
stack=[]    #created an empty list that represents a stack
while True:
    print("press 1 to push")
    print("press 2 to pop ")
    print("press 3 to display")
    print("press 4 to quit")
    n=int(input())    
    if n==1:
        push(int(input()))
    elif n ==2:
        if isEmpty(stack):
            print('Stack is empty.')
        else:
            print('Popped value: ', pop())
    elif n==3:
        display()
    else:
        print("you've entered wrong choice")