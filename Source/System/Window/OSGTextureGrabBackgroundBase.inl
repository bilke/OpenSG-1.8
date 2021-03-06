/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TextureGrabBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureGrabBackgroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureGrabBackgroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextureGrabBackgroundPtr TextureGrabBackgroundBase::create(void) 
{
    TextureGrabBackgroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextureGrabBackgroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextureGrabBackgroundPtr TextureGrabBackgroundBase::createEmpty(void) 
{ 
    TextureGrabBackgroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextureGrabBackground::_sfTexture field.
inline
const SFTextureChunkPtr *TextureGrabBackgroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

//! Get the TextureGrabBackground::_sfTexture field.
inline
SFTextureChunkPtr *TextureGrabBackgroundBase::editSFTexture(void)
{
    return &_sfTexture;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabBackground::_sfTexture field.
inline
SFTextureChunkPtr *TextureGrabBackgroundBase::getSFTexture(void)
{
    return &_sfTexture;
}
#endif

//! Get the TextureGrabBackground::_sfAutoResize field.
inline
const SFBool *TextureGrabBackgroundBase::getSFAutoResize(void) const
{
    return &_sfAutoResize;
}

//! Get the TextureGrabBackground::_sfAutoResize field.
inline
SFBool *TextureGrabBackgroundBase::editSFAutoResize(void)
{
    return &_sfAutoResize;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabBackground::_sfAutoResize field.
inline
SFBool *TextureGrabBackgroundBase::getSFAutoResize(void)
{
    return &_sfAutoResize;
}
#endif

//! Get the TextureGrabBackground::_sfBindTarget field.
inline
const SFGLenum *TextureGrabBackgroundBase::getSFBindTarget(void) const
{
    return &_sfBindTarget;
}

//! Get the TextureGrabBackground::_sfBindTarget field.
inline
SFGLenum *TextureGrabBackgroundBase::editSFBindTarget(void)
{
    return &_sfBindTarget;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabBackground::_sfBindTarget field.
inline
SFGLenum *TextureGrabBackgroundBase::getSFBindTarget(void)
{
    return &_sfBindTarget;
}
#endif

//! Get the TextureGrabBackground::_sfCopyTarget field.
inline
const SFGLenum *TextureGrabBackgroundBase::getSFCopyTarget(void) const
{
    return &_sfCopyTarget;
}

//! Get the TextureGrabBackground::_sfCopyTarget field.
inline
SFGLenum *TextureGrabBackgroundBase::editSFCopyTarget(void)
{
    return &_sfCopyTarget;
}

#ifndef OSG_2_PREP
//! Get the TextureGrabBackground::_sfCopyTarget field.
inline
SFGLenum *TextureGrabBackgroundBase::getSFCopyTarget(void)
{
    return &_sfCopyTarget;
}
#endif


//! Get the value of the TextureGrabBackground::_sfTexture field.
inline
TextureChunkPtr &TextureGrabBackgroundBase::editTexture(void)
{
    return _sfTexture.getValue();
}

//! Get the value of the TextureGrabBackground::_sfTexture field.
inline
const TextureChunkPtr &TextureGrabBackgroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabBackground::_sfTexture field.
inline
TextureChunkPtr &TextureGrabBackgroundBase::getTexture(void)
{
    return _sfTexture.getValue();
}
#endif

//! Set the value of the TextureGrabBackground::_sfTexture field.
inline
void TextureGrabBackgroundBase::setTexture(const TextureChunkPtr &value)
{
    _sfTexture.setValue(value);
}

//! Get the value of the TextureGrabBackground::_sfAutoResize field.
inline
bool &TextureGrabBackgroundBase::editAutoResize(void)
{
    return _sfAutoResize.getValue();
}

//! Get the value of the TextureGrabBackground::_sfAutoResize field.
inline
const bool &TextureGrabBackgroundBase::getAutoResize(void) const
{
    return _sfAutoResize.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabBackground::_sfAutoResize field.
inline
bool &TextureGrabBackgroundBase::getAutoResize(void)
{
    return _sfAutoResize.getValue();
}
#endif

//! Set the value of the TextureGrabBackground::_sfAutoResize field.
inline
void TextureGrabBackgroundBase::setAutoResize(const bool &value)
{
    _sfAutoResize.setValue(value);
}

//! Get the value of the TextureGrabBackground::_sfBindTarget field.
inline
GLenum &TextureGrabBackgroundBase::editBindTarget(void)
{
    return _sfBindTarget.getValue();
}

//! Get the value of the TextureGrabBackground::_sfBindTarget field.
inline
const GLenum &TextureGrabBackgroundBase::getBindTarget(void) const
{
    return _sfBindTarget.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabBackground::_sfBindTarget field.
inline
GLenum &TextureGrabBackgroundBase::getBindTarget(void)
{
    return _sfBindTarget.getValue();
}
#endif

//! Set the value of the TextureGrabBackground::_sfBindTarget field.
inline
void TextureGrabBackgroundBase::setBindTarget(const GLenum &value)
{
    _sfBindTarget.setValue(value);
}

//! Get the value of the TextureGrabBackground::_sfCopyTarget field.
inline
GLenum &TextureGrabBackgroundBase::editCopyTarget(void)
{
    return _sfCopyTarget.getValue();
}

//! Get the value of the TextureGrabBackground::_sfCopyTarget field.
inline
const GLenum &TextureGrabBackgroundBase::getCopyTarget(void) const
{
    return _sfCopyTarget.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the TextureGrabBackground::_sfCopyTarget field.
inline
GLenum &TextureGrabBackgroundBase::getCopyTarget(void)
{
    return _sfCopyTarget.getValue();
}
#endif

//! Set the value of the TextureGrabBackground::_sfCopyTarget field.
inline
void TextureGrabBackgroundBase::setCopyTarget(const GLenum &value)
{
    _sfCopyTarget.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTEXTUREGRABBACKGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

