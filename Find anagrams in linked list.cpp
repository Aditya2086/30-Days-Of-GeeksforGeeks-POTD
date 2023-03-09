//{ Driver Code Starts
/*#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

/*class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        vector<int> str(26, 0);
        int size = s.length();
        
        for(auto& it : s)   
            str[it - 'a']++;
            
        vector<int> ll(26, 0);
        vector<Node*> res;
        
        int count = 0;

        Node* i = head;
        Node* j = head;
        
        while(j != NULL){
            count++;
            ll[j -> data - 'a']++;
            if(count == size){
                if(ll == str){
                    Node* t = j -> next;
                    j -> next = NULL;
                    res.push_back(i);
                    j = t;
                    i = j;
                    count = 0;
                    for(int x = 0; x < 26; x++)
                        ll[x] = 0;
                }
                else{
                    ll[i ->data - 'a']--;
                    i = i -> next;
                    j = j -> next;
                    count--;
                }
            }
            else
                j = j -> next;
        }
        return res;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}*/

// } Driver Code Ends
// Code Here :-

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        vector<int> str(26, 0);
        int size = s.length();
        
        for(auto& it : s)   
            str[it - 'a']++;
            
        vector<int> ll(26, 0);
        vector<Node*> res;
        
        int count = 0;

        Node* i = head;
        Node* j = head;
        
        while(j != NULL){
            count++;
            ll[j -> data - 'a']++;
            if(count == size){
                if(ll == str){
                    Node* t = j -> next;
                    j -> next = NULL;
                    res.push_back(i);
                    j = t;
                    i = j;
                    count = 0;
                    for(int x = 0; x < 26; x++)
                        ll[x] = 0;
                }
                else{
                    ll[i ->data - 'a']--;
                    i = i -> next;
                    j = j -> next;
                    count--;
                }
            }
            else
                j = j -> next;
        }
        return res;
    }
};
