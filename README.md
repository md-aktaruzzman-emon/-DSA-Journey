# 🎓 DSA Masterclass: C/C++ Implementation Journey

<p align="center">
  <img src="https://img.shields.io/github/license/md-aktaruzzman-emon/cpp-dsa-lab?style=for-the-badge&color=3b82f6&logo=github" alt="License">
  <img src="https://img.shields.io/github/stars/md-aktaruzzman-emon/cpp-dsa-lab?style=for-the-badge&color=fbbf24&logo=github" alt="Stars">
  <img src="https://img.shields.io/github/forks/md-aktaruzzman-emon/cpp-dsa-lab?style=for-the-badge&color=34d399&logo=github" alt="Forks">
  <img src="https://img.shields.io/github/issues/md-aktaruzzman-emon/cpp-dsa-lab?style=for-the-badge&color=f87171&logo=github" alt="Issues">
  <br>
  <img src="https://img.shields.io/badge/Language-C%20%7C%20C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="Language C/C++">
  <img src="https://img.shields.io/github/actions/workflow/status/md-aktaruzzman-emon/cpp-dsa-lab/cmake-ci.yml?branch=main&style=for-the-badge&label=Build&logo=github-actions" alt="Build Status">
</p>

---

## 📝 Introduction

Welcome to my **Data Structures & Algorithms (DSA) Learning Journey** repository. This is a comprehensive, production-grade sandbox containing clean, highly optimized, and memory-safe implementations of fundamental data structures and algorithms in **C** and **C++**. 

This repository serves as a personal laboratory to:
*   Master low-level programming concepts (pointers, explicit memory management, garbage tracking).
*   Enforce object-oriented standards in C++ using templates and the Standard Template Library (STL).
*   Deconstruct algorithmic complexity constraints under rigorous asymptotic review.
*   Prepare for high-level technical interviews and competitive programming environments.

Each implementation includes isolated tests, detailed mathematical theory, and links to relevant competitive programming practice tasks.

---

