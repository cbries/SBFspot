#define VERSION "3.8.3"

/*
V3.8.0
    Fix memory leaks (see #318)
    Fix #7 MariaDB10 with Port 3307
    Fix SQL daydata export (for PVoutput) : Include zero record, just after production stopped
    Fix #395 Mix of ISO-8859-1 and UTF-8, CRLF and LF line endings
    Merged #425 Move Inverter related stuff to dedicated class
    Fix #290 Etoday and temperature are shown as ZERO from STP6.0 inverter

V3.8.1
    Fix #448 Error:sqlite3_exec() returned: "UNIQUE constraint failed"
    Fix #402 How to specify bluetooth device on Raspbian?
    Fix #378 MQTT / Missing Parameter BT-Signal - PdcTot
    Merge #450 MQTT: let sunrise/sunset timestamps obey configured format

V3.8.2
    Fix #455 Voltages and Currents in .csv file swapped for battery inverter
    Fix #428 SBFspotUploadDaemon crash
    Fix #459 Incorrect Calculated EToday
    Fix #330 From Sqlite3 to MySQL
    Fix #457 Serial number too big for defined field

V3.8.3
    Fix #476 V3.8.2 fails to compile on Fedora 34
    Merged #467 Let executable return errors in Inverter::process()
    Fix #482 Some data missing on 2nd Inverter
*/

/***
*
* Complete modification history can be found at:
* https://github.com/SBFspot/SBFspot/wiki/Modification-History
*
***/