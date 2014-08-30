#pragma once
#include "GameComponent.h"
#include <Leap.h>

namespace BGE
{

	class LeapHands:public GameComponent, public Leap::Listener
	{
	public:
		LeapHands();
		~LeapHands();

		virtual bool Initialise();
		virtual void Update(float timeDelta);
		virtual void Draw();
		virtual void Cleanup();

		Leap::Controller controller;

		void UpdateBone(string tag, glm::vec3 start, glm::vec3);
	};
}