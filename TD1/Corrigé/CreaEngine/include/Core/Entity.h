/***************************************************/
/* Nom:	Entity.h
/* Description: Entity
/* Auteur: BRUNEAU Colin
/***************************************************/
#ifndef __Entity_H_
#define __Entity_H_

#include <vector>

namespace crea
{
	class Component;

	class CREAENGINE_API Entity
	{
		// Name
		string m_szName;

		// Composite
		Entity* m_pParent;
		vector<Entity*> m_pChildren;

		// Composition
		vector<Component*> m_pComponents;

	public:
		Entity();
		virtual ~Entity();
		
		inline void setName(string _szName) { m_szName = _szName; }

		inline void setParent(Entity* _pEntity) { m_pParent = _pEntity; }

		void addChild(Entity* _pEntity);

		void addComponent(Component* _pComponent);

		bool update();

		bool draw();

		void clear();
	};

} // namespace crea

#endif
