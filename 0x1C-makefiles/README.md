# 0x1C. C - Makefiles
## Resources
**Read or watch:**  
* [What is a makefile and how does it work](https://www.youtube.com/watch?v=aRtEjmPsns8)
* [Installing the make utility](https://askubuntu.com/questions/421573/how-to-install-make-in-ubuntu)
* [make-official documentation](https://www.gnu.org/software/make/manual/make.html)
* [More about Makefile](https://www.tutorialspoint.com/makefile/index.htm)
## Learning Objectives

* What are `make` and `Makefiles`
* When, why, and how to use Makefiles
* What are rules and how to set and use them
* What are explicit and implicit rules
* What are the most common/useful rules
* What are variables and how to set and use them

**General**

* Allowed editors: vi, vim, emacs
* OS: Ubuntu 20.04 LTS
* gcc version: 9.3.0
* make version: GNU Make 4.2.1
* All files should end with a new line
* A README.md file is mandatory
## Tasks
### 0. make -f 0-Makefile **
**Create your fist Makefile**
**Requirements:**
* **name of the executable:** `school`
* **Rules: all**
	*`all`: This rule builds your executable
* **Variables:** None

**Example Usage:**

```bash
julien@ubuntu:~/0x1C. Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
julien@ubuntu:~/0x1C. Makefiles$ ./school 
j#00000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
... (program output)
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
julien@ubuntu:~/0x1C. Makefiles$


