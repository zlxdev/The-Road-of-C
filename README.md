# The Road of C
![Language](https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Platform](https://img.shields.io/badge/platform-WSL%20%2F%20Linux-orange?style=for-the-badge&logo=linux&logoColor=white)
![License](https://img.shields.io/github/license/zlxdev/The-Road-of-C?style=for-the-badge)

Welcome to my personal archive for mastering the C programming language. This repository documents my journey from high-level understanding down to low-level memory management and hardware interaction.

> **Current Status:** Focusing on "small bits" and foundational concepts.

---
# About this repository: 

## Philosophy: "Learn First, AI Later"
This repository is built with a specific mindset: **Hand-coded mastery.**
* **The Code:** Written primarily by hand to ensure deep understanding of syntax and logic.
* **AI Usage:** AI is treated as a *last resort*. It is used only when you are completely stuck on a concept, acting as a tutor rather than a writer. The goal is to struggle with the problem first, as that is where the learning happens.
* **WSL:** Wsl is highly recommended, since this code heavily uses WSL terminal for compiling, testing, debugging, and running codes or even using git. I would say it's a must if you wanna avoid trouble merging with the files.

## Repository Structure
Currently, some directories (like *Library* and *Projects*) are maintained locally or are Work-In-Progress (WIP) and may not be fully visible here yet.

Here is the sample of existing file structure:

```text
.
├── Concepts/          # Core programming fundamentals & C mechanics
│   ├── Basics/        # Syntax, Loops, Functions
│   └── Memory/        # Pointers, Structs, Stack vs Heap
├── Labs/              # Experimental code / Try-it-your-own code
├── Projects/          # [Hidden/Local]
└── Library/           
```

## Tech Stack
* **Language:** C (C99/C11)
* **Build System:** Make
* **Environment:** WSL / Linux
* **IDE:** VSCode

## How to Run? (Click to Expand)
<details>
<summary><b>Click here for a step-by-step guide on how to run using Makefile</b></summary>

This project uses a custom `Makefile` system. To compile and run a specific file, use the following pattern in your terminal:

```bash
make <DIRECTORY>/<SUB_DIRECTORY>/<FILENAME>.run
```

These are to be followed if you have forked the whole repository, if you didn't include/recieved or have an issue with make you can proceed with the normal compiling command:

```bash
gcc <ROOT_DIR>/<SUB_ROOT>/<file.c> -o bin/<file>
./bin/<file>
```

As much as possible, proceed to post an issue regarding the error of files from forking, merging, or local errors. As it is my duty to help you fix these errors, if one does occur.
</details>


## Goals
* **Solidify knowledge of C fundamentals.**
* **Understand manual memory management.**
* **Help guide you to build a strong portfolio of low-level coding challenges.**

### Who is this intended for??

> Students who want to follow along with this repository, learn C from someone on the same path, or peers who are curious and want to master C before moving on to other languages.

### How is it different from other tutorials of C?

> Unlike standard tutorials, this is a student-led journey. Since the code is hand-written with minimal AI assistance, I invite contributors to suggest better coding styles, optimizations, or fixes. This repository prioritizes engagement and mutual learning over passive following.

---

*Created & Maintained by Johnzel Marahay*