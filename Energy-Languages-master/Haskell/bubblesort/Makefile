compile:
	cp bubblesort_slow.hs bubblesort_slow.ghc-2.hs
	cp bubblesort_upd.hs bubblesort_upd.ghc-2.hs
	cp bubblesort_upd2.hs bubblesort_upd2.ghc-2.hs
	ghc --make -fllvm -O2 -XBangPatterns -threaded -rtsopts  bubblesort_slow.ghc-2.hs -o bubblesort_slow.ghc-2.ghc_run
	ghc --make -fllvm -O2 -XBangPatterns -threaded -rtsopts  bubblesort_upd.ghc-2.hs -o bubblesort_upd.ghc-2.ghc_run
	ghc --make -fllvm -O2 -XBangPatterns -threaded -rtsopts  bubblesort_upd2.ghc-2.hs -o bubblesort_upd2.ghc-2.ghc_run
measure:
	sudo modprobe msr
	sudo ../../RAPL/main "./bubblesort_slow.ghc-2.ghc_run" Haskell bubblesort_slow
	sudo ../../RAPL/main "./bubblesort_upd.ghc-2.ghc_run" Haskell bubblesort_upd
	sudo ../../RAPL/main "./bubblesort_upd2.ghc-2.ghc_run" Haskell bubblesort_upd2

run:
	./bubblesort_slow.ghc-2.ghc_run
	./bubblesort_upd.ghc-2.ghc_run
	./bubblesort_upd2.ghc-2.ghc_run

mem:
	/usr/bin/time -v ./bubblesort_slow.ghc-2.ghc_run
	/usr/bin/time -v ./bubblesort_upd.ghc-2.ghc_run
	/usr/bin/time -v ./bubblesort_upd2.ghc-2.ghc_run

valgrind:
	valgrind --tool=massif --stacks=yes ./bubblesort_slow.ghc-2.ghc_run
	valgrind --tool=massif --stacks=yes ./bubblesort_upd.ghc-2.ghc_run
	valgrind --tool=massif --stacks=yes ./bubblesort_upd2.ghc-2.ghc_run
