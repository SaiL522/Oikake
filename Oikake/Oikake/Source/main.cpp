/**
@brief ３Ｄ物体の移動
@author Yuuho Aritomi
@date 2017/01/17
*/

#include <GSgame.h>

class MyGame : public gslib::Game
{
public:
	//コンストラクタ
	MyGame() :
		gslib::Game(1024, 786, false)
	{

	}

	//デストラクタ
	~MyGame()
	{

	}

private:
	//開始
	void start() override
	{

	}

	//更新
	void update(float _deltaTime) override
	{

	}

	//描画
	void draw() override
	{

	}

	//終了
	void end() override
	{

	}
};

int main(int argc, char* argv[])
{
	MyGame game;
	return game.run();
}