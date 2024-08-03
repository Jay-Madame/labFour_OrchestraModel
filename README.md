# Lab Four - System Model

## CSCII with Jon Baarsch

## Jewell Callahan

### Objective:

__Create a system model for a topic__

### Must include: 
[ ] Five classes
    [ ] Two must be aggregate relationships
    [ ] Threee must be inheritance relationships
[ ] A polymorphic variable
[ ] Multiple classes and files
[ ] Classes must be separated

### Class Index

[ ] Conductor
    [ ] Controls the tempo of the song
    [ ] Controls the volume of the orchestra
    [ ] Changes the song
    [ ] Has a runtime for the whole concert

[ ] songChoice
    [ ] Has a tempo of the song
    [ ] returns the runtime
    [ ] Plays either jupiter or newWorldSymphony at a designated tempo/volume

[ ] jupiter
    [ ] displays composer
    [ ] displays the runtime of the song

[ ] newWorldSymphony9th
    [ ] displays composer
    [ ] displays runtime of the song

[x] Time
    [x] takes in hours, minutes, and seconds
    [x] simplifies if there is a certain amount of minutes/seconds over to be correct format
    [x] Prints out in hours:minutes:seconds
        ex - "9:40:06"

[ ] Instrument (parent)
    [ ] default for instrument
    [ ] statement that shows what instrument is playing

[ ] stringInstrument (child)
    [ ] void play override for string Instruments

[ ] woodwindInstrument (child)
    [ ] void play override for woodwind instruments

[ ] percussion (child)
    [ ] void play override for percussion instruments
