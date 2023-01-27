t = {}
t["mayaRep"] = "Maya/Meshes/Imrod/Target.ma"

t["callerScript"] = '''
-- this script is in lua format
-- this is a meta script that fills in data that is passed to 'myScript' that in turn calls C++ function
-- some of the data can be set by default, some of the data might be required to be edited from maya
function fillMetaInfoTable(args) -- the script fromat requires existance of this function


args['myScript']="StaticMesh.lua"
args['myScriptPackage']="Default"

-- Open the Imrod character mesh
args['meshName'] = "imrod.x_main_mesh.mesha"
args['meshPackage'] = "Default"


end -- required
'''
