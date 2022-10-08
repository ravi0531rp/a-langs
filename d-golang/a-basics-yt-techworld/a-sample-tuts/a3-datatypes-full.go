package main

import "fmt"

func main() {
	var conferenceName = "Go Conference" // type is implied due to assignment
	// Alternative conferenceName := "Go Conference"
	const conferenceTickets = 50
	var remainingTickets uint = conferenceTickets // Alternative remainingTickets := conferenceTickets
	fmt.Printf("Welcome to %v the Booking App \n", conferenceName)
	fmt.Println("Get your Tickets to attend, Only ", remainingTickets, " are left there out of ", conferenceTickets)

	var username string // type needs to be specified as no init happening here
	var user_tickets int

	username = "Tom"
	user_tickets = 3
	fmt.Printf("User %v booked %v tickets to attend..\n", username, user_tickets)
	fmt.Printf("user_tickets is %T , username is %T\n", user_tickets, username)
}
