---
title: "Updated Level Generation 19/02/2018"
date: 2018-2-19
excerpt_separator: <!--more-->
categories:
  - General
tags:
  - Game Development
  - Unity
  - Roguelike
  - turnbased
---

<!--more-->
## Changes  
### Procedural Generation  
Firstly I have changed the way that the level is generated. Where before I used a goal first approach, I have now opted for a room first approach. What I mean by this is that before I would essentially be creating a path from 2 predetermined points, whereas now I create a series of rooms, ensure they are connected and then spawn these points. This results in a much less liner result, and will encourage the player to actively explore rather than following a path. This also means that the majority of the rooms are “optional” so anything spawned inside them is then a reward for the player.  

What it used to look like:  

What it looks like now:

### Attacking  
Another mechanic I have changed is how the player can attack. Attacking used to be handled using a raycast meaning attacks needed to be very precise in order to hit. I have now changed them so they are based on a selection of 3 hitboxes. These are narrow, normal and wide these should have enough variability to make the weapons feel feel different from each other.  

## Added  
### Turn System  
The first new mechanic I added was a basic turn system. When the player finds the boss it will trigger a method in the GameManager script, that will move the camera below the map where the party will be moved to. Opposite them is the boss / enemies, and all characters will be added to a turn order. The player is able to choose from 2 options currently: attack and skip, however an additional 2 options will be added in the future (Item and ability). Currently nothing happens when the player wins or loses however eventually they will either be reset back to the player hub (not yet created) if they lose. If they win they will be taken to the next level with the difficulty increased.  
### Stats Generation  
The next thing I added was several methods for generating player stats, these will be used in additional party member generation to give them some variance. They are generated using a similar method to certain tabletop rpgs, by rolling 3d6s 6 times. These stats can be upgraded later on when that character levels up (not yet implemented). Stats are then changed based on the characters archetype / class, e.g. Barbarians get +2 to both strength and constitution. There is also a method to roll for health upon a level up.  
### Item Generation  
Another mechanic I added was Item generation. An item can be one of 6 different types: heal, dup (damage up), aup (attack up), poison (adds a bleed effect to weapon attacks), armour and weapons. These also have a magnitude value associated with them that is used as a form of rarity scale, ranging from 1 to 2.5. These multiply the effects of the item. Items can be generated using the base constructor (totally random) ,or one of 3 others that allow to set a hard value for either the magnitude or item type (or both). These Items are stored inside the inventory class (inside a list of items).  
### Basic UI  
Finally I added a very basic UI that shows the party members health and a basic turn UI that moves dependent on the current players turn.  
