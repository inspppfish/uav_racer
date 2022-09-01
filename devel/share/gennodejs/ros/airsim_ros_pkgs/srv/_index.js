
"use strict";

let Reset = require('./Reset.js')
let Takeoff = require('./Takeoff.js')
let SetGPSPosition = require('./SetGPSPosition.js')
let Land = require('./Land.js')
let LandGroup = require('./LandGroup.js')
let TakeoffGroup = require('./TakeoffGroup.js')
let SetLocalPosition = require('./SetLocalPosition.js')

module.exports = {
  Reset: Reset,
  Takeoff: Takeoff,
  SetGPSPosition: SetGPSPosition,
  Land: Land,
  LandGroup: LandGroup,
  TakeoffGroup: TakeoffGroup,
  SetLocalPosition: SetLocalPosition,
};