## 🗺️ Table of Contents
1. [Repository Architecture](#📂-repository-architecture)
2. [Individual Topic Document Guidelines](#📁-individual-topic-document-guidelines)
3. [Learning Progress & Complexity Reference](#📊-learning-progress--complexity-reference)
   - [Data Structures](#1-data-structures)
   - [Searching](#2-searching)
   - [Sorting](#3-sorting)
   - [Graph Algorithms](#4-graph-algorithms)
   - [Dynamic Programming](#5-dynamic-programming)
   - [Greedy Algorithms](#6-greedy-algorithms)
   - [Backtracking](#7-backtracking)
4. [Interactive Learning Roadmap](#🛣️-interactive-learning-roadmap)
5. [Setup & Compilation Guide](#🛠️-setup--compilation-guide)
6. [Future Topics](#🚀-future-topics)
7. [Repository Statistics](#📈-repository-statistics)
8. [License](#📄-license)

---

## 📂 Repository Architecture

Below is the visual structure of the repository. Every directory is self-contained with its respective C/C++ code implementations and documentation.

*(Refer to the repository structure diagram provided in the section above.)*

---

## 📁 Individual Topic Document Guidelines

To maintain elite engineering standards across the entire repository, every subdirectory conforms to a strict documentation style guide. Refer to the [Topic Template](./templates/topic_template.md) for detailed structural guidelines.

Each subdirectory template guarantees coverage of:
1. **Theory:** Broad low-level concept notes and design decisions.
2. **Algorithm:** Conceptual execution flow and generic pseudocode.
3. **Time Complexity:** Explicit Best, Average, and Worst case parameters.
4. **Space Complexity:** Detail auxiliary recursion stack and auxiliary heap memory footprints.
5. **Source Code:** Standard-conforming C and standard modern C++ compilation targets.
6. **Practice Problems:** Links to top tier platform verification environments.

---

## 📊 Learning Progress & Complexity Reference

Below is the central command center tracking the progress of implementations, along with direct links to the directories, complexity breakdowns, and target test cases.

### 1. Data Structures

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Array** | ![Completed](https://img.shields.io/badge/Completed-22c55e?style=flat-square) | [C](./src/01_data_structures/array/array.c) / [C++](./src/01_data_structures/array/array.cpp) | $\mathcal{O}(1)$ Access | $\mathcal{O}(N)$ | [LeetCode 26: Remove Duplicates](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) |
| **Linked List** | ![In Progress](https://img.shields.io/badge/In%20Progress-eab308?style=flat-square) | [C](./src/01_data_structures/linked_list/singly_linked_list.c) / [C++](./src/01_data_structures/linked_list/singly_linked_list.cpp) | $\mathcal{O}(N)$ Search | $\mathcal{O}(N)$ | [LeetCode 206: Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) |
| **Doubly Linked List** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/doubly_linked_list/doubly_linked_list.c) / [C++](./src/01_data_structures/doubly_linked_list/doubly_linked_list.cpp) | $\mathcal{O}(N)$ Search | $\mathcal{O}(N)$ | [LeetCode 430: Flatten Multilevel DLL](https://leetcode.com/problems/flatten-a-multilevel-doubly-linked-list/) |
| **Stack** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/stack/stack.c) / [C++](./src/01_data_structures/stack/stack.cpp) | $\mathcal{O}(1)$ Pop/Push | $\mathcal{O}(N)$ | [LeetCode 20: Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) |
| **Queue** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/queue/queue.c) / [C++](./src/01_data_structures/queue/queue.cpp) | $\mathcal{O}(1)$ Push/Pop | $\mathcal{O}(N)$ | [LeetCode 225: Implement Stack using Queues](https://leetcode.com/problems/implement-stack-using-queues/) |
| **Circular Queue** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/circular_queue/circular_queue.c) / [C++](./src/01_data_structures/circular_queue/circular_queue.cpp) | $\mathcal{O}(1)$ Enqueue | $\mathcal{O}(N)$ | [LeetCode 622: Design Circular Queue](https://leetcode.com/problems/design-circular-queue/) |
| **Trees** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/trees/binary_tree.c) / [C++](./src/01_data_structures/trees/binary_tree.cpp) | $\mathcal{O}(N)$ Traversal | $\mathcal{O}(N)$ | [LeetCode 104: Max Depth of Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/) |
| **BST** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/bst/binary_search_tree.c) / [C++](./src/01_data_structures/bst/binary_search_tree.cpp) | $\mathcal{O}(N)$ Search | $\mathcal{O}(N)$ | [LeetCode 98: Validate BST](https://leetcode.com/problems/validate-binary-search-tree/) |
| **Heap** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/01_data_structures/heap/heap.c) / [C++](./src/01_data_structures/heap/heap.cpp) | $\mathcal{O}(\log N)$ Push | $\mathcal{O}(N)$ | [LeetCode 215: Kth Largest Element](https://leetcode.com/problems/kth-largest-element-in-an-array/) |

---

### 2. Searching

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Linear Search** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/02_searching/linear_search/linear_search.c) / [C++](./src/02_searching/linear_search/linear_search.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | [HackerRank: Linear Search](https://www.hackerrank.com/domains/algorithms) |
| **Binary Search** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/02_searching/binary_search/binary_search.c) / [C++](./src/02_searching/binary_search/binary_search.cpp) | $\mathcal{O}(\log N)$ | $\mathcal{O}(1)$ | [LeetCode 704: Binary Search](https://leetcode.com/problems/binary-search/) |
| **Ternary Search** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/02_searching/ternary_search/ternary_search.c) / [C++](./src/02_searching/ternary_search/ternary_search.cpp) | $\mathcal{O}(\log_3 N)$ | $\mathcal{O}(1)$ | [Codeforces: Ternary Search Tasks](https://codeforces.com/) |

---

### 3. Sorting

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Bubble Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/bubble_sort/bubble_sort.c) / [C++](./src/03_sorting/bubble_sort/bubble_sort.cpp) | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | [HackerRank: Sorting](https://www.hackerrank.com/challenges/countingsort1/problem) |
| **Selection Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/selection_sort/selection_sort.c) / [C++](./src/03_sorting/selection_sort/selection_sort.cpp) | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | [LeetCode 912: Sort an Array](https://leetcode.com/problems/sort-an-array/) |
| **Insertion Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/insertion_sort/insertion_sort.c) / [C++](./src/03_sorting/insertion_sort/insertion_sort.cpp) | $\mathcal{O}(N^2)$ | $\mathcal{O}(1)$ | [LeetCode 147: Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/) |
| **Merge Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/merge_sort/merge_sort.c) / [C++](./src/03_sorting/merge_sort/merge_sort.cpp) | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N)$ | [LeetCode 88: Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) |
| **Quick Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/quick_sort/quick_sort.c) / [C++](./src/03_sorting/quick_sort/quick_sort.cpp) | $\mathcal{O}(N^2)$ | $\mathcal{O}(\log N)$ | [LeetCode 912: Sort an Array](https://leetcode.com/problems/sort-an-array/) |
| **Counting Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/counting_sort/counting_sort.c) / [C++](./src/03_sorting/counting_sort/counting_sort.cpp) | $\mathcal{O}(N + K)$ | $\mathcal{O}(N + K)$ | [HackerRank: Counting Sort 1](https://www.hackerrank.com/challenges/countingsort1/problem) |
| **Heap Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/heap_sort/heap_sort.c) / [C++](./src/03_sorting/heap_sort/heap_sort.cpp) | $\mathcal{O}(N \log N)$ | $\mathcal{O}(1)$ | [LeetCode 912: Sort an Array](https://leetcode.com/problems/sort-an-array/) |
| **Radix Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/03_sorting/radix_sort/radix_sort.c) / [C++](./src/03_sorting/radix_sort/radix_sort.cpp) | $\mathcal{O}(D \cdot (N + B))$ | $\mathcal{O}(N + B)$ | [LeetCode 164: Maximum Gap](https://leetcode.com/problems/maximum-gap/) |

---

### 4. Graph Algorithms

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **BFS** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/bfs/bfs.c) / [C++](./src/04_graphs/bfs/bfs.cpp) | $\mathcal{O}(V + E)$ | $\mathcal{O}(V)$ | [LeetCode 102: Binary Tree Level Order](https://leetcode.com/problems/binary-tree-level-order-traversal/) |
| **DFS** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/dfs/dfs.c) / [C++](./src/04_graphs/dfs/dfs.cpp) | $\mathcal{O}(V + E)$ | $\mathcal{O}(V)$ | [LeetCode 200: Number of Islands](https://leetcode.com/problems/number-of-islands/) |
| **Topological Sort** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/topological_sort/topo_sort.c) / [C++](./src/04_graphs/topological_sort/topo_sort.cpp) | $\mathcal{O}(V + E)$ | $\mathcal{O}(V)$ | [LeetCode 207: Course Schedule](https://leetcode.com/problems/course-schedule/) |
| **Dijkstra** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/dijkstra/dijkstra.c) / [C++](./src/04_graphs/dijkstra/dijkstra.cpp) | $\mathcal{O}((V + E) \log V)$ | $\mathcal{O}(V)$ | [LeetCode 743: Network Delay Time](https://leetcode.com/problems/network-delay-time/) |
| **Floyd-Warshall** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/floyd_warshall/floyd_warshall.c) / [C++](./src/04_graphs/floyd_warshall/floyd_warshall.cpp) | $\mathcal{O}(V^3)$ | $\mathcal{O}(V^2)$ | [LeetCode 1334: Find Neighbors Threshold](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) |
| **Bellman-Ford** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/bellman_ford/bellman_ford.c) / [C++](./src/04_graphs/bellman_ford/bellman_ford.cpp) | $\mathcal{O}(V \cdot E)$ | $\mathcal{O}(V)$ | [LeetCode 787: Cheapest Flights K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) |
| **Prim** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/prim/prim.c) / [C++](./src/04_graphs/prim/prim.cpp) | $\mathcal{O}((V + E) \log V)$ | $\mathcal{O}(V)$ | [HackerRank: Prim's MST](https://www.hackerrank.com/challenges/primsmstsub/problem) |
| **Kruskal** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/04_graphs/kruskal/kruskal.c) / [C++](./src/04_graphs/kruskal/kruskal.cpp) | $\mathcal{O}(E \log V)$ | $\mathcal{O}(V)$ | [HackerRank: Kruskal's MST](https://www.hackerrank.com/challenges/kruskalmstrsub/problem) |

---

### 5. Dynamic Programming

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Fibonacci** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/05_dynamic_programming/fibonacci/fibonacci.c) / [C++](./src/05_dynamic_programming/fibonacci/fibonacci.cpp) | $\mathcal{O}(N)$ | $\mathcal{O}(1)$ | [LeetCode 509: Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) |
| **Coin Change** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/05_dynamic_programming/coin_change/coin_change_dp.c) / [C++](./src/05_dynamic_programming/coin_change/coin_change_dp.cpp) | $\mathcal{O}(N \cdot C)$ | $\mathcal{O}(N)$ | [LeetCode 322: Coin Change](https://leetcode.com/problems/coin-change/) |
| **LCS** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/05_dynamic_programming/longest_common_subsequence/lcs.c) / [C++](./src/05_dynamic_programming/longest_common_subsequence/lcs.cpp) | $\mathcal{O}(M \cdot N)$ | $\mathcal{O}(M \cdot N)$ | [LeetCode 1143: Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) |
| **LIS** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/05_dynamic_programming/longest_increasing_subsequence/lis.c) / [C++](./src/05_dynamic_programming/longest_increasing_subsequence/lis.cpp) | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N)$ | [LeetCode 300: Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) |
| **0/1 Knapsack** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/05_dynamic_programming/zero_one_knapsack/knapsack_01.c) / [C++](./src/05_dynamic_programming/zero_one_knapsack/knapsack_01.cpp) | $\mathcal{O}(N \cdot W)$ | $\mathcal{O}(W)$ | [LeetCode 474: Ones and Zeroes](https://leetcode.com/problems/ones-and-zeroes/) |

---

### 6. Greedy Algorithms

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **Greedy Method** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/greedy_method/activity_selection.c) / [C++](./src/06_greedy_algorithms/greedy_method/activity_selection.cpp) | $\mathcal{O}(N \log N)$ | $\mathcal{O}(1)$ | [LeetCode 435: Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) |
| **Dijkstra** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/dijkstra/dijkstra_greedy.c) / [C++](./src/06_greedy_algorithms/dijkstra/dijkstra_greedy.cpp) | $\mathcal{O}((V + E) \log V)$ | $\mathcal{O}(V)$ | [LeetCode 743: Network Delay Time](https://leetcode.com/problems/network-delay-time/) |
| **Prim** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/prim/prim_greedy.c) / [C++](./src/06_greedy_algorithms/prim/prim_greedy.cpp) | $\mathcal{O}((V + E) \log V)$ | $\mathcal{O}(V)$ | [HackerRank: Prim's MST](https://www.hackerrank.com/challenges/primsmstsub/problem) |
| **Kruskal** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/kruskal/kruskal_greedy.c) / [C++](./src/06_greedy_algorithms/kruskal/kruskal_greedy.cpp) | $\mathcal{O}(E \log V)$ | $\mathcal{O}(V)$ | [HackerRank: Kruskal's MST](https://www.hackerrank.com/challenges/kruskalmstrsub/problem) |
| **Fractional Knapsack** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/fractional_knapsack/fractional_knapsack.c) / [C++](./src/06_greedy_algorithms/fractional_knapsack/fractional_knapsack.cpp) | $\mathcal{O}(N \log N)$ | $\mathcal{O}(N)$ | [HackerRank: Fractional Knapsack](https://www.hackerrank.com/domains/algorithms) |
| **Coin Change** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/coin_change/coin_change_greedy.c) / [C++](./src/06_greedy_algorithms/coin_change/coin_change_greedy.cpp) | $\mathcal{O}(C \log C)$ | $\mathcal{O}(1)$ | [LeetCode 860: Lemonade Change](https://leetcode.com/problems/lemonade-change/) |
| **Vertex Cover Approx** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/06_greedy_algorithms/vertex_cover_approx/vertex_cover.c) / [C++](./src/06_greedy_algorithms/vertex_cover_approx/vertex_cover.cpp) | $\mathcal{O}(V + E)$ | $\mathcal{O}(V)$ | [GeeksforGeeks: Vertex Cover Problem](https://www.geeksforgeeks.com/vertex-cover-problem-set-1-introduction-approximate-algorithm-2/) |

---

### 7. Backtracking

| Topic | Status | Source (C / C++) | Worst Time | Worst Space | Recommended Practice Problem |
| :--- | :---: | :---: | :---: | :---: | :---: |
| **N-Queens** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/07_backtracking/n_queens/n_queens.c) / [C++](./src/07_backtracking/n_queens/n_queens.cpp) | $\mathcal{O}(N!)$ | $\mathcal{O}(N)$ | [LeetCode 51: N-Queens](https://leetcode.com/problems/n-queens/) |
| **Sum of Subsets** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/07_backtracking/sum_of_subsets/sum_of_subsets.c) / [C++](./src/07_backtracking/sum_of_subsets/sum_of_subsets.cpp) | $\mathcal{O}(2^N)$ | $\mathcal{O}(N)$ | [LeetCode 90: Subsets II](https://leetcode.com/problems/subsets-ii/) |
| **Hamiltonian Cycle** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/07_backtracking/hamiltonian_cycle/hamiltonian_cycle.c) / [C++](./src/07_backtracking/hamiltonian_cycle/hamiltonian_cycle.cpp) | $\mathcal{O}(N!)$ | $\mathcal{O}(V)$ | [GeeksforGeeks: Hamiltonian Cycle](https://www.geeksforgeeks.com/hamiltonian-cycle-backtracking-6/) |
| **Graph Coloring** | ![Planned](https://img.shields.io/badge/Planned-9ca3af?style=flat-square) | [C](./src/07_backtracking/graph_coloring/graph_coloring.c) / [C++](./src/07_backtracking/graph_coloring/graph_coloring.cpp) | $\mathcal{O}(M^V)$ | $\mathcal{O}(V)$ | [GeeksforGeeks: m Coloring Problem](https://www.geeksforgeeks.com/m-coloring-problem-backtracking-5/) |

---

## 🛣️ Interactive Learning Roadmap

Below is the chronological path designed to scale from primitive configurations to complex, dynamic graph routing and heuristics.

```mermaid
graph TD
    classDef default fill:#1f2937,stroke:#3b82f6,stroke-width:2px,color:#f3f4f6;
    classDef focus fill:#1e3a8a,stroke:#60a5fa,stroke-width:2px,color:#f3f4f6;
    
    P1["📦 Phase 1: Linear Structs<br>(Array, List, Stack, Queue)"] --> P2["🔍 Phase 2: Searching & Sorting<br>(Binary Search, Quick Sort, Radix)"]
    P1 --> P3["🌲 Phase 3: Non-Linear Structs<br>(Trees, BSTs, Binary Heaps)"]
    P2 --> P4["⚡ Phase 4: Greedy Schemes<br>(Kruskal, Prim, Dijkstra)"]
    P3 --> P5["🕸️ Phase 5: Graph Traversals<br>(BFS, DFS, Topo-Sort)"]
    P4 --> P6["🧩 Phase 6: Dynamic Programming<br>(LCS, LIS, Knapsack)"]
    P5 --> P6
    P6 --> P7["🌀 Phase 7: Backtracking<br>(N-Queens, Graph Coloring)"]

    class P1,P2,P3,P4,P5,P6,P7 default;
