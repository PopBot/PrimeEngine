
-- this script is in lua format
-- this is a meta script that fills in data that is passed to 'myScript' that in turn calls C++ function
-- some of the data can be set by default, some of the data might be required to be edited from maya
function fillMetaInfoTable(args) -- the script fromat requires existance of this function

-- user modifed data

-- TODO: use ImrodEnemy.lua when it is implemented
-- Changed per object.
-- This is a template changed per object.
args['myScript']="StaticMesh.lua"
args['myScriptPackage']="Default"


-- At some point:
--
-- args['myScript']="StaticMesh.lua"
-- args['myScriptPackage']="Default"

-- Needed for StaticMesh
args['meshName'] = "imrod.x_main_mesh.mesha"
args['meshPackage'] = "ExportTutorial"

-- ImrodEnemy specific information

args['health'] = 100
args['weapon'] = 'sword'
args['leathality'] = 50
args['range'] = 1000 -- 10 meters
args['behavior'] = 'random_patrol'


end -- required
