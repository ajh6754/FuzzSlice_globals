# Filename: globals.py
#
# Purpose: To handle global state within program slices
# 
# @authors Albert Jiro Hynes, Max Milazzo

from srcml import DataType

# global to hold all globals, accessible outside this file
globals = {}

# format:
# "parameter" : (type) (name);(line #)

"""
# append global parameters to the func
def add_global_params(func):
    # append globals to func
    for global_var in globals:
        # get important info
        glob_type = globals[global_var]
        
        # create dict for parameters
        glob_param = {
            "parameter": f"{glob_type} {global_var}",
            "param_name": global_var,
            "param_type": glob_type,
            "function_ptr": 0,
            "generator_type": DataType.UNKNOWN,
            "param_usage": "UNKNOWN",
            "is_global": True # super secret special 7th type
        }
        
        # add to param_list
        func["params"].append(glob_param)

    # reset the globals (might not need this)
    #globals.reset_globals()
    
"""

def add_global_params(srcmlparams):
    # append globals to func
    for global_var in globals:
        # get important info
        glob_type = globals[global_var]
        
        # create dict for parameters
        glob_param = {
            "parameter": f"{glob_type} {global_var}",
            "param_name": global_var,
            "param_type": glob_type,
            "function_ptr": 0,
        }
        
        # add to param_list
        srcmlparams.append(glob_param)

    # reset the globals (might not need this)
    #globals.reset_globals()

# reset globals function, might be used might not
def reset_globals():
    globals = {}


