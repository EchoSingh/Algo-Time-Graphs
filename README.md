# Algo-Time-Graphs 📈

This repository contains code and resources to show the graphs for the time taken by various algorithms.

## Table of Contents 📚

- [Introduction](##introduction)
- [Folder Structure](##folder-structure)
- [Installation](##installation)
- [Usage](##usage)
- [Contributing](##contributing)
- [License](##license)

## Introduction 🌟

This project aims to visualize the time complexity of different algorithms through graphs. It includes the implementation of the algorithms, their benchmarking, and the generation of graphs to illustrate their performance.

## Folder Structure 🗂️
```
├── .gitignore
├── CMakeLists.txt
├── CMakeLists.txt.user
├── LICENSE
├── README.md
├── main.cpp
├── mergesort.cpp
├── mergesort.h
└── mergesort.jpg
```

- `.gitignore`: Specifies files to be ignored by Git.
- `CMakeLists.txt`: Configuration file for CMake.
- `CMakeLists.txt.user`: User-specific configuration file for CMake.
- `LICENSE`: License file for the project.
- `README.md`: This file.
- `main.cpp`: Main file to run the project.
- `mergesort.cpp`: Implementation of the Merge Sort algorithm.
- `mergesort.h`: Header file for the Merge Sort algorithm.
- `mergesort.jpg`: Graphical representation of the Merge Sort algorithm's performance.

## Installation ⚙️

To compile and run this project, you will need to have the following installed:

- CMake
- A C++ compiler (e.g., g++)

### Steps

1. Clone the repository:
   ```sh
   git clone https://github.com/aditya26062003/Algo-Time-Graphs.git
   cd Algo-Time-Graphs
   ```
2. Create a build directory and navigate into it:
   ```sh
   mkdir build
   cd build
   ```
3. Run CMake to configure the project:
   ```sh
   cmake ..
4. Build the project:

   ```sh
   make
5. Run the executable:

   ```sh
   ./AlgoTimeGraphs
## Usage 🚀
Once you have built and run the project, it will execute the implemented algorithms and generate time performance data. The data can then be used to plot graphs showing the time complexity.

The mergesort.jpg file provides a visual representation of the Merge Sort algorithm's performance as an example.

## Contributing 🤝
Contributions are welcome! Please follow these steps:

1. Fork the repository.
2. Create a new branch (git checkout -b feature-branch).
3. Commit your changes (git commit -m 'Add some feature').
4. Push to the branch (git push origin feature-branch).
5. Open a pull request.
   
## License 📜
This project is licensed under the MIT License - see the [LICENSE](https://github.com/aditya26062003/Algo-Time-Graphs/blob/main/LICENSE) file for details.
