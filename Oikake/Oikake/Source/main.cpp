/**
@brief �R�c���̂̈ړ�
@author Yuuho Aritomi
@date 2017/01/17
*/

#include <GSgame.h>

class MyGame : public gslib::Game
{
public:
	//�R���X�g���N�^
	MyGame() :
		gslib::Game(1024, 786, false)
	{

	}

	//�f�X�g���N�^
	~MyGame()
	{

	}

private:
	//�J�n
	void start() override
	{

	}

	//�X�V
	void update(float _deltaTime) override
	{

	}

	//�`��
	void draw() override
	{

	}

	//�I��
	void end() override
	{

	}
};

int main(int argc, char* argv[])
{
	MyGame game;
	return game.run();
}