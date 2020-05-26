<h1>Map customization</h1>

There are several tools provided by the CARLA team that allow users to edit maps at will from the Unreal Editor. This tutorial introduces the most relevant tools, according to their purpose. 

Creating a new map
------------------

!!! Bug
    Creating a map from scratch with the Carla tools causes a crash with
    UE4.17.2 ([Issue #99](https://github.com/carla-simulator/carla/issues/99)),
    this guide will suggest duplicating an existing level instead of creating
    one from scratch.

<h4>Requirements</h4>

 - Checkout and build Carla from source on [Linux](../how_to_build_on_linux.md) or [Windows](../how_to_build_on_windows.md)

<h4>Creating</h4>

- Duplicate an existing map
- Remove everything you don't need from the map
    - Keep the folder "Lighting", "AtmosphericFog", "PostProcessVol" and "CarlaMapGenerator" this will keep the climate working as intended and the post process saved.
    - It might be interesting to keep the empty level as a template and duplicate it before starting to populate it.
- In the CarlaMapGenerator, there is a field "seed". You can change the map by altering that seed and clicking "Trigger Road Map Generation". "Save Road Map To Disk" should also be checked.
- You can change the seed until you have a map you are satisfied with.
- After that you can place new PlayerStarts at the places you want the cars to be spawned.
- The AI already works, but the cars won't act randomly. Vehicles will follow the instructions given by the RoadMapGenerator. They will follow the road easily while in straight roads but wont so much when entering Intersections:
![road_instructions_example.png](../img/road_instructions_example.png)
  > (This is a debug view of the instructions the road gives to the Vehicle. They will always follow the green arrows, the white points are shared points between one or more routes, by default they order the vehicle to continue straight; Black points are off the road, the vehicle gets no instructions and drives to the left, trying to get back to the road)

- To get a random behavior, you have to place IntersectionEntrances, this will let you redefine the direction the vehicle will take overwriting the directions given by the road map (until they finish their given order).
(See the two example towns how it exactly works).
    - Before version 0.7.1: For every entrance you'll have to create a series of empty actors that will be the waypoints to guide the car through the intersection; Then you'll have to assign the corresponding actors to every Path
    - After version 0.7.1: Every IntersectionEntrance has an array called routes, adding an element to this creates an editable spline in the world with the first point on the IntersectionEntrance (You might have to select another object before you can see it) This spline defines the possible routes any car will take when entering the intersection (as the Empty actors did before) you might configure this routes as you would edit any Unreal spline. Each route will create an element in the field bellow: "Probabilities" every number in this array defines the chances of any vehicle to take the corresponding route.
- To change the speed of the car, use the SpeedLimiters. They are straightforward to use. (Make sure you limit the speed for the corners, otherwise the cars will try and fail to take them at full speed)
- Traffic lights need to be scripted to avoid traffic accidents.
Every street at a crossing should have its own turn at green without the other streets having green.
- Then you can populate the world with landscape and buildings.

MultipleFloorBuilding
---------------------

![bp_spline_pic](img/map_customization/BP_Spline.jpg)
<div style="text-align: right"><i>BP_Spline example.</i></div>

### BP_Wall

The blueprint __BP_Wall__ adds __connected__ elements along the path defined by a Bezier curve. The mesh will not be warped to fit the curve, but the nodes will be respected.  

*   __Distance between__ — Set the distance between elements.  
*   __Vertically aligned__ — If selected, the elements will be vertically aligned regarding the world axis.  
*   __Scale offset__ — Scale the length of the mesh to round out the connection between elements.  

![bp_wall_pic](img/map_customization/BP_Wall.jpg)
<div style="text-align: right"><i>BP_Wall example.</i></div>

### BP_SplinePowerLine

The blueprint __BP_SplinePowerLine__ adds __electricity poles__ along the path defined by a Bezier curve, and __connects them with power lines__.  

This blueprint can be found in `Carla/Static/Pole`. This blueprint allows to set an __array of meshes__ to repeat, to provide variety.  

![bp_splinepowerline_pic](img/map_customization/BP_Splinepowerline.jpg)
<div style="text-align: right"><i>BP_SplinePowerLine example.</i></div>

The power line that connects the pole meshes can be customized.  

*   __Choose the mesh__ that will be used as wire.  
*   __Edit the tension__ value. If `0`, the power lines will be staight. The bigger the value, the looser the connection.  
*   __Set the sockets__. Sockets are empty meshes that represent the connection points of the power line. A wire is created form socket to socket between poles. The amount of sockets can be changed inside the pole meshes.  

![bp_powerline_socket_pic](img/map_customization/BP_Splinepowerline_Sockets.jpg)
<div style="text-align: right"><i>Visualization of the sockets for BP_SplinePowerLine.</i></div>

!!! Important
    The amount of sockets and their names should be consistent between poles. Otherwise, visualization issues may arise. 

<<<<<<< HEAD:Docs/dev/map_customization.md
SplinemeshRepeater
------------------
=======
---
## Procedural buildings

The blueprint __BP_Procedural_Building__ in `Content/Carla/Blueprints/LevelDesign` creates a realistic building using key meshes that are repeated along the structure. For each of them, the user can provide an array of meshes that will be used at random for variety. The meshes are only created once, and the repetitions will be instances of the same to save up costs.  

!!! Note
    Blueprints can be used instead of meshes, to allow more variety and customization for the building. Blueprints can use behaviour trees to set illumination inside the building, change the materials used, and much more.  

### Building structure
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:Docs/tuto_A_map_customization.md

The key meshes will be updated everytime a change is made, and the building will disappear. Enable `Create automatically` or click on `Create Building` to see the new result. 

<<<<<<< HEAD:Docs/dev/map_customization.md
<h4>Standard use:</h4>
=======
These key meshes can be percieved as pieces of the building's structure. They can be grouped in four categories.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:Docs/tuto_A_map_customization.md

*   __Base__ — The ground floor of the building.  
*   __Body__ — The middle floors of the building.  
*   __Top__ — The highest floor of the building.  
*   __Roof__ — Additional mesh that used to fill the spaces in the middle of the top floor.  

For each of them, except the __Roof__, there is a mesh to fill the center of the floor, and a __Corner__ mesh that will be placed on the sides of the floor. The following picture represents the global structure. 

![bp_procedural_building_visual](img/map_customization/BP_Procedural_Building_Visual.jpg)
<div style="text-align: right"><i>Visualization of the building structure.</i></div>

<<<<<<< HEAD:Docs/dev/map_customization.md

<h4>Specific Walls (Dynamic material)</h4>
=======
The __Base parameters__ set the dimensions of the building.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:Docs/tuto_A_map_customization.md

*   ___Num Floors__ — Floors of the building. Repetitions of the __Body__ meshes.  
*   __Length X and Length Y__ — Area of the building. Repetitions of the central meshes for each side of the building.  

![bp_procedural_building_full](img/map_customization/BP_Procedural_Building_Full.jpg)
<div style="text-align: right"><i>Example of BP_Procedural_Building.</i></div>

### Structure modifications

There are some additional options to modify the general structure of the building.  

*   __Disable corners__ — If selected, no corner meshes will be used.  
*   __Use full blocks__ — If selected, the structure of the building will use only one mesh per floor. No corners nor repetitions will appear in each floor.  
*   __Doors__ — Meshes that appear in the ground floor, right in front of the central meshes. The amount of dloors and their location can be set. `0` is the initial position, `1` the next base repetition, and so on.  
*   __Walls__ — Meshes that substitute one or more sides of the building. For example, a plane mesh can be used to paint one side of the building. 

![bp_procedural_building_extras](img/map_customization/BP_Procedural_Building_Extras.jpg)
<div style="text-align: right"><i>On the left, a building with no cornes and one door. <br> On the right, a building with a wall applied to one side of the building. The wall is a texture with no fire escape.</i></div>

<<<<<<< HEAD:Docs/dev/map_customization.md
Weather
-------

This is the actor in charge of modifying all the lighting, environmental actors
an anything that affects the impression of the climate. It runs automatically
with the game when is not specified otherwise In the Config. Ini but has Its own
actor to launch in editor mode to configure the climatic conditions. To fully
work It will need One of each of the following actors: SkySphere, Skylight,
Postprocess Volume (Boundless) And Light Source to exist in the world.

  - SunPolarAngle: polar angle of the sun, determines time of the day
  - SunAzimuthAngle: adds to the location of the sun in the current level
  - SunBrightness: Brightness of the rendering of the sun in the skybox
  - SunDirectionalLightIntensity: Intensity of the sunlight
  - SunDirectionalLightColor: Color of the sunlight
  - SunIndirectLightIntensity: intensity of the bounces of the main light
  - CloudOpacity: visibility of the cloud rendering on the skybox
  - HorizontFalloff: determines the height of the gradient between the zenith and horizon color
  - ZenithColor: Defines the color of the zenith.
  - HorizonColor: Defines the color of the horizon.
  - CloudColor: Defines the color of the Clouds, if any.
  - OverallSkyColor: multiplies every colored element in the sky by a single color.
  - SkyLightIntensity: Intensity of the light bounced from the sky.
  - SkyLightColor: Color of the light bounced from the sky.
  - Precipitation: Defines if any precipitation is active.
  - PrecipitationType: the type of precipitation to active.
  - PrecipitationAmount: the quantity of the chosen precipitation.
  - PrecipitationAccumulation: the accumulation of the chosen precipitation.
  - bWind: defines if there is any wind.
  - WindIntensity: defines the wind intensity.
  - WindAngle: defines the wind direction.
  - bOverrideCameraPostProcessParameters: Defines if the default camera postprocess is overwritten.
  - CameraPostProcessParameters.AutoExposureMethod: Defines the method of autoexposure.
  - CameraPostProcessParameters.AutoExposureMinBrightness: defines the minimum brightness the autoexposure will count as right in the final image.
  - CameraPostProcessParameters.AutoExposureMaxBrightness: defines the maximum brightness the autoexposure will count as right in the final image.
  - CameraPostProcessParameters.AutoExposureBias: Darkens or brightens the final image towards a defined bias.

You can have as many different configurations saved in the project as you want
and choose the configuration to apply while on the build, through the settings
file; or in the editor while building the level or testing.
=======
---

That is all there is so far, regarding the different map customization tools available in CARLA.

Open CARLA and mess around for a while. If there are any doubts, feel free to post these in the forum. 

<div class="build-buttons">
<p>
<a href="https://forum.carla.org/" target="_blank" class="btn btn-neutral" title="Go to the CARLA forum">
CARLA forum</a>
</p>
</div>
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd:Docs/tuto_A_map_customization.md
