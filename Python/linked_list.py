# iniatializing singly link list and print infg the values

class node:
    def __init__(self,data):
        self.data = data
        self.next = None

class linkedlist:

    count = 0

    def __init__(self):
        self.head = None

    def printlist(self):
        temp = self.head
        c = 0
        while(temp):
            c += 1
            print(temp.data)
            temp = temp.next
        
        self.count = c
        

if __name__ == "__main__":
    llist = linkedlist()
    llist.head = node(1)
    second = node(2)
    third = node(3)

    llist.head.next = second
    second.next = third
    
    llist.printlist()
    print(f'the no. of nodes are {llist.count}')
