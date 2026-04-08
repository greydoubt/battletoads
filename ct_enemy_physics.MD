# DOF

    The direction of fire, with north at 0 degrees and east at 90 degrees. Input field.
        TIP: You can use the compass to set this value by pointing the top of the device toward the direction of fire. The current compass value appears in the DOF field. You can press START to use this value. You can manually enter a value by pressing DOWN or UP.
        NOTE: The DOF is used only for calculating the Coriolis effect. If you are shooting at a target less than 1,000 yards away, this input field is optional. 

# Elevation

    The vertical portion of the aiming solution, displayed in milliradians (mil) or minute of angle (MOA). 

# RNG

    The distance to the target, displayed in yards or meters. Input field. 


# W 1/2
    The wind speed 1, wind speed 2, and wind direction. For example, if the wind direction (DIR) is 9:00, the wind is blowing left to right as viewed by the shooter. Input field.
    
      ## NOTE: The wind speed 2 field is optional. Using both wind speed 1 and wind speed 2 is not an effective way to account for different wind speeds at different distances between you and the target. Using these fields is a way to bracket (isolate) the wind values and calculate minimum and maximum windage values for the solution.
Windage 1

    The horizontal portion of the aiming solution based on the wind speed 1 and wind direction, displayed in milliradians (mil) or minute of angle (MOA). 
Windage 2

    The horizontal portion of the aiming solution based on the wind speed 2 and wind direction, displayed in milliradians (mil) or minute of angle (MOA). 

Additional Output Fields

Aero. Jump. Effect

    The amount of the elevation solution attributed to aerodynamic jump. Aerodynamic jump is the vertical deflection of the bullet due to a crosswind. Aerodynamic jump is calculated based on the wind speed 1 value. If there is no crosswind component or wind value, this value is zero. 
Bullet Drop

    The total drop the bullet experiences along its flight path, displayed in inches. 
Cos. Incl. Ang.

    The cosine of the inclination angle to the target. 
H. Cor. Effect

    The horizontal Coriolis effect. The horizontal Coriolis effect is the amount of the windage solution attributed to the Coriolis effect. This is always calculated by the device, although the impact may be minimal if you are not shooting at extended range. 
Lead

    The horizontal correction needed to hit a target moving left or right at a given speed.
    TIP: When you enter the speed of your target, the device factors the necessary windage required into the total windage value. 
Max. Ord.

    The maximum ordinance. The maximum ordinance is the maximum height above the axis of the barrel that a bullet will reach along its flight path. 
Max. Ord. Range

    The range at which the bullet will reach its maximum ordinance. 
Remaining Energy

    The remaining energy of the bullet at target impact, displayed in foot-pounds of force (ft. lbf) or joules (J). 
Spin Drift

    The amount of the windage solution attributed to the spin drift (gyroscopic drift). For example, in the northern hemisphere, a bullet shot out of a right-hand twist barrel will always deflect slightly to the right as it travels. 
Time of Flight

    The time of flight, which indicates the time required for a bullet to reach its target at a given range. 
V. Cor. Effect

    The vertical Coriolis effect. The vertical Coriolis effect is the amount of the elevation solution attributed to the Coriolis effect. This is always calculated by the device, although the impact may be minimal if you are not shooting at extended range. 
Velocity

    The estimated velocity of the bullet when it impacts the target. 
Velocity Mach

    The estimated velocity of the bullet when it impacts the target, displayed as a factor of mach speed. 

Environment Fields

Amb/Stn Pressure

    The ambient (station) pressure. Ambient pressure is not adjusted to represent sea level (barometric) pressure. Ambient pressure is required for the ballistics shooting solution. Input field.
    TIP: You can manually enter this value, or you can select the Use Current Pressure option to use the pressure value from the internal sensor in the device. 
Humidity

    The percentage of moisture in the air. Input field. 
Latitude

    The horizontal location on the Earth's surface. Negative values are below the equator. Positive values are above the equator. This value is used to calculate the vertical and horizontal Coriolis drift. Input field.
    TIP: You can select the Use Current Position option to use the GPS coordinates from your device.
    NOTE: The Latitude is used only for calculating the Coriolis effect. If you are shooting at a target less than 1,000 yards away, this input field is optional. 
Temperature

    The temperature at your current location. Input field.
    TIP: You can manually enter the temperature reading from a connected tempe™ sensor or other temperature source. This field does not automatically update when connected to a tempe sensor. 
Wind Direction

    The direction from which the wind is coming. For example, a 9:00 wind blows from your left to your right. Input field. 
Wind Mode

    Allows you to set the Wind Direction setting relative to either your Direction of Fire (DOF) or relative to true north (True Wind Direction).
    NOTE: When you are engaging multiple targets at different DOFs, the True Wind Direction option is useful because you only have to adjust your DOF, and your Wind Direction remains the same. 
