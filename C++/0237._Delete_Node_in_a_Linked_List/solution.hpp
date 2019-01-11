#include "../data_structures.hpp"

class Solution {
    public:
        void deleteNode(ListNode* node) {
            auto next = node->next;
            *node = *next;
            delete next;
        }
};
