package main

import "fmt"

func main() {
	var conferenceName = "Go Conference"
	const conferenceTickets = 50
	var remainingTickets uint = conferenceTickets
	fmt.Printf("Welcome to %v the Booking App \n", conferenceName)
	fmt.Println("Get your Tickets to attend, Only ", remainingTickets, " are left there out of ", conferenceTickets)

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

	fmt.Printf("User %v %v booked %v tickets with %v to attend..\n", firstname, lastname, user_tickets, email)

}
