compile:
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp -D_FILE_OFFSET_BITS=64 -I/usr/include/apr-1.0 bubblesort.c -o bubblesort.gcc_run -lapr-1 -lgomp -lm
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp -D_FILE_OFFSET_BITS=64 -I/usr/include/apr-1.0 bubblesort_func.c -o bubblesort_func.gcc_run -lapr-1 -lgomp -lm
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp -D_FILE_OFFSET_BITS=64 -I/usr/include/apr-1.0 bubblesort_ll2.c -o bubblesort_ll2.gcc_run -lapr-1 -lgomp -lm
	/usr/bin/gcc -pipe -Wall -O3 -fomit-frame-pointer -march=native -fopenmp -D_FILE_OFFSET_BITS=64 -I/usr/include/apr-1.0 bubblesort_ll.c -o bubblesort_ll.gcc_run -lapr-1 -lgomp -lm
	
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./bubblesort.gcc_run" C bubblesort
	sudo ../../RAPL/main "./bubblesort_func.gcc_run" C bubblesort_func
	sudo ../../RAPL/main "./bubblesort_ll2.gcc_run" C bubblesort_ll2
	sudo ../../RAPL/main "./bubblesort_ll.gcc_run" C bubblesort_ll

run:
	./bubblesort.gcc_run 21
	./bubblesort_func.gcc_run 21
	./bubblesort_ll2.gcc_run 21
	./bubblesort_ll.gcc_run 21

mem:
	/usr/bin/time -v ./binarytrees.gcc-3.gcc_run 21
