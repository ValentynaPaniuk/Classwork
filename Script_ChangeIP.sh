#! /bin/bash

sed -i 's/BOOTPROTO="dhcp"/BOOTPROTO="static"/g' /etc/sysconfig/network-scripts/ifcfg-enp0s3
echo "Enter static IP: "
read ip;
echo "Enter NetMask: "
read netmask;
echo "Gateway: "
read gateway;
echo "Enter DNSI"
read dns;

echo "IPADDR="$ip"" >> /etc/sysconfig/network-scripts/ifcfg-enp0s3
echo "NETMASK="$netmask"" >> /etc/sysconfig/network-scripts/ifcfg-enp0s3
echo "GATEWAY="$gateway"" >> /etc/sysconfig/network-scripts/ifcfg-enp0s3
echo "DNS1="$dns"" >> /etc/sysconfig/network-scripts/ifcfg-enp0s3

systemctl restart network


