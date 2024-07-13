#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
	string name;
	int mark;
	struct Node *next;
}List;

Node *createNote(string value1, int value2){
	List *tmp = new List;
	tmp -> name = value1;
	tmp -> mark = value2;
	return tmp;
}

void insFirst (List *& head, string vname, int vmark){
	List *newNode = createNote(vname, vmark);
	newNode -> next = head;
	if (head == NULL) head = newNode;
	else{
		newNode -> next = head;
		head = newNode;
	}
}

void insLast (List *& head, string vname, int vmark){
	List *newNode = createNote(vname, vmark);
	newNode -> next = NULL;
	if (head == NULL) head = newNode;
	else{
		List *last = head;
		while (last -> next != NULL)
			last = last -> next;
		last -> next = newNode;
	}
}

int Count (Node *head, int vmark){
	int count = 0;
	List *tmp = head;
	while (tmp != NULL){
		if (tmp -> mark >= vmark) count++;
		tmp = tmp -> next;
	}
	return count;
}

int main(){
	List *head = NULL;
	string command, vname;
	int vmark;
	while (true){
		cin >> command;
        if (command == "fin") {
            break;
        } else if (command == "insF") {
            cin >> vname >> vmark;
            insFirst(head, vname, vmark);
        } else if (command == "insL") {
            cin >> vname >> vmark;
            insLast(head, vname, vmark);
        } else if (command == "count") {
            cin >> vmark;
            cout << Count(head, vmark) << endl;
        }
	}
	return 0;
}
