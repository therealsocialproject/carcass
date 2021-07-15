# Carcass

Testing ground and running engine for Ocean.

#### Requirements

* Unreal Engine 4.26.2
* Cygwin 3.2.0

## Developer Setup Instructions

#### The [Carcass]

> This acts as a testing ground for the actual game - Ocean.

1. Pull this repository.
2. Do NOT open the UE4 project solution file OR the Visual Studio solution file yet.

#### The [Ocean]

> This is the actual game source code, assets, configuration and data.

3. Go over here - https://github.com/therealsocialproject/Ocean2.0 - and pull the repository. SEPARATELY from this one.
4. Keep both repositories anywhere you like, as long as they're beside each other, but NOT inside each other.

#### Workflow

> Please make sure you have Cygwin installed and are able to run .sh files. WSL should theoretically work as well.

5. The Ocean contains a script called "unreal-engine-deploy.sh".
6. Execute it. You may now open the UE4 project solution.
7. Everytime you make changes, keep respective projects in sync.
  * If you introduced changes in the actual UE4 solution, make sure you copy them back to [Ocean] and push them to the correct repository.
  * The [Carcass] is set up to ignore assets as it should.
