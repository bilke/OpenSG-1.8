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
 **     class AbstractText!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AbstractTextBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 AbstractTextBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 


/*------------------------------ get -----------------------------------*/

//! Get the AbstractText::_sfPosition field.
inline
const SFVec3f *AbstractTextBase::getSFPosition(void) const
{
    return &_sfPosition;
}

//! Get the AbstractText::_sfPosition field.
inline
SFVec3f *AbstractTextBase::editSFPosition(void)
{
    return &_sfPosition;
}

#ifndef OSG_2_PREP
//! Get the AbstractText::_sfPosition field.
inline
SFVec3f *AbstractTextBase::getSFPosition(void)
{
    return &_sfPosition;
}
#endif

//! Get the AbstractText::_sfFont field.
inline
const SFSharedFontStyleWrapperPtr *AbstractTextBase::getSFFont(void) const
{
    return &_sfFont;
}

//! Get the AbstractText::_sfFont field.
inline
SFSharedFontStyleWrapperPtr *AbstractTextBase::editSFFont(void)
{
    return &_sfFont;
}

#ifndef OSG_2_PREP
//! Get the AbstractText::_sfFont field.
inline
SFSharedFontStyleWrapperPtr *AbstractTextBase::getSFFont(void)
{
    return &_sfFont;
}
#endif

//! Get the AbstractText::_mfText field.
inline
const MFString *AbstractTextBase::getMFText(void) const
{
    return &_mfText;
}

//! Get the AbstractText::_mfText field.
inline
MFString *AbstractTextBase::editMFText(void)
{
    return &_mfText;
}

#ifndef OSG_2_PREP
//! Get the AbstractText::_mfText field.
inline
MFString *AbstractTextBase::getMFText(void)
{
    return &_mfText;
}
#endif

//! Get the AbstractText::_sfVerticalLineDistance field.
inline
const SFReal32 *AbstractTextBase::getSFVerticalLineDistance(void) const
{
    return &_sfVerticalLineDistance;
}

//! Get the AbstractText::_sfVerticalLineDistance field.
inline
SFReal32 *AbstractTextBase::editSFVerticalLineDistance(void)
{
    return &_sfVerticalLineDistance;
}

#ifndef OSG_2_PREP
//! Get the AbstractText::_sfVerticalLineDistance field.
inline
SFReal32 *AbstractTextBase::getSFVerticalLineDistance(void)
{
    return &_sfVerticalLineDistance;
}
#endif

//! Get the AbstractText::_sfAlignment field.
inline
const SFUInt8 *AbstractTextBase::getSFAlignment(void) const
{
    return &_sfAlignment;
}

//! Get the AbstractText::_sfAlignment field.
inline
SFUInt8 *AbstractTextBase::editSFAlignment(void)
{
    return &_sfAlignment;
}

#ifndef OSG_2_PREP
//! Get the AbstractText::_sfAlignment field.
inline
SFUInt8 *AbstractTextBase::getSFAlignment(void)
{
    return &_sfAlignment;
}
#endif


//! Get the value of the AbstractText::_sfPosition field.
inline
Vec3f &AbstractTextBase::editPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the AbstractText::_sfPosition field.
inline
const Vec3f &AbstractTextBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the AbstractText::_sfPosition field.
inline
Vec3f &AbstractTextBase::getPosition(void)
{
    return _sfPosition.getValue();
}
#endif

//! Set the value of the AbstractText::_sfPosition field.
inline
void AbstractTextBase::setPosition(const Vec3f &value)
{
    _sfPosition.setValue(value);
}

//! Get the value of the AbstractText::_sfFont field.
inline
SharedFontStyleWrapperPtr &AbstractTextBase::editFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the AbstractText::_sfFont field.
inline
const SharedFontStyleWrapperPtr &AbstractTextBase::getFont(void) const
{
    return _sfFont.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the AbstractText::_sfFont field.
inline
SharedFontStyleWrapperPtr &AbstractTextBase::getFont(void)
{
    return _sfFont.getValue();
}
#endif

//! Set the value of the AbstractText::_sfFont field.
inline
void AbstractTextBase::setFont(const SharedFontStyleWrapperPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the AbstractText::_sfVerticalLineDistance field.
inline
Real32 &AbstractTextBase::editVerticalLineDistance(void)
{
    return _sfVerticalLineDistance.getValue();
}

//! Get the value of the AbstractText::_sfVerticalLineDistance field.
inline
const Real32 &AbstractTextBase::getVerticalLineDistance(void) const
{
    return _sfVerticalLineDistance.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the AbstractText::_sfVerticalLineDistance field.
inline
Real32 &AbstractTextBase::getVerticalLineDistance(void)
{
    return _sfVerticalLineDistance.getValue();
}
#endif

//! Set the value of the AbstractText::_sfVerticalLineDistance field.
inline
void AbstractTextBase::setVerticalLineDistance(const Real32 &value)
{
    _sfVerticalLineDistance.setValue(value);
}

//! Get the value of the AbstractText::_sfAlignment field.
inline
UInt8 &AbstractTextBase::editAlignment(void)
{
    return _sfAlignment.getValue();
}

//! Get the value of the AbstractText::_sfAlignment field.
inline
const UInt8 &AbstractTextBase::getAlignment(void) const
{
    return _sfAlignment.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the AbstractText::_sfAlignment field.
inline
UInt8 &AbstractTextBase::getAlignment(void)
{
    return _sfAlignment.getValue();
}
#endif

//! Set the value of the AbstractText::_sfAlignment field.
inline
void AbstractTextBase::setAlignment(const UInt8 &value)
{
    _sfAlignment.setValue(value);
}


//! Get the value of the \a index element the AbstractText::_mfText field.
inline
std::string &AbstractTextBase::editText(const UInt32 index)
{
    return _mfText[index];
}

//! Get the value of the \a index element the AbstractText::_mfText field.
inline
const std::string &AbstractTextBase::getText(const UInt32 index) const
{
    return _mfText[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the AbstractText::_mfText field.
inline
std::string &AbstractTextBase::getText(const UInt32 index)
{
    return _mfText[index];
}

//! Get the AbstractText::_mfText field.
inline
MFString &AbstractTextBase::getText(void)
{
    return _mfText;
}

//! Get the AbstractText::_mfText field.
inline
const MFString &AbstractTextBase::getText(void) const
{
    return _mfText;
}

#endif

OSG_END_NAMESPACE

#define OSGABSTRACTTEXTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"

