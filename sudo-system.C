// test code ?

main
{

switch(state)

case time:
{
	while( state == time)
{
 I2C read time.
	send hour to hour
	send minit to minit
	send second to second
	send 10th to 10th

	read swtich 
	switch = state
}


case date:
{
	I2C read date.
		send day to hour
		send mounth to minit
		send year to second // need to do work as 2015 != 00
		// dont know what to do with 
	read switch
	switch = state
}

case bandwith:
{
	while (state == bandwith)
	{
		request table from router
		download = hours
		upload = minits
		ping = seconds
		// dont know for 10th
	read switch
	switch = state
	}
}

case speed test
	while( state == speed test)
	{
		ping speed test server
			// could take a while
		while ( state == speed test. and for harf a second)
			{
				delay ( 50 );
				read switch
				switch = state
			}

		download speed = hours
		upload speed = minits
		ping time = seconds
		// dont know what to do for 10ths
	}
} }
