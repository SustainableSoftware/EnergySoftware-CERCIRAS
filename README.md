# EnergySoftware-CERCIRAS
This repository is a part of the online material on Energy Consumption and Optimization of Software. 
The creation of this material was funded by COST action 19135 Connecting Education and Research Communities for an Innovative Resource Aware Society (CERCIRAS) 
See more on https://www.cost.eu/actions/CA19135/  and https://www.cerciras.org/


The material in this repository is developed, authored, and recorded by **Maja H Kirkeby, João P. Fernandes, and Bernardo Santos**.
It contains three parts:
- A setup for using Intel's RAPL (In the folder Energy-Languages-master)
- The statistical analysis for normal distributed data and for not normal distributed data, including a calculation on how many samples we need.
- Video material, available at https://cloud.cerciras.org/s/4naZc1gTIgAFlT7 :
  1. Video 1: Introduction to and overview of this online material
  2. Video 2: Motivation and Introduction to the energy consumption of software
  3. Video 3: Comparing and Measuring Energy Consumption 
  4. Video 4A: Using RAPL (Introduction to the setup)
  5. Video 4B: Using RAPL  (Follow-along: measure energy consumption)
  6. Video 5: Using Python for statistical analysis of the experimental results 



The setup for using RAPL (In the folder Energy-Languages-master) is based on https://github.com/greensoftwarelab/Energy-Languages, with minor updates and tweaks. 

The test laptops we have used are Intel laptops: ThinkPad x260, Hardware: Intel(R) Core(TM) i5-6200U CPU @ 2.30GHz, Architecture: x86_64, CPU(s): 4, Memory: 7.6Gi. 

We have installed ubuntu servers on them.  OS: Ubuntu Server: Ubuntu 22.04 

The compilers used in the setup are:
- C: 		gcc (Ubuntu 11.2.0-19ubuntu1) 11.2.0
- Python:	Python 3.10.4
- Haskell:	ghc 8.10.7


