#pragma once

#include<GL/glew.h>
#include<string>


class Texture
{
public:
	Texture();

	Texture(char* fileLoc);

	void loadTexture();
	void useTexture();
	void clearTexture();

	static unsigned int TextureFromFile(const char* path, const std::string& directory);

	~Texture();

private:
	GLuint textureID;
	int width, height, bitDepth;
	char* fileLocation;
};

