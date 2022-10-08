## GO Language Codes

### 001. Introduction 

* Motivation for Developing the Language
    1) Infrastructure changed a lot and now more cores are available.
    2) Many Languages do not have very good support for parallelism & threading while deployment.
    3) Concurrency needs to be an integral part without making the code too complex.
    4) There exactly, GO comes into picture.

* Features
    1) Speed of C++ type Languages
    2) Ease of Python
    3) Fast to build and run
    4) Compiled language

* [Download & Install](https://go.dev/doc/install#:~:text=Click%20the%20button%20below%20to%20download%20the%20Go%20installer.)

* Test Installation
```
go version
>> go version go1.19.2 darwin/amd64
```

### 002. Sample Hello World

* Initialize the Project
```
go mod init <appname>
```
* Code main.go
```
package main

import "fmt"

func main() {
	fmt.Println("Hello World!")
}

```
* For Running
```
go run main.go 
```