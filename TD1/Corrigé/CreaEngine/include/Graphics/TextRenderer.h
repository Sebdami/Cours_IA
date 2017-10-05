/***************************************************/
/* Nom:	TextRenderer.h
/* Description: TextRenderer
/* Auteur: BRUNEAU Colin
/***************************************************/
#ifndef __TextRenderer_H_
#define __TextRenderer_H_

#include "Core\Component.h"

namespace sf
{
	class Text;
}

namespace crea
{

	class CREAENGINE_API TextRenderer : public Component
	{
		sf::Text* m_pText;

	public:
		TextRenderer();
		virtual ~TextRenderer();

		inline void setText(Text* _pText) { m_pText = _pText->m_pText; }

		virtual bool init();
		virtual bool update();
		virtual bool draw();
		virtual bool quit();

	};

} // namespace crea

#endif
