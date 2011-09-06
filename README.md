mytar
=====
Simple Unix tar archiving utility implementation

Compilation
-----------
 `make`

Usage
-----
 `USAGE: ./mytar [OPTIONS] [FILE...]`

Where OPTIONS is a string containing one of the following:

<pre>
c     Create the archive
x     Extract the archive
t     Test the archive
u     Update the archive
</pre>

Or additional flags:

<pre>
f     Input/Output from/to the specified file
v     Verbose output
</pre>

