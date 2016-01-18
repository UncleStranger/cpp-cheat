/*
Get information about OpenGL.
*/

#include <GL/glut.h>
#include <GL/glext.h>

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int output;

    /*
    Mandatory for glGetString to work.
    http://stackoverflow.com/questions/12184506/why-doesnt-this-code-get-the-opengl-version
    */
    glutInit(&argc, argv);
    glutCreateWindow(argv[0]);

    /* TODO print types properly. */
    printf("VENDOR                     = %s\n", (char*)glGetString(GL_VENDOR));
    printf("RENDERER                   = %s\n", (char*)glGetString(GL_RENDERER));
    printf("SHADING_LANGUAGE_VERSIONG  = %s\n", (char*)glGetString(0x8B8C));
    printf("EXTENSIONS                 = %s\n", (char*)glGetString(GL_EXTENSIONS));

    glGetIntegerv(GL_RED_BITS, &output);
    printf("RED_BITS                   = %d\n", output);
    glGetIntegerv(GL_GREEN_BITS, &output);
    printf("GREEN_BITS                 = %d\n", output);
    glGetIntegerv(GL_BLUE_BITS, &output);
    printf("BLUE_BITS                  = %d\n", output);
    glGetIntegerv(GL_ALPHA_BITS, &output);
    printf("ALPHA_BITS                 = %d\n", output);
    glGetIntegerv(GL_DEPTH_BITS, &output);
    printf("DEPTH_BITS                 = %d\n", output);
    glGetIntegerv(GL_STENCIL_BITS, &output);
    printf("STENCIL_BITS               = %d\n", output);
    glGetIntegerv(GL_MAX_LIGHTS, &output);
    printf("MAX_LIGHTS                 = %d\n", output);
    glGetIntegerv(GL_MAX_TEXTURE_SIZE, &output);
    printf("MAX_TEXTURE_SIZE           = %d\n", output);
    glGetIntegerv(GL_MAX_CLIP_PLANES, &output);
    printf("MAX_CLIP_PLANES            = %d\n", output);
    glGetIntegerv(GL_MAX_MODELVIEW_STACK_DEPTH, &output);
    printf("MAX_MODELVIEW_STACK_DEPTH  = %d\n", output);
    glGetIntegerv(GL_MAX_PROJECTION_STACK_DEPTH, &output);
    printf("MAX_PROJECTION_STACK_DEPTH = %d\n", output);
    glGetIntegerv(GL_MAX_ATTRIB_STACK_DEPTH, &output);
    printf("MAX_ATTRIB_STACK_DEPTH     = %d\n", output);
    glGetIntegerv(GL_MAX_TEXTURE_STACK_DEPTH, &output);
    printf("MAX_TEXTURE_STACK_DEPTH    = %d\n", output);

    return EXIT_SUCCESS;
}