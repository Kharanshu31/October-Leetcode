/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if(!node)
            return node;
        
        queue<Node*>q;
        unordered_map<Node*,Node*>m;
        q.push(node);
        m[node]=new Node(node->val);
        
        while(!q.empty())
        {
            Node* temp=q.front();
            q.pop();
            
            for(auto i:temp->neighbors)
            {
                if(m.find(i)==m.end())
                {
                    m[i]=new Node(i->val);
                    q.push(i);
                }
                m[temp]->neighbors.push_back(m[i]);
            }
        }
        
        return m[node];
        
    }
};
