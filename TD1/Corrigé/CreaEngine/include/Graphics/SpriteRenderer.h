/***************************************************/
/* Nom:	SpriteRenderer.h
/* Description: SpriteRenderer
/* Auteur: BRUNEAU Colin
/***************************************************/
#ifndef __SpriteRenderer_H_
#define __SpriteRenderer_H_

#include "Core\Component.h"

namespace sf
{
	class Sprite;
}

namespace crea
{

	class CREAENGINE_API SpriteRenderer : public Component
	{
		sf::Sprite* m_pSprite;

	public:
		SpriteRenderer();
		virtual ~SpriteRenderer();

		inline void setSprite(Sprite* _pSprite) { m_pSprite = _pSprite->m_pSprite; }

		virtual bool init();
		virtual bool update();
		virtual bool draw();
		virtual bool quit();

	};

} // namespace crea

#endif
