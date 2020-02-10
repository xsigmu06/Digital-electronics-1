# Lab 1: Git version-control system, Online simulator

#### Contents

1. [Lab prerequisites](#Lab-prerequisites)
2. [Github introduction](#Github introduction)
3. [Online simulator](#Online simulator)
4. [Ideas for other tasks](#Ideas-for-other-tasks)

## Lab prerequisites

Create an account on [GitHub](https://github.com/) server.

## Github introduction

### Header

*emphasis*

### List
#### Unordered
* item 1
    * item 1a
* item 2
#### Ordered
1. item 1
    1. item 1a
2. item 2

### Table
First Header | Second Header
------------ | -------------
Content from cell 1 | Content from cell 2
Content in the first column | Content in the second column

## Online simulator

1. Use online digital circuit simulator [CircuitVerse](https://circuitverse.org/), launch the simulator, draw and verify basic two-input logic gates.

![and_gates](../../Images/Main.png)

2. Run any text editor, such as Visual Studio Code, open `Digital-electronics-1/Labs/01-gates/README.md` file, create/complete tables with logical values, and add a screenshot from the simulator.

| **A** | **NOT** |
| :-: | :-: |
| 0 | 1 |
| 1 | 0 |

| **A** | **B** | **AND** | **NAND** |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 0 |

| **A** | **B** | **OR** | **NOR** |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 1 | 0 |

| **A** | **B** | **XOR** | **XNOR** |
| :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 0 | 1 |

3. Use online simulator and verify De Morgan's laws.

![equation](https://latex.codecogs.com/gif.latex?f%20%3D%20a%5Ccdot%20%5Coverline%7Bb%7D%20&plus;%20%5Coverline%7Bb%7D%5Ccdot%20%5Coverline%7Bc%7D)

&nbsp;

![equation](https://latex.codecogs.com/gif.latex?f_%7BAND%7D%20%3D%20%5Coverline%7B%5Coverline%7Ba%5Ccdot%20%5Coverline%7Bb%7D%7D%20%5Ccdot%20%5Coverline%7B%5Coverline%7Bb%7D%5Ccdot%20%5Coverline%7Bc%7D%7D%7D)
    
&nbsp;
    
![equation](https://latex.codecogs.com/gif.latex?f_%7BOR%7D%20%3D%20%5Coverline%7B%5Coverline%7Ba%7D&plus;b%7D&plus;%5Coverline%7Bb&plus;c%7D)
    
&nbsp;

| **A** | **B** |**C** | ![equation](https://latex.codecogs.com/gif.latex?f) | ![equation](https://latex.codecogs.com/gif.latex?f_%7BAND%7D) | ![equation](https://latex.codecogs.com/gif.latex?f_%7BOR%7D) |
| :-: | :-: | :-: | :-: | :-: | :-: |
| 0 | 0 | 0 | 1 | 1 | 1 |
| 0 | 0 | 1 | 0 | 0 | 0 |
| 0 | 1 | 0 | 0 | 0 | 0 |
| 0 | 1 | 1 | 0 | 0 | 0 |
| 1 | 0 | 0 | 1 | 1 | 1 |
| 1 | 0 | 1 | 1 | 1 | 1 |
| 1 | 1 | 0 | 0 | 0 | 0 |
| 1 | 1 | 1 | 0 | 0 | 0 |

## Ideas for other tasks

1. Use online digital circuit simulator, draw the logic diagram according to figure, complete the truth table, and determine the circuit function.


| **A** | **B** | **Q3** | **Q2** | **Q1** | **Q0** |
| :-: | :-: | :-: | :-: | :-: | :-: |
| 0 | 0 |  1 | 0 | 0 | 0 | 
| 0 | 1 |  0 | 1 | 0 | 0 |
| 1 | 0 |  0 | 0 | 1 | 0 |
| 1 | 1 |  0 | 0 | 0 | 1 |
