#! /bin/bash
clear
exit=false
function Menu(){
    echo "Please, make your choice: "
    echo "1 - Show All disks"
    echo "2 - Show disk's space"
    echo "3 - Add New Partition"
    echo "4 - Format Disk"
    echo "5 - Edit Fstab"
    echo "0 - Exit"
     read choice
}

function AddNewPart(){

    echo "Enter disk: "
    read diskToPart
    fdisk /dev/$diskToPart
}

function FormatDisk(){
    echo "Enter disk for format: "
    read diskToFormat
    mkfs.ext4 /dev/$diskToFormat
}

function EditFstab(){
 echo "Enter disk: "
 read diskToEditFstab
 blkid | grep $diskToEditFstab >> /etc/fstab
 vim /etc/fstab

}

while [ $exit == false ]
do
Menu;

    if (( $choice == 1 ))
    then 
        clear
        ls -l /dev/sd*
    elif (( $choice == 2 ))
    then 
        clear
        df -h 
    elif (( $choice == 3 ))
    then
        clear
        AddNewPart;
    elif (( $choice == 4))
    then
        clear
        FormatDisk
    elif (( $choice == 5))
    then
        clear
        EditFstab
    elif (( $choice == 0 ))
    then
        clear
        exit=true;
    fi
    done



