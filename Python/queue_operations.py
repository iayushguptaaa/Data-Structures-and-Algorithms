'''
Author : ADITI JAIN
Date : 05-10-2020  Time : 16:20

Title : Queue And its operations using Arrays
Description : Queue is an ADT which follows the FirstInFirstOut (FIFO) rule and essentially
              has the following methods: 
              -enqueue()- means insertion at the rear end  -pop()-means deletion at the front end.
 '''


def isEmpty(queue):  #to check if the stack is empty
    return queue == []

def enqueue(item):  #to add an element on top
    queue.append(item)
    return queue

def dequeue():   #to delete an element from top and print it
    return queue.pop()



def display():
    print(queue)

#driver code#
queue=[]    #created an empty list that represents a stack
while True:
    print("press 1 to enqueue")
    print("press 2 to dequeue ")
    print("press 3 to display")
    
    n=int(input())    
    if n==1:
        enqueue(int(input()))
    elif n ==2:
        if isEmpty(queue):
            print('Queue is empty.')
        else:
            queue.remove(queue[len(queue)-1])
    elif n==3:
        display()
    else:
        print("you've entered wrong choice")