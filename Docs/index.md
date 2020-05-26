<<<<<<< HEAD
<h1>CARLA Documentation</h1>

!!! important
    This documentation refers to the latest development versions of CARLA, 0.9.0
    or later. For the documentation of the stable version please switch to the
    [stable branch](https://carla.readthedocs.io/en/stable/).

<h3>Quick start</h3>

  * [Getting started](getting_started.md)
  * [Python API tutorial](python_api_tutorial.md)
  * [Configuring the simulation](configuring_the_simulation.md)
  * [Cameras and sensors](cameras_and_sensors.md)
  * [F.A.Q.](faq.md)

<h3>Building from source</h3>

  * [How to build on Linux](how_to_build_on_linux.md)
  * [How to build on Windows](how_to_build_on_windows.md)

<h3>Advanced topics</h3>

  * [Python API reference](python_api.md)
  * [C++ Reference](cpp_reference.md)
  * [Python Cookbook](python_cookbook.md)
  * [Blueprint Library](bp_library.md)
  * [Running without display and selecting GPUs](carla_headless.md)
  * [Running in a Docker](carla_docker.md)
  * [How to create and import a new map](how_to_make_a_new_map.md)
  * [How to link Epic's Automotive Materials](epic_automotive_materials.md)
  * [Creating standalone asset packages for distribution](asset_packages_for_dist.md)
  * [How to add friction triggers](how_to_add_friction_triggers.md)
  * [How to control vehicle physics](how_to_control_vehicle_physics.md)
  * [How to record and replay](recorder_and_playback.md)
  * [Recorder binary file format](recorder_binary_file_format.md)
  * [How to control walker skeletons](walker_bone_control.md)

<h3>Contributing</h3>

  * [Contribution guidelines](CONTRIBUTING.md)
  * [Coding standard](coding_standard.md)
  * [Documentation standard](doc_standard.md)
  * [Code of conduct](CODE_OF_CONDUCT.md)

<h3>Development</h3>

  * [Index](dev/index.md)
  * [Map customization](dev/map_customization.md)
  * [Build system](dev/build_system.md)
  * [How to add a new sensor](dev/how_to_add_a_new_sensor.md)
  * [How to upgrade content](dev/how_to_upgrade_content.md)
  * [How to make a release](dev/how_to_make_a_release.md)

<h3>Art guidelines</h3>

  * [How to add assets](how_to_add_assets.md)
  * [How to model vehicles](how_to_model_vehicles.md)
=======
# CARLA Documentation

Welcome to the CARLA documentation. 

This home page contains an index with a brief description of the different sections in the documentation. Feel free to read in whatever order preferred. In any case, here are a few suggestions for newcomers.  

* __Install CARLA.__ Either follow the [Quick start installation](start_quickstart.md) to get a CARLA release or [make the build](build_linux.md) for a desired platform.  
* __Start using CARLA.__ The section titled [First steps](core_concepts.md) is an introduction to the most important concepts.  
* __Check the API.__ there is a handy [Python API reference](python_api.md) to look up the classes and methods available.  

The CARLA forum is available to post any doubts or suggestions that may arise during the reading.  
<div class="build-buttons">
<a href="https://forum.carla.org/" target="_blank" class="btn btn-neutral" title="Go to the latest CARLA release">
CARLA forum</a>
</div>

!!! Important
    This documentation refers to CARLA 0.9.0 or later. To read about previous versions, check the [stable branch](https://carla.readthedocs.io/en/stable/).

---

## Getting started
  <p style="padding-left:30px;line-height:1.8">
    [__Introduction__](start_introduction.md)
        — What to expect from CARLA.  
    [__Quick start__](start_quickstart.md)
        — Get the CARLA releases.  
  </p>

## Building CARLA
  <p style="padding-left:30px;line-height:1.8">
    [__Linux build__](build_linux.md)
        — Make the build on Linux.  
    [__Windows build__](build_windows.md)
        — Make the build on Windows.  
    [__Update CARLA__](build_update.md)
        — Get up to date with the latest content.  
    [__Build system__](build_system.md)
        — Learn about the build and how it is made.  
    [__Running in a Docker__](build_docker.md)
        — Run CARLA using a container solution.  
    [__F.A.Q.__](build_faq.md)
        — Some of the most frequent installation issues.  
  </p>

## First steps
  <p style="padding-left:30px;line-height:1.8">
    [__Core concepts__](core_concepts.md)
        — Overview of the basic concepts in CARLA.  
    [__1st. World and client__](core_world.md)
        — Manage and access the simulation.  
    [__2nd. Actors and blueprints__](core_actors.md)
        — Learn about actors and how to handle them.  
    [__3rd. Maps and navigation__](core_map.md)
        — Discover the different maps and how do vehicles move around.  
    [__4th. Sensors and data__](core_sensors.md)
        — Retrieve simulation data using sensors.  
    </p>

## Advanced steps
  <p style="padding-left:30px;line-height:1.8">
    [__OpenDRIVE standalone mode__](adv_opendrive.md)
        — Use any OpenDRIVE file as a CARLA map.  
    [__PTV-Vissim co-simulation__](adv_ptv.md)
        — Run a synchronous simulation between CARLA and PTV-Vissim.  
    [__Recorder__](adv_recorder.md)
        — Register the events in a simulation and play it again.  
    [__Rendering options__](adv_rendering_options.md)
        — From quality settings to no-render or off-screen modes.  
    [__RSS sensor__](adv_rss.md)
        — An implementation of RSS in the CARLA client library.  
    [__SUMO co-simulation__](adv_sumo.md)
        — Run a synchronous simulation between CARLA and SUMO.  
    [__Synchrony and time-step__](adv_synchrony_timestep.md)
        — Client-server communication and simulation time.  
    [__Traffic Manager__](adv_traffic_manager.md)
        — Simulate urban traffic by setting vehicles to autopilot mode.  
    </p>

## References
  <p style="padding-left:30px;line-height:1.8">
    [__Python API reference__](python_api.md)
        — Classes and methods in the Python API.  
    [__Code recipes__](ref_code_recipes.md)
        — Some code fragments commonly used.  
    [__Blueprint library__](bp_library.md)
        — Blueprints provided to spawn actors.  
    [__C++ reference__](ref_cpp.md)
        — Classes and methods in CARLA C++.  
    [__Recorder binary file format__](ref_recorder_binary_file_format.md)
        — Detailed explanation of the recorder file format.  
    [__Sensors reference__](ref_sensors.md)
        — Everything about sensors and the data they retrieve.  

## ROS bridge
  <p style="padding-left:30px;line-height:1.8">
    [__ROS bridge installation__](ros_installation.md)
        — The different ways to install the ROS bridge.  
    [__CARLA messages reference__](ros_msgs.md)
        — Contains explanations and fields for every type of CARLA message available in ROS.  
    [__Launchfiles reference__](ros_launchs.md)
        — Lists the launchfiles and nodes provided, and the topics being consumed and published.  
    </p>

## Tutorials — General
  <p style="padding-left:30px;line-height:1.8">
    [__Add friction triggers__](tuto_G_add_friction_triggers.md)
        — Define dynamic box triggers for wheels.  
    [__Control vehicle physics__](tuto_G_control_vehicle_physics.md)
        — Set runtime changes on a vehicle physics.  
    [__Control walker skeletons__](tuto_G_control_walker_skeletons.md)
        — Animate walkers using skeletons.  
    [__Retrieve simulation data__](tuto_G_retrieve_data.md)
        — A step by step guide to properly gather data using the recorder.  
    </p>

## Tutorials — Assets
  <p style="padding-left:30px;line-height:1.8">
    [__Add a new map__](tuto_A_add_map.md)
        — Create and ingest a new map.  
    [__Add a new vehicle__](tuto_A_add_vehicle.md)
        — Prepare a vehicle to be used in CARLA.  
    [__Add new props__](tuto_A_add_props.md)
        — Import additional props into CARLA.  
    [__Create standalone packages__](tuto_A_create_standalone.md)
        — Generate and handle standalone packages for assets.  
    [__Map customization__](tuto_A_map_customization.md)
        — Edit an existing map.  
    [__Material customization__](tuto_A_material_customization.md)
        — Edit vehicle and building materials.  
    [__Vehicle modelling__](tuto_A_vehicle_modelling.md)
        — Create a new vehicle for CARLA.  
    </p>

## Tutorials — Developers
  <p style="padding-left:30px;line-height:1.8">
    [__Contribute with new assets__](tuto_D_contribute_assets.md)
        — Add new content to CARLA.  
    [__Create a sensor__](tuto_D_create_sensor.md)
        — Develop a new sensor to be used in CARLA.  
    [__Make a release__](tuto_D_make_release.md)
        — For developers who want to publish a release.  
    [__Generate pedestrian navigation__](tuto_D_generate_pedestrian_navigation.md)
        — Obtain the information needed for walkers to move around.  
    </p>

## Contributing
  <p style="padding-left:30px;line-height:1.8">
    [__Contribution guidelines__](cont_contribution_guidelines.md)
        — The different ways to contribute to CARLA.  
    [__Code of conduct__](cont_code_of_conduct.md)
        — Standard rights and duties for contributors.  
    [__Coding standard__](cont_coding_standard.md)
        — Guidelines to write proper code.  
    [__Documentation standard__](cont_doc_standard.md)
        — Guidelines to write proper documentation.  
    </p>
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
