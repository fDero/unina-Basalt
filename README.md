![license: MIT](https://img.shields.io/badge/license-MIT-blue)
![version: pre-release](https://img.shields.io/badge/version-pre--release-red)

# Basalt
This repository hosts an interpreter for the Basalt programming language. In the future, 
the goal is to evolve this project into an all-in-one bundle made of an interpreter, a compiler, and a debugger.
Basalt is designed to be compiled directly to machine code, and offers all the features a low level language would, 
while still being able to be interpreted like languages like Python or Ruby (enhancing portability, 
and reducing wasted time by removing the need to perform a full compilation of your code-base just to run unit-tests).

### Installation (Building from source)
In order to install Basalt, you have to build it from source. By default, the build process tries to use `clang++`, 
but you can change that to make it use `g++` instead if you so desire. Either way `c++20` or higher is required.
```bash
$$ git clone https://www.github.com/fDero/Basalt
$$ cd Basalt
$$ make build
```

### Hello World
To make your first hello-world program in Basalt, all it takes is to create a file with the `.bt` extension 
(in this case, it will be called `hello.bt`) containing the following code:
```go
func main(){
    println("Hello world!");
}
```

Once you have the file set up, to run it just use the `basalt -r hello.bt` command in console.
```bash
$$ basalt -r hello.bt
$$ Hello world!
```

### Types
Basalt is a strictly typed language, it has a C-style type system with 
`Int`, `Float`, `Bool`, `Char`, `String` as primitive types. 
```go
func main(){
    var x : Int = 6;
    var y : Float = 9.4;
    var f : Bool = false;
    var c : Char = 'z';
    var s : String = "hello world";
}
```

### Recursion
Basalt supports recursion just like any other language, and a good way to show it is with the classic 
fibonacci example, consider the following code:
```go
func fibo(n : Int){
    if (n < 2) {
        return 1;
    }
    else {
        return fibo(n-1) + fibo(n-2);
    }
}

func main(){
    println(fibo(6));
}
```
assuming the file is called `fibo.bt`, then it can be executed just like we did earlier with the hello-world example, 
using the `basalt -r` command.
```bash
$$ basalt -r fibo.bt
$$ 21
```
