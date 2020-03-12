#ifndef SPRITE_H
#define SPRITE_H

#include <string>

#include <GL/glew.h>

class Sprite
{
	public:
		/**
		*  Sprite constructor.
		*/
		Sprite(const std::string& imagepath);
		/**
		*  Sprite deconstructor
		*/
		virtual ~Sprite();

		/**
		*  Sprite texture.
		*/
		GLuint texture() { return _texture; };
		/**
		*  Sprite vertex buffer.
		*/
		GLuint vertexbuffer() { return _vertexbuffer; };

		/**
		*  Sprite uv buffer.
		*/
		GLuint uvbuffer() { return _uvbuffer; };

		/**
		*  Sprite width
		*/
		unsigned int width() { return _width; };

		/**
		*  Sprite height
		*/
		unsigned int height() { return _height; };

		/**
		*  Sets the Sprite filter mode.
		*/
		void setFilter(int filterMode);

	private:
		GLuint loadTGA(const std::string& imagepath);

		GLuint _texture;
		GLuint _vertexbuffer;
		GLuint _uvbuffer;

		unsigned int _width;
		unsigned int _height;
		int _filter = 1;
};

#endif /* SPRITE_H */