Wind Speed 1

    The wind speed used in the shooting solution. Input field. 
Wind Speed 2

    An optional, additional wind speed used in the shooting solution. Input field.
    TIP: You can use two wind speeds to calculate a windage solution that contains a high and low value. The actual windage to apply for the shot should fall in this range. 

Target Fields

Direction of Fire

    The direction of fire, with north at 0 degrees and east at 90 degrees. Input field.
    NOTE: The Direction of Fire is used only for calculating the Coriolis effect. If you are shooting at a target less than 1,000 yards away, this input field is optional. 
Inclination

    The angle of inclination of the shot. A negative value indicates a downhill shot. A positive values indicates an uphill shot. The shooting solution multiplies the vertical portion of the solution by the cosine of the inclination angle to calculate the adjusted solution for an uphill or downhill shot. Input field. 
Range

    The distance to the target, displayed in yards or meters. Input field. 
Speed

    The speed of a moving target, displayed in miles per hour (mph) or kilometers per hour (km/h). A negative value indicates a target moving left. A positive value indicates a target moving right. Input field. 

Profile Fields, Bullet Properties

Ballistic Coefficient

    The manufacturer's ballistic coefficient for your bullet. Input field.
    TIP: When you use one of the Applied Ballistics® custom drag curves, the ballistic coefficient will display a value of 1.000. 
Bullet Diameter

    The bullet diameter measured in inches. Input field.
    NOTE: The diameter of the bullet may vary from the common name of the round. For example, a 300 Win Mag is actually .308 inches in diameter. 
Bullet Length

    The length of the bullet measured in inches. Input field. 
Bullet Weight

    The bullet weight measured in grains. Input field. 
Drag Curve

    The Applied Ballistics custom drag curve, or the G1 or G7 standard projectile models. Input field.
    NOTE: Most long range rifle bullets are closer to the G7 standard. 

Profile Fields, Gun Properties

Muzzle Velocity

    The speed of the bullet as it leaves the muzzle. Input field.
    NOTE: This field is required for accurate calculations by the shooting solution. If you calibrate the muzzle velocity, this field may be updated automatically for a more accurate firing solution. 
Output Units

    The output units of measure. A milliradian (mil) is 3.438 inches at 100 yards. A minute of angle (MOA) is 1.047 inches at 100 yards. 
Sight Height

    The distance from the center axis of the rifle barrel to the center axis of the scope. Input field.
    TIP: You can easily determine this value by measuring from the top of the bolt to the center of the windage turret, and adding half of the diameter of the bolt. 
SSF - Elevation

    A linear multiplier that accounts for vertical scaling. Not all rifle scopes track perfectly, so the ballistics solution requires a correction to scale according to a particular rifle scope. For example, if a turret is moved 10 mil but the impact is 9 mil, the sight scale is 0.9. Input field. 
SSF - Windage

    A linear multiplier that accounts for horizontal scaling. Not all rifle scopes track perfectly, so the ballistics solution requires a correction to scale according to a particular rifle scope. For example, if a turret is moved 10 mil but the impact is 9 mil, the sight scale is 0.9. Input field. 
Twist Rate

    The distance it takes for the rifling of your barrel to make one full rotation. Rifle twist is often provided by the gun or barrel manufacturer. Input field. 
Zero Height

    An optional modification to impact elevation at zero range. This is often used when adding a suppressor or using a subsonic load. For example, if you add a suppressor and your bullet impacts the target 1 inch higher than expected, your Zero Height is 1 inch. You must set this to zero when you remove the suppressor. Input field. 
Zero Offset

    An optional modification to impact windage at zero range. This is often used when adding a suppressor or using a subsonic load. For example, if you add a suppressor and your bullet impacts the target 1 inch to the left of the expected impact, your Zero Offset is -1 inch. You must set this to zero when you remove the suppressor. Input field. 
Zero Range

    The range at which the rifle was zeroed. Input field. 

Profile Fields, Gun Properties, Calibrate Muzzle Velocity

Range

    The distance from the muzzle to the target. Input field.
    TIP: You should enter a value as close as possible to the range suggested in the shooting solution. This is the range where the bullet slows to Mach 1.2 and begins to enter the transonic range. 
True Drop

    The actual distance the bullet falls while in flight to the target, displayed in milliradians (mil) or minute of angle (MOA). Input field. 

Profile Fields, Gun Properties, Calibrate Drop Scale Factor

Range

    The range from which you are shooting. Input field.
    TIP: This range should be within 90% of the recommended range suggested in the shooting solution. Values that are less than 80% of the recommended range will not provide a valid adjustment. 
True Drop

    The actual distance the bullet falls when fired at a specific range, displayed in milliradians (mil) or minute of angle (MOA). Input field. 

