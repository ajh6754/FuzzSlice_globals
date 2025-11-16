# Filename: globals.py
#
# Purpose: To handle global state within program slices
# 
# @authors Albert Jiro Hynes, Max Milazzo

from srcml import DataType

# global to hold all globals, accessible outside this file
globals = {}

# format: type : name

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

def create_globals_file(file_name):
    """ creates a json file to record all globals in project
    """
    return None

def check_globals_for_issue(file_name):
    """ accesses the (xml? c?) file to pick the proper globals for 
        the specific issue
    """
    return None

# reset globals function, might be used might not
def reset_globals():
    globals = {}


