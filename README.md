# OpenGC

Open-source graphing calculator (GC) software that runs on an embedded board (exact model TBC).

I decided to create OpenGC for two main reasons:

1. Implementing mathematical algorithms on an embedded device sounds fun.
2. Texas Instruments has what is essentially a monopoly over the GC market at my education level in Singapore, leading to ridiculously inflated GC prices of around S$150 (around US$106 as of 22 Sep 2022). OpenGC will be able to run on a cheap embedded board, giving students like me access to graphing calculator functionality for a fraction of the prices under which we are currently being gouged.


## Roadmap

1. Decide hardware and software platforms
* Embedded board of some kind (Raspberry Pi, ESP32, etc.)
* Programming language: needs to be fast, so probably C/C++
2. Develop algorithms for GC calculations (including statistical ones)
3. Write code for drawing graphs and displaying computation results on a screen
4. Handle button input
