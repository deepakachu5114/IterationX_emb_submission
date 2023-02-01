# IterationX_emb_submission
Embedathon submission repository for team IterationX

--------
Detailed report on the task:





--------
Instructions on how to run the files:

There are, in total, 3 '.py' files in the repository.
One of them being the code for the server, namely "server.py".
The other 3 files are the 3 clients, namely "client1.py", "client2.py".

Please open 2 or more terminals (based on how many clients you'd like to connect concurrently), and run the command "python3 <filename>.py" (it is recommended to have python3 installed on the system before trying to execute)
<filename> could be server, client1, client2, etc. Make sure to run the server along with atleast 1 client, on different terminal portals.

To (disconnect the client/ stop the server for running) KeyBoardInterrupt (ctrl ^C)
 
--------
Steps taken in finishing the task:
  
-We went through all the sample code files and poked them around to understand how the programs function.
-Created server that could host a websocket and send/recieve messages.
-Created a client that could connect to the server, recieve messages and print them.
-Modified the client code to write/log the recieved messages into a '.txt' file.
-Explored the 'numpy' library and used the 'randint' function to generate random number arrays.
-Modified the server code to package the random number arrays into a package of 5 arrays, sent every 2 seconds.  
-Modified the client code to log the recieved arrays into a '.txt' file along with the timestamps.
-Modified the client code such that it handles 'ConnectionClosedError' and attempts to reconnect to the server, and continues to work normally if the server is back online again instead of abruptly exiting the program. 
-Modified the server code such that it can handle multiple client connections concurrently.
-Modified the server code such that it doesn't abrubptly exit the program when one or more clients are disconnected.
  
--------
Screenshots of outputs of program execution
1.Two Clients Connected
![Thise is an image](https://github.com/deepakachu5114/IterationX_emb_submission/blob/master/Output/WhatsApp%20Image%202023-02-01%20at%2023.25.56.jpg)
  
  
  
