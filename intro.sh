#! /bin/bash

function Menu(){
echo " ====== MENU =========== "
echo "1 - Add New User and Password"
echo "2 - Add New User with Password with ID User"
echo "3 - Delete User"
echo "4 - Change Username or ID or Group"

read choice;
case $choice in
1) echo "Add New User and Password"
	AddNewUser;
	;;
2) echo "Add New User with Password with ID User"
	AddNewUserID;
	;;
3) echo "Delete User"
	DelUse;
	;;
4) echo "Change Username or ID or Group"
	Change;
	;;
	esac
}

function AddNewUser(){
	echo "Enter username: "
	read username;

	useradd $username
	if (( $? == 0 ))
	then
	passwd $username
	fi
}

function AddNewUserID(){
	echo "Enter username"
	read useradd $username
	echo "Enter ID User"
	read $ID
	echo "Enter Group"
	read $group
	useradd $username -g $group -u $ID

}

function DelUser(){
	echo "Enter user name do You want to delete: "
	read $username;
	userdel $username -r
}

function Change(){
	echo "Enter what do You want to change: "
	read $choice1;
	case $choice1 in
	1) echo "Change username"
		usermod -l $username $username
		;;
	2) echo "Change user ID"
		usermod -u $ID
		;;
	3) echo "Change group"
		usermod -g $group
		;;
	esac
}

Menu;



# clear
# exit=false

# while [ $exit == false ]
# do


# echo -e "Enter day number => \n0. Exit "
# read number;

# if (( $number == 1 ))
# then
# 	clear
# 	echo "Monday";

# elif (( $number == 2 ))
# then
# 	clear	
# 	echo "Tuesday";

# elif (( $number == 3 ))
# then
# 	clear
# 	echo "Wednesday";

# elif (( $number == 4 ))
# then
# 	clear
# 	echo "Thuesday";

# elif (( $number == 5 ))
# then
# 	clear
# 	echo "Friday";

# elif (( $number == 6 ))
# then
# 	clear
# 	echo "Saturday";

# elif (( $number == 7 ))
# then
# 	clear
# 	echo "Sunday";

# elif (( $number == 0 ))
# then
# 	clear
# 	exit=true
# 	echo "by";

# else
# 	clear
# 	echo "This day is absent"

# fi

# done
