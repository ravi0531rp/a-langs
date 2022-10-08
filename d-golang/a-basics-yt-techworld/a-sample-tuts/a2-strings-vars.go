package main

import "fmt"

func main() {
	var conferenceName = "Go Conference"
	const conferenceTickets = 50
	var remainingTickets = conferenceTickets
	fmt.Printf("Welcome to %v the Booking App \n", conferenceName)
	fmt.Println("Get your Tickets to attend, Only ", remainingTickets, " are left there out of ", conferenceTickets)

}
