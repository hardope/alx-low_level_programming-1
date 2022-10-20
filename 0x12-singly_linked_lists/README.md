# 0x11. C - Singly linked lists

# Linked Lists
Linked List is a dynamic linear Data structure made of chain of nodes in which each node contains a data field and a link or reference to the next node.<br> Sometimes the node contains two links or references, one for the previous node and one for the next. Number of links in each node depends on the type of linked list.<br>
The link or reference on the last node depends on the type of linked list but for most of the types, The last node link value contains the address to the empty value or None.<br>

Nodes of the linked list is stored randomly in memory and not (contegiously) one after the other ike normal lists.

### Terms associated with Linked List

* Node: Each element in the linked list.
* Head or Front: address of First node or Start point of linked list.
* Tail or End: Last Node.
* Data: Data field.

### Advantages
* Dynamic Memory Allocation: No need to specify size.
* Elements are inserted and deleted easily: No need to shift elements, Just change addresses.
* They can be used to implement stacks, queue and graphs.
* Used to represent and manipulate polynomials

### Disadvantages
* Requires more nemory to store addresses
* No elements can be assed randomly, each have to be passed

### Types of Linked Lists
* Singly Linked List: Node contains only one Link.
* Doubly Linked List: Node contains two Links.
* Circular Linked List:

## Singly Linked List

Each Node in the singly linked list contains a data field and a link to the next node, while the last node link field contains a None value.

#### Disadvantages
* Nearly Impossible to move backwards

#### Operations
* Adding Or Insertion: Adding nodes to linked list
* Delete: Removing elements from linked list
* Traversal

### Inserting Elements To Linked List
* Beginning
* End
* Inbetween

#### Steps for inserting to beginning of Linked list
* Create Node
* Copy link from head to new node link field
* Copy address of new node to Head

#### Steps for inserting to end of Linked list
* Create Node
* Set link field of new node to None
* Copy address of new node to last node link address

#### Steps for inserting inbetween Linked list
* Create Node
* Move to Node at one step before desired position for new node
* Change link field of Current node to address of new node
* Set link field of new node of new node no next node after desired position

### Deleting Nodes from Linked List
* Beginning
* End
* Inbetween

#### Steps For deleting nodes from Start of linked list
* Change Head to second Node

#### Steps For deleting nodes from End of linked list
* Change the link field of the second to the last node to None

#### Steps For deleting nodes from middle of linked list
* Move to node one step before before node to be deleted
* Change link field of current node to the address of node after node to be deleted

## Traversing The Linked List
This is going through all nodes in a linked list

