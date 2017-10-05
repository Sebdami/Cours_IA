/***************************************************/
/* Nom:	EntityManager.h
/* Description: EntityManager
/* Auteur: BRUNEAU Colin
/***************************************************/
#ifndef __EntityManager_H_
#define __EntityManager_H_

namespace crea
{
	class Entity;

	class CREAENGINE_API EntityManager
	{
		Entity* m_pRoot;

		EntityManager();

	public:
		virtual ~EntityManager();

		static EntityManager* getSingleton();

		void addEntity(Entity* _pEntity, Entity* _pParent = nullptr);

		bool update();

		bool draw();

		void clear();
	};

} // namespace crea

#endif
