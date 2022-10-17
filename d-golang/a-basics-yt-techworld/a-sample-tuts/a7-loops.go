package main

// Only for loops exist in GO

// for {do whatever} // runs forever ; no exit

import (
	"fmt"
	"strings"
)

func main() {
	var conferenceName = "Go Conference"
	const conferenceTickets = 50
	var remainingTickets uint = conferenceTickets
	fmt.Printf("Welcome to %v the Booking App \n", conferenceName)
	fmt.Println("Get your Tickets to attend, Only ", remainingTickets, " are left there out of ", conferenceTickets)

	var bookings = []string{}

	for {
		var firstname string
		var lastname string
		var email string
		var user_tickets int

		fmt.Print("Enter Your First Name : ")
		fmt.Scan(&firstname)

		fmt.Print("Enter Your last Name : ")
		fmt.Scan(&lastname)

		fmt.Print("Enter Your Email : ")
		fmt.Scan(&email)

		fmt.Print("Enter Number Of Tickets : ")
		fmt.Scan(&user_tickets)

		bookings = append(bookings, firstname+" "+lastname)
		var firstnames = []string{}
		for _, booking := range bookings {
			var names = strings.Fields(booking) // split via space
			firstnames = append(firstnames, names[0])
		}
		fmt.Printf("The first names of bookers are : %v\n", firstnames)
		remainingTickets = remainingTickets - uint(user_tickets)

		fmt.Printf("%v tickets remain \n", remainingTickets)
	}

}
