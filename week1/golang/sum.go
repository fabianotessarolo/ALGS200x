package main

import "fmt"

func main() {

	var a, b int
	a = 2
	b = 1

	fmt.Println("Golang Result is", sumOfTwoDigits(a, b))
}

func sumOfTwoDigits(a, b int) int {
	return a + b
}
