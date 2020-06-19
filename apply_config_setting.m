%this file attaches the config settings to the model and save it.
function [ret]=apply_config_setting()
try
    bdclose all
    
    model_file = 'odo_trip_demo';
    new_config_file = 'new_config_settings.m';
    old_config_file = 'old_config_settings.m';
    
    load_system(model_file);
    
    disp('Apply old/default configuration settings to the model')
    %attach old config file to the model and save it
    Simulink.BlockDiagram.loadActiveConfigSet(model_file,old_config_file);
    
    disp('..')
    disp('..')
    
    %check the old configuration settings of the model
    disp('Get the old configuration settings of the model')
    cf = getActiveConfigSet(model_file);    
    stop_time_val = get_param(cf,'StopTime');    
    disp(strcat('Old stop time Value = ',stop_time_val))
    
    %save the model
    save_system(model_file);
    
    disp('..')
    disp('..')
    
    disp('Apply new configuration settings to the model')
    %attach new config file to the model and save it
    Simulink.BlockDiagram.loadActiveConfigSet(model_file,new_config_file);
    
    disp('..')
    disp('..')
    
    disp('Saving the model')
    %save the model
    save_system(model_file);
    
    disp('..')
    disp('..')
    
    %check the updated configuration settings applied to the model
    disp('Check the new configuration settings of the model')
    cf = getActiveConfigSet(model_file);    
    stop_time_val = get_param(cf,'StopTime');    
    disp(strcat('Updated stop time value = ',stop_time_val))
    
    disp('..')
    disp('..')
    
    disp('Model configuration settings applied successfully to the Model')
    
    close_system(model_file);
	
	disp('Simulating the Model with applied Configuration')
    
    %sim(model_file,'SimulationMode','normal');
	
	disp('Simulation Successfully Completed')
    
    ret = 0;
	%exit(0);
catch
    disp('Error While applying the configuration set to the Model')
    ret = 1;
	exit(3);
end
end