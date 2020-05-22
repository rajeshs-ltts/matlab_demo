pipeline {
    agent any
    stages {
		stage('Model Advisory Check') {
            steps {
				echo 'Deleting the previous zip files'
				echo 'Model checks for ISO 26262'
				echo 'MAAB guidelines check are triggered'
				bat '"D:\\MATLAB2019b\\bin\\matlab.exe" -wait -nodisplay -nosplash -nodesktop -r " try, run(\'jenkins_demo.m\'), catch, exit(1), end;"'
				echo 'Model Advisory Check Completed'
            }
        }		
    }
}