#ifndef LEETCODE_LIB_HPP
#define LEETCODE_LIB_HPP

#include <cstdint>
#include <string>
#include <unordered_map>
#include <vector>

namespace leetcode {
    class Solution0001 {
    public:
        static std::vector<int> twoSum(std::vector<int>& nums, int target);
    };

    class Solution0002 {
    public:
        // Definition for singly-linked list.
        struct ListNode {
            int val;
            ListNode *next;
            ListNode() : val(0), next(nullptr) {}
            explicit ListNode(int x) : val(x), next(nullptr) {}
            ListNode(int x, ListNode *next) : val(x), next(next) {}
        };
        static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
    };

    class Solution0006 {
    public:
        static std::string convert(std::string s, int numRows);
    };

    class Solution0007 {
    public:
        static int reverse(int x);
    };

    class Solution0008 {
    public:
        static int myAtoi(std::string s);
    };

    class Solution0009 {
    public:
        static bool isPalindrome(int x);
    };

    class Solution0012 {
    public:
        static std::string intToRoman(int num);
    };

    class Solution0013 {
    public:
        static int romanToInt(const std::string& s);
    };

    class Solution0014 {
    public:
        static std::string longestCommonPrefix(const std::vector<std::string>& strs);
    };

    class Solution0017 {
    public:
        static std::vector<std::string> letterCombinations(const std::string &digits);
    private:
        static void generateCombinations(
            const std::string& digits,
            int index,
            std::string &working_string,
            std::vector<std::string> &combinations,
            std::unordered_map<char, std::string> &digit_2_characters
        );
    };

    class Solution0019 {
    public:
        // Definition for singly-linked list.
        struct ListNode {
            int val;
            ListNode *next;
            ListNode() : val(0), next(nullptr) {}
            explicit ListNode(const int x) : val(x), next(nullptr) {}
            ListNode(const int x, ListNode *next) : val(x), next(next) {}
        };
        static ListNode* removeNthFromEnd(ListNode* head, int n);
    };

    class Solution0020 {
    public:
        static bool isValid(const std::string& s);
    };

    class Solution0021 {
    public:
        // Definition for singly-linked list.
        struct ListNode {
            int val;
            ListNode *next;
            ListNode() : val(0), next(nullptr) {}
            explicit ListNode(int x) : val(x), next(nullptr) {}
            ListNode(int x, ListNode *next) : val(x), next(next) {}
        };

        static ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
    };

    class Solution0026 {
    public:
        static int removeDuplicates(std::vector<int>& nums);
    };

    class Solution0027 {
    public:
        static int removeElement(std::vector<int>& nums, int val);
    };

    class Solution0033 {
    public:
        static int search(std::vector<int>& nums, int target);
    };

    class Solution0035 {
    public:
        static int searchInsert(const std::vector<int>& nums, int target);
    };

    class Solution0067 {
    public:
        static std::string addBinary(std::string a, std::string b);
    };

    class Solution0069 {
    public:
        static int mySqrt(int x);
    };

    class Solution0083 {
    public:
        // Definition for singly-linked list.
        struct ListNode {
            int val;
            ListNode *next;
            ListNode() : val(0), next(nullptr) {}
            explicit ListNode(int x) : val(x), next(nullptr) {}
            ListNode(int x, ListNode *next) : val(x), next(next) {}
        };
        static ListNode* deleteDuplicates(ListNode* head);
    };

    class Solution0088 {
    public:
        static void merge(std::vector<int>& nums1, int m, const std::vector<int>& nums2, int n);
    };

    class Solution0125 {
    public:
        static bool isPalindrome(std::string s);
    };

    class Solution0190 {
    public:
        static uint32_t reverseBits(uint32_t n);
    };

    class Solution0530 {
    public:
        struct TreeNode {
            int val;
            TreeNode *left;
            TreeNode *right;
            TreeNode() : val(0), left(nullptr), right(nullptr) {}
            explicit TreeNode(const int x) : val(x), left(nullptr), right(nullptr) {}
            TreeNode(const int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
        };
        static int getMinimumDifference(const TreeNode* root);
    private:
        static void inOrderTrav(const TreeNode* root, int& prev, int& minDiff);
    };

    class Solution0783 {
    public:
        struct TreeNode {
            int val;
            TreeNode *left;
            TreeNode *right;
            TreeNode() : val(0), left(nullptr), right(nullptr) {}
            explicit TreeNode(const int x) : val(x), left(nullptr), right(nullptr) {}
            TreeNode(const int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
        };
        static int minDiffInBST(const TreeNode* root);
    private:
        static void inOrderTrav(const TreeNode* root, int& prev, int& minDiff);
    };
}

#endif // LEETCODE_LIB_HPP
