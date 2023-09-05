                                 /$$$$$$$$                /$$$$$$$
                                |__  $$__/               | $$__  $$
                                   | $$  /$$$$$$         | $$  \ $$  /$$$$$$
                                   | $$ /$$__  $$ /$$$$$$| $$  | $$ /$$__  $$
                                   | $$| $$  \ $$|______/| $$  | $$| $$  \ $$
                                   | $$| $$  | $$        | $$  | $$| $$  | $$
                                   | $$|  $$$$$$/        | $$$$$$$/|  $$$$$$/
                                   |__/ \______/         |_______/  \______/
                   

DESCRIPTION:

An interactive console to-do list that has all the basic features you would want, available for UNIX systems.

COMPILATION:

- First copy all the files from the src into a directory of your choice

- Next compile all the .cpp files using 'g++ -c'

- Finally compile all the .o files together in this order: 

g++ -o app_name main.o Commands.o File_Output.o Prompts.o Task.o File_Input.o

EXECUTION:

./app_name

USAGE: 

<img width="424" alt="Screenshot 2023-09-01 at 12 48 30 PM" src="https://github.com/mikeTwoTimes/to-do/assets/135299307/653213e9-f1ff-493b-8a2c-fcb1942d0bc5">

FEATURES:

- Allows users the ability to create, edit, and delete tasks. All while using a console themed UI. 

- The program will save the tasks to a .txt file called "tasks.txt".
