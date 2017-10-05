/***************************************************/
/* Nom:	GameManager.h
/* Description: GameManager
/* Auteur: BRUNEAU Colin
/***************************************************/
#ifndef __GameManager_H_
#define __GameManager_H_

#include "SceneManager.h"
#include "EntityManager.h"
#include "Data\DataManager.h"
#include "Input\InputManager.h"

namespace sf
{
	class RenderWindow;
}

namespace crea
{

	class CREAENGINE_API GameManager
	{
		GameManager();

		sf::RenderWindow* m_pWindow;

	public:
		~GameManager();

		static GameManager* getSingleton();

		inline sf::RenderWindow* getWindow() { return m_pWindow; }

		inline void setScene(Scene* s) { SceneManager::getSingleton()->setScene(s); }

		// Input
		inline bool isKeyPressed(Key _key) { return InputManager::getSingleton()->isKeyPressed(_key); }

		// Data
		inline Font* getFont(string _szName) { return DataManager::getSingleton()->getFont(_szName); }

		inline Texture* getTexture(string _szName) { return DataManager::getSingleton()->getTexture(_szName); }

		inline Color* getColor(string _szName) { return DataManager::getSingleton()->getColor(_szName); }

		inline void addEntity(Entity* _pEntity, Entity* _pParent = nullptr)  { EntityManager::getSingleton()->addEntity(_pEntity, _pParent); }

		inline void clearAllEntities()  { EntityManager::getSingleton()->clear(); }

		void init();

		void update();

		void quit();
	};

} // namespace crea

#endif
