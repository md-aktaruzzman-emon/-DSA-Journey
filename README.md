dsa-learning-journey/
├── .github/
│   └── workflows/
│       └── cmake-ci.yml           # Multi-platform Build CI/CD Workflow
├── CMakeLists.txt                 # Root CMake build configuration
├── LICENSE                        # Repository license
├── README.md                      # Primary repository hub
├── templates/
│   └── topic_template.md          # Standardization template for subdirectories
└── src/
    ├── 01_data_structures/
    │   ├── array/
    │   │   ├── README.md          # Array theory & complexity analysis
    │   │   ├── array.c            # Dynamic Array implementation in C
    │   │   └── array.cpp          # Generic Vector template class in C++
    │   ├── linked_list/
    │   │   ├── README.md
    │   │   ├── singly_linked_list.c
    │   │   └── singly_linked_list.cpp
    │   ├── doubly_linked_list/
    │   │   ├── README.md
    │   │   ├── doubly_linked_list.c
    │   │   └── doubly_linked_list.cpp
    │   ├── stack/
    │   │   ├── README.md
    │   │   ├── stack.c
    │   │   └── stack.cpp
    │   ├── queue/
    │   │   ├── README.md
    │   │   ├── queue.c
    │   │   └── queue.cpp
    │   ├── circular_queue/
    │   │   ├── README.md
    │   │   ├── circular_queue.c
    │   │   └── circular_queue.cpp
    │   ├── trees/
    │   │   ├── README.md
    │   │   ├── binary_tree.c
    │   │   └── binary_tree.cpp
    │   ├── bst/
    │   │   ├── README.md
    │   │   ├── binary_search_tree.c
    │   │   └── binary_search_tree.cpp
    │   └── heap/
    │       ├── README.md
    │       ├── heap.c
    │       └── heap.cpp
    ├── 02_searching/
    │   ├── linear_search/
    │   │   ├── README.md
    │   │   ├── linear_search.c
    │   │   └── linear_search.cpp
    │   ├── binary_search/
    │   │   ├── README.md
    │   │   ├── binary_search.c
    │   │   └── binary_search.cpp
    │   └── ternary_search/
    │       ├── README.md
    │       ├── ternary_search.c
    │       └── ternary_search.cpp
    ├── 03_sorting/
    │   ├── bubble_sort/
    │   │   ├── README.md
    │   │   ├── bubble_sort.c
    │   │   └── bubble_sort.cpp
    │   ├── selection_sort/
    │   │   ├── README.md
    │   │   ├── selection_sort.c
    │   │   └── selection_sort.cpp
    │   ├── insertion_sort/
    │   │   ├── README.md
    │   │   ├── insertion_sort.c
    │   │   └── insertion_sort.cpp
    │   ├── merge_sort/
    │   │   ├── README.md
    │   │   ├── merge_sort.c
    │   │   └── merge_sort.cpp
    │   ├── quick_sort/
    │   │   ├── README.md
    │   │   ├── quick_sort.c
    │   │   └── quick_sort.cpp
    │   ├── counting_sort/
    │   │   ├── README.md
    │   │   ├── counting_sort.c
    │   │   └── counting_sort.cpp
    │   ├── heap_sort/
    │   │   ├── README.md
    │   │   ├── heap_sort.c
    │   │   └── heap_sort.cpp
    │   └── radix_sort/
    │       ├── README.md
    │       ├── radix_sort.c
    │       └── radix_sort.cpp
    ├── 04_graphs/
    │   ├── bfs/
    │   │   ├── README.md
    │   │   ├── bfs.c
    │   │   └── bfs.cpp
    │   ├── dfs/
    │   │   ├── README.md
    │   │   ├── dfs.c
    │   │   └── dfs.cpp
    │   ├── topological_sort/
    │   │   ├── README.md
    │   │   ├── topo_sort.c
    │   │   └── topo_sort.cpp
    │   ├── dijkstra/
    │   │   ├── README.md
    │   │   ├── dijkstra.c
    │   │   └── dijkstra.cpp
    │   ├── floyd_warshall/
    │   │   ├── README.md
    │   │   ├── floyd_warshall.c
    │   │   └── floyd_warshall.cpp
    │   ├── bellman_ford/
    │   │   ├── README.md
    │   │   ├── bellman_ford.c
    │   │   └── bellman_ford.cpp
    │   ├── prim/
    │   │   ├── README.md
    │   │   ├── prim.c
    │   │   └── prim.cpp
    │   └── kruskal/
    │       ├── README.md
    │       ├── kruskal.c
    │       └── kruskal.cpp
    ├── 05_dynamic_programming/
    │   ├── fibonacci/
    │   │   ├── README.md
    │   │   ├── fibonacci.c
    │   │   └── fibonacci.cpp
    │   ├── coin_change/
    │   │   ├── README.md
    │   │   ├── coin_change_dp.c
    │   │   └── coin_change_dp.cpp
    │   ├── longest_common_subsequence/
    │   │   ├── README.md
    │   │   ├── lcs.c
    │   │   └── lcs.cpp
    │   ├── longest_increasing_subsequence/
    │   │   ├── README.md
    │   │   ├── lis.c
    │   │   └── lis.cpp
    │   └── zero_one_knapsack/
    │       ├── README.md
    │       ├── knapsack_01.c
    │       └── knapsack_01.cpp
    ├── 06_greedy_algorithms/
    │   ├── greedy_method/
    │   │   ├── README.md
    │   │   ├── activity_selection.c
    │   │   └── activity_selection.cpp
    │   ├── dijkstra/
    │   │   ├── README.md
    │   │   ├── dijkstra_greedy.c
    │   │   └── dijkstra_greedy.cpp
    │   ├── prim/
    │   │   ├── README.md
    │   │   ├── prim_greedy.c
    │   │   └── prim_greedy.cpp
    │   ├── kruskal/
    │   │   ├── README.md
    │   │   ├── kruskal_greedy.c
    │   │   └── kruskal_greedy.cpp
    │   ├── fractional_knapsack/
    │   │   ├── README.md
    │   │   ├── fractional_knapsack.c
    │   │   └── fractional_knapsack.cpp
    │   ├── coin_change/
    │   │   ├── README.md
    │   │   ├── coin_change_greedy.c
    │   │   └── coin_change_greedy.cpp
    │   └── vertex_cover_approx/
    │       ├── README.md
    │       ├── vertex_cover.c
    │       └── vertex_cover.cpp
    └── 07_backtracking/
        ├── n_queens/
        │   ├── README.md
        │   ├── n_queens.c
        │   └── n_queens.cpp
        ├── sum_of_subsets/
        │   ├── README.md
        │   ├── sum_of_subsets.c
        │   └── sum_of_subsets.cpp
        ├── hamiltonian_cycle/
        │   ├── README.md
        │   ├── hamiltonian_cycle.c
        │   └── hamiltonian_cycle.cpp
        └── graph_coloring/
            ├── README.md
            ├── graph_coloring.c
            └── graph_coloring.cpp
