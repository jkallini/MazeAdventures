# Maze Adventures

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/title.png" width="50%"
alt="Maze Adventures">

## About the Game

**Maze Adventures** is a Unity3D game, where you play as a lonely pill trying to escape a dangerous maze.
Before the game starts, you are greeted by a menu screen that allows you to input the size of the
maze you would like to play in. Your maze can be as small as a tiny 5 by 5 grid, or as large as a 30 by
30 labyrinth!

Each time you start a new game, Maze Adventures uses a [recursive division maze generation algorthim](http://weblog.jamisbuck.org/2011/1/12/maze-generation-recursive-division-algorithm) to
create a **unique, random maze at runtime**. So no memorizing the paths here! The number of unique levels
is infinite, which means endless fun for the player.

This game isn't *just* about getting through the maze, though. The evil Glowies have locked your
Pill friends in rooms, and hid the keys all over the maze. You have to find the keys and unlock all of
the rooms before you can leave the maze!

The Glowies, the keys, and the rooms are distributed randomly across the maze using [Poisson disk sampling](http://www.cemyuksel.com/cyCodeBase/soln/poisson_disk_sampling.html). This ensures that they will be in new
positions every time you start a new level, but the Glowies won't be able to gang up on you in one section of
the maze.

## Completed Features

### Menu and Maze Generation
- [x] Main menu screen allows the player to input the desired dimensions of the maze.
- [x] During a level, the player can pause at any time, and return to the main menu.
- [x] Random mazes generated at runtime.
  - [x] Recursive division maze generation algorithm coded in Unity from scratch.
- [x] Poisson disk distribution used to scatter rooms, enemies, health, and keys across the maze with uniform randomness.
  - [x] Exactly same number of keys and rooms are generated.
  - [x] Objects are placed randomly but cannot spawn in the same locations.

### Characters
- [x] Player can rotate in the direction of the cursor and fire projectiles on click.
- [x] Bomb enemies created. 
  - [x] Can follow the player's transform and inflict damage upon contact.
  - [x] Can drop bombs that damage the player and destroy walls within their blast radius.
- [x] Fire enemies created.
  - [x] Can shoot projectiles in the direction of the player's transform that inflict damage.
  
### Assets, Animations, and UI
- [x] All 3D models and animations created from scratch in Unity.
- [x] Player and enemies flash while taking damage.
- [x] Player's health bar decreases when the player is damaged and increases after the player finds health.
- [x] All enemies have individual health bars.
- [x] Fire enemies animated with spinning projectiles.
- [x] Collectible items rotate.
- [x] Player and enemies explode upon death.

###

## Directions

Use `WASD` to move around. Your cursor indicates the direction you want to shoot. Left-click to shoot a
pellet. If you have a key, you can use it to unlock a room. Stand next to the door of the room and press
`enter` to unlock the door. Once all rooms have been opened, navigate to the exit in the top-right corner
of the maze.

<img src='https://github.com/jkallini/MazeAdventures/blob/master/walkthrough1.gif' title='Video Walkthrough' width=''
alt='Video Walkthrough' />

GIF created with [LiceCap](http://www.cockos.com/licecap/).

### Player
This is you!

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/player.png" width="60"
alt="Player">

### Key
Collect these keys to unlock rooms!

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/key.png" width="80"
alt="Key">


### Room
These are rooms where your fellow Pills are trapped!

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/room.png" width="200"
alt="Room">

### Bomb Glowy
Bomb Glowies can follow you around. Don't let them touch you!
They can also drop bombs when they get close to you!

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/red_enemy.png" width="60"
alt="Bomb Glowy">

### Bomb
Bombs are dropped by Bomb Glowies. Bombs can break walls, which makes it easier to get
through the maze. But don't be too close to the bombs when they explode!

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/bomb.png" width="40"
alt="Bomb">

### Fire Glowy
Fire Glowies are stationary, but they can shoot fire balls at you! They also take
twice as much damage as Bomb Glowies.

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/fire_enemy.png" width="120"
alt="Fire Glowy">

### Heart
Hearts replenish some of your health. You can find them by searching the maze,
or by defeating Glowies.

<img src="https://github.com/jkallini/MazeAdventures/blob/master/Images/heart.png" width="40"
alt="Heart">

## Credits

- [Poisson-disc sampling in Unity](http://gregschlom.com/devlog/2014/06/29/Poisson-disc-sampling-Unity.html)
