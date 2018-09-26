TestBooking: TestBooking.o Booking.o Hotel.o Room.o Customer.o
	g++ TestBooking.o Booking.o Hotel.o Room.o Customer.o -o TestBooking 
TestBooking.o: Booking.cpp Booking.h
	g++ -c TestBooking.cpp
Booking.o: Booking.cpp Booking.h
	g++ -c Booking.cpp
Hotel.o: Hotel.cpp Hotel.h
	g++ -c Hotel.cpp
Room.o: Room.cpp Room.h
	g++ -c Room.cpp
Customer.o: Customer.cpp Customer.h
	g++ -c Customer.cpp	