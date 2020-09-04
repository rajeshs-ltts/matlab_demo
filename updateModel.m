function [ret]=updateModel(model_file)
try
    bdclose all
    disp(strcat('model name is: ',model_file))
    %model_file = 'odo_trip_demo';
	load_system(model_file);
	disp('Model Loaded successfully')
	set_param(model_file,'SimulationCommand','update');
	disp('Update Command invoked successfully')
    %save_system(model_file);
    close_system(model_file);
	
	disp('Closing Model...Model updated successfully')
	ret = 0;
	exit(0);
catch
    disp('Error While updating the Model')
    ret = 1;
	exit(1);
end

end
	