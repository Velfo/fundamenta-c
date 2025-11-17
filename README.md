Fundamenta-C
Azerbaijan-themed data structures & algorithms implemented in clean C

Overview

Fundamenta-C is an educational project designed to strengthen your knowledge of pure C, systems programming, and algorithmic fundamentals — while integrating elements of Azerbaijani culture, geography, and history into naming and design.

Each data structure, module, and algorithm is named after a region, river, ancient city, or classical poet of Azerbaijan and the Caucasus.

This creates a learning journey that is not only technical but also cultural.

Goals

Learn and internalize core data structures (arrays, stacks, queues, deques, trees, hash tables, etc.)

Implement classic algorithms from scratch (sliding window, search, sort, graph algorithms, etc.)

Practice clean C style, inspired by The Linux Programming Interface.

Improve low-level reasoning: pointers, memory management, modular design.

Build a professional, well-structured educational repository for future SRE / Systems Engineering interviews.

Themed Naming Philosophy

Every module is named according to:

```angular2html
| Region   | Data Structure | Example            |
| -------- | -------------- | ------------------ |
| Absheron | Array          | `absheron_array.c` |
| Gobustan | Deque          | `gobustan_deque.c` |
| Shirvan  | Queue          | `shirvan_queue.c`  |
| Karabakh | Stack          | `karabakh_stack.c` |

```


Rivers → Algorithms

```angular2html
| River | Algorithm      | Example                 |
| ----- | -------------- | ----------------------- |
| Kura  | Sliding Window | `kura_sliding_window.c` |
| Araz  | Prefix Sum     | `araz_prefix_sum.c`     |

```

Poets → Trees / Advanced DS

```angular2html
| Poet           | Structure                  |
| -------------- | -------------------------- |
| Nizami Ganjavi | Trees / Balanced trees     |
| Fuzuli         | Recursion-heavy algorithms |

```


Ancient Cities → Sub-projects

```angular2html
| City   | Subproject                    |
| ------ | ----------------------------- |
| Gabala | Graph algorithms              |
| Sheki  | Sorting algorithms collection |

```

This gives the repo an identity, a story, and a unique flavour compared to generic CS101 repositories.

Project Structure

```angular2html
fundamenta-c/
│
├── src/
│   ├── absheron_array/
│   │   ├── absheron_array.c
│   │   └── absheron_array.h
│   │
│   ├── gobustan_deque/
│   │   ├── gobustan_deque.c
│   │   └── gobustan_deque.h
│   │
│   ├── shirvan_queue/
│   │   ├── shirvan_queue.c
│   │   └── shirvan_queue.h
│   │
│   ├── kura_sliding_window/
│   │   ├── kura_sliding_window.c
│   │   └── kura_sliding_window.h
│   │
│   └── ...
│
├── README.md
└── .gitignore

```

Documentation (Wiki)

The GitHub Wiki expands each structure into its own section:

Theory — what the structure is, complexity, diagrams

Implementation Notes — C-specific reasoning

Exercises — practice questions

Cultural Page — short history of the region/poet/river

This helps you learn both computer science and culture in one unified repository.

Build & Run
Requirements

GCC or Clang

CMake 3.25+

CLion (optional, recommended)

Unix-like environment preferred (Linux, macOS)

Build

```angular2html
mkdir build
cd build
cmake ..
make
./fundamenta_c

```

Learning Approach

Each module will follow a consistent pattern:

Write theory notes in the Wiki

Create diagrams in Miro / Excalidraw

Implement the structure (header + source)

Write tests / examples

Benchmark or visualize performance

This builds deep skill in low-level reasoning.


Why This Project Matters

This repository becomes the foundation of your:

Systems programming knowledge

SRE interview preparation

Low-level C skills

Portfolio demonstrations

Personal educational framework