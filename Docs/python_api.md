<<<<<<< HEAD
## carla.ActorAttributeType<a name="carla.ActorAttributeType"></a> <sub><sup>_class_</sup></sub>
Class that defines the type of attribute of a [carla.ActorAttribute](#carla.ActorAttribute).  
=======
#Python API reference
This reference contains all the details the Python API. To consult a previous reference for a specific CARLA release, change the documentation version using the panel in the bottom right corner.<br>This will change the whole documentation to a previous state. Remember to go back to <i>latest</i> to get the details of the current state of CARLA.<hr>  

## carla.Actor<a name="carla.Actor"></a>
CARLA defines actors as anything that plays a role in the simulation or can be moved around. That includes: pedestrians, vehicles, sensors and traffic signs (considering traffic lights as part of these). Actors are spawned in the simulation by [carla.World](#carla.World) and they need for a [carla.ActorBlueprint](#carla.ActorBlueprint) to be created. These blueprints belong into a library provided by CARLA, find more about them [here](bp_library.md).  

<h3>Instance Variables</h3>
- <a name="carla.Actor.attributes"></a>**<font color="#f8805a">attributes</font>** (_dict_)  
A dictionary containing the attributes of the blueprint this actor was based on.  
- <a name="carla.Actor.id"></a>**<font color="#f8805a">id</font>** (_int_)  
Identifier for this actor. Unique during a given episode.  
- <a name="carla.Actor.parent"></a>**<font color="#f8805a">parent</font>** (_[carla.Actor](#carla.Actor)_)  
Actors may be attached to a parent actor that they will follow around. This is said actor.  
- <a name="carla.Actor.semantic_tags"></a>**<font color="#f8805a">semantic_tags</font>** (_list(int)_)  
A list of semantic tags provided by the blueprint listing components for this actor. E.g. a traffic light could be tagged with "pole" and "traffic light". These tags are used by the semantic segmentation sensor. Find more about this and other sensors [here](ref_sensors.md#semantic-segmentation-camera).  
- <a name="carla.Actor.type_id"></a>**<font color="#f8805a">type_id</font>** (_str_)  
The identifier of the blueprint this actor was based on, e.g. "vehicle.ford.mustang".  

<h3>Methods</h3>
- <a name="carla.Actor.add_impulse"></a>**<font color="#7fb800">add_impulse</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**impulse**</font>)  
Adds an impulse to the actor. The parameter `impulse` determines magnitude and global axis where it is applied.  
    - **Parameters:**
        - `impulse` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Actor.add_angular_impulse"></a>**<font color="#7fb800">add_angular_impulse</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**impulse**</font>)  
Adds an angular impulse to the actor. The parameter `impulse` determines magnitude and global axis where it is applied.  
    - **Parameters:**
        - `impulse` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Actor.destroy"></a>**<font color="#7fb800">destroy</font>**(<font color="#00a6ed">**self**</font>)  
Tells the simulator to destroy this actor and returns <b>True</b> if it was successful. It has no effect if it was already destroyed.  
    - **Return:** _bool_  
    - **Warning:** <font color="#ED2F2F">_This method blocks the script until the destruction is completed by the simulator.
_</font>  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Actor.get_acceleration"></a>**<font color="#7fb800">get_acceleration</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's 3D acceleration vector the client recieved during last tick. The method does not call the simulator.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.Actor.get_angular_velocity"></a>**<font color="#7fb800">get_angular_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's angular velocity vector the client recieved during last tick. The method does not call the simulator.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
    - **Setter:** _[carla.Actor.set_angular_velocity](#carla.Actor.set_angular_velocity)_  
- <a name="carla.Actor.get_location"></a>**<font color="#7fb800">get_location</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's location the client recieved during last tick. The method does not call the simulator.  
    - **Return:** _[carla.Location](#carla.Location)_  
    - **Setter:** _[carla.Actor.set_location](#carla.Actor.set_location)_  
- <a name="carla.Actor.get_transform"></a>**<font color="#7fb800">get_transform</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's transform (location and rotation) the client recieved during last tick. The method does not call the simulator.  
    - **Return:** _[carla.Transform](#carla.Transform)_  
    - **Setter:** _[carla.Actor.set_transform](#carla.Actor.set_transform)_  
- <a name="carla.Actor.get_velocity"></a>**<font color="#7fb800">get_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's velocity vector the client recieved during last tick. The method does not call the simulator.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
    - **Setter:** _[carla.Actor.set_velocity](#carla.Actor.set_velocity)_  
- <a name="carla.Actor.get_world"></a>**<font color="#7fb800">get_world</font>**(<font color="#00a6ed">**self**</font>)  
Returns the world this actor belongs to.  
    - **Return:** _[carla.World](#carla.World)_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Actor.set_angular_velocity"></a>**<font color="#7fb800">set_angular_velocity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**angular_velocity**</font>)  
Changes the actor's angular velocity vector.  
    - **Parameters:**
        - `angular_velocity` (_[carla.Vector3D](#carla.Vector3D)_)  
    - **Getter:** _[carla.Actor.get_angular_velocity](#carla.Actor.get_angular_velocity)_  
- <a name="carla.Actor.set_location"></a>**<font color="#7fb800">set_location</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>)  
Teleports the actor to a given location.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
    - **Getter:** _[carla.Actor.get_location](#carla.Actor.get_location)_  
- <a name="carla.Actor.set_simulate_physics"></a>**<font color="#7fb800">set_simulate_physics</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**enabled**=True</font>)  
Enables or disables the simulation of physics on this actor.  
    - **Parameters:**
        - `enabled` (_bool_)  
- <a name="carla.Actor.set_transform"></a>**<font color="#7fb800">set_transform</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**transform**</font>)  
Teleports the actor to a given transform (location and rotation).  
    - **Parameters:**
        - `transform` (_[carla.Transform](#carla.Transform)_)  
    - **Getter:** _[carla.Actor.get_transform](#carla.Actor.get_transform)_  
- <a name="carla.Actor.set_velocity"></a>**<font color="#7fb800">set_velocity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**velocity**</font>)  
Sets the actor's velocity vector.  
    - **Parameters:**
        - `velocity` (_[carla.Vector3D](#carla.Vector3D)_)  
    - **Getter:** _[carla.Actor.get_velocity](#carla.Actor.get_velocity)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Actor.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.ActorAttribute<a name="carla.ActorAttribute"></a>
CARLA provides a library of blueprints for actors that can be accessed as [carla.BlueprintLibrary](#carla.BlueprintLibrary). Each of these blueprints has a series of attributes defined internally. Some of these are modifiable, others are not. A list of recommended values is provided for those that can be set.  

<h3>Instance Variables</h3>
- <a name="carla.ActorAttribute.id"></a>**<font color="#f8805a">id</font>** (_str_)  
The attribute's name and identifier in the library.  
- <a name="carla.ActorAttribute.is_modifiable"></a>**<font color="#f8805a">is_modifiable</font>** (_bool_)  
It is <b>True</b> if the attribute's value can be modified.  
- <a name="carla.ActorAttribute.recommended_values"></a>**<font color="#f8805a">recommended_values</font>** (_list(str)_)  
A list of values suggested by those who designed the blueprint.  
- <a name="carla.ActorAttribute.type"></a>**<font color="#f8805a">type</font>** (_[carla.ActorAttributeType](#carla.ActorAttributeType)_)  
The attribute's parameter type.  

<h3>Methods</h3>
- <a name="carla.ActorAttribute.as_bool"></a>**<font color="#7fb800">as_bool</font>**(<font color="#00a6ed">**self**</font>)  
Reads the attribute as boolean value.  
- <a name="carla.ActorAttribute.as_color"></a>**<font color="#7fb800">as_color</font>**(<font color="#00a6ed">**self**</font>)  
Reads the attribute as [carla.Color](#carla.Color).  
- <a name="carla.ActorAttribute.as_float"></a>**<font color="#7fb800">as_float</font>**(<font color="#00a6ed">**self**</font>)  
Reads the attribute as float.  
- <a name="carla.ActorAttribute.as_int"></a>**<font color="#7fb800">as_int</font>**(<font color="#00a6ed">**self**</font>)  
Reads the attribute as int.  
- <a name="carla.ActorAttribute.as_str"></a>**<font color="#7fb800">as_str</font>**(<font color="#00a6ed">**self**</font>)  
Reads the attribute as string.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ActorAttribute.__bool__"></a>**<font color="#7fb800">\__bool__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__float__"></a>**<font color="#7fb800">\__float__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__int__"></a>**<font color="#7fb800">\__int__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=bool / int / float / str / [carla.Color](#carla.Color) / [carla.ActorAttribute](#carla.ActorAttribute)</font>)  
Returns true if this actor's attribute and `other` are the same.  
    - **Return:** _bool_  
- <a name="carla.ActorAttribute.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=bool / int / float / str / [carla.Color](#carla.Color) / [carla.ActorAttribute](#carla.ActorAttribute)</font>)  
Returns true if this actor's attribute and `other` are different.  
    - **Return:** _bool_  
- <a name="carla.ActorAttribute.__nonzero__"></a>**<font color="#7fb800">\__nonzero__</font>**(<font color="#00a6ed">**self**</font>)  
Returns true if this actor's attribute is not zero or null.  
    - **Return:** _bool_  

---

## carla.ActorAttributeType<a name="carla.ActorAttributeType"></a>
CARLA provides a library of blueprints for actors in [carla.BlueprintLibrary](#carla.BlueprintLibrary) with different attributes each. This class defines the types those at [carla.ActorAttribute](#carla.ActorAttribute) can be as a series of enum. All this information is managed internally and listed here for a better comprehension of how CARLA works.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="carla.ActorAttributeType.Bool"></a>**<font color="#f8805a">Bool</font>**  
- <a name="carla.ActorAttributeType.Int"></a>**<font color="#f8805a">Int</font>**  
- <a name="carla.ActorAttributeType.Float"></a>**<font color="#f8805a">Float</font>**  
- <a name="carla.ActorAttributeType.String"></a>**<font color="#f8805a">String</font>**  
- <a name="carla.ActorAttributeType.RGBColor"></a>**<font color="#f8805a">RGBColor</font>**  

---

## carla.ActorList<a name="carla.ActorList"></a> <sub><sup>_class_</sup></sub>
Class that provides access to actors.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.ActorList.find"></a>**<font color="#7fb800">find</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Find an actor by ID.  
=======
- <a name="carla.ActorBlueprint.has_attribute"></a>**<font color="#7fb800">has_attribute</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>)  
Returns <b>True</b> if the blueprint contains the attribute `id`.  
    - **Parameters:**
        - `id` (_str_) – e.g. `gender` would return **True** for pedestrians' blueprints.  
    - **Return:** _bool_  
- <a name="carla.ActorBlueprint.has_tag"></a>**<font color="#7fb800">has_tag</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**tag**</font>)  
Returns <b>True</b> if the blueprint has the specified `tag` listed.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
    - **Parameters:**
        - `actor_id` (_int_)  
- <a name="carla.ActorList.filter"></a>**<font color="#7fb800">filter</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**wildcard_pattern**</font>)  
Filters a list of Actors with type_id matching wildcard_pattern.  
    - **Parameters:**
        - `wildcard_pattern` (_str_)  
<<<<<<< HEAD
    - **Note:** <font color="#8E8E8E">_The wildcard_pattern follows Unix shell-style wildcards (fnmatch). 
_</font>  
- <a name="carla.ActorList.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**</font>)  
    - **Parameters:**
        - `pos` (_int_)  
- <a name="carla.ActorList.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorList.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorList.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
    - **Return:** _bool_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ActorBlueprint.get_attribute"></a>**<font color="#7fb800">get_attribute</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>)  
Returns the actor's attribute with `id` as identifier if existing.  
    - **Parameters:**
        - `id` (_str_)  
    - **Return:** _[carla.ActorAttribute](#carla.ActorAttribute)_  
    - **Setter:** _[carla.ActorBlueprint.set_attribute](#carla.ActorBlueprint.set_attribute)_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ActorBlueprint.set_attribute"></a>**<font color="#7fb800">set_attribute</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>, <font color="#00a6ed">**value**</font>)  
If the `id` attribute is modifiable, changes its value to `value`.  
    - **Parameters:**
        - `id` (_str_) – The identifier for the attribute that is intended to be changed.  
        - `value` (_str_) – The new value for said attribute.  
    - **Getter:** _[carla.ActorBlueprint.get_attribute](#carla.ActorBlueprint.get_attribute)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ActorBlueprint.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
Allows iteration within this class' attributes.  
- <a name="carla.ActorBlueprint.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
Returns the amount of attributes for this blueprint.  
- <a name="carla.ActorBlueprint.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.ActorList<a name="carla.ActorList"></a>
A class that contains every actor present on the scene and provides access to them. The list is automatically created and updated by the server and it can be returned using [carla.World](#carla.World).  

<h3>Methods</h3>
- <a name="carla.ActorList.filter"></a>**<font color="#7fb800">filter</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**wildcard_pattern**</font>)  
Filters a list of Actors matching `wildcard_pattern` against their variable **<font color="#f8805a">type_id</font>** (which identifies the blueprint used to spawn them). Matching follows [fnmatch](https://docs.python.org/2/library/fnmatch.html) standard.  
    - **Parameters:**
        - `wildcard_pattern` (_str_)  
    - **Return:** _list_  
- <a name="carla.ActorList.find"></a>**<font color="#7fb800">find</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Finds an actor using its identifier and returns it or <b>None</b> if it is not present.  
    - **Parameters:**
        - `actor_id` (_int_)  
    - **Return:** _[carla.Actor](#carla.Actor)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ActorList.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>)  
Returns the actor corresponding to `pos` position in the list.  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.ActorList.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
Allows the iteration for the actors in this object.  
- <a name="carla.ActorList.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
Returns the amount of actors listed.  
    - **Return:** _int_  
- <a name="carla.ActorList.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Parses to the ID for every actor listed.  
    - **Return:** _str_  

---

## carla.ActorSnapshot<a name="carla.ActorSnapshot"></a>
A class that comprises all the information for an actor at a certain moment in time. These objects are contained in a [carla.WorldSnapshot](#carla.WorldSnapshot) and sent to the client once every tick.  

<h3>Instance Variables</h3>
- <a name="carla.ActorSnapshot.id"></a>**<font color="#f8805a">id</font>** (_int_)  
An identifier for the snapshot itself.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ActorSnapshot.get_acceleration"></a>**<font color="#7fb800">get_acceleration</font>**(<font color="#00a6ed">**self**</font>)  
Returns the acceleration vector registered for an actor in that tick.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.ActorSnapshot.get_angular_velocity"></a>**<font color="#7fb800">get_angular_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the angular velocity vector registered for an actor in that tick.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.ActorSnapshot.get_transform"></a>**<font color="#7fb800">get_transform</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's transform (location and rotation) for an actor in that tick.  
    - **Return:** _[carla.Transform](#carla.Transform)_  
- <a name="carla.ActorSnapshot.get_velocity"></a>**<font color="#7fb800">get_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the velocity vector registered for an actor in that tick.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.AttachmentType<a name="carla.AttachmentType"></a> <sub><sup>_class_</sup></sub>
Class that defines the attachment options. See [carla.World.spawn_actor](#carla.World.spawn_actor).<br> Check out this [`recipe`](../python_cookbook/#attach-sensors-recipe)!  

<h3>Instance Variables</h3>
- <a name="carla.AttachmentType.Rigid"></a>**<font color="#f8805a">Rigid</font>**  
Standard fixed attachment.  
- <a name="carla.AttachmentType.SpringArm"></a>**<font color="#f8805a">SpringArm</font>**  
Attachment that expands or retracts based on camera situation.  

---

## carla.BlueprintLibrary<a name="carla.BlueprintLibrary"></a> <sub><sup>_class_</sup></sub>
Class that provides access to [blueprints](../bp_library/).  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.BlueprintLibrary.find"></a>**<font color="#7fb800">find</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>)  
Returns a [carla.ActorBlueprint](#carla.ActorBlueprint) through its id.  
    - **Parameters:**
        - `id` (_str_)  
    - **Return:** _[carla.ActorBlueprint](#carla.ActorBlueprint)_  
=======
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
- <a name="carla.BlueprintLibrary.filter"></a>**<font color="#7fb800">filter</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**wildcard_pattern**</font>)  
Filters a list of ActorBlueprint with id or tags matching wildcard_pattern. The pattern is matched against each blueprint's id and tags.  
    - **Parameters:**
        - `wildcard_pattern` (_str_)  
    - **Return:** _[carla.BlueprintLibrary](#carla.BlueprintLibrary)_  
    - **Note:** <font color="#8E8E8E">_The wildcard_pattern follows Unix shell-style wildcards (fnmatch).
_</font>  
- <a name="carla.BlueprintLibrary.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**</font>)  
    - **Parameters:**
        - `pos` (_int_)  
    - **Return:** _[carla.ActorBlueprint](#carla.ActorBlueprint)_  
- <a name="carla.BlueprintLibrary.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.BlueprintLibrary.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.BlueprintLibrary.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.BlueprintLibrary.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>)  
Returns the blueprint stored in `pos` position inside the data structure containing them.  
    - **Return:** _[carla.ActorBlueprint](#carla.ActorBlueprint)_  
- <a name="carla.BlueprintLibrary.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
Method that allows iteration within the blueprints provided.  
- <a name="carla.BlueprintLibrary.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
Returns the amount of blueprints comprising the library.  
    - **Return:** _int_  
- <a name="carla.BlueprintLibrary.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Parses the identifiers for every blueprint to string.  
    - **Return:** _string_  

---

## carla.ColorConverter<a name="carla.ColorConverter"></a> <sub><sup>_class_</sup></sub>
Class that defines the color converter options. Check out this [`recipe`](../python_cookbook/#converted-image-recipe)!  

<h3>Instance Variables</h3>
<<<<<<< HEAD
- <a name="carla.ColorConverter.Raw"></a>**<font color="#f8805a">Raw</font>**  
- <a name="carla.ColorConverter.Depth"></a>**<font color="#f8805a">Depth</font>**  
- <a name="carla.ColorConverter.LogarithmicDepth"></a>**<font color="#f8805a">LogarithmicDepth</font>**  
- <a name="carla.ColorConverter.CityScapesPalette"></a>**<font color="#f8805a">CityScapesPalette</font>**  

---

## carla.DebugHelper<a name="carla.DebugHelper"></a> <sub><sup>_class_</sup></sub>
Class that provides drawing debug shapes. Check out this [`example`](https://github.com/carla-simulator/carla/blob/master/PythonAPI/util/lane_explorer.py).  
=======
- <a name="carla.BoundingBox.extent"></a>**<font color="#f8805a">extent</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Vector from the center of the box to one vertex. The value in each axis equals half the size of the box for that axis.  
`extent.x * 2` would return the size of the box in the X-axis.  
- <a name="carla.BoundingBox.location"></a>**<font color="#f8805a">location</font>** (_[carla.Location](#carla.Location)_)  
The center of the bounding box relative to its parent actor.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Methods</h3>
- <a name="carla.DebugHelper.draw_point"></a>**<font color="#7fb800">draw_point</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**size**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>, <font color="#00a6ed">**persistent_lines**=True</font>)  
Draws a point in the given location.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
        - `size` (_float_)  
        - `color` (_[carla.Color](#carla.Color)_)  
        - `life_time` (_float_)  
        - `persistent_lines` (_bool_) – _Deprecated, use `life_time = 0` instead_.  
- <a name="carla.DebugHelper.draw_line"></a>**<font color="#7fb800">draw_line</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**begin**</font>, <font color="#00a6ed">**end**</font>, <font color="#00a6ed">**thickness**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>, <font color="#00a6ed">**persistent_lines**=True</font>)  
Draws a line between two given locations.  
    - **Parameters:**
<<<<<<< HEAD
        - `begin` (_[carla.Location](#carla.Location)_)  
        - `end` (_[carla.Location](#carla.Location)_)  
        - `thickness` (_float_)  
        - `color` (_[carla.Color](#carla.Color)_)  
        - `life_time` (_float_)  
        - `persistent_lines` (_bool_) – _Deprecated, use `life_time = 0` instead_.  
- <a name="carla.DebugHelper.draw_arrow"></a>**<font color="#7fb800">draw_arrow</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**begin**</font>, <font color="#00a6ed">**end**</font>, <font color="#00a6ed">**thickness**=0.1f</font>, <font color="#00a6ed">**arrow_size**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>, <font color="#00a6ed">**persistent_lines**=True</font>)  
Draws an arrow between two given locations.  
    - **Parameters:**
        - `begin` (_[carla.Location](#carla.Location)_)  
        - `end` (_[carla.Location](#carla.Location)_)  
        - `thickness` (_float_)  
        - `arrow_size` (_float_)  
        - `color` (_[carla.Color](#carla.Color)_)  
        - `life_time` (_float_)  
        - `persistent_lines` (_bool_) – _Deprecated, use `life_time = 0` instead_.  
- <a name="carla.DebugHelper.draw_box"></a>**<font color="#7fb800">draw_box</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**box**</font>, <font color="#00a6ed">**rotation**</font>, <font color="#00a6ed">**thickness**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>, <font color="#00a6ed">**persistent_lines**=True</font>)  
Draws the [carla.BoundingBox](#carla.BoundingBox) of a given bounding_box.<br> Check out this [`recipe`](../python_cookbook/#debug-bounding-box-recipe)!  
    - **Parameters:**
        - `box` (_[carla.BoundingBox](#carla.BoundingBox)_)  
        - `rotation` (_[carla.Rotation](#carla.Rotation)_)  
        - `thickness` (_float_)  
        - `color` (_[carla.Color](#carla.Color)_)  
        - `life_time` (_float_)  
        - `persistent_lines` (_bool_) – _Deprecated, use `life_time = 0` instead_.  
- <a name="carla.DebugHelper.draw_string"></a>**<font color="#7fb800">draw_string</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**text**</font>, <font color="#00a6ed">**draw_shadow**=False</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>, <font color="#00a6ed">**persistent_lines**=True</font>)  
Draws a string in a given location.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
        - `text` (_str_)  
        - `draw_shadow` (_bool_)  
        - `color` (_[carla.Color](#carla.Color)_)  
        - `life_time` (_float_)  
        - `persistent_lines` (_bool_) – _Deprecated, set a high `life_time` instead_.  
    - **Note:** <font color="#8E8E8E">_Strings can only be seen on the server-side.
_</font>  
=======
        - `world_point` (_[carla.Location](#carla.Location)_) – The point in world space to be checked.  
        - `transform` (_[carla.Transform](#carla.Transform)_) – Contains location and rotation needed to convert this object's local space to world space.  
    - **Return:** _bool_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.BoundingBox.get_local_vertices"></a>**<font color="#7fb800">get_local_vertices</font>**(<font color="#00a6ed">**self**</font>)  
Returns a list containing the locations of this object's vertices in local space.  
    - **Return:** _list([carla.Location](#carla.Location))_  
- <a name="carla.BoundingBox.get_world_vertices"></a>**<font color="#7fb800">get_world_vertices</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**transform**</font>)  
Returns a list containing the locations of this object's vertices in world space.  
    - **Parameters:**
        - `transform` (_[carla.Transform](#carla.Transform)_) – Contains location and rotation needed to convert this object's local space to world space.  
    - **Return:** _list([carla.Location](#carla.Location))_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.BoundingBox.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.BoundingBox](#carla.BoundingBox)</font>)  
Returns true if both location and extent are equal for this and `other`.  
    - **Return:** _bool_  
- <a name="carla.BoundingBox.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.BoundingBox](#carla.BoundingBox)</font>)  
Returns true if either location or extent are different for this and `other`.  
    - **Return:** _bool_  
- <a name="carla.BoundingBox.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Parses the location and extent of the bounding box to string.  
    - **Return:** _str_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.LaneChange<a name="carla.LaneChange"></a> <sub><sup>_class_</sup></sub>
Class that defines the lane change options. Check out this [`recipe`](../python_cookbook/#lanes-recipe)!  

<<<<<<< HEAD
<h3>Instance Variables</h3>
- <a name="carla.LaneChange.NONE"></a>**<font color="#f8805a">NONE</font>**  
Traffic rules do not allow turning right or left, only going straight.  
- <a name="carla.LaneChange.Right"></a>**<font color="#f8805a">Right</font>**  
Traffic rules allow turning right.  
- <a name="carla.LaneChange.Left"></a>**<font color="#f8805a">Left</font>**  
Traffic rules allow turning left.  
- <a name="carla.LaneChange.Both"></a>**<font color="#f8805a">Both</font>**  
Traffic rules allow turning right or left.  
=======
<h3>Methods</h3>
- <a name="carla.Client.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**host**=127.0.0.1</font>, <font color="#00a6ed">**port**=2000</font>, <font color="#00a6ed">**worker_threads**=0</font>)  
Client constructor.  
    - **Parameters:**
        - `host` (_str_) – IP address where a CARLA Simulator instance is running. Default is localhost (127.0.0.1).  
        - `port` (_int_) – TCP port where the CARLA Simulator instance is running. Default are 2000 and the subsequent 2001.  
        - `worker_threads` (_int_) – Number of working threads used for background updates. If 0, use all available concurrency.  
- <a name="carla.Client.apply_batch"></a>**<font color="#7fb800">apply_batch</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**commands**</font>)  
Executes a list of commands on a single simulation step and retrieves no information. If you need information about the response of each command, use the **<font color="#7fb800">apply_batch_sync()</font>** function right below this one. [Here](https://github.com/carla-simulator/carla/blob/10c5f6a482a21abfd00220c68c7f12b4110b7f63/PythonAPI/examples/spawn_npc.py#L126) is an example on how to delete the actors that appear in [carla.ActorList](#carla.ActorList) all at once.  
    - **Parameters:**
        - `commands` (_list_) – A list of commands to execute in batch. Each command is different and has its own parameters. They appear listed at the bottom of this page.  
- <a name="carla.Client.apply_batch_sync"></a>**<font color="#7fb800">apply_batch_sync</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**commands**</font>, <font color="#00a6ed">**due_tick_cue**=False</font>)  
Executes a list of commands on a single simulation step, blocks until the commands are linked, and returns a list of <b>command.Response</b> that can be used to determine whether a single command succeeded or not. [Here](https://github.com/carla-simulator/carla/blob/10c5f6a482a21abfd00220c68c7f12b4110b7f63/PythonAPI/examples/spawn_npc.py#L112-L116) is an example of it being used to spawn actors.  
    - **Parameters:**
        - `commands` (_list_) – A list of commands to execute in batch. The commands available are listed right above, in the function **<font color="#7fb800">apply_batch()</font>**.  
        - `due_tick_cue` (_bool_) – A boolean parameter to specify whether or not to perform a [carla.World.tick](#carla.World.tick) after applying the batch in _synchronous mode_. It is __False__ by default.  
    - **Return:** _list(command.Response)_  
- <a name="carla.Client.generate_opendrive_world"></a>**<font color="#7fb800">generate_opendrive_world</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**opendrive**</font>, <font color="#00a6ed">**parameters**=(2.0, 50.0, 1.0, 0.6, true, true)</font>)  
Loads a new world with a basic 3D topology generated from the content of an OpenDRIVE file. This content is passed as a `string` parameter. It is similar to `client.load_world(map_name)` but allows for custom OpenDRIVE maps in server side. Cars can drive around the map, but there are no graphics besides the road and sidewalks.  
    - **Parameters:**
        - `opendrive` (_str_) – Content of an OpenDRIVE file as `string`, __not the path to the `.xodr`__.  
        - `parameters` (_[carla.OpendriveGenerationParameters](#carla.OpendriveGenerationParameters)_) – Additional settings for the mesh generation. If none are provided, default values will be used.  
- <a name="carla.Client.load_world"></a>**<font color="#7fb800">load_world</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**map_name**</font>)  
Creates a new world with default settings using `map_name` map. All actors in the current world will be destroyed.  
    - **Parameters:**
        - `map_name` (_str_) – Name of the map to be used in this world. Accepts both full paths and map names, e.g. '/Game/Carla/Maps/Town01' or 'Town01'. Remember that these paths are dynamic.  
- <a name="carla.Client.reload_world"></a>**<font color="#7fb800">reload_world</font>**(<font color="#00a6ed">**self**</font>)  
Reload the current world, note that a new world is created with default settings using the same map. All actors present in the world will be destroyed, __but__ traffic manager instances will stay alive.  
    - **Raises:** RuntimeError when corresponding.  
- <a name="carla.Client.replay_file"></a>**<font color="#7fb800">replay_file</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**name**</font>, <font color="#00a6ed">**start**</font>, <font color="#00a6ed">**duration**</font>, <font color="#00a6ed">**follow_id**</font>)  
Load a new world with default settings using `map_name` map. All actors present in the current world will be destroyed, __but__ traffic manager instances will stay alive.  
    - **Parameters:**
        - `name` (_str_) – Name of the file containing the information of the simulation.  
        - `start` (_float_) – Time in seconds where to start playing the simulation. Negative is read as beginning from the end, being -10 just 10 seconds before the recording finished.  
        - `duration` (_float_) – Time in seconds that will be reenacted using the information `name` file. If the end is reached, the simulation will continue.  
        - `follow_id` (_int_) – ID of the actor to follow. If this is 0 then camera is disabled.  
- <a name="carla.Client.show_recorder_actors_blocked"></a>**<font color="#7fb800">show_recorder_actors_blocked</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>, <font color="#00a6ed">**min_time**</font>, <font color="#00a6ed">**min_distance**</font>)  
The terminal will show the information registered for actors considered blocked. An actor is considered blocked when it does not move a minimum distance in a period of time, being these `min_distance` and `min_time`.  
    - **Parameters:**
        - `filename` (_str_) – Name of the recorded file to load.  
        - `min_time` (_float_) – Minimum time in seconds the actor has to move a minimum distance before being considered blocked. Default is 60 seconds.  
        - `min_distance` (_float_) – Minimum distance in centimeters the actor has to move to not be considered blocked. Default is 100 centimeters.  
    - **Return:** _string_  
- <a name="carla.Client.show_recorder_collisions"></a>**<font color="#7fb800">show_recorder_collisions</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>, <font color="#00a6ed">**category1**</font>, <font color="#00a6ed">**category2**</font>)  
The terminal will show the collisions registered by the recorder. These can be filtered by specifying the type of actor involved. The categories will be specified in `category1` and `category2` as follows:
  'h' = Hero, the one vehicle that can be controlled manually or managed by the user.
  'v' = Vehicle
  'w' = Walker
  't' = Traffic light
  'o' = Other
  'a' = Any
If you want to see only collisions between a vehicles and a walkers, use for `category1` as 'v' and `category2` as 'w' or vice versa. If you want to see all the collisions (filter off) you can use 'a' for both parameters.  
    - **Parameters:**
        - `filename` (_str_) – Name or absolute path of the file recorded, depending on your previous choice.  
        - `category1` (_single char_) – Character variable specifying a first type of actor involved in the collision.  
        - `category2` (_single char_) – Character variable specifying the second type of actor involved in the collision.  
    - **Return:** _string_  
- <a name="carla.Client.show_recorder_file_info"></a>**<font color="#7fb800">show_recorder_file_info</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>, <font color="#00a6ed">**show_all**=False</font>)  
The information saved by the recorder will be parsed and shown in your terminal as text (frames, times, events, state, positions...). The information shown can be specified by using the `show_all` parameter. [Here](ref_recorder_binary_file_format.md) is some more information about how to read the recorder file.  
    - **Parameters:**
        - `filename` (_str_) – Name or absolute path of the file recorded, depending on your previous choice.  
        - `show_all` (_bool_) – When true, will show all the details per frame (traffic light states, positions of all actors, orientation and animation data...), but by default it will only show a summary.  
    - **Return:** _string_  
- <a name="carla.Client.start_recorder"></a>**<font color="#7fb800">start_recorder</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>)  
Enables the recording feature, which will start saving every information possible needed by the server to replay the simulation.  
    - **Parameters:**
        - `filename` (_str_) – Name of the file to write the recorded data. A simple name will save the recording in 'CarlaUE4/Saved/recording.log'. Otherwise, if some folder appears in the name, it will be considered an absolute path.  
- <a name="carla.Client.stop_recorder"></a>**<font color="#7fb800">stop_recorder</font>**(<font color="#00a6ed">**self**</font>)  
Stops the recording in progress. If you specified a path in `filename`, the recording will be there. If not, look inside `CarlaUE4/Saved/`.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Client.get_available_maps"></a>**<font color="#7fb800">get_available_maps</font>**(<font color="#00a6ed">**self**</font>)  
Returns a list of strings containing the paths of the maps available on server. These paths are dynamic, they will be created during the simulation and so you will not find them when looking up in your files. One of the possible returns for this method would be:
  ['/Game/Carla/Maps/Town01',
  '/Game/Carla/Maps/Town02',
  '/Game/Carla/Maps/Town03',
  '/Game/Carla/Maps/Town04',
  '/Game/Carla/Maps/Town05',
  '/Game/Carla/Maps/Town06',
  '/Game/Carla/Maps/Town07'].  
    - **Return:** _list(str)_  
- <a name="carla.Client.get_client_version"></a>**<font color="#7fb800">get_client_version</font>**(<font color="#00a6ed">**self**</font>)  
Returns the client libcarla version by consulting it in the "Version.h" file. Both client and server can use different libcarla versions but some issues may arise regarding unexpected incompatibilities.  
    - **Return:** _str_  
- <a name="carla.Client.get_server_version"></a>**<font color="#7fb800">get_server_version</font>**(<font color="#00a6ed">**self**</font>)  
Returns the server libcarla version by consulting it in the "Version.h" file. Both client and server should use the same libcarla version.  
    - **Return:** _str_  
- <a name="carla.Client.get_trafficmanager"></a>**<font color="#7fb800">get_trafficmanager</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**client_connection**=8000</font>)  
Returns an instance of the traffic manager related to the specified port. If it does not exist, this will be created.  
    - **Parameters:**
        - `client_connection` (_int_) – Port that will be used by the traffic manager. Default is `8000`.  
    - **Return:** _[carla.TrafficManager](#carla.TrafficManager)_  
- <a name="carla.Client.get_world"></a>**<font color="#7fb800">get_world</font>**(<font color="#00a6ed">**self**</font>)  
Returns the world object currently active in the simulation. This world will be later used for example to load maps.  
    - **Return:** _[carla.World](#carla.World)_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Client.set_replayer_time_factor"></a>**<font color="#7fb800">set_replayer_time_factor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**time_factor**=1.0</font>)  
When used, the time speed of the reenacted simulation is modified at will. It can be used several times while a playback is in curse.  
    - **Parameters:**
        - `time_factor` (_float_) – 1.0 means normal time speed. Greater than 1.0 means fast motion (2.0 would be double speed) and lesser means slow motion (0.5 would be half speed).  
- <a name="carla.Client.set_timeout"></a>**<font color="#7fb800">set_timeout</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**seconds**</font>)  
Sets in seconds the maxixum time a network call is allowed before blocking it and raising a timeout exceeded error.  
    - **Parameters:**
        - `seconds` (_float_) – New timeout value in seconds. Default is 5 seconds.  

---

<<<<<<< HEAD
## carla.LaneMarking<a name="carla.LaneMarking"></a> <sub><sup>_class_</sup></sub>
Class that defines a lane marking.  
=======
## carla.CollisionEvent<a name="carla.CollisionEvent"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that defines a collision data for <b>sensor.other.collision</b>. The sensor creates one of this for every collision detected which may be many for one simulation step. Learn more about this [here](ref_sensors.md#collision-detector).  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="carla.LaneMarking.type"></a>**<font color="#f8805a">type</font>** (_[carla.LaneMarkingType](#carla.LaneMarkingType)_)  
Lane marking type.  
- <a name="carla.LaneMarking.color"></a>**<font color="#f8805a">color</font>** (_[carla.Color](#carla.Color)_)  
Actual color of the marking.  
- <a name="carla.LaneMarking.lane_change"></a>**<font color="#f8805a">lane_change</font>** (_[carla.LaneChange](#carla.LaneChange)_)  
Lane change availability.  
- <a name="carla.LaneMarking.width"></a>**<font color="#f8805a">width</font>** (_float_)  
Horizontal lane marking thickness.  

---

## carla.LaneMarkingColor<a name="carla.LaneMarkingColor"></a> <sub><sup>_class_</sup></sub>
Class that defines the lane marking colors.  

<h3>Instance Variables</h3>
<<<<<<< HEAD
- <a name="carla.LaneMarkingColor.Standard"></a>**<font color="#f8805a">Standard</font>**  
White by default.  
- <a name="carla.LaneMarkingColor.Blue"></a>**<font color="#f8805a">Blue</font>**  
- <a name="carla.LaneMarkingColor.Green"></a>**<font color="#f8805a">Green</font>**  
- <a name="carla.LaneMarkingColor.Red"></a>**<font color="#f8805a">Red</font>**  
- <a name="carla.LaneMarkingColor.White"></a>**<font color="#f8805a">White</font>**  
- <a name="carla.LaneMarkingColor.Yellow"></a>**<font color="#f8805a">Yellow</font>**  
- <a name="carla.LaneMarkingColor.Other"></a>**<font color="#f8805a">Other</font>**  
=======
- <a name="carla.Color.r"></a>**<font color="#f8805a">r</font>** (_int_)  
Red color (0-255).  
- <a name="carla.Color.g"></a>**<font color="#f8805a">g</font>** (_int_)  
Green color (0-255).  
- <a name="carla.Color.b"></a>**<font color="#f8805a">b</font>** (_int_)  
Blue color (0-255).  
- <a name="carla.Color.a"></a>**<font color="#f8805a">a</font>** (_int_)  
Alpha channel (0-255).  

<h3>Methods</h3>
- <a name="carla.Color.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**r**=0</font>, <font color="#00a6ed">**g**=0</font>, <font color="#00a6ed">**b**=0</font>, <font color="#00a6ed">**a**=255</font>)  
Initializes a color, black by default.  
    - **Parameters:**
        - `r` (_int_)  
        - `g` (_int_)  
        - `b` (_int_)  
        - `a` (_int_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Color.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Color](#carla.Color)</font>)  
- <a name="carla.Color.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Color](#carla.Color)</font>)  
- <a name="carla.Color.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.LaneMarkingType<a name="carla.LaneMarkingType"></a> <sub><sup>_class_</sup></sub>
Class that defines the lane marking types accepted by OpenDRIVE. Check out this [`recipe`](../python_cookbook/#lanes-recipe)!  

<h3>Instance Variables</h3>
- <a name="carla.LaneMarkingType.NONE"></a>**<font color="#f8805a">NONE</font>**  
- <a name="carla.LaneMarkingType.Other"></a>**<font color="#f8805a">Other</font>**  
- <a name="carla.LaneMarkingType.Broken"></a>**<font color="#f8805a">Broken</font>**  
- <a name="carla.LaneMarkingType.Solid"></a>**<font color="#f8805a">Solid</font>**  
- <a name="carla.LaneMarkingType.SolidSolid"></a>**<font color="#f8805a">SolidSolid</font>**  
For double solid line.  
- <a name="carla.LaneMarkingType.SolidBroken"></a>**<font color="#f8805a">SolidBroken</font>**  
From inside to outside except for center lane which is from left to right.  
- <a name="carla.LaneMarkingType.BrokenSolid"></a>**<font color="#f8805a">BrokenSolid</font>**  
From inside to outside except for center lane which is from left to right.  
- <a name="carla.LaneMarkingType.BrokenBroken"></a>**<font color="#f8805a">BrokenBroken</font>**  
From inside to outside except for center lane which is from left to right.  
- <a name="carla.LaneMarkingType.BottsDots"></a>**<font color="#f8805a">BottsDots</font>**  
- <a name="carla.LaneMarkingType.Grass"></a>**<font color="#f8805a">Grass</font>**  
Grass edge.  
- <a name="carla.LaneMarkingType.Curb"></a>**<font color="#f8805a">Curb</font>**  

---

<<<<<<< HEAD
## carla.LaneType<a name="carla.LaneType"></a> <sub><sup>_class_</sup></sub>
All the possible lane types accepted by OpenDRIVE. Check out this [`recipe`](../python_cookbook/#lanes-recipe)!  

<h3>Instance Variables</h3>
- <a name="carla.LaneType.NONE"></a>**<font color="#f8805a">NONE</font>**  
- <a name="carla.LaneType.Driving"></a>**<font color="#f8805a">Driving</font>**  
- <a name="carla.LaneType.Stop"></a>**<font color="#f8805a">Stop</font>**  
- <a name="carla.LaneType.Shoulder"></a>**<font color="#f8805a">Shoulder</font>**  
- <a name="carla.LaneType.Biking"></a>**<font color="#f8805a">Biking</font>**  
- <a name="carla.LaneType.Sidewalk"></a>**<font color="#f8805a">Sidewalk</font>**  
- <a name="carla.LaneType.Border"></a>**<font color="#f8805a">Border</font>**  
- <a name="carla.LaneType.Restricted"></a>**<font color="#f8805a">Restricted</font>**  
- <a name="carla.LaneType.Parking"></a>**<font color="#f8805a">Parking</font>**  
- <a name="carla.LaneType.Bidirectional"></a>**<font color="#f8805a">Bidirectional</font>**  
- <a name="carla.LaneType.Median"></a>**<font color="#f8805a">Median</font>**  
- <a name="carla.LaneType.Special1"></a>**<font color="#f8805a">Special1</font>**  
- <a name="carla.LaneType.Special2"></a>**<font color="#f8805a">Special2</font>**  
- <a name="carla.LaneType.Special3"></a>**<font color="#f8805a">Special3</font>**  
- <a name="carla.LaneType.RoadWorks"></a>**<font color="#f8805a">RoadWorks</font>**  
- <a name="carla.LaneType.Tram"></a>**<font color="#f8805a">Tram</font>**  
- <a name="carla.LaneType.Rail"></a>**<font color="#f8805a">Rail</font>**  
- <a name="carla.LaneType.Entry"></a>**<font color="#f8805a">Entry</font>**  
- <a name="carla.LaneType.Exit"></a>**<font color="#f8805a">Exit</font>**  
- <a name="carla.LaneType.OffRamp"></a>**<font color="#f8805a">OffRamp</font>**  
- <a name="carla.LaneType.OnRamp"></a>**<font color="#f8805a">OnRamp</font>**  
- <a name="carla.LaneType.Any"></a>**<font color="#f8805a">Any</font>**  
=======
## carla.DVSEvent<a name="carla.DVSEvent"></a>
Class that defines a DVS event. An event is a quadruple, so a tuple of 4 elements, with `x`, `y` pixel coordinate location, timestamp `t` and polarity `pol` of the event. Learn more about them [here](ref_sensors.md).  

<h3>Instance Variables</h3>
- <a name="carla.DVSEvent.x"></a>**<font color="#f8805a">x</font>** (_int_)  
X pixel coordinate.  
- <a name="carla.DVSEvent.y"></a>**<font color="#f8805a">y</font>** (_int_)  
Y pixel coordinate.  
- <a name="carla.DVSEvent.t"></a>**<font color="#f8805a">t</font>** (_int_)  
Timestamp of the moment the event happened.  
- <a name="carla.DVSEvent.pol"></a>**<font color="#f8805a">pol</font>** (_bool_)  
Polarity of the event. __True__ for positive and __False__ for negative.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.DVSEvent.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.DVSEventArray<a name="carla.DVSEventArray"></a>
Class that defines a stream of events in [[carla.DVSEvent](#carla.DVSEvent)](#[carla.DVSEvent](#carla.DVSEvent)). Such stream is an array of arbitrary size depending on the number of events. This class also stores the field of view, the height and width of the image and the timestamp from convenience. Learn more about them [here](ref_sensors.md).  

<h3>Instance Variables</h3>
- <a name="carla.DVSEventArray.fov"></a>**<font color="#f8805a">fov</font>** (_float_)  
Horizontal field of view of the image in degrees.  
- <a name="carla.DVSEventArray.height"></a>**<font color="#f8805a">height</font>** (_int_)  
Image height in pixels.  
- <a name="carla.DVSEventArray.width"></a>**<font color="#f8805a">width</font>** (_int_)  
Image width in pixels.  
- <a name="carla.DVSEventArray.raw_data"></a>**<font color="#f8805a">raw_data</font>** (_bytes_)  

<h3>Methods</h3>
- <a name="carla.DVSEventArray.to_image"></a>**<font color="#7fb800">to_image</font>**(<font color="#00a6ed">**self**</font>)  
Converts the image following this pattern: blue indicates positive events, red indicates negative events.  
- <a name="carla.DVSEventArray.to_array"></a>**<font color="#7fb800">to_array</font>**(<font color="#00a6ed">**self**</font>)  
Converts the stream of events to an array of int values in the following order <code>[x, y, t, pol]</code>.  
- <a name="carla.DVSEventArray.to_array_x"></a>**<font color="#7fb800">to_array_x</font>**(<font color="#00a6ed">**self**</font>)  
Returns an array with X pixel coordinate of all the events in the stream.  
- <a name="carla.DVSEventArray.to_array_y"></a>**<font color="#7fb800">to_array_y</font>**(<font color="#00a6ed">**self**</font>)  
Returns an array with Y pixel coordinate of all the events in the stream.  
- <a name="carla.DVSEventArray.to_array_t"></a>**<font color="#7fb800">to_array_t</font>**(<font color="#00a6ed">**self**</font>)  
Returns an array with the timestamp of all the events in the stream.  
- <a name="carla.DVSEventArray.to_array_pol"></a>**<font color="#7fb800">to_array_pol</font>**(<font color="#00a6ed">**self**</font>)  
Returns an array with the polarity of all the events in the stream.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.DVSEventArray.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>)  
- <a name="carla.DVSEventArray.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.DVSEventArray.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.DVSEventArray.__setitem__"></a>**<font color="#7fb800">\__setitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>, <font color="#00a6ed">**color**=[carla.Color](#carla.Color)</font>)  
- <a name="carla.DVSEventArray.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.DebugHelper<a name="carla.DebugHelper"></a>
Helper class part of [carla.World](#carla.World) that defines methods for creating debug shapes. By default, shapes last one second. They can be permanent, but take into account the resources needed to do so. Check out this [recipe](ref_code_recipes.md#debug-bounding-box-recipe) where the user takes a snapshot of the world and then proceeds to draw bounding boxes for traffic lights.  

<h3>Methods</h3>
- <a name="carla.DebugHelper.draw_arrow"></a>**<font color="#7fb800">draw_arrow</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**begin**</font>, <font color="#00a6ed">**end**</font>, <font color="#00a6ed">**thickness**=0.1f</font>, <font color="#00a6ed">**arrow_size**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>)  
Draws an arrow from `begin` to `end` pointing in that direction.  
    - **Parameters:**
        - `begin` (_[carla.Location](#carla.Location)_) – Point in the coordinate system where the arrow starts.  
        - `end` (_[carla.Location](#carla.Location)_) – Point in the coordinate system where the arrow ends and points towards to.  
        - `thickness` (_float_) – Density of the line.  
        - `arrow_size` (_float_) – Size of the tip of the arrow.  
        - `color` (_[carla.Color](#carla.Color)_) – RGB code to color the object. Red by default.  
        - `life_time` (_float_) – Lifespan in seconds for the shape. By default it only lasts one frame. Set this to 0 for permanent shapes.  
- <a name="carla.DebugHelper.draw_box"></a>**<font color="#7fb800">draw_box</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**box**</font>, <font color="#00a6ed">**rotation**</font>, <font color="#00a6ed">**thickness**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>)  
Draws a box, ussually to act for object colliders.  
    - **Parameters:**
        - `box` (_[carla.BoundingBox](#carla.BoundingBox)_) – Object containing a location and the length of a box for every axis.  
        - `rotation` (_[carla.Rotation](#carla.Rotation)_) – Orientation of the box according to Unreal Engine's axis system.  
        - `thickness` (_float_) – Density of the lines that define the box.  
        - `color` (_[carla.Color](#carla.Color)_) – RGB code to color the object. Red by default.  
        - `life_time` (_float_) – Lifespan in seconds for the shape. By default it only lasts one frame. Set this to 0 for permanent shapes.  
- <a name="carla.DebugHelper.draw_line"></a>**<font color="#7fb800">draw_line</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**begin**</font>, <font color="#00a6ed">**end**</font>, <font color="#00a6ed">**thickness**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>)  
Draws a line in between `begin` and `end`.  
    - **Parameters:**
        - `begin` (_[carla.Location](#carla.Location)_) – Point in the coordinate system where the line starts.  
        - `end` (_[carla.Location](#carla.Location)_) – Spot in the coordinate system where the line ends.  
        - `thickness` (_float_) – Density of the line.  
        - `color` (_[carla.Color](#carla.Color)_) – RGB code to color the object. Red by default.  
        - `life_time` (_float_) – Lifespan in seconds for the shape. By default it only lasts one frame. Set this to 0 for permanent shapes.  
- <a name="carla.DebugHelper.draw_point"></a>**<font color="#7fb800">draw_point</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**size**=0.1f</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>)  
Draws a point `location`.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_) – Spot in the coordinate system to center the object.  
        - `size` (_float_) – Density of the point.  
        - `color` (_[carla.Color](#carla.Color)_) – RGB code to color the object. Red by default.  
        - `life_time` (_float_) – Lifespan in seconds for the shape. By default it only lasts one frame. Set this to 0 for permanent shapes.  
- <a name="carla.DebugHelper.draw_string"></a>**<font color="#7fb800">draw_string</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**text**</font>, <font color="#00a6ed">**draw_shadow**=False</font>, <font color="#00a6ed">**color**=(255,0,0)</font>, <font color="#00a6ed">**life_time**=-1.0f</font>)  
Draws a string in a given location of the simulation which can only be seen server-side.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_) – Spot in the simulation where the text will be centered.  
        - `text` (_str_) – Text intended to be shown in the world.  
        - `draw_shadow` (_bool_) – Casts a shadow for the string that could help in visualization. It is disabled by default.  
        - `color` (_[carla.Color](#carla.Color)_) – RGB code to color the string. Red by default.  
        - `life_time` (_float_)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.SensorData<a name="carla.SensorData"></a> <sub><sup>_class_</sup></sub>
Base class for all the objects containing data generated by a sensor.  

<h3>Instance Variables</h3>
<<<<<<< HEAD
- <a name="carla.SensorData.frame"></a>**<font color="#f8805a">frame</font>** (_int_)  
Frame count when the data was generated.  
- <a name="carla.SensorData.timestamp"></a>**<font color="#f8805a">timestamp</font>** (_float_)  
Simulation-time when the data was generated.  
- <a name="carla.SensorData.transform"></a>**<font color="#f8805a">transform</font>** (_[carla.Transform](#carla.Transform)_)  
Sensor's transform when the data was generated.  
=======
- <a name="carla.GearPhysicsControl.ratio"></a>**<font color="#f8805a">ratio</font>** (_float_)  
The transmission ratio of the gear.  
- <a name="carla.GearPhysicsControl.down_ratio"></a>**<font color="#f8805a">down_ratio</font>** (_float_)  
Quotient between current RPM and MaxRPM where the autonomous gear box should shift down.  
- <a name="carla.GearPhysicsControl.up_ratio"></a>**<font color="#f8805a">up_ratio</font>** (_float_)  
Quotient between current RPM and MaxRPM where the autonomous gear box should shift up.  

<h3>Methods</h3>
- <a name="carla.GearPhysicsControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**ratio**=1.0</font>, <font color="#00a6ed">**down_ratio**=0.5</font>, <font color="#00a6ed">**up_ratio**=0.65</font>)  
    - **Parameters:**
        - `ratio` (_float_)  
        - `down_ratio` (_float_)  
        - `up_ratio` (_float_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.GearPhysicsControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.GearPhysicsControl](#carla.GearPhysicsControl)</font>)  
- <a name="carla.GearPhysicsControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.GearPhysicsControl](#carla.GearPhysicsControl)</font>)  
- <a name="carla.GearPhysicsControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.TrafficLightState<a name="carla.TrafficLightState"></a> <sub><sup>_class_</sup></sub>
All possible states for traffic lights. Check out this [`recipe`](../python_cookbook/#traffic-lights-recipe)!  

<h3>Instance Variables</h3>
<<<<<<< HEAD
- <a name="carla.TrafficLightState.Red"></a>**<font color="#f8805a">Red</font>**  
- <a name="carla.TrafficLightState.Yellow"></a>**<font color="#f8805a">Yellow</font>**  
- <a name="carla.TrafficLightState.Green"></a>**<font color="#f8805a">Green</font>**  
- <a name="carla.TrafficLightState.Off"></a>**<font color="#f8805a">Off</font>**  
- <a name="carla.TrafficLightState.Unknown"></a>**<font color="#f8805a">Unknown</font>**  
=======
- <a name="carla.GeoLocation.latitude"></a>**<font color="#f8805a">latitude</font>** (_float_)  
North/South value of a point on the map.  
- <a name="carla.GeoLocation.longitude"></a>**<font color="#f8805a">longitude</font>** (_float_)  
West/East value of a point on the map.  
- <a name="carla.GeoLocation.altitude"></a>**<font color="#f8805a">altitude</font>** (_float_)  
Height regarding ground level.  

<h3>Methods</h3>
- <a name="carla.GeoLocation.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**latitude**=0.0</font>, <font color="#00a6ed">**longitude**=0.0</font>, <font color="#00a6ed">**altitude**=0.0</font>)  
    - **Parameters:**
        - `latitude` (_float_)  
        - `longitude` (_float_)  
        - `altitude` (_float_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.GeoLocation.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.GeoLocation](#carla.GeoLocation)</font>)  
- <a name="carla.GeoLocation.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.GeoLocation](#carla.GeoLocation)</font>)  
- <a name="carla.GeoLocation.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Actor<a name="carla.Actor"></a> <sub><sup>_class_</sup></sub>
Base class for all actors.
Actor is anything that plays a role in the simulation and can be moved around, examples of actors are vehicles, pedestrians, and sensors.  

<h3>Instance Variables</h3>
- <a name="carla.Actor.id"></a>**<font color="#f8805a">id</font>** (_int_)  
Unique id identifying this actor. Note ids are unique during a given episode.  
- <a name="carla.Actor.type_id"></a>**<font color="#f8805a">type_id</font>** (_str_)  
Id of the blueprint that created this actor, e.g. "vehicle.ford.mustang".  
- <a name="carla.Actor.parent"></a>**<font color="#f8805a">parent</font>** (_[carla.Actor](#carla.Actor)_)  
Parent actor of this instance, None if this instance is not attached to another actor.  
- <a name="carla.Actor.semantic_tags"></a>**<font color="#f8805a">semantic_tags</font>** (_list(int)_)  
List of semantic tags of all components of this actor, see semantic segmentation sensor for the list of available tags. E.g., a traffic light actor could contain "pole" and "traffic light" tags.  
- <a name="carla.Actor.is_alive"></a>**<font color="#f8805a">is_alive</font>** (_bool_)  
Returns whether this object was destroyed using this actor handle.  
- <a name="carla.Actor.attributes"></a>**<font color="#f8805a">attributes</font>** (_dict_)  
Dictionary of attributes of the blueprint that created this actor.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.Actor.destroy"></a>**<font color="#7fb800">destroy</font>**(<font color="#00a6ed">**self**</font>)  
Tell the simulator to destroy this Actor, and return whether the actor was successfully destroyed. It has no effect if the Actor was already successfully destroyed.  
    - **Return:** _bool_  
    - **Warning:** <font color="#ED2F2F">_This function blocks until the destruction operation is completed by the simulator.
_</font>  
- <a name="carla.Actor.get_world"></a>**<font color="#7fb800">get_world</font>**(<font color="#00a6ed">**self**</font>)  
Returns the world this actor belongs to.  
    - **Return:** _[carla.World](#carla.World)_  
- <a name="carla.Actor.get_location"></a>**<font color="#7fb800">get_location</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current location.  
    - **Return:** _[carla.Location](#carla.Location)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the location received in the last tick.
_</font>  
- <a name="carla.Actor.get_transform"></a>**<font color="#7fb800">get_transform</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current transform.  
    - **Return:** _[carla.Transform](#carla.Transform)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the transform received in the last tick.
_</font>  
- <a name="carla.Actor.get_velocity"></a>**<font color="#7fb800">get_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current 3D velocity.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the velocity received in the last tick.
_</font>  
- <a name="carla.Actor.get_angular_velocity"></a>**<font color="#7fb800">get_angular_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current 3D angular velocity.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the angular velocity received in the last tick.
_</font>  
- <a name="carla.Actor.get_acceleration"></a>**<font color="#7fb800">get_acceleration</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current 3D acceleration.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the acceleration received in the last tick.
_</font>  
- <a name="carla.Actor.set_location"></a>**<font color="#7fb800">set_location</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>)  
Teleport the actor to a given location.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
- <a name="carla.Actor.set_transform"></a>**<font color="#7fb800">set_transform</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**transform**</font>)  
Teleport the actor to a given transform.  
    - **Parameters:**
        - `transform` (_[carla.Transform](#carla.Transform)_)  
- <a name="carla.Actor.set_velocity"></a>**<font color="#7fb800">set_velocity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**velocity**</font>)  
Set the actor's velocity.  
    - **Parameters:**
        - `velocity` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Actor.set_angular_velocity"></a>**<font color="#7fb800">set_angular_velocity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**angular_velocity**</font>)  
Set the actor's angular velocity.  
    - **Parameters:**
        - `angular_velocity` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Actor.add_impulse"></a>**<font color="#7fb800">add_impulse</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**impulse**</font>)  
Add impulse to the actor.  
    - **Parameters:**
        - `impulse` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Actor.set_simulate_physics"></a>**<font color="#7fb800">set_simulate_physics</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**enabled**=True</font>)  
Enable or disable physics simulation on this actor.  
    - **Parameters:**
        - `enabled` (_bool_)  
- <a name="carla.Actor.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
    - **Return:** _str_  
=======

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.GnssMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.ActorAttribute<a name="carla.ActorAttribute"></a> <sub><sup>_class_</sup></sub>
Class that defines an attribute of a [carla.ActorBlueprint](#carla.ActorBlueprint).  

<h3>Instance Variables</h3>
- <a name="carla.ActorAttribute.id"></a>**<font color="#f8805a">id</font>** (_str_)  
The attribute's identifier.  
- <a name="carla.ActorAttribute.type"></a>**<font color="#f8805a">type</font>** (_[carla.ActorAttributeType](#carla.ActorAttributeType)_)  
The attribute parameter type.  
- <a name="carla.ActorAttribute.recommended_values"></a>**<font color="#f8805a">recommended_values</font>** (_list(str)_)  
List of recommended values that the attribute may have.  
- <a name="carla.ActorAttribute.is_modifiable"></a>**<font color="#f8805a">is_modifiable</font>** (_bool_)  
True if the attribute is modifiable.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.ActorAttribute.as_bool"></a>**<font color="#7fb800">as_bool</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.as_int"></a>**<font color="#7fb800">as_int</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.as_float"></a>**<font color="#7fb800">as_float</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.as_str"></a>**<font color="#7fb800">as_str</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.as_color"></a>**<font color="#7fb800">as_color</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_bool / int / float / str / [carla.Color](#carla.Color) / [carla.ActorAttribute](#carla.ActorAttribute)_)  
- <a name="carla.ActorAttribute.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_bool / int / float / str / [carla.Color](#carla.Color) / [carla.ActorAttribute](#carla.ActorAttribute)_)  
- <a name="carla.ActorAttribute.__nonzero__"></a>**<font color="#7fb800">\__nonzero__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__bool__"></a>**<font color="#7fb800">\__bool__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__int__"></a>**<font color="#7fb800">\__int__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__float__"></a>**<font color="#7fb800">\__float__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorAttribute.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.ActorBlueprint<a name="carla.ActorBlueprint"></a> <sub><sup>_class_</sup></sub>
Class that contains all the necessary information for spawning an Actor.  
=======

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.IMUMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Image<a name="carla.Image"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that defines an image of 32-bit BGRA colors that will be used as initial data retrieved by camera sensors. There are different camera sensors (currently three, RGB, depth and semantic segmentation) and each of these makes different use for the images. Learn more about them [here](ref_sensors.md).  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="carla.ActorBlueprint.id"></a>**<font color="#f8805a">id</font>** (_str_)  
Actor blueprint identifier, e.g. `walker.pedestrian.0001`.  
- <a name="carla.ActorBlueprint.tags"></a>**<font color="#f8805a">tags</font>** (_list(str)_)  
List of tags of an actor blueprint e.g. `['0001', 'pedestrian', 'walker']`.  

<h3>Methods</h3>
- <a name="carla.ActorBlueprint.has_tag"></a>**<font color="#7fb800">has_tag</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**tag**</font>)  
Returns `true` if an actor blueprint has the tag.  
    - **Parameters:**
        - `tag` (_str_) – e.g. 'walker'.  
    - **Return:** _bool_  
- <a name="carla.ActorBlueprint.match_tags"></a>**<font color="#7fb800">match_tags</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**wildcard_pattern**</font>)  
Test if any of the flags or id matches wildcard_pattern.  
    - **Parameters:**
<<<<<<< HEAD
        - `wildcard_pattern` (_str_)  
    - **Return:** _bool_  
    - **Note:** <font color="#8E8E8E">_The wildcard_pattern follows Unix shell-style wildcards.
_</font>  
- <a name="carla.ActorBlueprint.has_attribute"></a>**<font color="#7fb800">has_attribute</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>)  
Returns `true` if the blueprint contains the specified attribute.  
    - **Parameters:**
        - `id` (_str_) – e.g 'gender'.  
    - **Return:** _bool_  
- <a name="carla.ActorBlueprint.get_attribute"></a>**<font color="#7fb800">get_attribute</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>)  
Returns the current actor attribute through its id.  
    - **Parameters:**
        - `id` (_str_)  
    - **Return:** _[carla.ActorAttribute](#carla.ActorAttribute)_  
- <a name="carla.ActorBlueprint.set_attribute"></a>**<font color="#7fb800">set_attribute</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**id**</font>, <font color="#00a6ed">**value**</font>)  
Sets an existing attribute to the actor's blueprint.  
=======
        - `path` (_str_) – Path that will contain the image.  
        - `color_converter` (_[carla.ColorConverter](#carla.ColorConverter)_) – Default <b>Raw</b> will make no changes.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Image.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>)  
- <a name="carla.Image.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.Image.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.Image.__setitem__"></a>**<font color="#7fb800">\__setitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>, <font color="#00a6ed">**color**=[carla.Color](#carla.Color)</font>)  
- <a name="carla.Image.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Junction<a name="carla.Junction"></a>
Class that embodies the intersections on the road described in the OpenDRIVE file according to OpenDRIVE 1.4 standards.  

<h3>Instance Variables</h3>
- <a name="carla.Junction.id"></a>**<font color="#f8805a">id</font>** (_int_)  
Identificator found in the OpenDRIVE file.  
- <a name="carla.Junction.bounding_box"></a>**<font color="#f8805a">bounding_box</font>** (_[carla.BoundingBox](#carla.BoundingBox)_)  
Bounding box encapsulating the junction lanes.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Junction.get_waypoints"></a>**<font color="#7fb800">get_waypoints</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lane_type**</font>)  
Returns a list of pairs of waypoints. Every tuple on the list contains first an initial and then a final waypoint within the intersection boundaries that describe the beginning and the end of said lane along the junction. Lanes follow their OpenDRIVE definitions so there may be many different tuples with the same starting waypoint due to possible deviations, as this are considered different lanes.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
    - **Parameters:**
        - `id` (_str_)  
        - `value` (_str_)  
    - **Note:** <font color="#8E8E8E">_Attribute can only be set or changed if it is modifiable
_</font>  
- <a name="carla.ActorBlueprint.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorBlueprint.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.ActorBlueprint.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.ActorSnapshot<a name="carla.ActorSnapshot"></a> <sub><sup>_class_</sup></sub>
Class that provides access to the data of a [carla.Actor](#carla.Actor) in a [carla.WorldSnapshot](#carla.WorldSnapshot).  

<h3>Instance Variables</h3>
- <a name="carla.ActorSnapshot.id"></a>**<font color="#f8805a">id</font>** (_int_)  
The ActorSnapshot's identifier.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.ActorSnapshot.get_transform"></a>**<font color="#7fb800">get_transform</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current transform.  
    - **Return:** _[carla.Transform](#carla.Transform)_  
- <a name="carla.ActorSnapshot.get_velocity"></a>**<font color="#7fb800">get_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current 3D velocity.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.ActorSnapshot.get_angular_velocity"></a>**<font color="#7fb800">get_angular_velocity</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current 3D angular velocity.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.ActorSnapshot.get_acceleration"></a>**<font color="#7fb800">get_acceleration</font>**(<font color="#00a6ed">**self**</font>)  
Returns the actor's current 3D acceleration.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.ActorSnapshot.__self__"></a>**<font color="#7fb800">\__self__</font>**(<font color="#00a6ed">**self**</font>)  
=======

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Landmark.get_lane_validities"></a>**<font color="#7fb800">get_lane_validities</font>**(<font color="#00a6ed">**self**</font>)  
Returns which lanes the landmark is affecting to. As there may be specific lanes where the landmark is not effective, the return is a list of pairs containing ranges of the __lane_id__ affected:
<small>Example: In a road with 5 lanes, being 3 not affected: [(from_lane1,to_lane2),(from_lane4,to_lane5)]</small>.  
    - **Return:** _list(tuple(int))_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.BoundingBox<a name="carla.BoundingBox"></a> <sub><sup>_class_</sup></sub>
Bounding box helper class.  

<h3>Instance Variables</h3>
- <a name="carla.BoundingBox.location"></a>**<font color="#f8805a">location</font>** (_[carla.Location](#carla.Location)_)  
The center of the bounding box relative to its parent actor.  
- <a name="carla.BoundingBox.extent"></a>**<font color="#f8805a">extent</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
It contains the vector from the center of the bounding box to one of the vertex of the box.  
So, if you want to know the _X bounding box size_, you can just do `extent.x * 2`.  

<h3>Methods</h3>
- <a name="carla.BoundingBox.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**extent**</font>)  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
        - `extent` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.BoundingBox.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.BoundingBox](#carla.BoundingBox)_)  
- <a name="carla.BoundingBox.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.BoundingBox](#carla.BoundingBox)_)  
- <a name="carla.BoundingBox.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

<<<<<<< HEAD
## carla.Client<a name="carla.Client"></a> <sub><sup>_class_</sup></sub>
Client used to connect to a Carla server.  

<h3>Methods</h3>
- <a name="carla.Client.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**host**</font>, <font color="#00a6ed">**port**</font>, <font color="#00a6ed">**worker_threads**=0</font>)  
Client constructor.  
    - **Parameters:**
        - `host` (_str_) – IP address where a CARLA Simulator instance is running.  
        - `port` (_int_) – TCP port where the CARLA Simulator instance is running.  
        - `worker_threads` (_int_) – Number of working threads used for background updates. If 0, use all available concurrency.  
- <a name="carla.Client.set_timeout"></a>**<font color="#7fb800">set_timeout</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**seconds**</font>)  
Set the timeout in seconds allowed to block when doing networking calls.  
    - **Parameters:**
        - `seconds` (_float_) – New timeout value in seconds.  
- <a name="carla.Client.get_client_version"></a>**<font color="#7fb800">get_client_version</font>**(<font color="#00a6ed">**self**</font>)  
Get the client version as a string.  
    - **Return:** _str_  
- <a name="carla.Client.get_server_version"></a>**<font color="#7fb800">get_server_version</font>**(<font color="#00a6ed">**self**</font>)  
Get the server version as a string.  
    - **Return:** _str_  
- <a name="carla.Client.get_world"></a>**<font color="#7fb800">get_world</font>**(<font color="#00a6ed">**self**</font>)  
Get the world currently active in the simulation.  
    - **Return:** _[carla.World](#carla.World)_  
- <a name="carla.Client.get_available_maps"></a>**<font color="#7fb800">get_available_maps</font>**(<font color="#00a6ed">**self**</font>)  
Get a list of strings of the maps available on server. The result can be something like:  
  '/Game/Carla/Maps/Town01'  
  '/Game/Carla/Maps/Town02'  
  '/Game/Carla/Maps/Town03'  
  '/Game/Carla/Maps/Town04'  
  '/Game/Carla/Maps/Town05'  
  '/Game/Carla/Maps/Town06'  
  '/Game/Carla/Maps/Town07'.  
    - **Return:** _list(str)_  
- <a name="carla.Client.reload_world"></a>**<font color="#7fb800">reload_world</font>**(<font color="#00a6ed">**self**</font>)  
Reload the current world, note that a new world is created with default settings using the same map. All actors present in the world will be destroyed.  
    - **Raises:** RuntimeError  
- <a name="carla.Client.load_world"></a>**<font color="#7fb800">load_world</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**map_name**</font>)  
Load a new world with default settings using `map_name` map. All actors present in the current world will be destroyed.  
    - **Parameters:**
        - `map_name` (_str_) – Name of the map to load, accepts both full paths and map names, e.g. '/Game/Carla/Maps/Town01' or 'Town01'.  
- <a name="carla.Client.start_recorder"></a>**<font color="#7fb800">start_recorder</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>)  
If we use a simple name like 'recording.log' then it will be saved at server folder 'CarlaUE4/Saved/recording.log'. If we use some folder in the name, then it will be considered to be an absolute path, like '/home/carla/recording.log'.  
    - **Parameters:**
        - `filename` (_str_) – Name of the file to write the recorded data.  
- <a name="carla.Client.stop_recorder"></a>**<font color="#7fb800">stop_recorder</font>**(<font color="#00a6ed">**self**</font>)  
Stops the recording in progress.  
- <a name="carla.Client.show_recorder_file_info"></a>**<font color="#7fb800">show_recorder_file_info</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>, <font color="#00a6ed">**show_all**</font>)  
Will show info about the recorded file (frames, times, events, state, positions...) We have the option to show all the details per frame, that includes all the traffic light states, position of all actors, and animations data.  
    - **Parameters:**
        - `filename` (_str_) – Name of the recorded file to load.  
        - `show_all` (_bool_) – Show all detailed info, or just a summary.  
- <a name="carla.Client.show_recorder_collisions"></a>**<font color="#7fb800">show_recorder_collisions</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>, <font color="#00a6ed">**category1**</font>, <font color="#00a6ed">**category2**</font>)  
This will show which collisions were recorded in the file. We can use a filter for the collisions we want, using two categories. The categories can be:  
  'h' = Hero  
  'v' = Vehicle  
  'w' = Walker  
  't' = Traffic light  
  'o' = Other  
  'a' = Any  
So, if you want to see only collisions about a vehicle and a walker, we would use for category1 'v' and category2 'w'. Or if you want all the collisions (filter off) you can use 'a' as both categories.  
    - **Parameters:**
        - `filename` (_str_) – Name of the recorded file to load.  
        - `category1` (_single char_) – Character specifying the category of the first actor.  
        - `category2` (_single char_) – Character specifying the category of the second actor.  
- <a name="carla.Client.show_recorder_actors_blocked"></a>**<font color="#7fb800">show_recorder_actors_blocked</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**filename**</font>, <font color="#00a6ed">**min_time**</font>, <font color="#00a6ed">**min_distance**</font>)  
Shows which actors seem blocked by some reason. The idea is to calculate which actors are not moving as much as 'min_distance' for a period of 'min_time'. By default min_time = 60 seconds (1 min) and min_distance = 100 centimeters (1 m).  
    - **Parameters:**
        - `filename` (_str_) – Name of the recorded file to load.  
        - `min_time` (_float_) – How many seconds has to be stoped an actor to be considered as blocked.  
        - `min_distance` (_float_) – How many centimeters needs to move the actor in order to be considered as moving, and not blocked.  
- <a name="carla.Client.replay_file"></a>**<font color="#7fb800">replay_file</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**name**</font>, <font color="#00a6ed">**start**</font>, <font color="#00a6ed">**duration**</font>, <font color="#00a6ed">**follow_id**</font>)  
Playback a file.  
    - **Parameters:**
        - `name` (_str_) – Name of the file.  
        - `start` (_float_) – Time in seconds where to start the playback. If it is negative, then it starts from the end.  
        - `duration` (_float_) – Id of the actor to follow. If this is 0 then camera is disabled.  
        - `follow_id` (_int_)  
- <a name="carla.Client.set_replayer_time_factor"></a>**<font color="#7fb800">set_replayer_time_factor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**time_factor**</font>)  
Apply a different playback speed to current playback. Can be used several times while a playback is in curse.  
    - **Parameters:**
        - `time_factor` (_float_) – A value of 1.0 means normal time factor. A value < 1.0 means slow motion (for example 0.5 is half speed) A value > 1.0 means fast motion (for example 2.0 is double speed).  
- <a name="carla.Client.apply_batch"></a>**<font color="#7fb800">apply_batch</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**commands**</font>)  
This function executes the whole list of commands on a single simulation step. For example, to set autopilot on some actors, we could use:   [sample_code](https://github.com/carla-simulator/carla/blob/10c5f6a482a21abfd00220c68c7f12b4110b7f63/PythonAPI/examples/spawn_npc.py#L126).   We don't have control about the response of each command. If we need that, we can use `apply_batch_sync()`.  
    - **Parameters:**
        - `commands` (_list_) – A list of commands to execute in batch. Each command has a different number of parameters. Currently, we can use these [commands](#command.ApplyAngularVelocity):  
  SpawnActor  
  DestroyActor  
  ApplyVehicleControl  
  ApplyWalkerControl  
  ApplyTransform  
  ApplyVelocity  
  AplyAngularVelocity  
  ApplyImpulse  
  SetSimulatePhysics  
  SetAutopilot.  
- <a name="carla.Client.apply_batch_sync"></a>**<font color="#7fb800">apply_batch_sync</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**commands**</font>)  
This function executes the whole list of commands on a single simulation step, blocks until the commands are executed, and returns a list of [`command.Response`](#command.Response) that can be used to determine whether a single command succeeded or not. [sample_code](https://github.com/carla-simulator/carla/blob/10c5f6a482a21abfd00220c68c7f12b4110b7f63/PythonAPI/examples/spawn_npc.py#L112-L116).  
    - **Parameters:**
        - `commands` (_list_) – A list of commands to execute in batch. For a list of commands available see function above apply_batch().  
    - **Return:** _list_  
=======
## carla.LaneChange<a name="carla.LaneChange"></a>
Class that defines the permission to turn either left, right, both or none (meaning only going straight is allowed). This information is stored for every [carla.Waypoint](#carla.Waypoint) according to the OpenDRIVE file. In this [recipe](ref_code_recipes.md#lanes-recipe) the user creates a waypoint for a current vehicle position and learns which turns are permitted.  

<h3>Instance Variables</h3>
- <a name="carla.LaneChange.NONE"></a>**<font color="#f8805a">NONE</font>**  
Traffic rules do not allow turning right or left, only going straight.  
- <a name="carla.LaneChange.Right"></a>**<font color="#f8805a">Right</font>**  
Traffic rules allow turning right.  
- <a name="carla.LaneChange.Left"></a>**<font color="#f8805a">Left</font>**  
Traffic rules allow turning left.  
- <a name="carla.LaneChange.Both"></a>**<font color="#f8805a">Both</font>**  
Traffic rules allow turning either right or left.  

---

## carla.LaneInvasionEvent<a name="carla.LaneInvasionEvent"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that defines lanes invasion for <b>sensor.other.lane_invasion</b>. It works only client-side and is dependant on OpenDRIVE to provide reliable information. The sensor creates one of this every time there is a lane invasion, which may be more than once per simulation step. Learn more about this [here](ref_sensors.md#lane-invasion-detector).  

<h3>Instance Variables</h3>
- <a name="carla.LaneInvasionEvent.actor"></a>**<font color="#f8805a">actor</font>** (_[carla.Actor](#carla.Actor)_)  
Gets the actor the sensor is attached to, the one that invaded another lane.  
- <a name="carla.LaneInvasionEvent.crossed_lane_markings"></a>**<font color="#f8805a">crossed_lane_markings</font>** (_list([carla.LaneMarking](#carla.LaneMarking))_)  
List of lane markings that have been crossed and detected by the sensor.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.LaneInvasionEvent.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.LaneMarking<a name="carla.LaneMarking"></a>
Class that gathers all the information regarding a lane marking according to [OpenDRIVE 1.4 standard](http://www.opendrive.org/docs/OpenDRIVEFormatSpecRev1.4H.pdf) standard.  

<h3>Instance Variables</h3>
- <a name="carla.LaneMarking.color"></a>**<font color="#f8805a">color</font>** (_[carla.LaneMarkingColor](#carla.LaneMarkingColor)_)  
Actual color of the marking.  
- <a name="carla.LaneMarking.lane_change"></a>**<font color="#f8805a">lane_change</font>** (_[carla.LaneChange](#carla.LaneChange)_)  
Permissions for said lane marking to be crossed.  
- <a name="carla.LaneMarking.type"></a>**<font color="#f8805a">type</font>** (_[carla.LaneMarkingType](#carla.LaneMarkingType)_)  
Lane marking type.  
- <a name="carla.LaneMarking.width"></a>**<font color="#f8805a">width</font>** (_float_)  
Horizontal lane marking thickness.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.CollisionEvent<a name="carla.CollisionEvent"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
Class that defines a registered collision.  

<h3>Instance Variables</h3>
- <a name="carla.CollisionEvent.actor"></a>**<font color="#f8805a">actor</font>** (_[carla.Actor](#carla.Actor)_)  
Get "self" actor. Actor that measured the collision.  
- <a name="carla.CollisionEvent.other_actor"></a>**<font color="#f8805a">other_actor</font>** (_[carla.Actor](#carla.Actor)_)  
Get the actor to which we collided.  
- <a name="carla.CollisionEvent.normal_impulse"></a>**<font color="#f8805a">normal_impulse</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Normal impulse result of the collision.  

---

## carla.Color<a name="carla.Color"></a> <sub><sup>_class_</sup></sub>
Class that defines a 32-bit BGRA color.  

<h3>Instance Variables</h3>
<<<<<<< HEAD
- <a name="carla.Color.r"></a>**<font color="#f8805a">r</font>** (_int_)  
Red color (0-255).  
- <a name="carla.Color.g"></a>**<font color="#f8805a">g</font>** (_int_)  
Green color (0-255).  
- <a name="carla.Color.b"></a>**<font color="#f8805a">b</font>** (_int_)  
Blue color (0-255).  
- <a name="carla.Color.a"></a>**<font color="#f8805a">a</font>** (_int_)  
Alpha channel (0-255).  

<h3>Methods</h3>
- <a name="carla.Color.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**r**=0</font>, <font color="#00a6ed">**g**=0</font>, <font color="#00a6ed">**b**=0</font>, <font color="#00a6ed">**a**=255</font>)  
Client constructor.  
    - **Parameters:**
        - `r` (_int_)  
        - `g` (_int_)  
        - `b` (_int_)  
        - `a` (_int_)  
- <a name="carla.Color.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Color](#carla.Color)_)  
- <a name="carla.Color.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Color](#carla.Color)_)  
- <a name="carla.Color.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.GearPhysicsControl<a name="carla.GearPhysicsControl"></a> <sub><sup>_class_</sup></sub>
Class that provides access to vehicle transmission details.  
=======
- <a name="carla.LaneMarkingType.NONE"></a>**<font color="#f8805a">NONE</font>**  
- <a name="carla.LaneMarkingType.Other"></a>**<font color="#f8805a">Other</font>**  
- <a name="carla.LaneMarkingType.Broken"></a>**<font color="#f8805a">Broken</font>**  
- <a name="carla.LaneMarkingType.Solid"></a>**<font color="#f8805a">Solid</font>**  
- <a name="carla.LaneMarkingType.SolidSolid"></a>**<font color="#f8805a">SolidSolid</font>**  
- <a name="carla.LaneMarkingType.SolidBroken"></a>**<font color="#f8805a">SolidBroken</font>**  
- <a name="carla.LaneMarkingType.BrokenSolid"></a>**<font color="#f8805a">BrokenSolid</font>**  
- <a name="carla.LaneMarkingType.BrokenBroken"></a>**<font color="#f8805a">BrokenBroken</font>**  
- <a name="carla.LaneMarkingType.BottsDots"></a>**<font color="#f8805a">BottsDots</font>**  
- <a name="carla.LaneMarkingType.Grass"></a>**<font color="#f8805a">Grass</font>**  
- <a name="carla.LaneMarkingType.Curb"></a>**<font color="#f8805a">Curb</font>**  

---

## carla.LaneType<a name="carla.LaneType"></a>
Class that defines the possible lane types accepted by OpenDRIVE 1.4. This standards define the road information. For instance in this [recipe](ref_code_recipes.md#lanes-recipe) the user creates a [carla.Waypoint](#carla.Waypoint) for the current location of a vehicle and uses it to get the current and adjacent lane types.  

<h3>Instance Variables</h3>
- <a name="carla.LaneType.NONE"></a>**<font color="#f8805a">NONE</font>**  
- <a name="carla.LaneType.Driving"></a>**<font color="#f8805a">Driving</font>**  
- <a name="carla.LaneType.Stop"></a>**<font color="#f8805a">Stop</font>**  
- <a name="carla.LaneType.Shoulder"></a>**<font color="#f8805a">Shoulder</font>**  
- <a name="carla.LaneType.Biking"></a>**<font color="#f8805a">Biking</font>**  
- <a name="carla.LaneType.Sidewalk"></a>**<font color="#f8805a">Sidewalk</font>**  
- <a name="carla.LaneType.Border"></a>**<font color="#f8805a">Border</font>**  
- <a name="carla.LaneType.Restricted"></a>**<font color="#f8805a">Restricted</font>**  
- <a name="carla.LaneType.Parking"></a>**<font color="#f8805a">Parking</font>**  
- <a name="carla.LaneType.Bidirectional"></a>**<font color="#f8805a">Bidirectional</font>**  
- <a name="carla.LaneType.Median"></a>**<font color="#f8805a">Median</font>**  
- <a name="carla.LaneType.Special1"></a>**<font color="#f8805a">Special1</font>**  
- <a name="carla.LaneType.Special2"></a>**<font color="#f8805a">Special2</font>**  
- <a name="carla.LaneType.Special3"></a>**<font color="#f8805a">Special3</font>**  
- <a name="carla.LaneType.RoadWorks"></a>**<font color="#f8805a">RoadWorks</font>**  
- <a name="carla.LaneType.Tram"></a>**<font color="#f8805a">Tram</font>**  
- <a name="carla.LaneType.Rail"></a>**<font color="#f8805a">Rail</font>**  
- <a name="carla.LaneType.Entry"></a>**<font color="#f8805a">Entry</font>**  
- <a name="carla.LaneType.Exit"></a>**<font color="#f8805a">Exit</font>**  
- <a name="carla.LaneType.OffRamp"></a>**<font color="#f8805a">OffRamp</font>**  
- <a name="carla.LaneType.OnRamp"></a>**<font color="#f8805a">OnRamp</font>**  
- <a name="carla.LaneType.Any"></a>**<font color="#f8805a">Any</font>**  
Every type except for NONE.  

---

## carla.LidarMeasurement<a name="carla.LidarMeasurement"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that defines the lidar data retrieved by a <b>sensor.lidar.ray_cast</b>. This essentially simulates a rotating lidar using ray-casting. Learn more about this [here](ref_sensors.md#lidar-raycast-sensor).  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="carla.GearPhysicsControl.ratio"></a>**<font color="#f8805a">ratio</font>** (_float_)  
The transmission ratio of the gear.  
- <a name="carla.GearPhysicsControl.down_ratio"></a>**<font color="#f8805a">down_ratio</font>** (_float_)  
The level of RPM (in relation to MaxRPM) where the gear autobox initiates shifting down.  
- <a name="carla.GearPhysicsControl.up_ratio"></a>**<font color="#f8805a">up_ratio</font>** (_float_)  
The level of RPM (in relation to MaxRPM) where the gear autobox initiates shifting up.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.GearPhysicsControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**ratio**=1.0</font>, <font color="#00a6ed">**down_ratio**=0.5</font>, <font color="#00a6ed">**up_ratio**=0.65</font>)  
    - **Parameters:**
        - `ratio` (_float_)  
        - `down_ratio` (_float_)  
        - `up_ratio` (_float_)  
- <a name="carla.GearPhysicsControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.GearPhysicsControl](#carla.GearPhysicsControl)_)  
- <a name="carla.GearPhysicsControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.GearPhysicsControl](#carla.GearPhysicsControl)_)  
- <a name="carla.GearPhysicsControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.LidarMeasurement.save_to_disk"></a>**<font color="#7fb800">save_to_disk</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**path**</font>)  
Saves the point cloud to disk as a <b>.ply</b> file describing data from 3D scanners. The files generated are ready to be used within [MeshLab](http://www.meshlab.net/), an open source system for processing said files. Just take into account that axis may differ from Unreal Engine and so, need to be reallocated.  
    - **Parameters:**
        - `path` (_str_)  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.LidarMeasurement.get_point_count"></a>**<font color="#7fb800">get_point_count</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**channel**</font>)  
Retrieves the number of points sorted by channel that are generated by this measure. Sorting by channel allows to identify the original channel for every point.  
    - **Parameters:**
        - `channel` (_int_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.LidarMeasurement.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>)  
- <a name="carla.LidarMeasurement.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.LidarMeasurement.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.LidarMeasurement.__setitem__"></a>**<font color="#7fb800">\__setitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>, <font color="#00a6ed">**location**=[carla.Location](#carla.Location)</font>)  
- <a name="carla.LidarMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Light<a name="carla.Light"></a>
This class exposes the lights that exist in the scene, except for vehicle lights. The properties of a light can be queried and changed at will.
Lights are automatically turned on when the simulator enters night mode (sun altitude is below zero).  

<h3>Instance Variables</h3>
- <a name="carla.Light.color"></a>**<font color="#f8805a">color</font>** (_[carla.Color](#carla.Color)_)  
Color of the light.  
- <a name="carla.Light.id"></a>**<font color="#f8805a">id</font>** (_int_)  
Identifier of the light.  
- <a name="carla.Light.intensity"></a>**<font color="#f8805a">intensity</font>** (_float_)  
Intensity of the light in lumens.  
- <a name="carla.Light.is_on"></a>**<font color="#f8805a">is_on</font>** (_bool_)  
Switch of the light. It is __True__ when the light is on. When the night mode starts, this is set to __True__.  
- <a name="carla.Light.location"></a>**<font color="#f8805a">location</font>** (_[carla.Location](#carla.Location)_)  
Position of the light.  
- <a name="carla.Light.light_group"></a>**<font color="#f8805a">light_group</font>** (_[carla.LightGroup](#carla.LightGroup)_)  
Group the light belongs to.  
- <a name="carla.Light.light_state"></a>**<font color="#f8805a">light_state</font>** (_[carla.LightState](#carla.LightState)_)  
State of the light. Summarizes its attributes, group, and if it is on/off.  

<h3>Methods</h3>
- <a name="carla.Light.turn_off"></a>**<font color="#7fb800">turn_off</font>**(<font color="#00a6ed">**self**</font>)  
Switches off the light.  
- <a name="carla.Light.turn_on"></a>**<font color="#7fb800">turn_on</font>**(<font color="#00a6ed">**self**</font>)  
Switches on the light.  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Light.set_color"></a>**<font color="#7fb800">set_color</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**color**</font>)  
Changes the color of the light to `color`.  
    - **Parameters:**
        - `color` (_[carla.Color](#carla.Color)_)  
- <a name="carla.Light.set_intensity"></a>**<font color="#7fb800">set_intensity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**intensity**</font>)  
Changes the intensity of the light to `intensity`.  
    - **Parameters:**
        - `intensity` (_float_)  
- <a name="carla.Light.set_light_group"></a>**<font color="#7fb800">set_light_group</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**light_group**</font>)  
Changes the light to the group `light_group`.  
    - **Parameters:**
        - `light_group` (_[carla.LightGroup](#carla.LightGroup)_)  
- <a name="carla.Light.set_light_state"></a>**<font color="#7fb800">set_light_state</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**light_state**</font>)  
Changes the state of the light to `light_state`. This may change attributes, group and turn the light on/off all at once.  
    - **Parameters:**
        - `light_state` (_[carla.LightState](#carla.LightState)_)  

---

## carla.LightGroup<a name="carla.LightGroup"></a>
This class categorizes the lights on scene into different groups. These groups available are provided as a enum values that can be used as flags.  

__Note.__ So far, though there is a `vehicle` group, vehicle lights are not available as [carla.Light](#carla.Light) objects. These have to be managed using [carla.Vehicle](#carla.Vehicle) and [carla.VehicleLightState](#carla.VehicleLightState).  

<h3>Instance Variables</h3>
- <a name="carla.LightGroup.None"></a>**<font color="#f8805a">None</font>**  
All lights.  
- <a name="carla.LightGroup.Vehicle"></a>**<font color="#f8805a">Vehicle</font>**  
- <a name="carla.LightGroup.Street"></a>**<font color="#f8805a">Street</font>**  
- <a name="carla.LightGroup.Building"></a>**<font color="#f8805a">Building</font>**  
- <a name="carla.LightGroup.Other"></a>**<font color="#f8805a">Other</font>**  

---

## carla.LightManager<a name="carla.LightManager"></a>
This class handles the lights in the scene. Its main use is to get and set the state of groups or lists of lights in one call. An instance of this class can be retrieved by the [carla.World.get_light_manager](#carla.World.get_light_manager)().  

__Note.__ So far, though there is a `vehicle` group, vehicle lights are not available as [carla.Light](#carla.Light) objects. These have to be managed using [carla.Vehicle](#carla.Vehicle) and [carla.VehicleLightState](#carla.VehicleLightState).  

<h3>Methods</h3>
- <a name="carla.LightManager.is_active"></a>**<font color="#7fb800">is_active</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Returns a list with booleans stating if the elements in `lights` are switched on/off.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be queried.  
    - **Return:** _list(bool)_  
- <a name="carla.LightManager.turn_off"></a>**<font color="#7fb800">turn_off</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Switches off all the lights in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be switched off.  
- <a name="carla.LightManager.turn_on"></a>**<font color="#7fb800">turn_on</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Switches on all the lights in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be switched on.  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.LightManager.get_all_lights"></a>**<font color="#7fb800">get_all_lights</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**light_group**=[carla.LightGroup.None](#carla.LightGroup.None)</font>)  
Returns a list containing the lights in a certain group. By default, the group is `None`.  
    - **Parameters:**
        - `light_group` (_[carla.LightGroup](#carla.LightGroup)_) – Group to filter the lights returned. Default is `None`.  
    - **Return:** _list([carla.Light](#carla.Light))_  
- <a name="carla.LightManager.get_color"></a>**<font color="#7fb800">get_color</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Returns a list with the colors of every element in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be queried.  
    - **Return:** _list([carla.Color](#carla.Color))_  
    - **Setter:** _[carla.LightManager.set_color](#carla.LightManager.set_color)_  
- <a name="carla.LightManager.get_intensity"></a>**<font color="#7fb800">get_intensity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Returns a list with the intensity of every element in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be queried.  
    - **Return:** _list(float)_  
    - **Setter:** _[carla.LightManager.set_intensity](#carla.LightManager.set_intensity)_  
- <a name="carla.LightManager.get_light_group"></a>**<font color="#7fb800">get_light_group</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Returns a list with the group of every element in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be queried.  
    - **Return:** _list([carla.LightGroup](#carla.LightGroup))_  
    - **Setter:** _[carla.LightManager.set_light_group](#carla.LightManager.set_light_group)_  
- <a name="carla.LightManager.get_light_state"></a>**<font color="#7fb800">get_light_state</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>)  
Returns a list with the state of all the attributes of every element in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be queried.  
    - **Return:** _list([carla.LightState](#carla.LightState))_  
    - **Setter:** _[carla.LightManager.set_light_state](#carla.LightManager.set_light_state)_  
- <a name="carla.LightManager.get_turned_off_lights"></a>**<font color="#7fb800">get_turned_off_lights</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**light_group**</font>)  
Returns a list containing lights switched off in the scene, filtered by group.  
    - **Parameters:**
        - `light_group` (_[carla.LightGroup](#carla.LightGroup)_) – List of lights to be queried.  
    - **Return:** _list([carla.Light](#carla.Light))_  
- <a name="carla.LightManager.get_turned_on_lights"></a>**<font color="#7fb800">get_turned_on_lights</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**light_group**</font>)  
Returns a list containing lights switched on in the scene, filtered by group.  
    - **Parameters:**
        - `light_group` (_[carla.LightGroup](#carla.LightGroup)_) – List of lights to be queried.  
    - **Return:** _list([carla.Light](#carla.Light))_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.LightManager.set_active"></a>**<font color="#7fb800">set_active</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**active**</font>)  
Switches on/off the elements in `lights`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be switched on/off.  
        - `active` (_list(bool)_) – List of booleans to be applied.  
- <a name="carla.LightManager.set_color"></a>**<font color="#7fb800">set_color</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**color**</font>)  
Changes the color of the elements in `lights` to `color`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `color` (_[carla.Color](#carla.Color)_) – Color to be applied.  
    - **Getter:** _[carla.LightManager.get_color](#carla.LightManager.get_color)_  
- <a name="carla.LightManager.set_colors"></a>**<font color="#7fb800">set_colors</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**colors**</font>)  
Changes the color of each element in `lights` to the corresponding in `colors`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `colors` (_list([carla.Color](#carla.Color))_) – List of colors to be applied.  
- <a name="carla.LightManager.set_intensity"></a>**<font color="#7fb800">set_intensity</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**intensity**</font>)  
Changes the intensity of every element in `lights` to `intensity`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `intensity` (_float_) – Intensity to be applied.  
    - **Getter:** _[carla.LightManager.get_intensity](#carla.LightManager.get_intensity)_  
- <a name="carla.LightManager.set_intensities"></a>**<font color="#7fb800">set_intensities</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**intensities**</font>)  
Changes the intensity of each element in `lights` to the corresponding in `intensities`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `intensities` (_list(float)_) – List of intensities to be applied.  
- <a name="carla.LightManager.set_light_group"></a>**<font color="#7fb800">set_light_group</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**light_group**</font>)  
Changes the group of every element in `lights` to `light_group`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `light_group` (_[carla.LightGroup](#carla.LightGroup)_) – Group to be applied.  
    - **Getter:** _[carla.LightManager.get_light_group](#carla.LightManager.get_light_group)_  
- <a name="carla.LightManager.set_light_groups"></a>**<font color="#7fb800">set_light_groups</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**light_groups**</font>)  
Changes the group of each element in `lights` to the corresponding in `light_groups`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `light_groups` (_list([carla.LightGroup](#carla.LightGroup))_) – List of groups to be applied.  
- <a name="carla.LightManager.set_light_state"></a>**<font color="#7fb800">set_light_state</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**light_state**</font>)  
Changes the state of the attributes of every element in `lights` to `light_state`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `light_state` (_[carla.LightState](#carla.LightState)_) – State of the attributes to be applied.  
    - **Getter:** _[carla.LightManager.get_light_state](#carla.LightManager.get_light_state)_  
- <a name="carla.LightManager.set_light_states"></a>**<font color="#7fb800">set_light_states</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**lights**</font>, <font color="#00a6ed">**light_states**</font>)  
Changes the state of the attributes of each element in `lights` to the corresponding in `light_states`.  
    - **Parameters:**
        - `lights` (_list([carla.Light](#carla.Light))_) – List of lights to be changed.  
        - `light_states` (_list([carla.LightState](#carla.LightState))_) – List of state of the attributes to be applied.  

---

## carla.LightState<a name="carla.LightState"></a>
This class represents all the light variables except the identifier and the location, which are should to be static. Using this class allows to manage all the parametrization of the light in one call.  

<h3>Instance Variables</h3>
- <a name="carla.LightState.intensity"></a>**<font color="#f8805a">intensity</font>** (_float_)  
Intensity of a light in lumens.  
- <a name="carla.LightState.color"></a>**<font color="#f8805a">color</font>** (_[carla.Color](#carla.Color)_)  
Color of a light.  
- <a name="carla.LightState.group"></a>**<font color="#f8805a">group</font>** (_[carla.LightGroup](#carla.LightGroup)_)  
Group a light belongs to.  
- <a name="carla.LightState.active"></a>**<font color="#f8805a">active</font>** (_bool_)  
Switch of a light. It is __True__ when the light is on.  

<h3>Methods</h3>
- <a name="carla.LightState.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**intensity**=0.0</font>, <font color="#00a6ed">**color**=[carla.Color](#carla.Color)()</font>, <font color="#00a6ed">**group**=[carla.LightGroup.None](#carla.LightGroup.None)</font>, <font color="#00a6ed">**active**=False</font>)  
    - **Parameters:**
        - `intensity` (_float_) – Intensity of the light in lumens. Default is `0.0`.  
        - `color` (_[carla.Color](#carla.Color)_) – Color of the light. Default is black.  
        - `group` (_[carla.LightGroup](#carla.LightGroup)_) – Group the light belongs to. Default is the generic group `None`.  
        - `active` (_bool_) – Swith of the light. Default is `False`, light is off.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.GeoLocation<a name="carla.GeoLocation"></a> <sub><sup>_class_</sup></sub>
Class that contains geolocation simulated data.  

<h3>Instance Variables</h3>
- <a name="carla.GeoLocation.latitude"></a>**<font color="#f8805a">latitude</font>** (_float_)  
North/South value of a point on the map.  
- <a name="carla.GeoLocation.longitude"></a>**<font color="#f8805a">longitude</font>** (_float_)  
West/East value of a point on the map.  
- <a name="carla.GeoLocation.altitude"></a>**<font color="#f8805a">altitude</font>** (_float_)  
Height regarding ground level.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.GeoLocation.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**latitude**=0.0</font>, <font color="#00a6ed">**longitude**=0.0</font>, <font color="#00a6ed">**altitude**=0.0</font>)  
    - **Parameters:**
        - `latitude` (_float_)  
        - `longitude` (_float_)  
        - `altitude` (_float_)  
- <a name="carla.GeoLocation.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.GeoLocation](#carla.GeoLocation)_)  
- <a name="carla.GeoLocation.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.GeoLocation](#carla.GeoLocation)_)  
- <a name="carla.GeoLocation.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.Location.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**x**=0.0</font>, <font color="#00a6ed">**y**=0.0</font>, <font color="#00a6ed">**z**=0.0</font>)  
    - **Parameters:**
        - `x` (_float_)  
        - `y` (_float_)  
        - `z` (_float_)  
- <a name="carla.Location.distance"></a>**<font color="#7fb800">distance</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>)  
Returns Euclidean distance in meters from this location to another one.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_) – The other point to compute the distance with.  
    - **Return:** _float_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Location.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Location](#carla.Location)</font>)  
Returns __True__ if both locations are the same point in space.  
    - **Return:** _bool_  
- <a name="carla.Location.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Location](#carla.Location)</font>)  
Returns __True__ if both locations are different points in space.  
    - **Return:** _bool_  
- <a name="carla.Location.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Parses the axis' values to string.  
    - **Return:** _str_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Map<a name="carla.Map"></a> <sub><sup>_class_</sup></sub>
Map description that provides a Waypoint query system, that extracts the information from the OpenDRIVE file.  

<h3>Instance Variables</h3>
- <a name="carla.Map.name"></a>**<font color="#f8805a">name</font>** (_str_)  
Map name. Comes from the Unreal's UMap name if loaded from a Carla server.  

<h3>Methods</h3>
- <a name="carla.Map.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**name**</font>, <font color="#00a6ed">**xodr_content**</font>)  
Constructor for this class useful if you want to use a `XODR` (OpenDRIVE) file without importing it from any Carla server running.  
    - **Parameters:**
        - `name` (_str_) – Name of the current map.  
        - `xodr_content` (_str_) – XODR content as string.  
    - **Return:** _list([carla.Transform](#carla.Transform))_  
<<<<<<< HEAD
=======
- <a name="carla.Map.generate_waypoints"></a>**<font color="#7fb800">generate_waypoints</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>)  
Returns a list of waypoints with a certain distance between them for every lane and centered inside of it. Waypoints are not listed in any particular order. Remember that waypoints closer than 2cm within the same road, section and lane will have the same identificator.  
    - **Parameters:**
        - `distance` (_float_) – Approximate distance between waypoints.  
    - **Return:** _list([carla.Waypoint](#carla.Waypoint))_  
- <a name="carla.Map.save_to_disk"></a>**<font color="#7fb800">save_to_disk</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**path**</font>)  
Saves the .xodr OpenDRIVE file of the current map to disk.  
    - **Parameters:**
        - `path` – Path where the file will be saved.  
- <a name="carla.Map.to_opendrive"></a>**<font color="#7fb800">to_opendrive</font>**(<font color="#00a6ed">**self**</font>)  
Returns the .xodr OpenDRIVe file of the current map as string.  
    - **Return:** _str_  
- <a name="carla.Map.transform_to_geolocation"></a>**<font color="#7fb800">transform_to_geolocation</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>)  
Converts a given `location`, a point in the simulation, to a [carla.GeoLocation](#carla.GeoLocation), which represents world coordinates. The geographical location of the map is defined inside OpenDRIVE within the tag <b><georeference></b>.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
    - **Return:** _[carla.GeoLocation](#carla.GeoLocation)_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Map.get_all_landmarks"></a>**<font color="#7fb800">get_all_landmarks</font>**(<font color="#00a6ed">**self**</font>)  
Returns all the landmarks in the map. Landmarks retrieved using this method have a __null__ waypoint.  
    - **Return:** _list([carla.Landmark](#carla.Landmark))_  
- <a name="carla.Map.get_all_landmarks_from_id"></a>**<font color="#7fb800">get_all_landmarks_from_id</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**opendrive_id**</font>)  
Returns the landmarks with a certain OpenDRIVE ID. Landmarks retrieved using this method have a __null__ waypoint.  
    - **Parameters:**
        - `opendrive_id` (_string_) – The OpenDRIVE ID of the landmarks.  
    - **Return:** _list([carla.Landmark](#carla.Landmark))_  
- <a name="carla.Map.get_all_landmarks_of_type"></a>**<font color="#7fb800">get_all_landmarks_of_type</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**type**</font>)  
Returns the landmarks of a specific type. Landmarks retrieved using this method have a __null__ waypoint.  
    - **Parameters:**
        - `type` (_string_) – The type of the landmarks.  
    - **Return:** _list([carla.Landmark](#carla.Landmark))_  
- <a name="carla.Map.get_landmark_group"></a>**<font color="#7fb800">get_landmark_group</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**landmark**</font>)  
Returns the landmarks in the same group as the specified landmark (including itself). Returns an empty list if the landmark does not belong to any group.  
    - **Parameters:**
        - `landmark` (_[carla.Landmark](#carla.Landmark)_) – A landmark that belongs to the group.  
    - **Return:** _list([carla.Landmark](#carla.Landmark))_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
- <a name="carla.Map.get_spawn_points"></a>**<font color="#7fb800">get_spawn_points</font>**(<font color="#00a6ed">**self**</font>)  
Returns a list of transformations corresponding to the recommended spawn points over the map.  
    - **Return:** _list([carla.Transform](#carla.Transform))_  
- <a name="carla.Map.get_waypoint"></a>**<font color="#7fb800">get_waypoint</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**project_to_road**=True</font>, <font color="#00a6ed">**lane_type**=[carla.LaneType.Driving](#carla.LaneType.Driving)</font>)  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_) – Location where you want to get the [carla.Waypoint](#carla.Waypoint).  
        - `project_to_road` (_bool_) – If **True**, the waypoint will be at the center of the nearest lane.  
If **False**, the waypoint will be at the given location. Also, in this second case, the result may be `None` if the waypoint is not found.  
        - `lane_type` (_[carla.LaneType](#carla.LaneType)_) – This parameter is used to limit the search on a certain lane type. This can be used like a flag: `LaneType.Driving & LaneType.Shoulder`.  
    - **Return:** _[carla.Waypoint](#carla.Waypoint)_  
<<<<<<< HEAD
- <a name="carla.Map.get_topology"></a>**<font color="#7fb800">get_topology</font>**(<font color="#00a6ed">**self**</font>)  
It provides a minimal graph of the topology of the current OpenDRIVE file. It is constituted by a list of pairs of waypoints, where the first waypoint is the origin and the second one is the destination. It can be loaded into [NetworkX](https://networkx.github.io/). A valid output could be: `[ (w0, w1), (w0, w2), (w1, w3), (w2, w3), (w0, w4) ]`.  
    - **Return:** _list(tuple([carla.Waypoint](#carla.Waypoint), [carla.Waypoint](#carla.Waypoint)))_  
- <a name="carla.Map.generate_waypoints"></a>**<font color="#7fb800">generate_waypoints</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>)  
Returns a list of waypoints positioned on the center of the lanes  all over the map with an approximate distance between them.  
    - **Parameters:**
        - `distance` (_float_) – Approximate distance between the waypoints.  
    - **Return:** _list([carla.Waypoint](#carla.Waypoint))_  
- <a name="carla.Map.transform_to_geolocation"></a>**<font color="#7fb800">transform_to_geolocation</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>)  
Converts a given [carla.Location](#carla.Location) `(x, y, z)` to a [carla.GeoLocation](#carla.GeoLocation) `(lat, lon, alt)`.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_) – Location to convert.  
    - **Return:** _[carla.GeoLocation](#carla.GeoLocation)_  
- <a name="carla.Map.to_opendrive"></a>**<font color="#7fb800">to_opendrive</font>**(<font color="#00a6ed">**self**</font>)  
Returns the OpenDRIVE of the current map as string.  
    - **Return:** _str_  
- <a name="carla.Map.save_to_disk"></a>**<font color="#7fb800">save_to_disk</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**path**</font>)  
Save the OpenDRIVE of the current map to disk.  
    - **Parameters:**
        - `path` – Path where it will be saved.  
- <a name="carla.Map.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Rotation<a name="carla.Rotation"></a> <sub><sup>_class_</sup></sub>
Class that represents a 3D rotation. All rotation angles are stored in degrees.
=======
- <a name="carla.Map.get_waypoint_xodr"></a>**<font color="#7fb800">get_waypoint_xodr</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**road_id**</font>, <font color="#00a6ed">**lane_id**</font>, <font color="#00a6ed">**s**</font>)  
Returns a waypoint if all the parameters passed are correct. Otherwise, returns __None__.  
    - **Parameters:**
        - `road_id` (_int_) – ID of the road to get the waypoint.  
        - `lane_id` (_int_) – ID of the lane to get the waypoint.  
        - `s` (_float_) – Specify the length from the road start.  
    - **Return:** _[carla.Waypoint](#carla.Waypoint)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Map.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.ObstacleDetectionEvent<a name="carla.ObstacleDetectionEvent"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that defines the obstacle data for <b>sensor.other.obstacle</b>. Learn more about this [here](ref_sensors.md#obstacle-detector).  

<h3>Instance Variables</h3>
- <a name="carla.ObstacleDetectionEvent.actor"></a>**<font color="#f8805a">actor</font>** (_[carla.Actor](#carla.Actor)_)  
The actor the sensor is attached to.  
- <a name="carla.ObstacleDetectionEvent.other_actor"></a>**<font color="#f8805a">other_actor</font>** (_[carla.Actor](#carla.Actor)_)  
The actor or object considered to be an obstacle.  
- <a name="carla.ObstacleDetectionEvent.distance"></a>**<font color="#f8805a">distance</font>** (_float_)  
Distance between `actor` and `other`.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.ObstacleDetectionEvent.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.OpendriveGenerationParameters<a name="carla.OpendriveGenerationParameters"></a>
This class defines the parameters used when generating a world using an OpenDRIVE file.  

<h3>Instance Variables</h3>
- <a name="carla.OpendriveGenerationParameters.vertex_distance"></a>**<font color="#f8805a">vertex_distance</font>** (_float_)  
Distance between vertices of the mesh generated. __Default is `2.0`__.  
- <a name="carla.OpendriveGenerationParameters.max_road_length"></a>**<font color="#f8805a">max_road_length</font>** (_float_)  
Max road length for a single mesh portion. The mesh of the map is divided into portions, in order to avoid propagating issues. __Default is `50.0`__.  
- <a name="carla.OpendriveGenerationParameters.wall_height"></a>**<font color="#f8805a">wall_height</font>** (_float_)  
Height of walls created on the boundaries of the road. These prevent vehicles from falling off the road. __Default is `1.0`__.  
- <a name="carla.OpendriveGenerationParameters.additional_width"></a>**<font color="#f8805a">additional_width</font>** (_float_)  
Additional with applied junction lanes. Complex situations tend to occur at junctions, and a little increase can prevent vehicles from falling off the road.  __Default is `0.6`__.  
- <a name="carla.OpendriveGenerationParameters.smooth_junctions"></a>**<font color="#f8805a">smooth_junctions</font>** (_bool_)  
If __True__, the mesh at junctions will be smoothed to prevent issues where roads blocked other roads. __Default is `True`__.  
- <a name="carla.OpendriveGenerationParameters.enable_mesh_visibility"></a>**<font color="#f8805a">enable_mesh_visibility</font>** (_bool_)  
If __True__, the road mesh will be rendered. Setting this to __False__ should reduce the rendering overhead.  __Default is `True`__.  

---

## carla.RadarDetection<a name="carla.RadarDetection"></a>
Data contained inside a [carla.RadarMeasurement](#carla.RadarMeasurement). Each of these represents one of the points in the cloud that a <b>sensor.other.radar</b> registers and contains the distance, angle and velocity in relation to the radar.  

<h3>Instance Variables</h3>
- <a name="carla.RadarDetection.altitude"></a>**<font color="#f8805a">altitude</font>** (_float_)  
Altitude angle of the detection in radians.  
- <a name="carla.RadarDetection.azimuth"></a>**<font color="#f8805a">azimuth</font>** (_float_)  
Azimuth angle of the detection in radians.  
- <a name="carla.RadarDetection.depth"></a>**<font color="#f8805a">depth</font>** (_float_)  
Distance in meters from the sensor to the detection position.  
- <a name="carla.RadarDetection.velocity"></a>**<font color="#f8805a">velocity</font>** (_float_)  
The velocity of the detected object towards the sensor in m/s.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.RadarDetection.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.RadarMeasurement<a name="carla.RadarMeasurement"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that defines and gathers the measures registered by a <b>sensor.other.radar</b>, representing a wall of points in front of the sensor with a distance, angle and velocity in relation to it. The data consists of a [carla.RadarDetection](#carla.RadarDetection) array. Learn more about this [here](ref_sensors.md#radar-sensor).  

<h3>Instance Variables</h3>
- <a name="carla.RadarMeasurement.raw_data"></a>**<font color="#f8805a">raw_data</font>** (_bytes_)  
The complete information of the [carla.RadarDetection](#carla.RadarDetection) the radar has registered.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.RadarMeasurement.get_detection_count"></a>**<font color="#7fb800">get_detection_count</font>**(<font color="#00a6ed">**self**</font>)  
Retrieves the number of entries generated, same as **<font color="#7fb800">\__str__()</font>**.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.RadarMeasurement.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>)  
- <a name="carla.RadarMeasurement.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.RadarMeasurement.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.RadarMeasurement.__setitem__"></a>**<font color="#7fb800">\__setitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**=int</font>, <font color="#00a6ed">**detection**=[carla.RadarDetection](#carla.RadarDetection)</font>)  
- <a name="carla.RadarMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Rotation<a name="carla.Rotation"></a>
Class that represents a 3D rotation and therefore, an orientation in space.
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

![UE4_Rotation](https://d26ilriwvtzlb.cloudfront.net/8/83/BRMC_9.jpg)   _Unreal Engine's standard (from [UE4 docs](https://wiki.unrealengine.com/Blueprint_Rotating_Movement_Component))_.  

<h3>Instance Variables</h3>
- <a name="carla.Rotation.pitch"></a>**<font color="#f8805a">pitch</font>** (_float_)  
Rotation about Y-axis.  
- <a name="carla.Rotation.yaw"></a>**<font color="#f8805a">yaw</font>** (_float_)  
Rotation about Z-axis.  
- <a name="carla.Rotation.roll"></a>**<font color="#f8805a">roll</font>** (_float_)  
Rotation about X-axis.  

<h3>Methods</h3>
- <a name="carla.Rotation.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pitch**=0.0</font>, <font color="#00a6ed">**yaw**=0.0</font>, <font color="#00a6ed">**roll**=0.0</font>)  
    - **Parameters:**
<<<<<<< HEAD
        - `pitch` (_float_)  
        - `yaw` (_float_)  
        - `roll` (_float_)  
- <a name="carla.Rotation.get_forward_vector"></a>**<font color="#7fb800">get_forward_vector</font>**(<font color="#00a6ed">**self**</font>)  
Computes a forward vector using the current rotation.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.Rotation.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Rotation](#carla.Rotation)_)  
- <a name="carla.Rotation.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Rotation](#carla.Rotation)_)  
=======
        - `pitch` (_float_) – Y rotation in degrees.  
        - `yaw` (_float_) – Z rotation in degrees.  
        - `roll` (_float_) – X rotation in degrees.  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Rotation.get_forward_vector"></a>**<font color="#7fb800">get_forward_vector</font>**(<font color="#00a6ed">**self**</font>)  
Computes the vector pointing forward according to the orientation of each axis.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Rotation.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Rotation](#carla.Rotation)</font>)  
Returns __True__ if both rotations represent the same orientation of each axis.  
    - **Return:** _bool_  
- <a name="carla.Rotation.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Rotation](#carla.Rotation)</font>)  
Returns __True__ if both rotations represent the same orientation for every axis.  
    - **Return:** _bool_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
- <a name="carla.Rotation.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

<<<<<<< HEAD
## carla.Timestamp<a name="carla.Timestamp"></a> <sub><sup>_class_</sup></sub>
Class that contains Timestamp simulated data.  
=======
## carla.RssEgoDynamicsOnRoute<a name="carla.RssEgoDynamicsOnRoute"></a>
Part of the data contained inside a [carla.RssResponse](#carla.RssResponse) describing the state of the vehicle. The parameters include its current dynamics, and how it is heading regarding the target route.  

<h3>Instance Variables</h3>
- <a name="carla.RssEgoDynamicsOnRoute.ego_speed"></a>**<font color="#f8805a">ego_speed</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Speed.html">libad_physics_python.Speed</a>_)  
The ego vehicle's speed.  
- <a name="carla.RssEgoDynamicsOnRoute.min_stopping_distance"></a>**<font color="#f8805a">min_stopping_distance</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Distance.html">libad_physics_python.Distance</a>_)  
The current minimum stopping distance.  
- <a name="carla.RssEgoDynamicsOnRoute.ego_center"></a>**<font color="#f8805a">ego_center</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_map_access/apidoc/html/structad_1_1map_1_1point_1_1ENUPoint.html">libad_map_access_python.ENUPoint</a>_)  
The considered enu position of the ego vehicle.  
- <a name="carla.RssEgoDynamicsOnRoute.ego_heading"></a>**<font color="#f8805a">ego_heading</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_map_access/apidoc/html/classad_1_1map_1_1point_1_1ENUHeading.html">libad_map_access_python.ENUHeading</a>_)  
The considered heading of the ego vehicle.  
- <a name="carla.RssEgoDynamicsOnRoute.ego_center_within_route"></a>**<font color="#f8805a">ego_center_within_route</font>** (_bool_)  
States if the ego vehicle's center is within the route.  
- <a name="carla.RssEgoDynamicsOnRoute.crossing_border"></a>**<font color="#f8805a">crossing_border</font>** (_bool_)  
States if the vehicle is already crossing one of the lane borders.  
- <a name="carla.RssEgoDynamicsOnRoute.route_heading"></a>**<font color="#f8805a">route_heading</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_map_access/apidoc/html/classad_1_1map_1_1point_1_1ENUHeading.html">libad_map_access_python.ENUHeading</a>_)  
The considered heading of the route.  
- <a name="carla.RssEgoDynamicsOnRoute.route_nominal_center"></a>**<font color="#f8805a">route_nominal_center</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_map_access/apidoc/html/structad_1_1map_1_1point_1_1ENUPoint.html">libad_map_access_python.ENUPoint</a>_)  
The considered nominal center of the current route.  
- <a name="carla.RssEgoDynamicsOnRoute.heading_diff"></a>**<font color="#f8805a">heading_diff</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_map_access/apidoc/html/classad_1_1map_1_1point_1_1ENUHeading.html">libad_map_access_python.ENUHeading</a>_)  
The considered heading diff towards the route.  
- <a name="carla.RssEgoDynamicsOnRoute.route_speed_lat"></a>**<font color="#f8805a">route_speed_lat</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Speed.html">libad_physics_python.Speed</a>_)  
The ego vehicle's speed component _lat_ regarding the route.  
- <a name="carla.RssEgoDynamicsOnRoute.route_speed_lon"></a>**<font color="#f8805a">route_speed_lon</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Speed.html">libad_physics_python.Speed</a>_)  
The ego vehicle's speed component _lon_ regarding the route.  
- <a name="carla.RssEgoDynamicsOnRoute.route_accel_lat"></a>**<font color="#f8805a">route_accel_lat</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Acceleration.html">libad_physics_python.Acceleration</a>_)  
The ego vehicle's acceleration component _lat_ regarding the route.  
- <a name="carla.RssEgoDynamicsOnRoute.route_accel_lon"></a>**<font color="#f8805a">route_accel_lon</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Acceleration.html">libad_physics_python.Acceleration</a>_)  
The ego vehicle's acceleration component _lon_ regarding the route.  
- <a name="carla.RssEgoDynamicsOnRoute.avg_route_accel_lat"></a>**<font color="#f8805a">avg_route_accel_lat</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Acceleration.html">libad_physics_python.Acceleration</a>_)  
The ego vehicle's acceleration component _lat_ regarding the route smoothened by an average filter.  
- <a name="carla.RssEgoDynamicsOnRoute.avg_route_accel_lon"></a>**<font color="#f8805a">avg_route_accel_lon</font>** (_<a href="https://ad-map-access.readthedocs.io/en/latest/ad_physics/apidoc/html/classad_1_1physics_1_1Acceleration.html">libad_physics_python.Acceleration</a>_)  
The ego acceleration component _lon_ regarding the route smoothened by an average filter.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.RssEgoDynamicsOnRoute.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.RssResponse<a name="carla.RssResponse"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.SensorData](#carla.SensorData)_</b></small></div></p><p>Class that contains the output of a [carla.RssSensor](#carla.RssSensor). This is the result of the RSS calculations performed for the parent vehicle of the sensor.  

A [carla.RssRestrictor](#carla.RssRestrictor) will use the data to modify the [carla.VehicleControl](#carla.VehicleControl) of the vehicle.  

<h3>Instance Variables</h3>
- <a name="carla.RssResponse.response_valid"></a>**<font color="#f8805a">response_valid</font>** (_bool_)  
States if the response is valid. It is __False__ if calculations failed or an exception occured.  
- <a name="carla.RssResponse.proper_response"></a>**<font color="#f8805a">proper_response</font>** (_<a href="https://intel.github.io/ad-rss-lib/doxygen/ad_rss/structad_1_1rss_1_1state_1_1ProperResponse.html">libad_rss_python.ProperResponse</a>_)  
The proper response that the RSS calculated for the vehicle.  
- <a name="carla.RssResponse.acceleration_restriction"></a>**<font color="#f8805a">acceleration_restriction</font>** (_<a href="https://intel.github.io/ad-rss-lib/doxygen/ad_rss/structad_1_1rss_1_1world_1_1AccelerationRestriction.html">libad_rss_python.AccelerationRestriction</a>_)  
Acceleration restrictions to be applied, according to the RSS calculation.  
- <a name="carla.RssResponse.rss_state_snapshot"></a>**<font color="#f8805a">rss_state_snapshot</font>** (_<a href="https://intel.github.io/ad-rss-lib/doxygen/ad_rss/structad_1_1rss_1_1state_1_1RssStateSnapshot.html">libad_rss_python.RssStateSnapshot</a>_)  
Detailed RSS states at the current moment in time.  
- <a name="carla.RssResponse.ego_dynamics_on_route"></a>**<font color="#f8805a">ego_dynamics_on_route</font>** (_[carla.RssEgoDynamicsOnRoute](#carla.RssEgoDynamicsOnRoute)_)  
Current ego vehicle dynamics regarding the route.  

<h3>Methods</h3>

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.RssResponse.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.RssRestrictor<a name="carla.RssRestrictor"></a>
These objects apply restrictions to a [carla.VehicleControl](#carla.VehicleControl). It is part of the CARLA implementation of the [C++ Library for Responsibility Sensitive Safety](https://github.com/intel/ad-rss-lib). This class works hand in hand with a [rss sensor](ref_sensors.md#rss-sensor), which provides the data of the restrictions to be applied.  

<h3>Methods</h3>
- <a name="carla.RssRestrictor.restrict_vehicle_control"></a>**<font color="#7fb800">restrict_vehicle_control</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**vehicle_control**</font>, <font color="#00a6ed">**restriction**</font>, <font color="#00a6ed">**ego_dynamics_on_route**</font>, <font color="#00a6ed">**vehicle_physics**</font>)  
Applies the safety restrictions given by a [carla.RssSensor](#carla.RssSensor) to a [carla.VehicleControl](#carla.VehicleControl).  
    - **Parameters:**
        - `vehicle_control` (_[carla.VehicleControl](#carla.VehicleControl)_) – The input vehicle control to be restricted.  
        - `restriction` (_<a href="https://intel.github.io/ad-rss-lib/doxygen/ad_rss/structad_1_1rss_1_1world_1_1AccelerationRestriction.html">libad_rss_python.AccelerationRestriction</a>_) – Part of the response generated by the sensor. Contains restrictions to be applied to the acceleration of the vehicle.  
        - `ego_dynamics_on_route` (_[carla.RssEgoDynamicsOnRoute](#carla.RssEgoDynamicsOnRoute)_) – Part of the response generated by the sensor. Contains dynamics and heading of the vehicle regarding its route.  
        - `vehicle_physics` (_[carla.RssEgoDynamicsOnRoute](#carla.RssEgoDynamicsOnRoute)_) – The current physics of the vehicle. Used to apply the restrictions properly.  
    - **Return:** _[carla.VehicleControl](#carla.VehicleControl)_  

---

## carla.RssRoadBoundariesMode<a name="carla.RssRoadBoundariesMode"></a>
Enum declaration used in [carla.RssSensor](#carla.RssSensor) to enable or disable the [stay on road](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/HandleRoadBoundaries/) feature. In summary, this feature considers the road boundaries as virtual objects. The minimum safety distance check is applied to these virtual walls, in order to make sure the vehicle does not drive off the road.  

<h3>Instance Variables</h3>
- <a name="carla.RssRoadBoundariesMode.On"></a>**<font color="#f8805a">On</font>**  
Enables the _stay on road_ feature.  
- <a name="carla.RssRoadBoundariesMode.Off"></a>**<font color="#f8805a">Off</font>**  
Disables the _stay on road_ feature.  

---

## carla.RssSensor<a name="carla.RssSensor"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.Sensor](#carla.Sensor)_</b></small></div></p><p>This sensor works a bit differently than the rest. Take look at the [specific documentation](adv_rss.md), and the [rss sensor reference](ref_sensors.md#rss-sensor) to gain full understanding of it.  

The RSS sensor uses world information, and a [RSS library](https://github.com/intel/ad-rss-lib) to make safety checks on a vehicle. The output retrieved by the sensor is a [carla.RssResponse](#carla.RssResponse). This will be used by a [carla.RssRestrictor](#carla.RssRestrictor) to modify a [carla.VehicleControl](#carla.VehicleControl) before applying it to a vehicle.  

<h3>Instance Variables</h3>
- <a name="carla.RssSensor.ego_vehicle_dynamics"></a>**<font color="#f8805a">ego_vehicle_dynamics</font>** (_libad_rss_python.RssDynamics_)  
States the [RSS parameters](https://intel.github.io/ad-rss-lib/ad_rss/Appendix-ParameterDiscussion/) that the sensor will consider for the ego vehicle.  
- <a name="carla.RssSensor.other_vehicle_dynamics"></a>**<font color="#f8805a">other_vehicle_dynamics</font>** (_libad_rss_python.RssDynamics_)  
States the [RSS parameters](https://intel.github.io/ad-rss-lib/ad_rss/Appendix-ParameterDiscussion/) that the sensor will consider for the rest of vehicles.  
- <a name="carla.RssSensor.road_boundaries_mode"></a>**<font color="#f8805a">road_boundaries_mode</font>** (_[carla.RssRoadBoundariesMode](#carla.RssRoadBoundariesMode)_)  
Switches the [stay on road](https://intel.github.io/ad-rss-lib/ad_rss_map_integration/HandleRoadBoundaries/) feature. By default is __On__.  
- <a name="carla.RssSensor.visualization_mode"></a>**<font color="#f8805a">visualization_mode</font>** (_[carla.RssVisualizationMode](#carla.RssVisualizationMode)_)  
Sets the visualization of the RSS on the server side. By default is __All__. These drawings may delay de RSS so it is best to set this to __Off__ when evaluating RSS performance.  
- <a name="carla.RssSensor.routing_targets"></a>**<font color="#f8805a">routing_targets</font>** (_vector<[carla.Transform](#carla.Transform)>_)  
The current list of targets considered to route the vehicle. If no routing targets are defined, a route is generated at random.  

<h3>Methods</h3>
- <a name="carla.RssSensor.append_routing_target"></a>**<font color="#7fb800">append_routing_target</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**routing_target**</font>)  
Appends a new target position to the current route of the vehicle.  
    - **Parameters:**
        - `routing_target` (_[carla.Transform](#carla.Transform)_) – New target point for the route. Choose these after the intersections to force the route to take the desired turn.  
- <a name="carla.RssSensor.reset_routing_targets"></a>**<font color="#7fb800">reset_routing_targets</font>**(<font color="#00a6ed">**self**</font>)  
Erases the targets that have been appended to the route.  
- <a name="carla.RssSensor.drop_route"></a>**<font color="#7fb800">drop_route</font>**(<font color="#00a6ed">**self**</font>)  
Discards the current route. If there are targets remaining in **<font color="#f8805a">routing_targets</font>**, creates a new route using those. Otherwise, a new route is created at random.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.RssSensor.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.RssVisualizationMode<a name="carla.RssVisualizationMode"></a>
Enum declaration used to state the visualization RSS calculations server side. Depending on these, the [carla.RssSensor](#carla.RssSensor) will use a [carla.DebugHelper](#carla.DebugHelper) to draw different elements. These drawings take some time and might delay the RSS responses. It is best to disable them when evaluating RSS performance.  

<h3>Instance Variables</h3>
- <a name="carla.RssVisualizationMode.Off"></a>**<font color="#f8805a">Off</font>**  
- <a name="carla.RssVisualizationMode.RouteOnly"></a>**<font color="#f8805a">RouteOnly</font>**  
- <a name="carla.RssVisualizationMode.VehicleStateOnly"></a>**<font color="#f8805a">VehicleStateOnly</font>**  
- <a name="carla.RssVisualizationMode.VehicleStateAndRoute"></a>**<font color="#f8805a">VehicleStateAndRoute</font>**  
- <a name="carla.RssVisualizationMode.All"></a>**<font color="#f8805a">All</font>**  

---

## carla.Sensor<a name="carla.Sensor"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.Actor](#carla.Actor)_</b></small></div></p><p>Sensors compound a specific family of actors quite diverse and unique. They are normally spawned as attachment/sons of a vehicle (take a look at [carla.World](#carla.World) to learn about actor spawning). Sensors are thoroughly designed to retrieve different types of data that they are listening to. The data they receive is shaped as different subclasses inherited from [carla.SensorData](#carla.SensorData) (depending on the sensor).

  Most sensors can be divided in two groups: those receiving data on every tick (cameras, point clouds and some specific sensors) and those who only receive under certain circumstances (trigger detectors). CARLA provides a specific set of sensors and their blueprint can be found in [carla.BlueprintLibrary](#carla.BlueprintLibrary). All the information on their preferences and settlement can be found [here](ref_sensors.md), but the list of those available in CARLA so far goes as follow.  
  <b>Receive data on every tick.</b>  
  - [Depth camera](ref_sensors.md#depth-camera).  
  - [Gnss sensor](ref_sensors.md#gnss-sensor).  
  - [IMU sensor](ref_sensors.md#imu-sensor).  
  - [Lidar raycast](ref_sensors.md#lidar-raycast-sensor).  
  - [Radar](ref_sensors.md#radar-sensor).  
  - [RGB camera](ref_sensors.md#rgb-camera).  
  - [RSS sensor](ref_sensors.md#rss-sensor).  
  - [Semantic Segmentation camera](ref_sensors.md#semantic-segmentation-camera).  
  <b>Only receive data when triggered.</b>  
  - [Collision detector](ref_sensors.md#collision-detector).  
  - [Lane invasion detector](ref_sensors.md#lane-invasion-detector).  
  - [Obstacle detector](ref_sensors.md#obstacle-detector).  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="carla.Timestamp.frame"></a>**<font color="#f8805a">frame</font>** (_int_)  
The number of frames elapsed since the simulator was launched.  
- <a name="carla.Timestamp.elapsed_seconds"></a>**<font color="#f8805a">elapsed_seconds</font>** (_float_)  
Simulated seconds elapsed since the beginning of the current episode.  
- <a name="carla.Timestamp.delta_seconds"></a>**<font color="#f8805a">delta_seconds</font>** (_float_)  
Simulated seconds elapsed since the previous frame.  
- <a name="carla.Timestamp.platform_timestamp"></a>**<font color="#f8805a">platform_timestamp</font>** (_float_)  
Time-stamp of the frame at which this measurement was taken, in seconds as given by the OS.  

<h3>Methods</h3>
<<<<<<< HEAD
=======
- <a name="carla.Sensor.listen"></a>**<font color="#7fb800">listen</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**callback**</font>)  
The function the sensor will be calling to every time a new measurement is received. This function needs for an argument containing an object type [carla.SensorData](#carla.SensorData) to work with.  
    - **Parameters:**
        - `callback` (_function_) – The called function with one argument containing the sensor data.  
- <a name="carla.Sensor.stop"></a>**<font color="#7fb800">stop</font>**(<font color="#00a6ed">**self**</font>)  
Commands the sensor to stop listening for data.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Sensor.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.SensorData<a name="carla.SensorData"></a>
Base class for all the objects containing data generated by a [carla.Sensor](#carla.Sensor). This objects should be the argument of the function said sensor is listening to, in order to work with them. Each of these sensors needs for a specific type of sensor data. Hereunder is a list of the sensors and their corresponding data.  
  - Cameras (RGB, depth and semantic segmentation): [carla.Image](#carla.Image).  
  - Collision detector: [carla.CollisionEvent](#carla.CollisionEvent).  
  - Gnss detector: [carla.GnssMeasurement](#carla.GnssMeasurement).  
  - IMU detector: [carla.IMUMeasurement](#carla.IMUMeasurement).  
  - Lane invasion detector: [carla.LaneInvasionEvent](#carla.LaneInvasionEvent).  
  - Lidar raycast: [carla.LidarMeasurement](#carla.LidarMeasurement).  
  - Obstacle detector: [carla.ObstacleDetectionEvent](#carla.ObstacleDetectionEvent).  
  - Radar detector: [carla.RadarMeasurement](#carla.RadarMeasurement).  
  - RSS sensor: [carla.RssResponse](#carla.RssResponse).  

<h3>Instance Variables</h3>
- <a name="carla.SensorData.frame"></a>**<font color="#f8805a">frame</font>** (_int_)  
Frame count when the data was generated.  
- <a name="carla.SensorData.timestamp"></a>**<font color="#f8805a">timestamp</font>** (_float_)  
Simulation-time when the data was generated.  
- <a name="carla.SensorData.transform"></a>**<font color="#f8805a">transform</font>** (_[carla.Transform](#carla.Transform)_)  
Sensor's transform when the data was generated.  

---

## carla.Timestamp<a name="carla.Timestamp"></a>
Class that contains time information for simulated data. This information is automatically retrieved as part of the [carla.WorldSnapshot](#carla.WorldSnapshot) the client gets on every frame, but might also be used in many other situations such as a [carla.Sensor](#carla.Sensor) retrieveing data.  

<h3>Instance Variables</h3>
- <a name="carla.Timestamp.frame"></a>**<font color="#f8805a">frame</font>** (_int_)  
The number of frames elapsed since the simulator was launched.  
- <a name="carla.Timestamp.elapsed_seconds"></a>**<font color="#f8805a">elapsed_seconds</font>** (_float_)  
Simulated seconds elapsed since the beginning of the current episode.  
- <a name="carla.Timestamp.delta_seconds"></a>**<font color="#f8805a">delta_seconds</font>** (_float_)  
Simulated seconds elapsed since the previous frame.  
- <a name="carla.Timestamp.platform_timestamp"></a>**<font color="#f8805a">platform_timestamp</font>** (_float_)  
Time register of the frame at which this measurement was taken given by the OS in seconds.  

<h3>Methods</h3>
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
- <a name="carla.Timestamp.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**frame**</font>, <font color="#00a6ed">**elapsed_seconds**</font>, <font color="#00a6ed">**delta_seconds**</font>, <font color="#00a6ed">**platform_timestamp**</font>)  
    - **Parameters:**
        - `frame` (_int_)  
        - `elapsed_seconds` (_float_)  
        - `delta_seconds` (_float_)  
        - `platform_timestamp` (_float_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Timestamp.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Timestamp](#carla.Timestamp)</font>)  
- <a name="carla.Timestamp.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Timestamp](#carla.Timestamp)</font>)  
- <a name="carla.Timestamp.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.TrafficSign<a name="carla.TrafficSign"></a><sub><sup>([carla.Actor](#carla.Actor))</sup></sub> <sub><sup>_class_</sup></sub>
A traffic sign actor.  

<h3>Instance Variables</h3>
- <a name="carla.TrafficSign.trigger_volume"></a>**<font color="#f8805a">trigger_volume</font>**  
A [carla.BoundingBox](#carla.BoundingBox) situated near a traffic sign where the [carla.Actor](#carla.Actor) who is inside can know about its state.  

---

## carla.Transform<a name="carla.Transform"></a> <sub><sup>_class_</sup></sub>
Class that defines a transformation without scaling.  

<h3>Instance Variables</h3>
- <a name="carla.Transform.location"></a>**<font color="#f8805a">location</font>** (_[carla.Location](#carla.Location)_)  
- <a name="carla.Transform.rotation"></a>**<font color="#f8805a">rotation</font>** (_[carla.Rotation](#carla.Rotation)_)  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.Transform.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>, <font color="#00a6ed">**rotation**</font>)  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_)  
        - `rotation` (_[carla.Rotation](#carla.Rotation)_)  
- <a name="carla.Transform.transform"></a>**<font color="#7fb800">transform</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**in_point**</font>)  
Transform a 3D point using the current transformation.  
    - **Parameters:**
        - `in_point` (_[carla.Location](#carla.Location)_) – Location in the space to which the transformation will be applied.  
- <a name="carla.Transform.get_forward_vector"></a>**<font color="#7fb800">get_forward_vector</font>**(<font color="#00a6ed">**self**</font>)  
Computes a forward vector using the rotation of the current transformation.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  
- <a name="carla.Transform.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Transform](#carla.Transform)_)  
- <a name="carla.Transform.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Transform](#carla.Transform)_)  
- <a name="carla.Transform.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.TrafficLight.freeze"></a>**<font color="#7fb800">freeze</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**freeze**</font>)  
Stops the traffic light at its current state.  
    - **Parameters:**
        - `freeze` (_bool_)  
- <a name="carla.TrafficLight.is_frozen"></a>**<font color="#7fb800">is_frozen</font>**(<font color="#00a6ed">**self**</font>)  
The client returns <b>True</b> if a traffic light is frozen according to last tick. The method does not call the simulator.  
    - **Return:** _bool_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.TrafficLight.get_elapsed_time"></a>**<font color="#7fb800">get_elapsed_time</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the time in seconds since current light state started according to last tick. The method does not call the simulator.  
    - **Return:** _float_  
- <a name="carla.TrafficLight.get_group_traffic_lights"></a>**<font color="#7fb800">get_group_traffic_lights</font>**(<font color="#00a6ed">**self**</font>)  
Returns all traffic lights in the group this one belongs to.  
    - **Return:** _list([carla.TrafficLight](#carla.TrafficLight))_  
    - **Note:** <font color="#8E8E8E">_This function calls the simulator.
_</font>  
- <a name="carla.TrafficLight.get_pole_index"></a>**<font color="#7fb800">get_pole_index</font>**(<font color="#00a6ed">**self**</font>)  
Returns the index of the pole that identifies it as part of the traffic light group of a junction.  
    - **Return:** _int_  
- <a name="carla.TrafficLight.get_state"></a>**<font color="#7fb800">get_state</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the state of the traffic light according to last tick. The method does not call the simulator.  
    - **Return:** _[carla.TrafficLightState](#carla.TrafficLightState)_  
    - **Setter:** _[carla.TrafficLight.set_state](#carla.TrafficLight.set_state)_  
- <a name="carla.TrafficLight.get_green_time"></a>**<font color="#7fb800">get_green_time</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the seconds set for the traffic light to be green according to last tick. The method does not call the simulator.  
    - **Return:** _float_  
    - **Setter:** _[carla.TrafficLight.set_green_time](#carla.TrafficLight.set_green_time)_  
- <a name="carla.TrafficLight.get_red_time"></a>**<font color="#7fb800">get_red_time</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the seconds set for the traffic light to be red according to last tick. The method does not call the simulator.  
    - **Return:** _float_  
    - **Setter:** _[carla.TrafficLight.set_red_time](#carla.TrafficLight.set_red_time)_  
- <a name="carla.TrafficLight.get_yellow_time"></a>**<font color="#7fb800">get_yellow_time</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the the seconds set for the traffic light to be yellow according to last tick. The method does not call the simulator.  
    - **Return:** _float_  
    - **Setter:** _[carla.TrafficLight.set_yellow_time](#carla.TrafficLight.set_yellow_time)_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.TrafficLight.set_state"></a>**<font color="#7fb800">set_state</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**state**</font>)  
Sets a given state to a traffic light actor.  
    - **Parameters:**
        - `state` (_[carla.TrafficLightState](#carla.TrafficLightState)_)  
    - **Getter:** _[carla.TrafficLight.get_state](#carla.TrafficLight.get_state)_  
- <a name="carla.TrafficLight.set_green_time"></a>**<font color="#7fb800">set_green_time</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**green_time**</font>)  
    - **Parameters:**
        - `green_time` (_float_) – Sets a given time (in seconds) for the green light to be active.  
    - **Getter:** _[carla.TrafficLight.get_green_time](#carla.TrafficLight.get_green_time)_  
- <a name="carla.TrafficLight.set_red_time"></a>**<font color="#7fb800">set_red_time</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**red_time**</font>)  
Sets a given time (in seconds) for the red state to be active.  
    - **Parameters:**
        - `red_time` (_float_)  
    - **Getter:** _[carla.TrafficLight.get_red_time](#carla.TrafficLight.get_red_time)_  
- <a name="carla.TrafficLight.set_yellow_time"></a>**<font color="#7fb800">set_yellow_time</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**yellow_time**</font>)  
Sets a given time (in seconds) for the yellow light to be active.  
    - **Parameters:**
        - `yellow_time` (_float_)  
    - **Getter:** _[carla.TrafficLight.get_yellow_time](#carla.TrafficLight.get_yellow_time)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.TrafficLight.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Vector2D<a name="carla.Vector2D"></a> <sub><sup>_class_</sup></sub>
Vector 2D helper class.  

<h3>Instance Variables</h3>
<<<<<<< HEAD
- <a name="carla.Vector2D.x"></a>**<font color="#f8805a">x</font>** (_float_)  
- <a name="carla.Vector2D.y"></a>**<font color="#f8805a">y</font>** (_float_)  

<h3>Methods</h3>
- <a name="carla.Vector2D.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**x**=0.0</font>, <font color="#00a6ed">**y**=0.0</font>)  
    - **Parameters:**
        - `x` (_float_)  
        - `y` (_float_)  
- <a name="carla.Vector2D.__add__"></a>**<font color="#7fb800">\__add__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector2D](#carla.Vector2D)_)  
- <a name="carla.Vector2D.__mul__"></a>**<font color="#7fb800">\__mul__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector2D](#carla.Vector2D)_)  
- <a name="carla.Vector2D.__sub__"></a>**<font color="#7fb800">\__sub__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector2D](#carla.Vector2D)_)  
- <a name="carla.Vector2D.__truediv__"></a>**<font color="#7fb800">\__truediv__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector2D](#carla.Vector2D)_)  
- <a name="carla.Vector2D.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector2D](#carla.Vector2D)_)  
- <a name="carla.Vector2D.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector2D](#carla.Vector2D)_)  
- <a name="carla.Vector2D.__self__"></a>**<font color="#7fb800">\__self__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Vector3D<a name="carla.Vector3D"></a> <sub><sup>_class_</sup></sub>
Vector 3D helper class.  

<h3>Instance Variables</h3>
- <a name="carla.Vector3D.x"></a>**<font color="#f8805a">x</font>** (_float_)  
- <a name="carla.Vector3D.y"></a>**<font color="#f8805a">y</font>** (_float_)  
- <a name="carla.Vector3D.z"></a>**<font color="#f8805a">z</font>** (_float_)  

<h3>Methods</h3>
- <a name="carla.Vector3D.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**x**=0.0</font>, <font color="#00a6ed">**y**=0.0</font>, <font color="#00a6ed">**z**=0.0</font>)  
    - **Parameters:**
        - `x` (_float_)  
        - `y` (_float_)  
        - `z` (_float_)  
- <a name="carla.Vector3D.__add__"></a>**<font color="#7fb800">\__add__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Vector3D.__mul__"></a>**<font color="#7fb800">\__mul__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Vector3D.__sub__"></a>**<font color="#7fb800">\__sub__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Vector3D.__truediv__"></a>**<font color="#7fb800">\__truediv__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Vector3D.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Vector3D.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.Vector3D.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.TrafficLightState.Red"></a>**<font color="#f8805a">Red</font>**  
- <a name="carla.TrafficLightState.Yellow"></a>**<font color="#f8805a">Yellow</font>**  
- <a name="carla.TrafficLightState.Green"></a>**<font color="#f8805a">Green</font>**  
- <a name="carla.TrafficLightState.Off"></a>**<font color="#f8805a">Off</font>**  
- <a name="carla.TrafficLightState.Unknown"></a>**<font color="#f8805a">Unknown</font>**  

---

## carla.TrafficManager<a name="carla.TrafficManager"></a>
The traffic manager is a module built on top of the CARLA API in C++. It handles any group of vehicles set to autopilot mode to populate the simulation with realistic urban traffic conditions and give the chance to user to customize some behaviours. The architecture of the traffic manager is divided in five different goal-oriented stages and a PID controller where the information flows until eventually, a [carla.VehicleControl](#carla.VehicleControl) is applied to every vehicle registered in a traffic manager.  
In order to learn more, visit the [documentation](adv_traffic_manager.md) regarding this module.  

<h3>Methods</h3>
- <a name="carla.TrafficManager.auto_lane_change"></a>**<font color="#7fb800">auto_lane_change</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**enable**</font>)  
Turns on or off lane changing behaviour for a vehicle.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – The vehicle whose settings are changed.  
        - `enable` (_bool_) – __True__ is default and enables lane changes. __False__ will disable them.  
- <a name="carla.TrafficManager.collision_detection"></a>**<font color="#7fb800">collision_detection</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**reference_actor**</font>, <font color="#00a6ed">**other_actor**</font>, <font color="#00a6ed">**detect_collision**</font>)  
Tunes on/off collisions between a vehicle and another specific actor. In order to ignore all other vehicles, traffic lights or walkers, use the specific __ignore__ methods described in this same section.  
    - **Parameters:**
        - `reference_actor` (_[carla.Actor](#carla.Actor)_) – Vehicle that is going to ignore collisions.  
        - `other_actor` (_[carla.Actor](#carla.Actor)_) – The actor that `reference_actor` is going to ignore collisions with.  
        - `detect_collision` (_bool_) – __True__ is default and enables collisions. __False__ will disable them.  
- <a name="carla.TrafficManager.distance_to_leading_vehicle"></a>**<font color="#7fb800">distance_to_leading_vehicle</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**distance**</font>)  
Sets the minimum distance in meters that a vehicle has to keep with the others. The distance is in meters and will affect the minimum moving distance. It is computed from front to back of the vehicle objects.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – Vehicle whose minimum distance is being changed.  
        - `distance` (_float_) – Meters between both vehicles.  
- <a name="carla.TrafficManager.force_lane_change"></a>**<font color="#7fb800">force_lane_change</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**direction**</font>)  
Forces a vehicle to change either to the lane on its left or right, if existing, as indicated in `direction`. This method applies the lane change no matter what, disregarding possible collisions.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – Vehicle being forced to change lanes.  
        - `direction` (_bool_) – Destination lane. __True__ is the one on the right and __False__ is the left one.  
- <a name="carla.TrafficManager.global_distance_to_leading_vehicle"></a>**<font color="#7fb800">global_distance_to_leading_vehicle</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>)  
Sets the minimum distance in meters that vehicles have to keep with the rest. The distance is in meters and will affect the minimum moving distance. It is computed from center to center of the vehicle objects.  
    - **Parameters:**
        - `distance` (_float_) – Meters between vehicles.  
- <a name="carla.TrafficManager.global_percentage_speed_difference"></a>**<font color="#7fb800">global_percentage_speed_difference</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**percentage**</font>)  
Sets the difference the vehicle's intended speed and its current speed limit. Speed limits can be exceeded by setting the `perc` to a negative value.  
Default is 30. Exceeding a speed limit can be done using negative percentages.  
    - **Parameters:**
        - `percentage` (_float_) – Percentage difference between intended speed and the current limit.  
- <a name="carla.TrafficManager.ignore_lights_percentage"></a>**<font color="#7fb800">ignore_lights_percentage</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**perc**</font>)  
During the traffic light stage, which runs every frame, this method sets the percent chance that traffic lights will be ignored for a vehicle.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – The actor that is going to ignore traffic lights.  
        - `perc` (_float_) – Between 0 and 100. Amount of times traffic lights will be ignored.  
- <a name="carla.TrafficManager.ignore_vehicles_percentage"></a>**<font color="#7fb800">ignore_vehicles_percentage</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**perc**</font>)  
During the collision detection stage, which runs every frame, this method sets a percent chance that collisions with another vehicle will be ignored for a vehicle.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – The vehicle that is going to ignore other vehicles.  
        - `perc` (_float_) – Between 0 and 100. Amount of times collisions will be ignored.  
- <a name="carla.TrafficManager.ignore_walkers_percentage"></a>**<font color="#7fb800">ignore_walkers_percentage</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**perc**</font>)  
During the collision detection stage, which runs every frame, this method sets a percent chance that collisions with walkers will be ignored for a vehicle.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – The vehicle that is going to ignore walkers on scene.  
        - `perc` (_float_) – Between 0 and 100. Amount of times collisions will be ignored.  
- <a name="carla.TrafficManager.reset_traffic_lights"></a>**<font color="#7fb800">reset_traffic_lights</font>**(<font color="#00a6ed">**self**</font>)  
Resets every traffic light in the map to its initial state.  
- <a name="carla.TrafficManager.vehicle_percentage_speed_difference"></a>**<font color="#7fb800">vehicle_percentage_speed_difference</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**percentage**</font>)  
Sets the difference the vehicle's intended speed and its current speed limit. Speed limits can be exceeded by setting the `perc` to a negative value.  
Default is 30. Exceeding a speed limit can be done using negative percentages.  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor)_) – Vehicle whose speed behaviour is being changed.  
        - `percentage` (_float_) – Percentage difference between intended speed and the current limit.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.TrafficManager.get_port"></a>**<font color="#7fb800">get_port</font>**(<font color="#00a6ed">**self**</font>)  
Returns the port where the Traffic Manager is connected. If the object is a TM-Client, it will return the port of its TM-Server. Read the [documentation](#adv_traffic_manager.md#multiclient-and-multitm-management) to learn the difference.  
    - **Return:** _uint16_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.TrafficManager.set_hybrid_physics_mode"></a>**<font color="#7fb800">set_hybrid_physics_mode</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**enabled**=False</font>)  
Enables or disables the hybrid physics mode. In this mode, vehicle's farther than a certain radius from the ego vehicle will have their physics disabled. Computation cost will be reduced by not calculating vehicle dynamics. Vehicles will be teleported.  
    - **Parameters:**
        - `enabled` (_bool_) – If __True__, enables the hybrid physics.  
- <a name="carla.TrafficManager.set_hybrid_mode_radius"></a>**<font color="#7fb800">set_hybrid_mode_radius</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**r**=70.0</font>)  
With hybrid physics on, changes the radius of the area of influence where physics are enabled.  
    - **Parameters:**
        - `r` (_float_) – New radius where physics are enabled.  

---

## carla.VehicleControl<a name="carla.VehicleControl"></a> <sub><sup>_class_</sup></sub>
VehicleControl is used for controlling the basic movement of a vehicle.  

<h3>Instance Variables</h3>
- <a name="carla.VehicleControl.throttle"></a>**<font color="#f8805a">throttle</font>** (_float_)  
A scalar value to control the vehicle throttle [0.0, 1.0].  
- <a name="carla.VehicleControl.steer"></a>**<font color="#f8805a">steer</font>** (_float_)  
A scalar value to control the vehicle steering [-1.0, 1.0].  
- <a name="carla.VehicleControl.brake"></a>**<font color="#f8805a">brake</font>** (_float_)  
A scalar value to control the vehicle brake [0.0, 1.0].  
- <a name="carla.VehicleControl.hand_brake"></a>**<font color="#f8805a">hand_brake</font>** (_bool_)  
If true, hand brake will be used.  
- <a name="carla.VehicleControl.reverse"></a>**<font color="#f8805a">reverse</font>** (_bool_)  
If true, the vehicle will move reverse.  
- <a name="carla.VehicleControl.manual_gear_shift"></a>**<font color="#f8805a">manual_gear_shift</font>** (_bool_)  
If true, the vehicle will be controlled by changing gears manually.  
- <a name="carla.VehicleControl.gear"></a>**<font color="#f8805a">gear</font>** (_int_)  
Controls the gear value of the vehicle.  

<h3>Methods</h3>
- <a name="carla.VehicleControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**throttle**=0.0</font>, <font color="#00a6ed">**steer**=0.0</font>, <font color="#00a6ed">**brake**=0.0</font>, <font color="#00a6ed">**hand_brake**=True</font>, <font color="#00a6ed">**reverse**=True</font>, <font color="#00a6ed">**manual_gear_shift**=True</font>, <font color="#00a6ed">**gear**=0</font>)  
VehicleControl constructor.  
    - **Parameters:**
        - `throttle` (_float_)  
        - `steer` (_float_)  
        - `brake` (_float_)  
        - `hand_brake` (_bool_)  
        - `reverse` (_bool_)  
        - `manual_gear_shift` (_bool_)  
        - `gear` (_int_)  
- <a name="carla.VehicleControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.VehicleControl](#carla.VehicleControl)_)  
- <a name="carla.VehicleControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.VehicleControl](#carla.VehicleControl)_)  
- <a name="carla.VehicleControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.VehiclePhysicsControl<a name="carla.VehiclePhysicsControl"></a> <sub><sup>_class_</sup></sub>
VehiclePhysicsControl is used for controlling the physics parameters of a vehicle.  

<h3>Instance Variables</h3>
- <a name="carla.VehiclePhysicsControl.torque_curve"></a>**<font color="#f8805a">torque_curve</font>** (_list([carla.Vector2D](#carla.Vector2D))_)  
Curve that indicates the torque measured in Nm for a specific RPM of the vehicle's engine.  
- <a name="carla.VehiclePhysicsControl.max_rpm"></a>**<font color="#f8805a">max_rpm</font>** (_float_)  
The maximum RPM of the vehicle's engine.  
- <a name="carla.VehiclePhysicsControl.moi"></a>**<font color="#f8805a">moi</font>** (_float_)  
The moment of inertia of the vehicle's engine.  
- <a name="carla.VehiclePhysicsControl.damping_rate_full_throttle"></a>**<font color="#f8805a">damping_rate_full_throttle</font>** (_float_)  
Damping rate when the throttle is maximum.  
- <a name="carla.VehiclePhysicsControl.damping_rate_zero_throttle_clutch_engaged"></a>**<font color="#f8805a">damping_rate_zero_throttle_clutch_engaged</font>** (_float_)  
Damping rate when the throttle is zero with clutch engaged.  
- <a name="carla.VehiclePhysicsControl.damping_rate_zero_throttle_clutch_disengaged"></a>**<font color="#f8805a">damping_rate_zero_throttle_clutch_disengaged</font>** (_float_)  
Damping rate when the throttle is zero with clutch disengaged.  
- <a name="carla.VehiclePhysicsControl.use_gear_autobox"></a>**<font color="#f8805a">use_gear_autobox</font>** (_bool_)  
If true, the vehicle will have an automatic transmission.  
- <a name="carla.VehiclePhysicsControl.gear_switch_time"></a>**<font color="#f8805a">gear_switch_time</font>** (_float_)  
Switching time between gears.  
- <a name="carla.VehiclePhysicsControl.clutch_strength"></a>**<font color="#f8805a">clutch_strength</font>** (_float_)  
The clutch strength of the vehicle. Measured in Kgm^2/s.  
- <a name="carla.VehiclePhysicsControl.final_ratio"></a>**<font color="#f8805a">final_ratio</font>** (_float_)  
The fixed ratio from transmission to wheels.  
- <a name="carla.VehiclePhysicsControl.forward_gears"></a>**<font color="#f8805a">forward_gears</font>** (_list([carla.GearPhysicsControl](#carla.GearPhysicsControl))_)  
List of GearPhysicsControl objects.  
- <a name="carla.VehiclePhysicsControl.mass"></a>**<font color="#f8805a">mass</font>** (_float_)  
The mass of the vehicle measured in Kg.  
- <a name="carla.VehiclePhysicsControl.drag_coefficient"></a>**<font color="#f8805a">drag_coefficient</font>** (_float_)  
Drag coefficient of the vehicle's chassis.  
- <a name="carla.VehiclePhysicsControl.center_of_mass"></a>**<font color="#f8805a">center_of_mass</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
The center of mass of the vehicle.  
- <a name="carla.VehiclePhysicsControl.steering_curve"></a>**<font color="#f8805a">steering_curve</font>** (_list([carla.Vector2D](#carla.Vector2D))_)  
Curve that indicates the maximum steering for a specific forward speed.  
- <a name="carla.VehiclePhysicsControl.wheels"></a>**<font color="#f8805a">wheels</font>** (_list([carla.WheelPhysicsControl](#carla.WheelPhysicsControl))_)  
List of [carla.WheelPhysicsControl](#carla.WheelPhysicsControl) objects. This list should have 4 elements, where index 0 corresponds to the front left wheel, index 1 corresponds to the front right wheel, index 2 corresponds to the back left wheel and index 3 corresponds to the back right wheel. For 2 wheeled vehicles, set the same values for both front and back wheels.  

<h3>Methods</h3>
- <a name="carla.VehiclePhysicsControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**torque_curve**=[[0.0, 500.0], [5000.0, 500.0]]</font>, <font color="#00a6ed">**max_rpm**=5000.0</font>, <font color="#00a6ed">**moi**=1.0</font>, <font color="#00a6ed">**damping_rate_full_throttle**=0.15</font>, <font color="#00a6ed">**damping_rate_zero_throttle_clutch_engaged**=2.0</font>, <font color="#00a6ed">**damping_rate_zero_throttle_clutch_disengaged**=0.35</font>, <font color="#00a6ed">**use_gear_autobox**=True</font>, <font color="#00a6ed">**gear_switch_time**=0.5</font>, <font color="#00a6ed">**clutch_strength**=10.0</font>, <font color="#00a6ed">**final_ratio**=4.0</font>, <font color="#00a6ed">**forward_gears**=list()</font>, <font color="#00a6ed">**mass**=1000.0</font>, <font color="#00a6ed">**drag_coefficient**=0.3</font>, <font color="#00a6ed">**center_of_mass**=[0.0, 0.0, 0.0]</font>, <font color="#00a6ed">**steering_curve**=[[0.0, 1.0], [10.0, 0.5]]</font>, <font color="#00a6ed">**wheels**=list()</font>)  
VehiclePhysicsControl constructor.  
    - **Parameters:**
<<<<<<< HEAD
        - `torque_curve` (_list([carla.Vector2D](#carla.Vector2D))_)  
        - `max_rpm` (_float_)  
        - `moi` (_float_)  
        - `damping_rate_full_throttle` (_float_)  
        - `damping_rate_zero_throttle_clutch_engaged` (_float_)  
        - `damping_rate_zero_throttle_clutch_disengaged` (_float_)  
        - `use_gear_autobox` (_bool_)  
        - `gear_switch_time` (_float_)  
        - `clutch_strength` (_float_)  
        - `final_ratio` (_float_)  
        - `forward_gears` (_list([carla.GearPhysicsControl](#carla.GearPhysicsControl))_)  
        - `drag_coefficient` (_float_)  
        - `center_of_mass` (_[carla.Vector3D](#carla.Vector3D)_)  
        - `steering_curve` (_[carla.Vector2D](#carla.Vector2D)_)  
        - `wheels` (_list([carla.WheelPhysicsControl](#carla.WheelPhysicsControl))_)  
- <a name="carla.VehiclePhysicsControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)_)  
- <a name="carla.VehiclePhysicsControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)_)  
- <a name="carla.VehiclePhysicsControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.WalkerAIController<a name="carla.WalkerAIController"></a><sub><sup>([carla.Actor](#carla.Actor))</sup></sub> <sub><sup>_class_</sup></sub>
Class used for controlling the automation of a pedestrian.  

<h3>Methods</h3>
- <a name="carla.WalkerAIController.start"></a>**<font color="#7fb800">start</font>**(<font color="#00a6ed">**self**</font>)  
Initializes walker controller.  
- <a name="carla.WalkerAIController.stop"></a>**<font color="#7fb800">stop</font>**(<font color="#00a6ed">**self**</font>)  
Stops walker controller.  
- <a name="carla.WalkerAIController.go_to_location"></a>**<font color="#7fb800">go_to_location</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**destination**</font>)  
Sets the destination that the pedestrian will reach.  
    - **Parameters:**
        - `destination` (_[carla.Location](#carla.Location)_)  
- <a name="carla.WalkerAIController.set_max_speed"></a>**<font color="#7fb800">set_max_speed</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**speed**=1.4</font>)  
Sets the speed of the pedestrian.  
    - **Parameters:**
        - `speed` (_float_) – Speed is in m/s.  
- <a name="carla.WalkerAIController.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
        - `location` (_[carla.Location](#carla.Location)_)  
        - `rotation` (_[carla.Rotation](#carla.Rotation)_)  
- <a name="carla.Transform.transform"></a>**<font color="#7fb800">transform</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**in_point**</font>)  
Translates a 3D point from global to local coordinates using the current transformation as frame of reference.  
    - **Parameters:**
        - `in_point` (_[carla.Location](#carla.Location)_) – Location in the space to which the transformation will be applied.  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Transform.get_forward_vector"></a>**<font color="#7fb800">get_forward_vector</font>**(<font color="#00a6ed">**self**</font>)  
Computes a forward vector using its rotation.  
    - **Return:** _[carla.Vector3D](#carla.Vector3D)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Transform.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Transform](#carla.Transform)</font>)  
Returns __True__ if both location and rotation are equal for this and `other`.  
    - **Return:** _bool_  
- <a name="carla.Transform.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Transform](#carla.Transform)</font>)  
Returns __True__ if any location and rotation are not equal for this and `other`.  
    - **Return:** _bool_  
- <a name="carla.Transform.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Parses both location and rotation to string.  
    - **Return:** _str_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.WalkerBoneControl<a name="carla.WalkerBoneControl"></a> <sub><sup>_class_</sup></sub>
Class used for controlling the skeleton of a walker. See [walker bone control](walker_bone_control.md).  

<h3>Instance Variables</h3>
- <a name="carla.WalkerBoneControl.bone_transforms"></a>**<font color="#f8805a">bone_transforms</font>** (_list([name,transform])_)  
List of pairs where the first value is the bone name and the second value is the bone transform.  

<h3>Methods</h3>
- <a name="carla.WalkerBoneControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**list(name,transform)**</font>)  
    - **Parameters:**
<<<<<<< HEAD
        - `list(name,transform)` (_tuple_)  
- <a name="carla.WalkerBoneControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.WalkerControl<a name="carla.WalkerControl"></a> <sub><sup>_class_</sup></sub>
WalkerControl is used for controlling the basic movement of a walker.  

<h3>Instance Variables</h3>
- <a name="carla.WalkerControl.direction"></a>**<font color="#f8805a">direction</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Vector that controls the direction of the walker.  
- <a name="carla.WalkerControl.speed"></a>**<font color="#f8805a">speed</font>** (_float_)  
A scalar value to control the walker speed.  
- <a name="carla.WalkerControl.jump"></a>**<font color="#f8805a">jump</font>** (_bool_)  
If true, the walker will perform a jump.  

<h3>Methods</h3>
- <a name="carla.WalkerControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**direction**=[1.0, 0.0, 0.0]</font>, <font color="#00a6ed">**speed**=0.0</font>, <font color="#00a6ed">**jump**=False</font>)  
WalkerControl constructor.  
    - **Parameters:**
        - `direction` (_[carla.Vector3D](#carla.Vector3D)_)  
        - `speed` (_float_)  
        - `jump` (_bool_)  
- <a name="carla.WalkerControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.WalkerControl](#carla.WalkerControl)_)  
- <a name="carla.WalkerControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.WalkerControl](#carla.WalkerControl)_)  
- <a name="carla.WalkerControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.Waypoint<a name="carla.Waypoint"></a> <sub><sup>_class_</sup></sub>
3D directed point that stores information about the road definition provided by OpenDRIVE.  

<h3>Instance Variables</h3>
- <a name="carla.Waypoint.id"></a>**<font color="#f8805a">id</font>** (_int_)  
Waypoint id, it's generated using a hash combination of its `road_id`, `section_id`,  `lane_id` and `s` values, all them come from the OpenDRIVE. The `s` precision is set  to 2 centimeters, so 2 waypoints at a distance `s` less than 2 centimeters in the same  road, section and lane, will have the same `id`.  
- <a name="carla.Waypoint.transform"></a>**<font color="#f8805a">transform</font>** (_[carla.Transform](#carla.Transform)_)  
Transform indicating it's position and orientation according to the current lane information.  
- <a name="carla.Waypoint.is_intersection"></a>**<font color="#f8805a">is_intersection</font>** (_bool_)  
_Deprecated, use is_junction instead_.  
- <a name="carla.Waypoint.is_junction"></a>**<font color="#f8805a">is_junction</font>** (_bool_)  
True if the current Waypoint is on a junction.  
- <a name="carla.Waypoint.lane_width"></a>**<font color="#f8805a">lane_width</font>** (_float_)  
Horizontal size of the road at current `s`.  
- <a name="carla.Waypoint.road_id"></a>**<font color="#f8805a">road_id</font>** (_int_)  
OpenDRIVE road's id.  
- <a name="carla.Waypoint.section_id"></a>**<font color="#f8805a">section_id</font>** (_int_)  
OpenDRIVE section's id, based on the order that they are originally defined.  
- <a name="carla.Waypoint.lane_id"></a>**<font color="#f8805a">lane_id</font>** (_int_)  
OpenDRIVE lane's id, this value can be positive or negative which represents the direction of the  current lane with respect to the road. For more information refer to OpenDRIVE [documentation](http://www.opendrive.org/docs/OpenDRIVEFormatSpecRev1.4H.pdf#page=20).  
- <a name="carla.Waypoint.s"></a>**<font color="#f8805a">s</font>** (_float_)  
OpenDRIVE `s` value of the current position.  
- <a name="carla.Waypoint.lane_change"></a>**<font color="#f8805a">lane_change</font>** (_[carla.LaneChange](#carla.LaneChange)_)  
Lane change definition of the current Waypoint's location, based on the traffic rules defined in the OpenDRIVE file. Basically, it tells you if a lane change can be done and in which direction.  
- <a name="carla.Waypoint.lane_type"></a>**<font color="#f8805a">lane_type</font>** (_[carla.LaneType](#carla.LaneType)_)  
The lane type of the current Waypoint, based on OpenDRIVE types.  
- <a name="carla.Waypoint.right_lane_marking"></a>**<font color="#f8805a">right_lane_marking</font>** (_[carla.LaneMarking](#carla.LaneMarking)_)  
The right lane marking information based on the direction of the Waypoint.  
- <a name="carla.Waypoint.left_lane_marking"></a>**<font color="#f8805a">left_lane_marking</font>** (_[carla.LaneMarking](#carla.LaneMarking)_)  
The left lane marking information based on the direction of the Waypoint.  

<h3>Methods</h3>
- <a name="carla.Waypoint.next"></a>**<font color="#7fb800">next</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>)  
Returns a list of Waypoints at a certain approximate distance from the current Waypoint, taking into account the shape of the road and its possible deviations, without performing any lane change.  
The list may be empty if the road ends before the specified distance, for instance, a lane ending with the only option of incorporating to another road.  
    - **Parameters:**
        - `distance` (_float_) – The approximate distance where to get the next Waypoints.  
    - **Return:** _list([carla.Waypoint](#carla.Waypoint))_  
- <a name="carla.Waypoint.get_right_lane"></a>**<font color="#7fb800">get_right_lane</font>**(<font color="#00a6ed">**self**</font>)  
Generates a Waypoint at the center of the right lane based on the direction of the current Waypoint, regardless if the lane change is allowed in this location.  
Can return `None` if the lane does not exist.  
    - **Return:** _[carla.Waypoint](#carla.Waypoint)_  
- <a name="carla.Waypoint.get_left_lane"></a>**<font color="#7fb800">get_left_lane</font>**(<font color="#00a6ed">**self**</font>)  
Generates a Waypoint at the center of the left lane based on the direction of the current Waypoint, regardless if the lane change is allowed in this location.  
Can return `None` if the lane does not exist.  
    - **Return:** _[carla.Waypoint](#carla.Waypoint)_  
- <a name="carla.Waypoint.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.WeatherParameters<a name="carla.WeatherParameters"></a> <sub><sup>_class_</sup></sub>
WeatherParameters class is used for requesting and changing the lighting and weather conditions inside the world.  

<h3>Instance Variables</h3>
- <a name="carla.WeatherParameters.cloudiness"></a>**<font color="#f8805a">cloudiness</font>** (_float_)  
Weather cloudiness. Values range from 0 to 100.  
- <a name="carla.WeatherParameters.precipitation"></a>**<font color="#f8805a">precipitation</font>** (_float_)  
Precipitation amount for controlling rain intensity. Values range from 0 to 100.  
- <a name="carla.WeatherParameters.precipitation_deposits"></a>**<font color="#f8805a">precipitation_deposits</font>** (_float_)  
Precipitation deposits for controlling the area of puddles on roads. Values range from 0 to 100.  
- <a name="carla.WeatherParameters.wind_intensity"></a>**<font color="#f8805a">wind_intensity</font>** (_float_)  
Wind intensity. Values range from 0 to 100.  
- <a name="carla.WeatherParameters.sun_azimuth_angle"></a>**<font color="#f8805a">sun_azimuth_angle</font>** (_float_)  
The azimuth angle of the sun in degrees. Values range from 0 to 360.  
- <a name="carla.WeatherParameters.sun_altitude_angle"></a>**<font color="#f8805a">sun_altitude_angle</font>** (_float_)  
Altitude angle of the sun in degrees. Values range from -90 to 90.  

<h3>Methods</h3>
- <a name="carla.WeatherParameters.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**cloudiness**=0.0</font>, <font color="#00a6ed">**precipitation**=0.0</font>, <font color="#00a6ed">**precipitation_deposits**=0.0</font>, <font color="#00a6ed">**wind_intensity**=0.0</font>, <font color="#00a6ed">**sun_azimuth_angle**=0.0</font>, <font color="#00a6ed">**sun_altitude_angle**=0.0</font>)  
WeatherParameters constructor.  
    - **Parameters:**
        - `cloudiness` (_float_)  
        - `precipitation` (_float_)  
        - `precipitation_deposits` (_float_)  
        - `wind_intensity` (_float_)  
        - `sun_azimuth_angle` (_float_)  
        - `sun_altitude_angle` (_float_)  
- <a name="carla.WeatherParameters.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
Returns True if `self` and `other` are equal.  
    - **Return:** _bool_  
- <a name="carla.WeatherParameters.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
Returns True if `self` and `other` are not equal.  
    - **Return:** _bool_  
- <a name="carla.WeatherParameters.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.WheelPhysicsControl<a name="carla.WheelPhysicsControl"></a> <sub><sup>_class_</sup></sub>
WheelPhysicsControl is used for controlling the physics parameters of a vehicle's wheel.  

<h3>Instance Variables</h3>
- <a name="carla.WheelPhysicsControl.tire_friction"></a>**<font color="#f8805a">tire_friction</font>** (_float_)  
A scalar value that indicates the friction of the wheel.  
- <a name="carla.WheelPhysicsControl.damping_rate"></a>**<font color="#f8805a">damping_rate</font>** (_float_)  
The damping rate of the wheel.  
- <a name="carla.WheelPhysicsControl.max_steer_angle"></a>**<font color="#f8805a">max_steer_angle</font>** (_float_)  
The maximum angle in degrees that the wheel can steer.  
- <a name="carla.WheelPhysicsControl.radius"></a>**<font color="#f8805a">radius</font>** (_float_)  
The radius of the wheel in centimeters.  
- <a name="carla.WheelPhysicsControl.max_brake_torque"></a>**<font color="#f8805a">max_brake_torque</font>** (_float_)  
The maximum brake torque in Nm.  
- <a name="carla.WheelPhysicsControl.max_handbrake_torque"></a>**<font color="#f8805a">max_handbrake_torque</font>** (_float_)  
The maximum handbrake torque in Nm.  
- <a name="carla.WheelPhysicsControl.position"></a>**<font color="#f8805a">position</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
World position of the wheel. Note that it is a read-only parameter.  

<h3>Methods</h3>
- <a name="carla.WheelPhysicsControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**tire_friction**=2.0</font>, <font color="#00a6ed">**damping_rate**=0.25</font>, <font color="#00a6ed">**max_steer_angle**=70.0</font>, <font color="#00a6ed">**radius**=30.0</font>, <font color="#00a6ed">**max_brake_torque**=1500.0</font>, <font color="#00a6ed">**max_handbrake_torque**=3000.0</font>, <font color="#00a6ed">**position**=(0.0,0.0,0.0)</font>)  
WheelPhysicsControl constructor.  
    - **Parameters:**
        - `tire_friction` (_float_)  
        - `damping_rate` (_float_)  
        - `max_steer_angle` (_float_)  
        - `radius` (_float_)  
        - `max_brake_torque` (_float_)  
        - `max_handbrake_torque` (_float_)  
        - `position` (_[carla.Vector3D](#carla.Vector3D)_)  
- <a name="carla.WheelPhysicsControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.WheelPhysicsControl](#carla.WheelPhysicsControl)_)  
- <a name="carla.WheelPhysicsControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.WheelPhysicsControl](#carla.WheelPhysicsControl)_)  
- <a name="carla.WheelPhysicsControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
        - `x` (_float_)  
        - `y` (_float_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Vector2D.__add__"></a>**<font color="#7fb800">\__add__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector2D](#carla.Vector2D)</font>)  
- <a name="carla.Vector2D.__sub__"></a>**<font color="#7fb800">\__sub__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector2D](#carla.Vector2D)</font>)  
- <a name="carla.Vector2D.__mul__"></a>**<font color="#7fb800">\__mul__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector2D](#carla.Vector2D)</font>)  
- <a name="carla.Vector2D.__truediv__"></a>**<font color="#7fb800">\__truediv__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector2D](#carla.Vector2D)</font>)  
- <a name="carla.Vector2D.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector2D](#carla.Vector2D)</font>)  
Returns __True__ if values for every axis are equal.  
    - **Return:** _bool_  
- <a name="carla.Vector2D.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**bool**=[carla.Vector2D](#carla.Vector2D)</font>)  
Returns __True__ if the value for any axis is different.  
    - **Return:** _bool_  
- <a name="carla.Vector2D.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Returns the axis values for the vector parsed as string.  
    - **Return:** _str_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.World<a name="carla.World"></a> <sub><sup>_class_</sup></sub>
Class that contains the current loaded map.  

<h3>Instance Variables</h3>
- <a name="carla.World.id"></a>**<font color="#f8805a">id</font>** (_int_)  
The id of the episode associated with this world.  
- <a name="carla.World.debug"></a>**<font color="#f8805a">debug</font>** (_[carla.DebugHelper](#carla.DebugHelper)_)  

<h3>Methods</h3>
- <a name="carla.World.get_blueprint_library"></a>**<font color="#7fb800">get_blueprint_library</font>**(<font color="#00a6ed">**self**</font>)  
Return the list of blueprints available in this world. These blueprints can be used to spawn actors into the world.  
    - **Return:** _[carla.BlueprintLibrary](#carla.BlueprintLibrary)_  
- <a name="carla.World.get_map"></a>**<font color="#7fb800">get_map</font>**(<font color="#00a6ed">**self**</font>)  
Return the map that describes this world.  
    - **Return:** _[carla.Map](#carla.Map)_  
- <a name="carla.World.get_spectator"></a>**<font color="#7fb800">get_spectator</font>**(<font color="#00a6ed">**self**</font>)  
Return the spectator actor. The spectator controls the view in the simulator window.  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.get_settings"></a>**<font color="#7fb800">get_settings</font>**(<font color="#00a6ed">**self**</font>)  
    - **Return:** _[carla.WorldSettings](#carla.WorldSettings)_  
- <a name="carla.World.apply_settings"></a>**<font color="#7fb800">apply_settings</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**world_settings**</font>)  
Returns the id of the frame when the settings took effect.  
    - **Parameters:**
<<<<<<< HEAD
        - `world_settings` (_[carla.WorldSettings](#carla.WorldSettings)_)  
    - **Return:** _int_  
- <a name="carla.World.get_weather"></a>**<font color="#7fb800">get_weather</font>**(<font color="#00a6ed">**self**</font>)  
Retrieve the weather parameters currently active in the world.  
    - **Return:** _[carla.WeatherParameters](#carla.WeatherParameters)_  
- <a name="carla.World.set_weather"></a>**<font color="#7fb800">set_weather</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**weather**</font>)  
Change the weather in the simulation.  
    - **Parameters:**
        - `weather` (_[carla.WeatherParameters](#carla.WeatherParameters)_)  
- <a name="carla.World.get_snapshot"></a>**<font color="#7fb800">get_snapshot</font>**(<font color="#00a6ed">**self**</font>)  
Return a snapshot of the world at this moment.  
    - **Return:** _[carla.WorldSnapshot](#carla.WorldSnapshot)_  
- <a name="carla.World.get_actor"></a>**<font color="#7fb800">get_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Find actor by id, return None if not found.  
    - **Parameters:**
        - `actor_id` (_int_)  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.get_actors"></a>**<font color="#7fb800">get_actors</font>**(<font color="#00a6ed">**self**</font>)  
By default it returns a list with every actor present in the world. _A list of ids can be used as a parameter_.  
    - **Return:** _[carla.ActorList](#carla.ActorList)_  
- <a name="carla.World.spawn_actor"></a>**<font color="#7fb800">spawn_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**blueprint**</font>, <font color="#00a6ed">**transform**</font>, <font color="#00a6ed">**attach_to**=None</font>, <font color="#00a6ed">**attachment**=Rigid</font>)  
Spawn an actor into the world based on the blueprint provided at transform. If a parent is provided, the actor is attached to parent.  
    - **Parameters:**
        - `blueprint` (_[carla.BlueprintLibrary](#carla.BlueprintLibrary)_)  
        - `transform` (_[carla.Transform](#carla.Transform)_) – If attached to parent, transform acts like a relative_transform to the parent actor.  
        - `attach_to` (_[carla.Actor](#carla.Actor)_)  
        - `attachment` (_[carla.AttachmentType](#carla.AttachmentType)_)  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.try_spawn_actor"></a>**<font color="#7fb800">try_spawn_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**blueprint**</font>, <font color="#00a6ed">**transform**</font>, <font color="#00a6ed">**attach_to**=None</font>, <font color="#00a6ed">**attachment**=Rigid</font>)  
Same as SpawnActor but return none on failure instead of throwing an exception.  
    - **Parameters:**
        - `blueprint` (_[carla.BlueprintLibrary](#carla.BlueprintLibrary)_)  
        - `transform` (_[carla.Transform](#carla.Transform)_) – If attached to parent, transform acts like a relative_transform to the parent actor.  
        - `attach_to` (_[carla.Actor](#carla.Actor)_)  
        - `attachment` (_[carla.AttachmentType](#carla.AttachmentType)_)  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.wait_for_tick"></a>**<font color="#7fb800">wait_for_tick</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**seconds**=10.0</font>)  
Block calling thread until a world tick is received.  
    - **Parameters:**
        - `seconds` (_float_)  
    - **Return:** _[carla.WorldSnapshot](#carla.WorldSnapshot)_  
- <a name="carla.World.on_tick"></a>**<font color="#7fb800">on_tick</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**callback**</font>)  
Returns the ID of the callback so it can be removed with `remove_on_tick`.  
    - **Parameters:**
        - `callback` (_[carla.WorldSnapshot](#carla.WorldSnapshot)_)  
    - **Return:** _int_  
- <a name="carla.World.remove_on_tick"></a>**<font color="#7fb800">remove_on_tick</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**callback_id**</font>)  
Removes on tick callbacks.  
- <a name="carla.World.tick"></a>**<font color="#7fb800">tick</font>**(<font color="#00a6ed">**self**</font>)  
Synchronizes with the simulator and returns the id of the newly started frame (only has effect on synchronous mode).  
    - **Return:** _int_  
- <a name="carla.World.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
        - `x` (_float_)  
        - `y` (_float_)  
        - `z` (_float_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Vector3D.__add__"></a>**<font color="#7fb800">\__add__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector3D](#carla.Vector3D)</font>)  
- <a name="carla.Vector3D.__sub__"></a>**<font color="#7fb800">\__sub__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector3D](#carla.Vector3D)</font>)  
- <a name="carla.Vector3D.__mul__"></a>**<font color="#7fb800">\__mul__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector3D](#carla.Vector3D)</font>)  
- <a name="carla.Vector3D.__truediv__"></a>**<font color="#7fb800">\__truediv__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector3D](#carla.Vector3D)</font>)  
- <a name="carla.Vector3D.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector3D](#carla.Vector3D)</font>)  
Returns __True__ if values for every axis are equal.  
    - **Return:** _bool_  
- <a name="carla.Vector3D.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.Vector3D](#carla.Vector3D)</font>)  
Returns __True__ if the value for any axis is different.  
    - **Return:** _bool_  
- <a name="carla.Vector3D.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
Returns the axis values for the vector parsed as string.  
    - **Return:** _str_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.WorldSettings<a name="carla.WorldSettings"></a> <sub><sup>_class_</sup></sub>
Class that provides access to modifiable world settings. Check it out in our [section](../configuring_the_simulation/).  

<h3>Instance Variables</h3>
- <a name="carla.WorldSettings.synchronous_mode"></a>**<font color="#f8805a">synchronous_mode</font>** (_bool_)  
- <a name="carla.WorldSettings.no_rendering_mode"></a>**<font color="#f8805a">no_rendering_mode</font>** (_bool_)  
- <a name="carla.WorldSettings.fixed_delta_seconds"></a>**<font color="#f8805a">fixed_delta_seconds</font>** (_float_)  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.WorldSettings.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**synchronous_mode**=False</font>, <font color="#00a6ed">**no_rendering_mode**=False</font>, <font color="#00a6ed">**fixed_delta_seconds**=0.0</font>)  
=======
- <a name="carla.Vehicle.apply_control"></a>**<font color="#7fb800">apply_control</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**control**</font>)  
Applies a control object on the next tick, containing driving parameters such as throttle, steering or gear shifting.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
    - **Parameters:**
        - `synchronous_mode` (_bool_)  
        - `no_rendering_mode` (_bool_)  
        - `fixed_delta_seconds` (_float_)  
- <a name="carla.WorldSettings.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
<<<<<<< HEAD
        - `other` (_[carla.Timestamp](#carla.Timestamp)_)  
- <a name="carla.WorldSettings.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Timestamp](#carla.Timestamp)_)  
- <a name="carla.WorldSettings.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
        - `physics_control` (_[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)_)  
- <a name="carla.Vehicle.is_at_traffic_light"></a>**<font color="#7fb800">is_at_traffic_light</font>**(<font color="#00a6ed">**self**</font>)  
Vehicles will be affected by a traffic light when the light is red and the vehicle is inside its bounding box. The client returns whether a traffic light is affecting this vehicle according to last tick (it does not call the simulator).  
    - **Return:** _bool_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Vehicle.get_control"></a>**<font color="#7fb800">get_control</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the control applied in the last tick. The method does not call the simulator.  
    - **Return:** _[carla.VehicleControl](#carla.VehicleControl)_  
- <a name="carla.Vehicle.get_light_state"></a>**<font color="#7fb800">get_light_state</font>**(<font color="#00a6ed">**self**</font>)  
Returns a flag representing the vehicle light state, this represents which lights are active or not.  
    - **Return:** _[carla.VehicleLightState](#carla.VehicleLightState)_  
    - **Setter:** _[carla.Vehicle.set_light_state](#carla.Vehicle.set_light_state)_  
- <a name="carla.Vehicle.get_physics_control"></a>**<font color="#7fb800">get_physics_control</font>**(<font color="#00a6ed">**self**</font>)  
The simulator returns the last physics control applied to this vehicle.  
    - **Return:** _[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)_  
    - **Warning:** <font color="#ED2F2F">_This function does call the simulator to retrieve the value._</font>  
- <a name="carla.Vehicle.get_speed_limit"></a>**<font color="#7fb800">get_speed_limit</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the speed limit affecting this vehicle according to last tick (it does not call the simulator). The speed limit is updated when passing by a speed limit signal, so a vehicle might have none right after spawning.  
    - **Return:** _float_  
- <a name="carla.Vehicle.get_traffic_light"></a>**<font color="#7fb800">get_traffic_light</font>**(<font color="#00a6ed">**self**</font>)  
Retrieves the traffic light actor affecting this vehicle (if any) according to last tick. The method does not call the simulator.  
    - **Return:** _[carla.TrafficLight](#carla.TrafficLight)_  
- <a name="carla.Vehicle.get_traffic_light_state"></a>**<font color="#7fb800">get_traffic_light_state</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the state of the traffic light affecting this vehicle according to last tick. The method does not call the simulator. If no traffic light is currently affecting the vehicle, returns <b>green</b>.  
    - **Return:** _[carla.TrafficLightState](#carla.TrafficLightState)_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Vehicle.set_autopilot"></a>**<font color="#7fb800">set_autopilot</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**enabled**=True</font>, <font color="#00a6ed">**port**=8000</font>)  
Registers or deletes the vehicle from a Traffic Manager's list. When __True__, the Traffic Manager passed as parameter will move the vehicle around. The autopilot takes place client-side.  
    - **Parameters:**
        - `enabled` (_bool_)  
        - `port` (_uint16_) – The port of the TM-Server where the vehicle is to be registered or unlisted. If __None__ is passed, it will consider a TM at default port `8000`.  
- <a name="carla.Vehicle.set_light_state"></a>**<font color="#7fb800">set_light_state</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**light_state**</font>)  
Sets the light state of a vehicle using a flag that represents the lights that are on and off.  
    - **Parameters:**
        - `light_state` (_[carla.VehicleLightState](#carla.VehicleLightState)_)  
    - **Getter:** _[carla.Vehicle.get_light_state](#carla.Vehicle.get_light_state)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Vehicle.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.WorldSnapshot<a name="carla.WorldSnapshot"></a> <sub><sup>_class_</sup></sub>
Class that represents the state of every actor in the simulation at a single frame.  

<h3>Instance Variables</h3>
- <a name="carla.WorldSnapshot.id"></a>**<font color="#f8805a">id</font>** (_int_)  
The WorldSnapshot's identifier.  
- <a name="carla.WorldSnapshot.frame"></a>**<font color="#f8805a">frame</font>** (_int_)  
Frame number.  
- <a name="carla.WorldSnapshot.timestamp"></a>**<font color="#f8805a">timestamp</font>** (_[carla.Timestamp](#carla.Timestamp)_)  
Timestamp simulated data.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.WorldSnapshot.has_actor"></a>**<font color="#7fb800">has_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Check if an actor is present in this snapshot.  
    - **Parameters:**
        - `actor_id` (_int_)  
- <a name="carla.WorldSnapshot.find"></a>**<font color="#7fb800">find</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Find an ActorSnapshot by id, return None if the actor is not found.  
    - **Parameters:**
        - `actor_id` (_int_)  
- <a name="carla.WorldSnapshot.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
Return number of [carla.ActorSnapshot](#carla.ActorSnapshot) present in this [carla.WorldSnapshot](#carla.WorldSnapshot).  
    - **Return:** _int_  
- <a name="carla.WorldSnapshot.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.WorldSnapshot.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.WorldSnapshot](#carla.WorldSnapshot)_)  
- <a name="carla.WorldSnapshot.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.WorldSnapshot](#carla.WorldSnapshot)_)  
- <a name="carla.WorldSnapshot.__self__"></a>**<font color="#7fb800">\__self__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.VehicleControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**throttle**=0.0</font>, <font color="#00a6ed">**steer**=0.0</font>, <font color="#00a6ed">**brake**=0.0</font>, <font color="#00a6ed">**hand_brake**=False</font>, <font color="#00a6ed">**reverse**=False</font>, <font color="#00a6ed">**manual_gear_shift**=False</font>, <font color="#00a6ed">**gear**=0</font>)  
    - **Parameters:**
        - `throttle` (_float_)  
        - `steer` (_float_)  
        - `brake` (_float_)  
        - `hand_brake` (_bool_)  
        - `reverse` (_bool_)  
        - `manual_gear_shift` (_bool_)  
        - `gear` (_int_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.VehicleControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.VehicleControl](#carla.VehicleControl)</font>)  
- <a name="carla.VehicleControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.VehicleControl](#carla.VehicleControl)</font>)  
- <a name="carla.VehicleControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.GnssMeasurement<a name="carla.GnssMeasurement"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
Gnss sensor data.  

<h3>Instance Variables</h3>
- <a name="carla.GnssMeasurement.latitude"></a>**<font color="#f8805a">latitude</font>** (_float_)  
North/South value of a point on the map.  
- <a name="carla.GnssMeasurement.longitude"></a>**<font color="#f8805a">longitude</font>** (_float_)  
West/East value of a point on the map.  
- <a name="carla.GnssMeasurement.altitude"></a>**<font color="#f8805a">altitude</font>** (_float_)  
Height regarding ground level.  

<h3>Methods</h3>
- <a name="carla.GnssMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.IMUMeasurement<a name="carla.IMUMeasurement"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
IMU sensor data regarding the sensor World's transformation.  

<h3>Instance Variables</h3>
- <a name="carla.IMUMeasurement.accelerometer"></a>**<font color="#f8805a">accelerometer</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Measures linear acceleration in `m/s^2`.  
- <a name="carla.IMUMeasurement.gyroscope"></a>**<font color="#f8805a">gyroscope</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Measures angular velocity in `rad/sec`.  
- <a name="carla.IMUMeasurement.compass"></a>**<font color="#f8805a">compass</font>** (_float_)  
Orientation with respect to the North (`(0.0, -1.0, 0.0)` in Unreal) in radians.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.IMUMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.VehiclePhysicsControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**torque_curve**=[[0.0, 500.0], [5000.0, 500.0]]</font>, <font color="#00a6ed">**max_rpm**=5000.0</font>, <font color="#00a6ed">**moi**=1.0</font>, <font color="#00a6ed">**damping_rate_full_throttle**=0.15</font>, <font color="#00a6ed">**damping_rate_zero_throttle_clutch_engaged**=2.0</font>, <font color="#00a6ed">**damping_rate_zero_throttle_clutch_disengaged**=0.35</font>, <font color="#00a6ed">**use_gear_autobox**=True</font>, <font color="#00a6ed">**gear_switch_time**=0.5</font>, <font color="#00a6ed">**clutch_strength**=10.0</font>, <font color="#00a6ed">**final_ratio**=4.0</font>, <font color="#00a6ed">**forward_gears**=list()</font>, <font color="#00a6ed">**mass**=1000.0</font>, <font color="#00a6ed">**drag_coefficient**=0.3</font>, <font color="#00a6ed">**center_of_mass**=[0.0, 0.0, 0.0]</font>, <font color="#00a6ed">**steering_curve**=[[0.0, 1.0], [10.0, 0.5]]</font>, <font color="#00a6ed">**wheels**=list()</font>)  
VehiclePhysicsControl constructor.  
    - **Parameters:**
        - `torque_curve` (_list([carla.Vector2D](#carla.Vector2D))_)  
        - `max_rpm` (_float_)  
        - `moi` (_float_)  
        - `damping_rate_full_throttle` (_float_)  
        - `damping_rate_zero_throttle_clutch_engaged` (_float_)  
        - `damping_rate_zero_throttle_clutch_disengaged` (_float_)  
        - `use_gear_autobox` (_bool_)  
        - `gear_switch_time` (_float_)  
        - `clutch_strength` (_float_)  
        - `final_ratio` (_float_)  
        - `forward_gears` (_list([carla.GearPhysicsControl](#carla.GearPhysicsControl))_)  
        - `drag_coefficient` (_float_)  
        - `center_of_mass` (_[carla.Vector3D](#carla.Vector3D)_)  
        - `steering_curve` (_[carla.Vector2D](#carla.Vector2D)_)  
        - `wheels` (_list([carla.WheelPhysicsControl](#carla.WheelPhysicsControl))_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.VehiclePhysicsControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)</font>)  
- <a name="carla.VehiclePhysicsControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)</font>)  
- <a name="carla.VehiclePhysicsControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Image<a name="carla.Image"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
Class that defines an image of 32-bit BGRA colors.  

<h3>Instance Variables</h3>
- <a name="carla.Image.width"></a>**<font color="#f8805a">width</font>** (_int_)  
Image width in pixels.  
- <a name="carla.Image.height"></a>**<font color="#f8805a">height</font>** (_int_)  
Image height in pixels.  
- <a name="carla.Image.fov"></a>**<font color="#f8805a">fov</font>** (_float_)  
Horizontal field of view of the image in degrees.  
- <a name="carla.Image.raw_data"></a>**<font color="#f8805a">raw_data</font>** (_bytes_)  

<h3>Methods</h3>
- <a name="carla.Image.convert"></a>**<font color="#7fb800">convert</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**color_converter**</font>)  
Convert the image with the applied conversion.  
    - **Parameters:**
        - `color_converter` (_[carla.ColorConverter](#carla.ColorConverter)_)  
- <a name="carla.Image.save_to_disk"></a>**<font color="#7fb800">save_to_disk</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**path**</font>, <font color="#00a6ed">**color_converter**=Raw</font>)  
Save the image to disk.  
    - **Parameters:**
<<<<<<< HEAD
        - `path` (_str_) – Path where it will be saved.  
        - `color_converter` (_[carla.ColorConverter](#carla.ColorConverter)_)  
- <a name="carla.Image.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.Image.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.Image.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**</font>)  
    - **Parameters:**
        - `pos` (_int_)  
- <a name="carla.Image.__setitem__"></a>**<font color="#7fb800">\__setitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**</font>, <font color="#00a6ed">**color**</font>)  
    - **Parameters:**
        - `pos` (_int_)  
        - `color` (_[carla.Color](#carla.Color)_)  
- <a name="carla.Image.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
        - `control` (_[carla.WalkerBoneControl](#carla.WalkerBoneControl)_)  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Walker.get_control"></a>**<font color="#7fb800">get_control</font>**(<font color="#00a6ed">**self**</font>)  
The client returns the control applied to this walker during last tick. The method does not call the simulator.  
    - **Return:** _[carla.WalkerControl](#carla.WalkerControl)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Walker.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.WalkerAIController<a name="carla.WalkerAIController"></a>
<div style="padding-left:30px;margin-top:-20px"><small><b>Inherited from _[carla.Actor](#carla.Actor)_</b></small></div></p><p>Class that conducts AI control for a walker. The controllers are defined as actors, but they are quite different from the rest. They need to be attached to a parent actor during their creation, which is the walker they will be controlling (take a look at [carla.World](#carla.World) if you are yet to learn on how to spawn actors). They also need for a special blueprint (already defined in [carla.BlueprintLibrary](#carla.BlueprintLibrary) as "controller.ai.walker"). This is an empty blueprint, as the AI controller will be invisible in the simulation but will follow its parent around to dictate every step of the way.  

<h3>Methods</h3>
- <a name="carla.WalkerAIController.go_to_location"></a>**<font color="#7fb800">go_to_location</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**destination**</font>)  
Sets the destination that the pedestrian will reach.  
    - **Parameters:**
        - `destination` (_[carla.Location](#carla.Location)_)  
- <a name="carla.WalkerAIController.start"></a>**<font color="#7fb800">start</font>**(<font color="#00a6ed">**self**</font>)  
Enables AI control for its parent walker.  
- <a name="carla.WalkerAIController.stop"></a>**<font color="#7fb800">stop</font>**(<font color="#00a6ed">**self**</font>)  
Disables AI control for its parent walker.  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WalkerAIController.set_max_speed"></a>**<font color="#7fb800">set_max_speed</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**speed**=1.4</font>)  
Sets a speed for the walker in meters per second.  
    - **Parameters:**
        - `speed` (_float_) – speed in m/s. An easy walking speed is set by default.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WalkerAIController.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.LaneInvasionEvent<a name="carla.LaneInvasionEvent"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
Lane invasion sensor data.  

<h3>Instance Variables</h3>
- <a name="carla.LaneInvasionEvent.actor"></a>**<font color="#f8805a">actor</font>** (_[carla.Actor](#carla.Actor)_)  
Get "self" actor. Actor that invaded another lane.  
- <a name="carla.LaneInvasionEvent.crossed_lane_markings"></a>**<font color="#f8805a">crossed_lane_markings</font>** (_list([carla.LaneMarking](#carla.LaneMarking))_)  
List of lane markings that have been crossed.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.LaneInvasionEvent.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.WalkerBoneControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**list(name,transform)**</font>)  
Intializes an object containing moves to be applied on tick. These are listed with the name of the bone and the transform that will be applied to it.  
    - **Parameters:**
        - `list(name,transform)` (_tuple_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WalkerBoneControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.LidarMeasurement<a name="carla.LidarMeasurement"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
Lidar sensor measurement data.  

<h3>Instance Variables</h3>
- <a name="carla.LidarMeasurement.horizontal_angle"></a>**<font color="#f8805a">horizontal_angle</font>** (_float_)  
Horizontal angle that the Lidar has rotated at the time of the measurement (in radians).  
- <a name="carla.LidarMeasurement.channels"></a>**<font color="#f8805a">channels</font>** (_int_)  
Number of lasers.  
- <a name="carla.LidarMeasurement.raw_data"></a>**<font color="#f8805a">raw_data</font>** (_bytes_)  
List of 3D points.  

<h3>Methods</h3>
- <a name="carla.LidarMeasurement.get_point_count"></a>**<font color="#7fb800">get_point_count</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**channel**</font>)  
Retrieve the number of points that are generated by this channel.  
    - **Parameters:**
<<<<<<< HEAD
        - `channel` (_int_)  
    - **Note:** <font color="#8E8E8E">_Points are sorted by channel, so this method allows to identify the channel that generated each point.
_</font>  
- <a name="carla.LidarMeasurement.save_to_disk"></a>**<font color="#7fb800">save_to_disk</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**path**</font>)  
Save point cloud to disk.  
    - **Parameters:**
        - `path` (_str_)  
- <a name="carla.LidarMeasurement.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.LidarMeasurement.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="carla.LidarMeasurement.__getitem__"></a>**<font color="#7fb800">\__getitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**</font>)  
    - **Parameters:**
        - `pos` (_int_)  
- <a name="carla.LidarMeasurement.__setitem__"></a>**<font color="#7fb800">\__setitem__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**pos**</font>, <font color="#00a6ed">**location**</font>)  
    - **Parameters:**
        - `pos` (_int_)  
        - `location` (_[carla.Location](#carla.Location)_)  
- <a name="carla.LidarMeasurement.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
        - `direction` (_[carla.Vector3D](#carla.Vector3D)_)  
        - `speed` (_float_)  
        - `jump` (_bool_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WalkerControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WalkerControl](#carla.WalkerControl)</font>)  
Compares every variable with `other` and returns <b>True</b> if these are all the same.  
- <a name="carla.WalkerControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WalkerControl](#carla.WalkerControl)</font>)  
Compares every variable with `other` and returns <b>True</b> if any of these differ.  
- <a name="carla.WalkerControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Location<a name="carla.Location"></a><sub><sup>([carla.Vector3D](#carla.Vector3D))</sup></sub> <sub><sup>_class_</sup></sub>
Represents a location in the world (in meters).  

<h3>Instance Variables</h3>
- <a name="carla.Location.x"></a>**<font color="#f8805a">x</font>** (_float_)  
- <a name="carla.Location.y"></a>**<font color="#f8805a">y</font>** (_float_)  
- <a name="carla.Location.z"></a>**<font color="#f8805a">z</font>** (_float_)  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.Location.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**x**=0.0</font>, <font color="#00a6ed">**y**=0.0</font>, <font color="#00a6ed">**z**=0.0</font>)  
=======
- <a name="carla.Waypoint.next"></a>**<font color="#7fb800">next</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>)  
Returns a list of waypoints at a certain approximate `distance` from the current one. It takes into account the road and its possible deviations without performing any lane change and returns one waypoint per option.
The list may be empty if the lane is not connected to any other at the specified distance.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
    - **Parameters:**
        - `x` (_float_)  
        - `y` (_float_)  
        - `z` (_float_)  
- <a name="carla.Location.distance"></a>**<font color="#7fb800">distance</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**location**</font>)  
Computes the Euclidean distance in meters from this location to another one.  
    - **Parameters:**
        - `location` (_[carla.Location](#carla.Location)_) – The Location from where to compute the distance.  
    - **Return:** _float_  
- <a name="carla.Location.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
        - `other` (_[carla.Location](#carla.Location)_)  
- <a name="carla.Location.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
    - **Parameters:**
<<<<<<< HEAD
        - `other` (_[carla.Location](#carla.Location)_)  
- <a name="carla.Location.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.ObstacleDetectionEvent<a name="carla.ObstacleDetectionEvent"></a><sub><sup>([carla.SensorData](#carla.SensorData))</sup></sub> <sub><sup>_class_</sup></sub>
Obstacle detection sensor data.  
=======
        - `distance` (_float_) – The approximate distance between waypoints.  
    - **Return:** _list([carla.Waypoint](#carla.Waypoint))_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Waypoint.get_junction"></a>**<font color="#7fb800">get_junction</font>**(<font color="#00a6ed">**self**</font>)  
If the waypoint belongs to a junction this function returns the asociated junction object. Otherwise returns null.  
    - **Return:** _[carla.Junction](#carla.Junction)_  
- <a name="carla.Waypoint.get_landmarks"></a>**<font color="#7fb800">get_landmarks</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>, <font color="#00a6ed">**stop_at_junction**=False</font>)  
Returns a list of landmarks in the road from the current waypoint until the specified distance.  
    - **Parameters:**
        - `distance` (_float_) – The maximum distance to search for landmarks from the current waypoint.  
        - `stop_at_junction` (_bool_) – Enables or disables the landmark search through junctions.  
    - **Return:** _list([carla.Landmark](#carla.Landmark))_  
- <a name="carla.Waypoint.get_landmarks_of_type"></a>**<font color="#7fb800">get_landmarks_of_type</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**distance**</font>, <font color="#00a6ed">**type**</font>, <font color="#00a6ed">**stop_at_junction**=False</font>)  
Returns a list of landmarks in the road of a specified type from the current waypoint until the specified distance.  
    - **Parameters:**
        - `distance` (_float_) – The maximum distance to search for landmarks from the current waypoint.  
        - `type` (_str_) – The type of landmarks to search.  
        - `stop_at_junction` (_bool_) – Enables or disables the landmark search through junctions.  
    - **Return:** _list([carla.Landmark](#carla.Landmark))_  
- <a name="carla.Waypoint.get_left_lane"></a>**<font color="#7fb800">get_left_lane</font>**(<font color="#00a6ed">**self**</font>)  
Generates a Waypoint at the center of the left lane based on the direction of the current Waypoint, taking into account if the lane change is allowed in this location.
Will return <b>None</b> if the lane does not exist.  
    - **Return:** _[carla.Waypoint](#carla.Waypoint)_  
- <a name="carla.Waypoint.get_right_lane"></a>**<font color="#7fb800">get_right_lane</font>**(<font color="#00a6ed">**self**</font>)  
Generates a waypoint at the center of the right lane based on the direction of the current waypoint, taking into account if the lane change is allowed in this location.
Will return <b>None</b> if the lane does not exist.  
    - **Return:** _[carla.Waypoint](#carla.Waypoint)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.Waypoint.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  

---

## carla.WeatherParameters<a name="carla.WeatherParameters"></a>
This class defines objects containing lightning and weather specifications that can later be applied in [carla.World](#carla.World). So far, these conditions only intervene with [sensor.camera.rgb](ref_sensors.md#rgb-camera). They neither affect the actor's physics nor other sensors.        
  Each of these parameters acts indepently from the rest. Increasing the rainfall will not automatically create puddles nor change the road's humidity. That makes for a better customization but means that realistic conditions need to be scripted. However an example of dynamic weather conditions working realistically can be found [here](https://github.com/carla-simulator/carla/blob/master/PythonAPI/examples/dynamic_weather.py).  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="carla.ObstacleDetectionEvent.actor"></a>**<font color="#f8805a">actor</font>** (_[carla.Actor](#carla.Actor)_)  
Get "self" actor. Actor that measured the collision.  
- <a name="carla.ObstacleDetectionEvent.other_actor"></a>**<font color="#f8805a">other_actor</font>** (_[carla.Actor](#carla.Actor)_)  
Get the actor to which we collided.  
- <a name="carla.ObstacleDetectionEvent.distance"></a>**<font color="#f8805a">distance</font>** (_float_)  
Get obstacle distance.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.ObstacleDetectionEvent.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.WeatherParameters.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**cloudiness**=0.0</font>, <font color="#00a6ed">**precipitation**=0.0</font>, <font color="#00a6ed">**precipitation_deposits**=0.0</font>, <font color="#00a6ed">**wind_intensity**=0.0</font>, <font color="#00a6ed">**sun_azimuth_angle**=0.0</font>, <font color="#00a6ed">**sun_altitude_angle**=0.0</font>, <font color="#00a6ed">**fog_density**=0.0</font>, <font color="#00a6ed">**fog_distance**=0.0</font>, <font color="#00a6ed">**wetness**=0.0</font>)  
Method to initialize an object defining weather conditions. This class has some presets for different noon and sunset conditions listed in a note below.  
    - **Parameters:**
        - `cloudiness` (_float_) – 0 is a clear sky, 100 complete overcast.  
        - `precipitation` (_float_) – 0 is no rain at all, 100 a heavy rain.  
        - `precipitation_deposits` (_float_) – 0 means no puddles on the road, 100 means roads completely capped by rain.  
        - `wind_intensity` (_float_) – 0 is calm, 100 a strong wind.  
        - `sun_azimuth_angle` (_float_) – 0 is an arbitrary North, 180 its corresponding South.  
        - `sun_altitude_angle` (_float_) – 90 is midday, -90 is midnight.  
        - `fog_density` (_float_) – Density of the fog, from 0 to 100.  
        - `fog_distance` (_float_) – Distance where the fog starts in meters.  
        - `wetness` (_float_) – Humidity percentages of the road, from 0 to 100.  
    - **Note:** <font color="#8E8E8E">_ClearNoon, CloudyNoon, WetNoon, WetCloudyNoon, SoftRainNoon, MidRainyNoon, HardRainNoon, ClearSunset, CloudySunset, WetSunset, WetCloudySunset, SoftRainSunset, MidRainSunset, HardRainSunset. 
_</font>  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WeatherParameters.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
Returns <b>True</b> if both objects' variables are the same.  
    - **Return:** _bool_  
- <a name="carla.WeatherParameters.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**</font>)  
Returns <b>True</b> if both objects' variables are different.  
    - **Return:** _bool_  
- <a name="carla.WeatherParameters.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Sensor<a name="carla.Sensor"></a><sub><sup>([carla.Actor](#carla.Actor))</sup></sub> <sub><sup>_class_</sup></sub>
A sensor actor.  

<h3>Instance Variables</h3>
- <a name="carla.Sensor.is_listening"></a>**<font color="#f8805a">is_listening</font>** (_boolean_)  
Is true if the sensor is listening for data.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.Sensor.listen"></a>**<font color="#7fb800">listen</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**callback**</font>)  
    - **Parameters:**
        - `callback` (_function_) – Register a callback to be executed each time a new measurement is received. The callback must accept a single argument containing the sensor data; the type of this object varies depending on the type of sensor, but they all derive from [carla.SensorData](#carla.SensorData).  
- <a name="carla.Sensor.stop"></a>**<font color="#7fb800">stop</font>**(<font color="#00a6ed">**self**</font>)  
Stops listening for data.  
- <a name="carla.Sensor.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.WheelPhysicsControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**tire_friction**=2.0</font>, <font color="#00a6ed">**damping_rate**=0.25</font>, <font color="#00a6ed">**max_steer_angle**=70.0</font>, <font color="#00a6ed">**radius**=30.0</font>, <font color="#00a6ed">**max_brake_torque**=1500.0</font>, <font color="#00a6ed">**max_handbrake_torque**=3000.0</font>, <font color="#00a6ed">**position**=(0.0,0.0,0.0)</font>)  
    - **Parameters:**
        - `tire_friction` (_float_)  
        - `damping_rate` (_float_)  
        - `max_steer_angle` (_float_)  
        - `radius` (_float_)  
        - `max_brake_torque` (_float_)  
        - `max_handbrake_torque` (_float_)  
        - `position` (_[carla.Vector3D](#carla.Vector3D)_)  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WheelPhysicsControl.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WheelPhysicsControl](#carla.WheelPhysicsControl)</font>)  
- <a name="carla.WheelPhysicsControl.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WheelPhysicsControl](#carla.WheelPhysicsControl)</font>)  
- <a name="carla.WheelPhysicsControl.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.TrafficLight<a name="carla.TrafficLight"></a><sub><sup>([carla.TrafficSign](#carla.TrafficSign))</sup></sub> <sub><sup>_class_</sup></sub>
A traffic light actor. Check out this [`recipe`](../python_cookbook/#traffic-lights-recipe)!  

<h3>Instance Variables</h3>
- <a name="carla.TrafficLight.state"></a>**<font color="#f8805a">state</font>** (_[carla.TrafficLightState](#carla.TrafficLightState)_)  
Current traffic light state.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.TrafficLight.set_state"></a>**<font color="#7fb800">set_state</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**state**</font>)  
Sets a given state to a traffic light actor.  
    - **Parameters:**
        - `state` (_[carla.TrafficLightState](#carla.TrafficLightState)_)  
- <a name="carla.TrafficLight.get_state"></a>**<font color="#7fb800">get_state</font>**(<font color="#00a6ed">**self**</font>)  
Returns the current state of the traffic light.  
    - **Return:** _[carla.TrafficLightState](#carla.TrafficLightState)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.TrafficLight.set_green_time"></a>**<font color="#7fb800">set_green_time</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**green_time**</font>)  
    - **Parameters:**
        - `green_time` (_float_) – Sets a given time (in seconds) to the green state to be active.  
- <a name="carla.TrafficLight.get_green_time"></a>**<font color="#7fb800">get_green_time</font>**(<font color="#00a6ed">**self**</font>)  
Returns the current time set for the green light to be active.  
    - **Return:** _float_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.TrafficLight.set_yellow_time"></a>**<font color="#7fb800">set_yellow_time</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**yellow_time**</font>)  
Sets a given time (in seconds) to the yellow state to be active.  
    - **Parameters:**
        - `yellow_time` (_float_)  
- <a name="carla.TrafficLight.get_yellow_time"></a>**<font color="#7fb800">get_yellow_time</font>**(<font color="#00a6ed">**self**</font>)  
Returns the current time set for the yellow light to be active.  
    - **Return:** _float_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.TrafficLight.set_red_time"></a>**<font color="#7fb800">set_red_time</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**red_time**</font>)  
Sets a given time (in seconds) to the red state to be active.  
    - **Parameters:**
        - `red_time` (_float_)  
- <a name="carla.TrafficLight.get_red_time"></a>**<font color="#7fb800">get_red_time</font>**(<font color="#00a6ed">**self**</font>)  
Returns the current time set for the red light to be active.  
    - **Return:** _float_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.TrafficLight.get_elapsed_time"></a>**<font color="#7fb800">get_elapsed_time</font>**(<font color="#00a6ed">**self**</font>)  
Returns the current countdown of the state of a traffic light.  
    - **Return:** _float_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.TrafficLight.freeze"></a>**<font color="#7fb800">freeze</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**freeze**</font>)  
Stops the traffic light at its current state.  
    - **Parameters:**
        - `freeze` (_bool_)  
- <a name="carla.TrafficLight.is_frozen"></a>**<font color="#7fb800">is_frozen</font>**(<font color="#00a6ed">**self**</font>)  
Returns `True` if a traffic light is frozen.  
    - **Return:** _bool_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.TrafficLight.get_pole_index"></a>**<font color="#7fb800">get_pole_index</font>**(<font color="#00a6ed">**self**</font>)  
Returns the index of the pole in the traffic light group.  
    - **Return:** _int_  
- <a name="carla.TrafficLight.get_group_traffic_lights"></a>**<font color="#7fb800">get_group_traffic_lights</font>**(<font color="#00a6ed">**self**</font>)  
Returns all traffic lights in the group this one belongs to.  
    - **Return:** _list([carla.TrafficLight](#carla.TrafficLight))_  
    - **Note:** <font color="#8E8E8E">_This function calls the simulator.
_</font>  
- <a name="carla.TrafficLight.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
=======
- <a name="carla.World.apply_settings"></a>**<font color="#7fb800">apply_settings</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**world_settings**</font>)  
This method applies settings contained in an object to the simulation running and returns the ID of the frame they were implemented.  
    - **Parameters:**
        - `world_settings` (_[carla.WorldSettings](#carla.WorldSettings)_)  
    - **Return:** _int_  
- <a name="carla.World.on_tick"></a>**<font color="#7fb800">on_tick</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**callback**</font>)  
The method will start callbacks for a defined function `callback`. It will return the ID for this callback so it can be removed with **<font color="#7fb800">remove_on_tick()</font>**.  
    - **Parameters:**
        - `callback` (_[carla.WorldSnapshot](#carla.WorldSnapshot)_) – A defined function with a snapshot as compulsory parameter that will be called every tick.  
    - **Return:** _int_  
- <a name="carla.World.remove_on_tick"></a>**<font color="#7fb800">remove_on_tick</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**callback_id**</font>)  
Stops the callback for `callback_id` started with **<font color="#7fb800">on_tick()</font>**.  
    - **Parameters:**
        - `callback_id` (_callback_) – The callback to be removed.  
- <a name="carla.World.tick"></a>**<font color="#7fb800">tick</font>**(<font color="#00a6ed">**self**</font>)  
This only has effect on synchronous mode, when both client and server move together. The method tells the server when to step to the next frame and returns the id of the newly started frame.  
    - **Return:** _int_  
- <a name="carla.World.wait_for_tick"></a>**<font color="#7fb800">wait_for_tick</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**seconds**=10.0</font>)  
The client tells the server to block calling thread until a **<font color="#7fb800">world_tick()</font>** is received.  
    - **Parameters:**
        - `seconds` (_float_) – Maximum time in seconds the server should wait for a tick. It is set to 10.0 by default.  
    - **Return:** _[carla.WorldSnapshot](#carla.WorldSnapshot)_  
- <a name="carla.World.spawn_actor"></a>**<font color="#7fb800">spawn_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**blueprint**</font>, <font color="#00a6ed">**transform**</font>, <font color="#00a6ed">**attach_to**=None</font>, <font color="#00a6ed">**attachment**=Rigid</font>)  
The method will create, return and spawn an actor into the world. The actor will need an available blueprint to be created and a transform (location and rotation). It can also be attached to a parent with a certain attachment type.  
    - **Parameters:**
        - `blueprint` (_[carla.ActorBlueprint](#carla.ActorBlueprint)_) – The reference from which the actor will be created.  
        - `transform` (_[carla.Transform](#carla.Transform)_) – Contains the location and orientation the actor will be spawned with.  
        - `attach_to` (_[carla.Actor](#carla.Actor)_) – The parent object that the spawned actor will follow around.  
        - `attachment` (_[carla.AttachmentType](#carla.AttachmentType)_) – Determines how fixed and rigorous should be the changes in position according to its parent object.  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.try_spawn_actor"></a>**<font color="#7fb800">try_spawn_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**blueprint**</font>, <font color="#00a6ed">**transform**</font>, <font color="#00a6ed">**attach_to**=None</font>, <font color="#00a6ed">**attachment**=Rigid</font>)  
Same as **<font color="#7fb800">spawn_actor()</font>** but returns <b>None</b> on failure instead of throwing an exception.  
    - **Parameters:**
        - `blueprint` (_[carla.ActorBlueprint](#carla.ActorBlueprint)_) – The reference from which the actor will be created.  
        - `transform` (_[carla.Transform](#carla.Transform)_) – Contains the location and orientation the actor will be spawned with.  
        - `attach_to` (_[carla.Actor](#carla.Actor)_) – The parent object that the spawned actor will follow around.  
        - `attachment` (_[carla.AttachmentType](#carla.AttachmentType)_) – Determines how fixed and rigorous should be the changes in position according to its parent object.  
    - **Return:** _[carla.Actor](#carla.Actor)_  

<h5 style="margin-top: -20px">Getters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.World.get_actor"></a>**<font color="#7fb800">get_actor</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Looks up for an actor by ID and returns <b>None</b> if not found.  
    - **Parameters:**
        - `actor_id` (_int_)  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.get_actors"></a>**<font color="#7fb800">get_actors</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_ids**=None</font>)  
Retrieves a list of [carla.Actor](#carla.Actor) elements, either using a list of IDs provided or just listing everyone on stage. If an ID does not correspond with any actor, it will be excluded from the list returned, meaning that both the list of IDs and the list of actors may have different lengths.  
    - **Parameters:**
        - `actor_ids` (_list_) – The IDs of the actors being searched. By default it is set to <b>None</b> and returns every actor on scene.  
    - **Return:** _[carla.ActorList](#carla.ActorList)_  
- <a name="carla.World.get_blueprint_library"></a>**<font color="#7fb800">get_blueprint_library</font>**(<font color="#00a6ed">**self**</font>)  
Returns a list of actor blueprints available to ease the spawn of these into the world.  
    - **Return:** _[carla.BlueprintLibrary](#carla.BlueprintLibrary)_  
- <a name="carla.World.get_light_manager"></a>**<font color="#7fb800">get_light_manager</font>**(<font color="#00a6ed">**self**</font>)  
Returns an instance of [carla.LightManager](#carla.LightManager) that can be used to handle the lights in the scene.  
    - **Return:** _[carla.LightManager](#carla.LightManager)_  
- <a name="carla.World.get_map"></a>**<font color="#7fb800">get_map</font>**(<font color="#00a6ed">**self**</font>)  
Returns the object containing the navigation map used to describe this world.  
    - **Return:** _[carla.Map](#carla.Map)_  
- <a name="carla.World.get_traffic_light"></a>**<font color="#7fb800">get_traffic_light</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**landmark**</font>)  
Provided a landmark, returns the traffic light object it describes.  
    - **Parameters:**
        - `landmark` (_[carla.Landmark](#carla.Landmark)_) – The landmark object describing a traffic light.  
    - **Return:** _[carla.TrafficLight](#carla.TrafficLight)_  
- <a name="carla.World.get_traffic_sign"></a>**<font color="#7fb800">get_traffic_sign</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**landmark**</font>)  
Provided a landmark, returns the traffic sign object it describes.  
    - **Parameters:**
        - `landmark` (_[carla.Landmark](#carla.Landmark)_) – The landmark object describing a traffic sign.  
    - **Return:** _[carla.TrafficSign](#carla.TrafficSign)_  
- <a name="carla.World.get_random_location_from_navigation"></a>**<font color="#7fb800">get_random_location_from_navigation</font>**(<font color="#00a6ed">**self**</font>)  
This can only be used with walkers. It retrieves a random location to be used as a destination using the **<font color="#7fb800">go_to_location()</font>** method in [carla.WalkerAIController](#carla.WalkerAIController). This location will be part of a sidewalk. Roads, crosswalks and grass zones are excluded. The method does not take into consideration locations of existing actors so if a collision happens when trying to spawn an actor, it will return an error. Take a look at [`spawn_npc.py`](https://github.com/carla-simulator/carla/blob/e73ad54d182e743b50690ca00f1709b08b16528c/PythonAPI/examples/spawn_npc.py#L179) for an example.  
    - **Return:** _[carla.Location](#carla.Location)_  
- <a name="carla.World.get_settings"></a>**<font color="#7fb800">get_settings</font>**(<font color="#00a6ed">**self**</font>)  
Returns an object containing some data about the simulation such as synchrony between client and server or rendering mode.  
    - **Return:** _[carla.WorldSettings](#carla.WorldSettings)_  
- <a name="carla.World.get_snapshot"></a>**<font color="#7fb800">get_snapshot</font>**(<font color="#00a6ed">**self**</font>)  
Returns a snapshot of the world at a certain moment comprising all the information about the actors.  
    - **Return:** _[carla.WorldSnapshot](#carla.WorldSnapshot)_  
- <a name="carla.World.get_spectator"></a>**<font color="#7fb800">get_spectator</font>**(<font color="#00a6ed">**self**</font>)  
Returns the spectator actor. The spectator is a special type of actor created by Unreal Engine, usually with ID=0, that acts as a camera and controls the view in the simulator window.  
    - **Return:** _[carla.Actor](#carla.Actor)_  
- <a name="carla.World.get_weather"></a>**<font color="#7fb800">get_weather</font>**(<font color="#00a6ed">**self**</font>)  
Retrieves an object containing weather parameters currently active in the simulation, mainly cloudiness, precipitation, wind and sun position.  
    - **Return:** _[carla.WeatherParameters](#carla.WeatherParameters)_  
    - **Setter:** _[carla.World.set_weather](#carla.World.set_weather)_  

<h5 style="margin-top: -20px">Setters</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.World.set_weather"></a>**<font color="#7fb800">set_weather</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**weather**</font>)  
Changes the weather parameteres ruling the simulation to another ones defined in an object.  
    - **Parameters:**
        - `weather` (_[carla.WeatherParameters](#carla.WeatherParameters)_) – New conditions to be applied.  
    - **Getter:** _[carla.World.get_weather](#carla.World.get_weather)_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.World.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
The content of the world is parsed and printed as a brief report of its current state.  
    - **Return:** _string_  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

---

## carla.Vehicle<a name="carla.Vehicle"></a><sub><sup>([carla.Actor](#carla.Actor))</sup></sub> <sub><sup>_class_</sup></sub>
A vehicle actor.  

<h3>Instance Variables</h3>
- <a name="carla.Vehicle.bounding_box"></a>**<font color="#f8805a">bounding_box</font>** (_[carla.BoundingBox](#carla.BoundingBox)_)  
The vehicle's bounding box.  

<h3>Methods</h3>
- <a name="carla.Vehicle.apply_control"></a>**<font color="#7fb800">apply_control</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**control**</font>)  
Apply control to this vehicle. The control will take effect on next tick.  
    - **Parameters:**
<<<<<<< HEAD
        - `control` (_[carla.VehicleControl](#carla.VehicleControl)_)  
- <a name="carla.Vehicle.get_control"></a>**<font color="#7fb800">get_control</font>**(<font color="#00a6ed">**self**</font>)  
Returns the control last applied to this vehicle.  
    - **Return:** _[carla.VehicleControl](#carla.VehicleControl)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.Vehicle.apply_physics_control"></a>**<font color="#7fb800">apply_physics_control</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**physics_control**</font>)  
Apply physics control to this vehicle. The control will take effect on the next tick.  
    - **Parameters:**
        - `physics_control` (_[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)_)  
- <a name="carla.Vehicle.get_physics_control"></a>**<font color="#7fb800">get_physics_control</font>**(<font color="#00a6ed">**self**</font>)  
Returns the physics control last applied to this vehicle.  
    - **Return:** _[carla.VehiclePhysicsControl](#carla.VehiclePhysicsControl)_  
    - **Warning:** <font color="#ED2F2F">_This function does call the simulator to retrieve the value._</font>  
- <a name="carla.Vehicle.set_autopilot"></a>**<font color="#7fb800">set_autopilot</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**enabled**=True</font>)  
Switch on/off this vehicle's server-side autopilot.  
    - **Parameters:**
        - `enabled` (_bool_)  
- <a name="carla.Vehicle.get_speed_limit"></a>**<font color="#7fb800">get_speed_limit</font>**(<font color="#00a6ed">**self**</font>)  
Returns the speed limit currently affecting this vehicle. Note that the speed limit is only updated when passing by a speed limit signal, right after spawning a vehicle it might not reflect the actual speed limit of the current road.  
    - **Return:** _float_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.Vehicle.get_traffic_light_state"></a>**<font color="#7fb800">get_traffic_light_state</font>**(<font color="#00a6ed">**self**</font>)  
Returns the state of the traffic light currently affecting this vehicle. If no traffic light is currently affecting the vehicle, return Green.  
    - **Return:** _[carla.TrafficLightState](#carla.TrafficLightState)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.Vehicle.is_at_traffic_light"></a>**<font color="#7fb800">is_at_traffic_light</font>**(<font color="#00a6ed">**self**</font>)  
Returns whether a traffic light is affecting this vehicle.  
=======
        - `synchronous_mode` (_bool_) – Set this to true to enable client-server synchrony.  
        - `no_rendering_mode` (_bool_) – Set this to true to completely disable rendering in the simulation.  
        - `fixed_delta_seconds` (_float_) – Set this time in seconds to get a fixed time-step in between frames. 0.0 means variable time-step and it is the default mode.  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WorldSettings.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WorldSettings](#carla.WorldSettings)</font>)  
Returns <b>True</b> if both objects' variables are the same.  
    - **Return:** _bool_  
- <a name="carla.WorldSettings.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WorldSettings](#carla.WorldSettings)</font>)  
Returns <b>True</b> if both objects' variables are different.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
    - **Return:** _bool_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.Vehicle.get_traffic_light"></a>**<font color="#7fb800">get_traffic_light</font>**(<font color="#00a6ed">**self**</font>)  
Retrieve the traffic light actor currently affecting this vehicle.  
    - **Return:** _[carla.TrafficLight](#carla.TrafficLight)_  
- <a name="carla.Vehicle.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
    - **Return:** _str_  

---

## carla.Walker<a name="carla.Walker"></a><sub><sup>([carla.Actor](#carla.Actor))</sup></sub> <sub><sup>_class_</sup></sub>
A walking actor, pedestrian.  

<h3>Instance Variables</h3>
- <a name="carla.Walker.bounding_box"></a>**<font color="#f8805a">bounding_box</font>** (_[carla.BoundingBox](#carla.BoundingBox)_)  
The walker's bounding box.  

<h3>Methods</h3>
<<<<<<< HEAD
- <a name="carla.Walker.apply_control"></a>**<font color="#7fb800">apply_control</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**control**</font>)  
Apply control to this walker.  
=======
- <a name="carla.WorldSnapshot.find"></a>**<font color="#7fb800">find</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor_id**</font>)  
Given a certain actor ID, returns its corresponding snapshot or <b>None</b> if it is not found.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd
    - **Parameters:**
        - `control` (_[carla.WalkerControl](#carla.WalkerControl)_)  
    - **Note:** <font color="#8E8E8E">_The control will take effect on the next tick.
_</font>  
- <a name="carla.Walker.apply_control"></a>**<font color="#7fb800">apply_control</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**control**</font>)  
Apply bone control to this walker.  
    - **Parameters:**
        - `control` (_[carla.WalkerBoneControl](#carla.WalkerBoneControl)_)  
    - **Note:** <font color="#8E8E8E">_The control will take effect on the next tick.
_</font>  
- <a name="carla.Walker.get_control"></a>**<font color="#7fb800">get_control</font>**(<font color="#00a6ed">**self**</font>)  
Returns the control last applied to this walker.  
    - **Return:** _[carla.WalkerControl](#carla.WalkerControl)_  
    - **Note:** <font color="#8E8E8E">_This function does not call the simulator, it returns the data received in the last tick.
_</font>  
- <a name="carla.Walker.__str__"></a>**<font color="#7fb800">\__str__</font>**(<font color="#00a6ed">**self**</font>)  
    - **Return:** _str_  

<h5 style="margin-top: -20px">Dunder methods</h5>
<div style="padding-left:30px;margin-top:-25px"></div>- <a name="carla.WorldSnapshot.__iter__"></a>**<font color="#7fb800">\__iter__</font>**(<font color="#00a6ed">**self**</font>)  
Method that enables iteration for this class using **<font color="#f8805a">timestamp</font>** as reference value.  
- <a name="carla.WorldSnapshot.__len__"></a>**<font color="#7fb800">\__len__</font>**(<font color="#00a6ed">**self**</font>)  
Returns the amount of [carla.ActorSnapshot](#carla.ActorSnapshot) present in this snapshot.  
    - **Return:** _int_  
- <a name="carla.WorldSnapshot.__eq__"></a>**<font color="#7fb800">\__eq__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WorldSnapshot](#carla.WorldSnapshot)</font>)  
Returns __True__ if both **<font color="#f8805a">timestamp</font>** are the same.  
    - **Return:** _bool_  
- <a name="carla.WorldSnapshot.__ne__"></a>**<font color="#7fb800">\__ne__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**other**=[carla.WorldSnapshot](#carla.WorldSnapshot)</font>)  
Returns <b>True</b> if both **<font color="#f8805a">timestamp</font>** are different.  
    - **Return:** _bool_  

---

## command.ApplyAngularImpulse<a name="command.ApplyAngularImpulse"></a>
Command adaptation of **<font color="#7fb800">add_angular_impulse()</font>** in [carla.Actor](#carla.Actor). Adds angular impulse to an actor.  

<h3>Instance Variables</h3>
- <a name="command.ApplyAngularImpulse.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.ApplyAngularImpulse.impulse"></a>**<font color="#f8805a">impulse</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Angular impulse applied to the actor. Determines magnitude and global axis where it is applied.  

<h3>Methods</h3>
- <a name="command.ApplyAngularImpulse.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**impulse**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_) – Actor or its ID to whom the command will be applied to.  
        - `impulse` (_[carla.Vector3D](#carla.Vector3D)_)  

---

## command.ApplyAngularVelocity<a name="command.ApplyAngularVelocity"></a> <sub><sup>_class_</sup></sub>
Set the actor's angular velocity.  

<h3>Instance Variables</h3>
- <a name="command.ApplyAngularVelocity.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.ApplyAngularVelocity.angular_velocity"></a>**<font color="#f8805a">angular_velocity</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
The 3D angular velocity that will be applied to the actor.  

<h3>Methods</h3>
- <a name="command.ApplyAngularVelocity.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**angular_velocity**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `angular_velocity` (_[carla.Vector3D](#carla.Vector3D)_)  

---

## command.ApplyImpulse<a name="command.ApplyImpulse"></a> <sub><sup>_class_</sup></sub>
Adds impulse to the actor.  

<h3>Instance Variables</h3>
- <a name="command.ApplyImpulse.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.ApplyImpulse.impulse"></a>**<font color="#f8805a">impulse</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
Impulse applied to the actor.  

<h3>Methods</h3>
- <a name="command.ApplyImpulse.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**impulse**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `impulse` (_[carla.Vector3D](#carla.Vector3D)_)  

---

## command.ApplyTransform<a name="command.ApplyTransform"></a> <sub><sup>_class_</sup></sub>
Sets a new transform to the actor.  

<h3>Instance Variables</h3>
- <a name="command.ApplyTransform.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.ApplyTransform.transform"></a>**<font color="#f8805a">transform</font>** (_[carla.Transform](#carla.Transform)_)  
Transformation to be applied.  

<h3>Methods</h3>
- <a name="command.ApplyTransform.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**transform**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `transform` (_[carla.Transform](#carla.Transform)_)  

---

## command.ApplyVehicleControl<a name="command.ApplyVehicleControl"></a> <sub><sup>_class_</sup></sub>
Apply control to the vehicle.  

<h3>Instance Variables</h3>
- <a name="command.ApplyVehicleControl.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Vehicle actor affected by the command.  
- <a name="command.ApplyVehicleControl.control"></a>**<font color="#f8805a">control</font>** (_[carla.VehicleControl](#carla.VehicleControl)_)  
Vehicle control to be applied.  

<h3>Methods</h3>
- <a name="command.ApplyVehicleControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**control**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `control` (_[carla.VehicleControl](#carla.VehicleControl)_)  

---

## command.ApplyVelocity<a name="command.ApplyVelocity"></a> <sub><sup>_class_</sup></sub>
Sets actor's velocity.  

<h3>Instance Variables</h3>
- <a name="command.ApplyVelocity.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.ApplyVelocity.velocity"></a>**<font color="#f8805a">velocity</font>** (_[carla.Vector3D](#carla.Vector3D)_)  
The 3D velocity applied to the actor.  

<h3>Methods</h3>
- <a name="command.ApplyVelocity.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**velocity**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `velocity` (_[carla.Vector3D](#carla.Vector3D)_)  

---

## command.ApplyWalkerControl<a name="command.ApplyWalkerControl"></a> <sub><sup>_class_</sup></sub>
Apply control to the walker.  

<h3>Instance Variables</h3>
- <a name="command.ApplyWalkerControl.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Walker actor affected by the command.  
- <a name="command.ApplyWalkerControl.control"></a>**<font color="#f8805a">control</font>** (_[carla.VehicleControl](#carla.VehicleControl)_)  
Walker control to be applied.  

<h3>Methods</h3>
- <a name="command.ApplyWalkerControl.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**control**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `control` (_[carla.WalkerControl](#carla.WalkerControl)_)  

---

## command.ApplyWalkerState<a name="command.ApplyWalkerState"></a> <sub><sup>_class_</sup></sub>
Apply a state to the walker actor.  

<h3>Instance Variables</h3>
- <a name="command.ApplyWalkerState.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Walker actor affected by the command.  
- <a name="command.ApplyWalkerState.transform"></a>**<font color="#f8805a">transform</font>** (_[carla.Transform](#carla.Transform)_)  
Transform to be applied.  
- <a name="command.ApplyWalkerState.speed"></a>**<font color="#f8805a">speed</font>** (_float_)  
Speed to be applied.  

<h3>Methods</h3>
- <a name="command.ApplyWalkerState.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**transform**</font>, <font color="#00a6ed">**speed**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `transform` (_[carla.Transform](#carla.Transform)_)  
        - `speed` (_float_)  

---

<<<<<<< HEAD
## command.DestroyActor<a name="command.DestroyActor"></a> <sub><sup>_class_</sup></sub>
Tell the simulator to destroy this Actor, and return whether the actor was successfully destroyed. It has no effect if the Actor was already successfully destroyed.  
=======
## command.DestroyActor<a name="command.DestroyActor"></a>
Command adaptation of **<font color="#7fb800">destroy()</font>** in [carla.Actor](#carla.Actor) that tells the simulator to destroy this actor. It has no effect if the actor was already destroyed. When executed with **<font color="#7fb800">apply_batch_sync()</font>** in [carla.Client](#carla.Client) there will be a <b>command.Response</b> that will return a boolean stating whether the actor was successfully destroyed.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="command.DestroyActor.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  

<h3>Methods</h3>
- <a name="command.DestroyActor.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  

---

## command.Response<a name="command.Response"></a> <sub><sup>_class_</sup></sub>
Execution result of a command, contains either an error string or an actor ID, depending on whether or not the command succeeded. See [carla.Client.apply_batch_sync](#carla.Client.apply_batch_sync).  

<h3>Instance Variables</h3>
- <a name="command.Response.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.Response.error"></a>**<font color="#f8805a">error</font>** (_str_)  

<h3>Methods</h3>
- <a name="command.Response.has_error"></a>**<font color="#7fb800">has_error</font>**(<font color="#00a6ed">**self**</font>)  
<<<<<<< HEAD

---

## command.SetAutopilot<a name="command.SetAutopilot"></a> <sub><sup>_class_</sup></sub>
Switch on/off vehicle's server-side autopilot.  
=======
Returns <b>True</b> if the command execution fails, and <b>False</b> if it was successful.  
    - **Return:** _bool_  

---

## command.SetAutopilot<a name="command.SetAutopilot"></a>
Command adaptation of **<font color="#7fb800">set_autopilot()</font>** in [carla.Vehicle](#carla.Vehicle). Turns on/off the vehicle's autopilot mode.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Instance Variables</h3>
- <a name="command.SetAutopilot.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor that is affected by the command.  
- <a name="command.SetAutopilot.enabled"></a>**<font color="#f8805a">enabled</font>** (_bool_)  
<<<<<<< HEAD
If the autopilot is enabled or not.  
=======
If autopilot should be activated or not.  
- <a name="command.SetAutopilot.port"></a>**<font color="#f8805a">port</font>** (_uint16_)  
Port of the Traffic Manager where the vehicle is to be registered or unlisted.  
>>>>>>> 4dc4cb81853670d83ee067ae747c8c851926dacd

<h3>Methods</h3>
- <a name="command.SetAutopilot.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**enabled**</font>, <font color="#00a6ed">**port**=8000</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `enabled` (_bool_)  
        - `port` (_uint16_) – The Traffic Manager port where the vehicle is to be registered or unlisted. If __None__ is passed, it will consider a TM at default port `8000`.  

---

## command.SetSimulatePhysics<a name="command.SetSimulatePhysics"></a> <sub><sup>_class_</sup></sub>
Whether an actor will be affected by physics or not.  

<h3>Instance Variables</h3>
- <a name="command.SetSimulatePhysics.actor_id"></a>**<font color="#f8805a">actor_id</font>** (_int_)  
Actor affected by the command.  
- <a name="command.SetSimulatePhysics.enabled"></a>**<font color="#f8805a">enabled</font>** (_bool_)  
If physics will affect the actor.  

<h3>Methods</h3>
- <a name="command.SetSimulatePhysics.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**actor**</font>, <font color="#00a6ed">**enabled**</font>)  
    - **Parameters:**
        - `actor` (_[carla.Actor](#carla.Actor) or int_)  
        - `enabled` (_bool_)  

---

## command.SpawnActor<a name="command.SpawnActor"></a> <sub><sup>_class_</sup></sub>
Spawn an actor into the world based on the blueprint provided and the transform. If a parent is provided, the actor is attached to parent.  

<h3>Instance Variables</h3>
- <a name="command.SpawnActor.transform"></a>**<font color="#f8805a">transform</font>** (_[carla.Transform](#carla.Transform)_)  
Transform to be applied.  
- <a name="command.SpawnActor.parent_id"></a>**<font color="#f8805a">parent_id</font>** (_int_)  
Parent's actor id.  

<h3>Methods</h3>
- <a name="command.SpawnActor.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>)  
- <a name="command.SpawnActor.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**blueprint**</font>, <font color="#00a6ed">**transform**</font>)  
    - **Parameters:**
        - `blueprint` (_[carla.ActorBlueprint](#carla.ActorBlueprint)_)  
        - `transform` (_[carla.Transform](#carla.Transform)_)  
- <a name="command.SpawnActor.__init__"></a>**<font color="#7fb800">\__init__</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**blueprint**</font>, <font color="#00a6ed">**transform**</font>, <font color="#00a6ed">**parent**</font>)  
    - **Parameters:**
        - `blueprint` (_[carla.ActorBlueprint](#carla.ActorBlueprint)_)  
        - `transform` (_[carla.Transform](#carla.Transform)_)  
        - `parent` (_[carla.Actor](#carla.Actor) or int_)  
- <a name="command.SpawnActor.then"></a>**<font color="#7fb800">then</font>**(<font color="#00a6ed">**self**</font>, <font color="#00a6ed">**command**</font>)  
Link another command to be executed right after.  
    - **Parameters:**
        - `command` (_any carla Command_) – a Carla command.  

---