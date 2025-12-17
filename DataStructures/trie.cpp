#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct Node{
    Node* links[26];
    bool flag = false;

    Node(){
        for(int i = 0; i < 26; i++){
            links[i] = NULL;
        }
    }

    bool containsKey(char c){
        if(links[c-'a'] == NULL)    return false;
        return true;
    }

    void addChar(char c){
        links[c-'a'] = new Node();
    }

    Node* getNext(char c){
        return links[c-'a'];
    }
};
struct Trie{
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insertString(string& s){
        Node* node = root;
        for(int i = 0; i < s.size(); i++){
            if(!node->containsKey(s[i])){
                node->addChar(s[i]);
            }
            node = node->getNext(s[i]);
        }
        node->flag = true;
    }

    bool search(string& s){
        Node* node = root;
        for(int i = 0; i < s.size(); i++){
            if(!node->containsKey(s[i]))  return false;
            node = node->getNext(s[i]);
        }
        return node->flag;
    }

    bool startsWith(string& prefix){
        Node* node = root;
        for(int i = 0; i < prefix.size(); i++){
            if(!node->containsKey(prefix[i]))  return false;
            node = node->getNext(prefix[i]);
        }
        return true;
    }
};

int main(){
    Trie temp;
    string s1 = "apple", s2 = "abc", s3 = "bat", s4 = "cattle";
    temp.insertString(s1);
    temp.insertString(s2);
    temp.insertString(s3);
    temp.insertString(s4);

    cout<<"search for "<<s1<<" = "<<temp.search(s1)<<endl;
    cout<<"search for "<<s2<<" = "<<temp.search(s2)<<endl;
    cout<<"search for "<<s3<<" = "<<temp.search(s3)<<endl;
    cout<<"search for "<<s4<<" = "<<temp.search(s4)<<endl;

    string s5 = "app";
    cout<<"search for "<<s5<<" = "<<temp.search(s5)<<endl;

    string s6 = "a", s7 = "cat";
    cout<<"startsWith for "<<s5<<" = "<<temp.startsWith(s5)<<endl;
    cout<<"startsWith for "<<s6<<" = "<<temp.startsWith(s6)<<endl;
    cout<<"startsWith for "<<s7<<" = "<<temp.startsWith(s7)<<endl;
}