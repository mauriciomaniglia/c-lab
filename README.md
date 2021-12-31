# c-lab
Exploring the C language.

## My Toolbox

- C functions like printf() and scanf() use the Standard Output and Standard Input to communicate.
- The Standard Output goes to the display by default.
- The Standard Input reads from the keyboard by default.
- The Standard Error is a separate output intended for error messages.
- You can change where the Standard Input, Output, and Error are connected to using redirection.
- You can print to the Standard Error using fprintf(stderr,...).
- Command-line arguments are passed to main() as an array of string pointers.
- You can create custom data streams with fopen(“filename”, mode).
- The mode can be “w” to write, “r” to read, or “a” to append.
- The getopt() function makes it easier to read command- line options.

### Data stream

- The printf() function sends data to the Standard Output.
- The Standard Output goes to the display by default.
- You can redirect the Standard Output to a file by using > on the command line.
- scanf() reads data from the Standard Input.
- The Standard Input reads data from the keyboard by default.
- You can redirect the Standard Input to read a file by using < on the command line.
- The Standard Error is reserved for outputting error messages.
- You can redirect the Standard Error using 2>.
- You can connect the Standard Output of one process to the Standard Input of another process using a pipe.

### Main function and command arguments

- There are two versions of the main() function—one with command-line arguments, and one without.
- Command-line arguments are passed to main() as an argument count and an array of pointers to the argument strings.
- Command-line options are command-line arguments prefixed with “-”.
- The getopt() function helps you deal with command-line options.
- You define valid options by passing a string to getopt() like ae:.
- A “:” (colon) following an option in the string means that the option takes an additional argument.
- getopt() will record the options argument using the optarg variable.
- After you have read all of the options, you should skip past them using the optind variable.
