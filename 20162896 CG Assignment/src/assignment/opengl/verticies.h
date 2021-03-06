#ifndef VERT_H
#define VERT_H

    //A Vertex array, contains x y z cordindates between 1 and -1 (Normalised device coordindates)
	//z=0, to give the illusion of 2d.
    static float vertices[] = {
        //Position Vector       //Normal Vector     //Texture coordindates
        //Back face
        -0.5f, -0.5f, -0.5f, 	0.0f, 0.0f, -1.0f, 	0.0f, 0.0f,
        0.5f, -0.5f, -0.5f, 	0.0f, 0.0f, -1.0f, 	1.0f, 0.0f,
        0.5f, 0.5f, -0.5f, 	    0.0f, 0.0f, -1.0f, 	1.0f, 1.0f,
        0.5f, 0.5f, -0.5f, 	    0.0f, 0.0f, -1.0f, 	1.0f, 1.0f,
        -0.5f, 0.5f, -0.5f, 	0.0f, 0.0f, -1.0f, 	0.0f, 1.0f,
        -0.5f, -0.5f, -0.5f, 	0.0f, 0.0f, -1.0f, 	0.0f, 0.0f,
        //Front face
        -0.5f, -0.5f, 0.5f, 	0.0f, 0.0f, 1.0f, 	0.0f, 0.0f,
        0.5f, -0.5f, 0.5f, 	    0.0f, 0.0f, 1.0f, 	1.0f, 0.0f,
        0.5f, 0.5f, 0.5f, 	    0.0f, 0.0f, 1.0f, 	1.0f, 1.0f,
        0.5f, 0.5f, 0.5f, 	    0.0f, 0.0f, 1.0f, 	1.0f, 1.0f,
        -0.5f, 0.5f, 0.5f, 	    0.0f, 0.0f, 1.0f, 	0.0f, 1.0f,
        -0.5f, -0.5f, 0.5f, 	0.0f, 0.0f, 1.0f, 	0.0f, 0.0f,
        //Right face
        -0.5f, 0.5f, 0.5f, 	    -1.0f, 0.0f, 0.0f, 	0.0f, 1.0f,
        -0.5f, 0.5f, -0.5f, 	-1.0f, 0.0f, 0.0f, 	1.0f, 1.0f,
        -0.5f, -0.5f, -0.5f, 	-1.0f, 0.0f, 0.0f, 	1.0f, 0.0f,
        -0.5f, -0.5f, -0.5f, 	-1.0f, 0.0f, 0.0f, 	1.0f, 0.0f,
        -0.5f, -0.5f, 0.5f, 	-1.0f, 0.0f, 0.0f, 	0.0f, 0.0f,
        -0.5f, 0.5f, 0.5f, 	    -1.0f, 0.0f, 0.0f, 	0.0f, 1.0f,
        //Left face
        0.5f, 0.5f, 0.5f, 	    1.0f, 0.0f, 0.0f, 	0.0f, 1.0f,
        0.5f, 0.5f, -0.5f, 	    1.0f, 0.0f, 0.0f, 	1.0f, 1.0f,
        0.5f, -0.5f, -0.5f, 	1.0f, 0.0f, 0.0f, 	1.0f, 0.0f,
        0.5f, -0.5f, -0.5f, 	1.0f, 0.0f, 0.0f, 	1.0f, 0.0f,
        0.5f, -0.5f, 0.5f, 	    1.0f, 0.0f, 0.0f, 	0.0f, 0.0f,
        0.5f, 0.5f, 0.5f, 	    1.0f, 0.0f, 0.0f, 	0.0f, 1.0f,
        //Bottom face
        -0.5f, -0.5f, -0.5f, 	0.0f, -1.0f, 0.0f, 	1.0f, 0.0f,
        0.5f, -0.5f, -0.5f, 	0.0f, -1.0f, 0.0f, 	1.0f, 1.0f,
        0.5f, -0.5f, 0.5f, 	    0.0f, -1.0f, 0.0f, 	0.0f, 1.0f,
        0.5f, -0.5f, 0.5f, 	    0.0f, -1.0f, 0.0f, 	0.0f, 1.0f,
        -0.5f, -0.5f, 0.5f, 	0.0f, -1.0f, 0.0f, 	0.0f, 0.0f,
        -0.5f, -0.5f, -0.5f, 	0.0f, -1.0f, 0.0f, 	1.0f, 0.0f,
        //Top face
        -0.5f, 0.5f, -0.5f, 	0.0f, 1.0f, 0.0f, 	1.0f, 0.0f,
        0.5f, 0.5f, -0.5f, 	    0.0f, 1.0f, 0.0f, 	1.0f, 1.0f,
        0.5f, 0.5f, 0.5f, 	    0.0f, 1.0f, 0.0f, 	0.0f, 1.0f,
        0.5f, 0.5f, 0.5f, 	    0.0f, 1.0f, 0.0f, 	0.0f, 1.0f,
        -0.5f, 0.5f, 0.5f, 	    0.0f, 1.0f, 0.0f, 	0.0f, 0.0f,
        -0.5f, 0.5f, -0.5f, 	0.0f, 1.0f, 0.0f, 	1.0f, 0.0f
    };

#endif