connman-gtk
===========

This repository contains connman-gtk imported from upstream repo with the 
addition of debian packaging including the patch allowing main window to be 
toggled by clicking on the tray icon.

Original README is bellow.

------------

GTK GUI for ConnMan.

![screenshot-1](https://raw.githubusercontent.com/jgke/jgke.github.io/connman-gtk/connman-gtk-1.png)
![screenshot-2](https://raw.githubusercontent.com/jgke/jgke.github.io/connman-gtk/connman-gtk-2.png)

Dependencies
------------

 * intltool
 * GLib
 * GTK >= 3.10
 * connman itself

Optional dependencies
---------------------

 * openconnect
    * Easier authentication to AnyConnect VPNs

Usage
-----

	connman-gtk [options]

	--help

Show help.

	--no-icon

Disable status icon.

	--tray

Launch to tray.

	--use-fsid

Use FSID when connecting to OpenConnect networks.

Installation
------------

	./autogen.sh
	./configure
	make
	make install

configure options
-----------------

	--enable-status-icon=[yes,no]
	--disable-status-icon

Enable or disable the status icon. Future GTK versions might remove the support
for status icons, but as of 3.18 the support is still there, just deprecated.

	--with-openconnect=[yes,no,check,dynamic]

Enables use of [openconnect](http://infradead.org/openconnect/) for easier
authentication for AnyConnect VPNs. Using 'dynamic' will load the library at
runtime, if present. Default argument is 'check' which checks for the library
at configure time.

License
-------

GPLv2, see COPYING
