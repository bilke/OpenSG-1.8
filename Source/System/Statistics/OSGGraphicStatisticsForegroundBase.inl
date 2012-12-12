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
 **     class GraphicStatisticsForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GraphicStatisticsForegroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 GraphicStatisticsForegroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
GraphicStatisticsForegroundPtr GraphicStatisticsForegroundBase::create(void) 
{
    GraphicStatisticsForegroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = GraphicStatisticsForegroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
GraphicStatisticsForegroundPtr GraphicStatisticsForegroundBase::createEmpty(void) 
{ 
    GraphicStatisticsForegroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the GraphicStatisticsForeground::_mfDisplayType field.
inline
const MFUInt32 *GraphicStatisticsForegroundBase::getMFDisplayType(void) const
{
    return &_mfDisplayType;
}

//! Get the GraphicStatisticsForeground::_mfDisplayType field.
inline
MFUInt32 *GraphicStatisticsForegroundBase::editMFDisplayType(void)
{
    return &_mfDisplayType;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfDisplayType field.
inline
MFUInt32 *GraphicStatisticsForegroundBase::getMFDisplayType(void)
{
    return &_mfDisplayType;
}
#endif

//! Get the GraphicStatisticsForeground::_mfSize field.
inline
const MFVec2f *GraphicStatisticsForegroundBase::getMFSize(void) const
{
    return &_mfSize;
}

//! Get the GraphicStatisticsForeground::_mfSize field.
inline
MFVec2f *GraphicStatisticsForegroundBase::editMFSize(void)
{
    return &_mfSize;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfSize field.
inline
MFVec2f *GraphicStatisticsForegroundBase::getMFSize(void)
{
    return &_mfSize;
}
#endif

//! Get the GraphicStatisticsForeground::_mfPos field.
inline
const MFVec2f *GraphicStatisticsForegroundBase::getMFPos(void) const
{
    return &_mfPos;
}

//! Get the GraphicStatisticsForeground::_mfPos field.
inline
MFVec2f *GraphicStatisticsForegroundBase::editMFPos(void)
{
    return &_mfPos;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfPos field.
inline
MFVec2f *GraphicStatisticsForegroundBase::getMFPos(void)
{
    return &_mfPos;
}
#endif

//! Get the GraphicStatisticsForeground::_mfColorMax field.
inline
const MFColor4f *GraphicStatisticsForegroundBase::getMFColorMax(void) const
{
    return &_mfColorMax;
}

//! Get the GraphicStatisticsForeground::_mfColorMax field.
inline
MFColor4f *GraphicStatisticsForegroundBase::editMFColorMax(void)
{
    return &_mfColorMax;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfColorMax field.
inline
MFColor4f *GraphicStatisticsForegroundBase::getMFColorMax(void)
{
    return &_mfColorMax;
}
#endif

//! Get the GraphicStatisticsForeground::_mfColorMin field.
inline
const MFColor4f *GraphicStatisticsForegroundBase::getMFColorMin(void) const
{
    return &_mfColorMin;
}

//! Get the GraphicStatisticsForeground::_mfColorMin field.
inline
MFColor4f *GraphicStatisticsForegroundBase::editMFColorMin(void)
{
    return &_mfColorMin;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfColorMin field.
inline
MFColor4f *GraphicStatisticsForegroundBase::getMFColorMin(void)
{
    return &_mfColorMin;
}
#endif

//! Get the GraphicStatisticsForeground::_mfColorCurrent field.
inline
const MFColor4f *GraphicStatisticsForegroundBase::getMFColorCurrent(void) const
{
    return &_mfColorCurrent;
}

//! Get the GraphicStatisticsForeground::_mfColorCurrent field.
inline
MFColor4f *GraphicStatisticsForegroundBase::editMFColorCurrent(void)
{
    return &_mfColorCurrent;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfColorCurrent field.
inline
MFColor4f *GraphicStatisticsForegroundBase::getMFColorCurrent(void)
{
    return &_mfColorCurrent;
}
#endif

//! Get the GraphicStatisticsForeground::_mfMinValue field.
inline
const MFReal32 *GraphicStatisticsForegroundBase::getMFMinValue(void) const
{
    return &_mfMinValue;
}

//! Get the GraphicStatisticsForeground::_mfMinValue field.
inline
MFReal32 *GraphicStatisticsForegroundBase::editMFMinValue(void)
{
    return &_mfMinValue;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfMinValue field.
inline
MFReal32 *GraphicStatisticsForegroundBase::getMFMinValue(void)
{
    return &_mfMinValue;
}
#endif

//! Get the GraphicStatisticsForeground::_mfMaxValue field.
inline
const MFReal32 *GraphicStatisticsForegroundBase::getMFMaxValue(void) const
{
    return &_mfMaxValue;
}

//! Get the GraphicStatisticsForeground::_mfMaxValue field.
inline
MFReal32 *GraphicStatisticsForegroundBase::editMFMaxValue(void)
{
    return &_mfMaxValue;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfMaxValue field.
inline
MFReal32 *GraphicStatisticsForegroundBase::getMFMaxValue(void)
{
    return &_mfMaxValue;
}
#endif

//! Get the GraphicStatisticsForeground::_mfFlags field.
inline
const MFUInt32 *GraphicStatisticsForegroundBase::getMFFlags(void) const
{
    return &_mfFlags;
}

//! Get the GraphicStatisticsForeground::_mfFlags field.
inline
MFUInt32 *GraphicStatisticsForegroundBase::editMFFlags(void)
{
    return &_mfFlags;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfFlags field.
inline
MFUInt32 *GraphicStatisticsForegroundBase::getMFFlags(void)
{
    return &_mfFlags;
}
#endif

//! Get the GraphicStatisticsForeground::_mfHistorySize field.
inline
const MFUInt32 *GraphicStatisticsForegroundBase::getMFHistorySize(void) const
{
    return &_mfHistorySize;
}

//! Get the GraphicStatisticsForeground::_mfHistorySize field.
inline
MFUInt32 *GraphicStatisticsForegroundBase::editMFHistorySize(void)
{
    return &_mfHistorySize;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfHistorySize field.
inline
MFUInt32 *GraphicStatisticsForegroundBase::getMFHistorySize(void)
{
    return &_mfHistorySize;
}
#endif

//! Get the GraphicStatisticsForeground::_mfDescription field.
inline
const MFString *GraphicStatisticsForegroundBase::getMFDescription(void) const
{
    return &_mfDescription;
}

//! Get the GraphicStatisticsForeground::_mfDescription field.
inline
MFString *GraphicStatisticsForegroundBase::editMFDescription(void)
{
    return &_mfDescription;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_mfDescription field.
inline
MFString *GraphicStatisticsForegroundBase::getMFDescription(void)
{
    return &_mfDescription;
}
#endif

//! Get the GraphicStatisticsForeground::_sfLineWidth field.
inline
const SFReal32 *GraphicStatisticsForegroundBase::getSFLineWidth(void) const
{
    return &_sfLineWidth;
}

//! Get the GraphicStatisticsForeground::_sfLineWidth field.
inline
SFReal32 *GraphicStatisticsForegroundBase::editSFLineWidth(void)
{
    return &_sfLineWidth;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_sfLineWidth field.
inline
SFReal32 *GraphicStatisticsForegroundBase::getSFLineWidth(void)
{
    return &_sfLineWidth;
}
#endif

//! Get the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
const SFColor3f *GraphicStatisticsForegroundBase::getSFBackgroundColor(void) const
{
    return &_sfBackgroundColor;
}

//! Get the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
SFColor3f *GraphicStatisticsForegroundBase::editSFBackgroundColor(void)
{
    return &_sfBackgroundColor;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
SFColor3f *GraphicStatisticsForegroundBase::getSFBackgroundColor(void)
{
    return &_sfBackgroundColor;
}
#endif

//! Get the GraphicStatisticsForeground::_sfTextEnabled field.
inline
const SFBool *GraphicStatisticsForegroundBase::getSFTextEnabled(void) const
{
    return &_sfTextEnabled;
}

//! Get the GraphicStatisticsForeground::_sfTextEnabled field.
inline
SFBool *GraphicStatisticsForegroundBase::editSFTextEnabled(void)
{
    return &_sfTextEnabled;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_sfTextEnabled field.
inline
SFBool *GraphicStatisticsForegroundBase::getSFTextEnabled(void)
{
    return &_sfTextEnabled;
}
#endif

//! Get the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
const SFBool *GraphicStatisticsForegroundBase::getSFBackgroundEnabled(void) const
{
    return &_sfBackgroundEnabled;
}

//! Get the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
SFBool *GraphicStatisticsForegroundBase::editSFBackgroundEnabled(void)
{
    return &_sfBackgroundEnabled;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
SFBool *GraphicStatisticsForegroundBase::getSFBackgroundEnabled(void)
{
    return &_sfBackgroundEnabled;
}
#endif

//! Get the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
const SFBool *GraphicStatisticsForegroundBase::getSFBorderEnabled(void) const
{
    return &_sfBorderEnabled;
}

//! Get the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
SFBool *GraphicStatisticsForegroundBase::editSFBorderEnabled(void)
{
    return &_sfBorderEnabled;
}

#ifndef OSG_2_PREP
//! Get the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
SFBool *GraphicStatisticsForegroundBase::getSFBorderEnabled(void)
{
    return &_sfBorderEnabled;
}
#endif


//! Get the value of the GraphicStatisticsForeground::_sfLineWidth field.
inline
Real32 &GraphicStatisticsForegroundBase::editLineWidth(void)
{
    return _sfLineWidth.getValue();
}

//! Get the value of the GraphicStatisticsForeground::_sfLineWidth field.
inline
const Real32 &GraphicStatisticsForegroundBase::getLineWidth(void) const
{
    return _sfLineWidth.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the GraphicStatisticsForeground::_sfLineWidth field.
inline
Real32 &GraphicStatisticsForegroundBase::getLineWidth(void)
{
    return _sfLineWidth.getValue();
}
#endif

//! Set the value of the GraphicStatisticsForeground::_sfLineWidth field.
inline
void GraphicStatisticsForegroundBase::setLineWidth(const Real32 &value)
{
    _sfLineWidth.setValue(value);
}

//! Get the value of the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
Color3f &GraphicStatisticsForegroundBase::editBackgroundColor(void)
{
    return _sfBackgroundColor.getValue();
}

//! Get the value of the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
const Color3f &GraphicStatisticsForegroundBase::getBackgroundColor(void) const
{
    return _sfBackgroundColor.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
Color3f &GraphicStatisticsForegroundBase::getBackgroundColor(void)
{
    return _sfBackgroundColor.getValue();
}
#endif

//! Set the value of the GraphicStatisticsForeground::_sfBackgroundColor field.
inline
void GraphicStatisticsForegroundBase::setBackgroundColor(const Color3f &value)
{
    _sfBackgroundColor.setValue(value);
}

//! Get the value of the GraphicStatisticsForeground::_sfTextEnabled field.
inline
bool &GraphicStatisticsForegroundBase::editTextEnabled(void)
{
    return _sfTextEnabled.getValue();
}

//! Get the value of the GraphicStatisticsForeground::_sfTextEnabled field.
inline
const bool &GraphicStatisticsForegroundBase::getTextEnabled(void) const
{
    return _sfTextEnabled.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the GraphicStatisticsForeground::_sfTextEnabled field.
inline
bool &GraphicStatisticsForegroundBase::getTextEnabled(void)
{
    return _sfTextEnabled.getValue();
}
#endif

//! Set the value of the GraphicStatisticsForeground::_sfTextEnabled field.
inline
void GraphicStatisticsForegroundBase::setTextEnabled(const bool &value)
{
    _sfTextEnabled.setValue(value);
}

//! Get the value of the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
bool &GraphicStatisticsForegroundBase::editBackgroundEnabled(void)
{
    return _sfBackgroundEnabled.getValue();
}

//! Get the value of the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
const bool &GraphicStatisticsForegroundBase::getBackgroundEnabled(void) const
{
    return _sfBackgroundEnabled.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
bool &GraphicStatisticsForegroundBase::getBackgroundEnabled(void)
{
    return _sfBackgroundEnabled.getValue();
}
#endif

//! Set the value of the GraphicStatisticsForeground::_sfBackgroundEnabled field.
inline
void GraphicStatisticsForegroundBase::setBackgroundEnabled(const bool &value)
{
    _sfBackgroundEnabled.setValue(value);
}

//! Get the value of the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
bool &GraphicStatisticsForegroundBase::editBorderEnabled(void)
{
    return _sfBorderEnabled.getValue();
}

//! Get the value of the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
const bool &GraphicStatisticsForegroundBase::getBorderEnabled(void) const
{
    return _sfBorderEnabled.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
bool &GraphicStatisticsForegroundBase::getBorderEnabled(void)
{
    return _sfBorderEnabled.getValue();
}
#endif

//! Set the value of the GraphicStatisticsForeground::_sfBorderEnabled field.
inline
void GraphicStatisticsForegroundBase::setBorderEnabled(const bool &value)
{
    _sfBorderEnabled.setValue(value);
}


//! Get the value of the \a index element the GraphicStatisticsForeground::_mfDisplayType field.
inline
UInt32 &GraphicStatisticsForegroundBase::editDisplayType(const UInt32 index)
{
    return _mfDisplayType[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfDisplayType field.
inline
const UInt32 &GraphicStatisticsForegroundBase::getDisplayType(const UInt32 index) const
{
    return _mfDisplayType[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfDisplayType field.
inline
UInt32 &GraphicStatisticsForegroundBase::getDisplayType(const UInt32 index)
{
    return _mfDisplayType[index];
}

//! Get the GraphicStatisticsForeground::_mfDisplayType field.
inline
MFUInt32 &GraphicStatisticsForegroundBase::getDisplayType(void)
{
    return _mfDisplayType;
}

//! Get the GraphicStatisticsForeground::_mfDisplayType field.
inline
const MFUInt32 &GraphicStatisticsForegroundBase::getDisplayType(void) const
{
    return _mfDisplayType;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfSize field.
inline
Vec2f &GraphicStatisticsForegroundBase::editSize(const UInt32 index)
{
    return _mfSize[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfSize field.
inline
const Vec2f &GraphicStatisticsForegroundBase::getSize(const UInt32 index) const
{
    return _mfSize[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfSize field.
inline
Vec2f &GraphicStatisticsForegroundBase::getSize(const UInt32 index)
{
    return _mfSize[index];
}

//! Get the GraphicStatisticsForeground::_mfSize field.
inline
MFVec2f &GraphicStatisticsForegroundBase::getSize(void)
{
    return _mfSize;
}

//! Get the GraphicStatisticsForeground::_mfSize field.
inline
const MFVec2f &GraphicStatisticsForegroundBase::getSize(void) const
{
    return _mfSize;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfPos field.
inline
Vec2f &GraphicStatisticsForegroundBase::editPos(const UInt32 index)
{
    return _mfPos[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfPos field.
inline
const Vec2f &GraphicStatisticsForegroundBase::getPos(const UInt32 index) const
{
    return _mfPos[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfPos field.
inline
Vec2f &GraphicStatisticsForegroundBase::getPos(const UInt32 index)
{
    return _mfPos[index];
}

//! Get the GraphicStatisticsForeground::_mfPos field.
inline
MFVec2f &GraphicStatisticsForegroundBase::getPos(void)
{
    return _mfPos;
}

//! Get the GraphicStatisticsForeground::_mfPos field.
inline
const MFVec2f &GraphicStatisticsForegroundBase::getPos(void) const
{
    return _mfPos;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorMax field.
inline
Color4f &GraphicStatisticsForegroundBase::editColorMax(const UInt32 index)
{
    return _mfColorMax[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorMax field.
inline
const Color4f &GraphicStatisticsForegroundBase::getColorMax(const UInt32 index) const
{
    return _mfColorMax[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorMax field.
inline
Color4f &GraphicStatisticsForegroundBase::getColorMax(const UInt32 index)
{
    return _mfColorMax[index];
}

//! Get the GraphicStatisticsForeground::_mfColorMax field.
inline
MFColor4f &GraphicStatisticsForegroundBase::getColorMax(void)
{
    return _mfColorMax;
}

//! Get the GraphicStatisticsForeground::_mfColorMax field.
inline
const MFColor4f &GraphicStatisticsForegroundBase::getColorMax(void) const
{
    return _mfColorMax;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorMin field.
inline
Color4f &GraphicStatisticsForegroundBase::editColorMin(const UInt32 index)
{
    return _mfColorMin[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorMin field.
inline
const Color4f &GraphicStatisticsForegroundBase::getColorMin(const UInt32 index) const
{
    return _mfColorMin[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorMin field.
inline
Color4f &GraphicStatisticsForegroundBase::getColorMin(const UInt32 index)
{
    return _mfColorMin[index];
}

//! Get the GraphicStatisticsForeground::_mfColorMin field.
inline
MFColor4f &GraphicStatisticsForegroundBase::getColorMin(void)
{
    return _mfColorMin;
}

//! Get the GraphicStatisticsForeground::_mfColorMin field.
inline
const MFColor4f &GraphicStatisticsForegroundBase::getColorMin(void) const
{
    return _mfColorMin;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorCurrent field.
inline
Color4f &GraphicStatisticsForegroundBase::editColorCurrent(const UInt32 index)
{
    return _mfColorCurrent[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorCurrent field.
inline
const Color4f &GraphicStatisticsForegroundBase::getColorCurrent(const UInt32 index) const
{
    return _mfColorCurrent[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfColorCurrent field.
inline
Color4f &GraphicStatisticsForegroundBase::getColorCurrent(const UInt32 index)
{
    return _mfColorCurrent[index];
}

//! Get the GraphicStatisticsForeground::_mfColorCurrent field.
inline
MFColor4f &GraphicStatisticsForegroundBase::getColorCurrent(void)
{
    return _mfColorCurrent;
}

//! Get the GraphicStatisticsForeground::_mfColorCurrent field.
inline
const MFColor4f &GraphicStatisticsForegroundBase::getColorCurrent(void) const
{
    return _mfColorCurrent;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfMinValue field.
inline
Real32 &GraphicStatisticsForegroundBase::editMinValue(const UInt32 index)
{
    return _mfMinValue[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfMinValue field.
inline
const Real32 &GraphicStatisticsForegroundBase::getMinValue(const UInt32 index) const
{
    return _mfMinValue[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfMinValue field.
inline
Real32 &GraphicStatisticsForegroundBase::getMinValue(const UInt32 index)
{
    return _mfMinValue[index];
}

//! Get the GraphicStatisticsForeground::_mfMinValue field.
inline
MFReal32 &GraphicStatisticsForegroundBase::getMinValue(void)
{
    return _mfMinValue;
}

//! Get the GraphicStatisticsForeground::_mfMinValue field.
inline
const MFReal32 &GraphicStatisticsForegroundBase::getMinValue(void) const
{
    return _mfMinValue;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfMaxValue field.
inline
Real32 &GraphicStatisticsForegroundBase::editMaxValue(const UInt32 index)
{
    return _mfMaxValue[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfMaxValue field.
inline
const Real32 &GraphicStatisticsForegroundBase::getMaxValue(const UInt32 index) const
{
    return _mfMaxValue[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfMaxValue field.
inline
Real32 &GraphicStatisticsForegroundBase::getMaxValue(const UInt32 index)
{
    return _mfMaxValue[index];
}

//! Get the GraphicStatisticsForeground::_mfMaxValue field.
inline
MFReal32 &GraphicStatisticsForegroundBase::getMaxValue(void)
{
    return _mfMaxValue;
}

//! Get the GraphicStatisticsForeground::_mfMaxValue field.
inline
const MFReal32 &GraphicStatisticsForegroundBase::getMaxValue(void) const
{
    return _mfMaxValue;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfFlags field.
inline
UInt32 &GraphicStatisticsForegroundBase::editFlags(const UInt32 index)
{
    return _mfFlags[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfFlags field.
inline
const UInt32 &GraphicStatisticsForegroundBase::getFlags(const UInt32 index) const
{
    return _mfFlags[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfFlags field.
inline
UInt32 &GraphicStatisticsForegroundBase::getFlags(const UInt32 index)
{
    return _mfFlags[index];
}

//! Get the GraphicStatisticsForeground::_mfFlags field.
inline
MFUInt32 &GraphicStatisticsForegroundBase::getFlags(void)
{
    return _mfFlags;
}

//! Get the GraphicStatisticsForeground::_mfFlags field.
inline
const MFUInt32 &GraphicStatisticsForegroundBase::getFlags(void) const
{
    return _mfFlags;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfHistorySize field.
inline
UInt32 &GraphicStatisticsForegroundBase::editHistorySize(const UInt32 index)
{
    return _mfHistorySize[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfHistorySize field.
inline
const UInt32 &GraphicStatisticsForegroundBase::getHistorySize(const UInt32 index) const
{
    return _mfHistorySize[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfHistorySize field.
inline
UInt32 &GraphicStatisticsForegroundBase::getHistorySize(const UInt32 index)
{
    return _mfHistorySize[index];
}

//! Get the GraphicStatisticsForeground::_mfHistorySize field.
inline
MFUInt32 &GraphicStatisticsForegroundBase::getHistorySize(void)
{
    return _mfHistorySize;
}

//! Get the GraphicStatisticsForeground::_mfHistorySize field.
inline
const MFUInt32 &GraphicStatisticsForegroundBase::getHistorySize(void) const
{
    return _mfHistorySize;
}

#endif

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfDescription field.
inline
std::string &GraphicStatisticsForegroundBase::editDescription(const UInt32 index)
{
    return _mfDescription[index];
}

//! Get the value of the \a index element the GraphicStatisticsForeground::_mfDescription field.
inline
const std::string &GraphicStatisticsForegroundBase::getDescription(const UInt32 index) const
{
    return _mfDescription[index];
}

#ifndef OSG_2_PREP
//! Get the value of the \a index element the GraphicStatisticsForeground::_mfDescription field.
inline
std::string &GraphicStatisticsForegroundBase::getDescription(const UInt32 index)
{
    return _mfDescription[index];
}

//! Get the GraphicStatisticsForeground::_mfDescription field.
inline
MFString &GraphicStatisticsForegroundBase::getDescription(void)
{
    return _mfDescription;
}

//! Get the GraphicStatisticsForeground::_mfDescription field.
inline
const MFString &GraphicStatisticsForegroundBase::getDescription(void) const
{
    return _mfDescription;
}

#endif

OSG_END_NAMESPACE

#define OSGGRAPHICSTATISTICSFOREGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.21 2008/06/09 07:30:44 vossg Exp $"
