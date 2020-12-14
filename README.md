
# Modern OpenGL Project touching core concepts 

##Project Description
	This project is creted to touch upon basic concepts of OpenGL.
	Some of the basic concepts included in here are:
		1.Handling model,view, projection matrices, transformation 
		2.Use of flexible Modern pipeline through shaders( files written in GLSL language)
		3.Texture Processing
		4.Handling Keyboard and Mouse inputs
		5.3D Model loading ( Only Wavefront(.obj) type is considered here)

##Build Information and Dependencies
	The Development Plantform/Environment is Windows.
	The project uses Visual Studio 2019 IDE for Building/Editing the project
	MSVC (C++) compiler (32-bit) is used for compilation and build. 
	
	###Dependencies
		The project uses Modern OpenGL(v3.3) specific libraries that are listed below:
			1.GLEW: cross-platform open-source C/C++ extension loading library
			2.GLFW: To create and manage windows and OpenGL contexts, as well as handle, 
			        keyboard and mouse inputs
			3.GLM: Header only C++ mathematics library for graphics
			4.ASSIMP: cross-platform 3D model import library to process 3D models
			5.stb_image: header only file to help in processing Textures(from *.png/*.jpeg files)
	
	*Make sure Dependencies folder which contains above mentioned libraries is just outside
	 the Solution directory of Visual Studio to avoid any path error issue.
     Following seetings need to be adopted:
	 
	 Below "include" directories must be setup properly
     $(SolutionDir)../Dependencies/GLEW/include
	 $(SolutionDir)../Dependencies/GLFW/include
	 $(SolutionDir)../Dependencies/GLM/include
     $(SolutionDir)../Dependencies/ASSIMP/include
     $(SolutionDir)../Dependencies/IMAGE_LOADER/include

	 Below "*.lib include" directories must be setup properly
     $(SolutionDir)../Dependencies/GLEW/lib
     $(SolutionDir)../Dependencies/GLFW/lib
     $(SolutionDir)../Dependencies/ASSIMP/lib

	 Below "*.lib" files must be accessible while building the project
     opengl32.lib => this is windows specific 
     glew32.lib
     glfw3.lib
     assimp-vc140-mt.lib	 
	 
	 Below "*.dll" files must be accessible to exe file
	 assimp-vc140-mt.dll
	 glew32.dll
	 glfw3.dll *
	
##Running the *.exe file and handling inputs:
	The project uses an initial window size of 800x600 pixels and captures keyboard and
	mouse inputs. The change in keyboard and mouse inputs are simulated as a camera( FPS
    camera)	
	
	Keyboard and Mouse inputs can be visualized/experienced through below actions:
	1. Buttons "W","S","A","D" to capture Up,Down,Left,Right movements of camera
    2. Mouse movements to capture pitch and left/right rotation	view
	3. Scrolling Mouse Up : +Zoom ;  Scrolling Mouse Down: -Zoom
	
