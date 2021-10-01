class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

class LinkedList:
    def __init__(self):
        self.head = None


    def insert_at_beginning(self, data):
        node = Node(data, self.head)
        if self.head is not None:
            node.next = self.head
            self.head = node
        else:
            self.head = node

    def insert_at_end(self, data):
        node = Node(data, self.head)
        if self.head is not None:
            itr = self.head
            while itr.next is not None:
                itr = itr.next
            itr.next = node
            node.next = None

    def insert_bulk_values(self, list_data):
        #node = Node(list_data, self.head)
        if self.head is not None:
            itr = self.head
            while itr.next is not None:
                itr = itr.next
            for i in range(len(list_data)):
                node = Node(list_data[i], self.head)
                itr.next = node
                node.next = None
                itr = node  #it will become last element for necx comming element


    def printll(self):
        if self.head is None:
            print("List is Empty!")

        itr = self.head
        ll = ""
        while itr:
            #print(str(itr.data)+"->")
            ll += str(itr.data) + "->"
            itr = itr.next
        print(ll+"NULL")

    def get_len(self):
        count = 0
        itr = self.head
        while itr is not None:
            count += 1
            itr = itr.next
        return count

    def del_last_node(self):
        itr = self.head
        prev = self.head
        while itr.next is not None:
            prev = itr
            itr = itr.next
        prev.next = None  # python does garbage cleaning itself

    def find_mid(self):
        itr = self.head
        itr2 = self.head
        len_list =self.get_len()
        if (len_list % 2 == 0):
            while itr is not None:
                itr = itr.next.next
                itr2 = itr2.next
        else :
            while itr.next is not None:
                itr = itr.next.next
                itr2 = itr2.next

        return itr2.data

if __name__ == '__main__' :
    ll = LinkedList()
    ll.insert_at_beginning(10)
    ll.insert_at_beginning(9)
    ll.insert_at_end(11)
    ll.insert_bulk_values([12, 13, 14, 15, 16])
    ll.printll()
    ll.get_len()
    # ll.del_last_node()
    ll.printll()
    print(ll.find_mid())




