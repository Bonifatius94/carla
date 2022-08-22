# How to use the Scoomatic

Build carla **0.9.13** on linux according to their documentation online. Including `make PythonAPI`
and `make launch` to make sure everything works before you change anything.

`TODO: replace this with instructions to execute the Docker-Compose build`

The `./Update.sh` of this fork is configured to move the existing contents to an intermediate directory,
then pull all official contents via network and extract the Scoomatic-specific contents
from [Carla.tar.gz](./Carla.tar.gz) with overwrite. So, if you've made any changes to Scoomatic assets
your changes are not lost, but you'll need to copy them from the intermediate folder back into
the `Unreal/CarlaUE4/Content/Carla` folder. Also, if you want to persist your asset changes,
just zip your Scoomatic files and commit your version of `Carla.tar.gz` via Git.

Ask @ll7 for the following files if you want a vehicle on your own:

- Creating a simplified virtual Scoomatic from Scretch in Blender for Carla
- How to rig vehicle in blender 2.8 for Unreal Engine 4
- Add a new vehicle - CARLA Simulator

Files can be found in an old Version in the Scoomatic Folder

Blender files can be found here:
https://git.rz.uni-augsburg.de/luttkule/scoomatic-carla/-/tree/master/Blender/ReintegrateScoomatic
`Scoomatic.fbx`
