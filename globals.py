# Filename: globals.py
#
# Purpose: To handle global state within program slices
# 
# @authors Albert Jiro Hynes, Max Milazzo

# global to hold globals per file. dictionary of dictionaries
# format: {name : type}
globals = {}

def get_globals():
    """simple getter for dictionary, so globals aren't across files
    """
    return globals

def record_global(name, type):
    """records global in the dictionary of dictionaries
    """
    globals[name] = type
    return

def add_global_params(filename, srcmlparams):
    """adds the appropriate global params for the specific issue/file
    
    NOTE: a bit of a flawed method. Could be error prone but in good code
          it wouldn't really be an issue? Comments are not saved so the 
          mention of the name of the global will not be a problem outside
          the specific circumstance where the name is defined locally
    """
    # initialize file_globals
    file_globals = {}
    
    # open the file, see if ANY mention of global vars
    with open(filename, "r") as f:
        # get the entirety of the file
        code = f.read()
        
        # for every global, check that it's in there
        for global_var in globals:
            glob_string = f"{globals[global_var]} {global_var}"
            
            if(glob_string in code):
                file_globals[global_var] = globals[global_var]
    
    # append globals to func
    for global_var in file_globals.keys():
        # get important info
        glob_type = file_globals[global_var]
        
        # create dict for parameters
        glob_param = {
            "parameter": f"{glob_type} {global_var}",
            "param_name": global_var,
            "param_type": glob_type,
            "function_ptr": 0,
        }
        
        # add to param_list
        srcmlparams.append(glob_param)
    
    # return the relevant globals for this file
    return file_globals


