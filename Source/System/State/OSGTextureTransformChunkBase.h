/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class TextureTransformChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTEXTURETRANSFORMCHUNKBASE_H_
#define _OSGTEXTURETRANSFORMCHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OSGConfig.h>
#include <OSGSystemDef.h>

#include <OSGBaseTypes.h>
#include <OSGRefPtr.h>
#include <OSGCoredNodePtr.h>

#include <OSGTransformChunk.h> // Parent

#include <OSGBoolFields.h> // UseCameraBeacon type

#include <OSGTextureTransformChunkFields.h>

OSG_BEGIN_NAMESPACE

class TextureTransformChunk;
class BinaryDataHandler;

//! \brief TextureTransformChunk Base Class.

class OSG_SYSTEMLIB_DLLMAPPING TextureTransformChunkBase : public TransformChunk
{
  private:

    typedef TransformChunk    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TextureTransformChunkPtr  Ptr;

    enum
    {
        UseCameraBeaconFieldId = Inherited::NextFieldId,
        NextFieldId            = UseCameraBeaconFieldId + 1
    };

    static const OSG::BitVector UseCameraBeaconFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFBool              *editSFUseCameraBeacon(void);
     const SFBool              *getSFUseCameraBeacon(void) const;
#ifndef OSG_2_PREP
           SFBool              *getSFUseCameraBeacon(void);
#endif


           bool                &editUseCameraBeacon(void);
     const bool                &getUseCameraBeacon(void) const;
#ifndef OSG_2_PREP
           bool                &getUseCameraBeacon(void);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setUseCameraBeacon( const bool &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TextureTransformChunkPtr      create          (void); 
    static  TextureTransformChunkPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFBool              _sfUseCameraBeacon;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TextureTransformChunkBase(void);
    TextureTransformChunkBase(const TextureTransformChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextureTransformChunkBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TextureTransformChunkBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TextureTransformChunkBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextureTransformChunkBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TextureTransformChunkBase *TextureTransformChunkBaseP;

typedef osgIF<TextureTransformChunkBase::isNodeCore,
              CoredNodePtr<TextureTransformChunk>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TextureTransformChunkNodePtr;

typedef RefPtr<TextureTransformChunkPtr> TextureTransformChunkRefPtr;

OSG_END_NAMESPACE

#define OSGTEXTURETRANSFORMCHUNKBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.41 2008/06/09 07:30:44 vossg Exp $"

#endif /* _OSGTEXTURETRANSFORMCHUNKBASE_H_ */