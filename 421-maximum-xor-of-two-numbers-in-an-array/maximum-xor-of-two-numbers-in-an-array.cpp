struct Trie {

    struct TrieNode {
        vector<TrieNode *> child;
        TrieNode() {
            child = vector<TrieNode *> (2);
        }
    };
    TrieNode *head;

public:

    Trie() {
        head = new TrieNode();
    }

    void insert(int num) {
        TrieNode *curr = head;
        for (int i = 31; i >= 0; i--) {
            int dir = (num >> i) & 1;
            if (curr->child[dir] == NULL)
                curr->child[dir] = new TrieNode();
            curr = curr->child[dir];
        }
    }

    int maxXOR(int num) {
        TrieNode *curr = head;

        int res = 0;
        for (int i = 31; i >= 0; i--) {
            int dir = (num >> i) & 1;
            // if 0 we need 1, if 1 we need 0
            // if dir, we need 1 - dir
            if (curr->child[1 - dir] != NULL) {
                res |= (1 << i);
                curr = curr->child[1 - dir];
            } else {
                curr = curr->child[dir];
            }
        }

        return res;
    }
};

class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie trie;
        for (int x : nums)
            trie.insert(x);
        
        int res = 0;
        for (int x : nums) {
            int best = trie.maxXOR(x);
            res = max(res, best);
        }

        return res;
    }
};