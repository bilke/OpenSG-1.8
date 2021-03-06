/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

#ifndef _OSGACTORDESCCONSTANTS_H_
#define _OSGACTORDESCCONSTANTS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGBaseTypes.h>

#include <string>

OSG_USING_NAMESPACE

class ActorDescConstants
{
    /*==========================  PUBLIC  =================================*/
  public:
    /*---------------------------------------------------------------------*/
    /*! \name    Types                                                     */
    /*! \{                                                                 */

    enum FunctorStoreE
    {
        Empty,
        Simple,
        Single,
        Multi
    };

    enum AccessE
    {
        Public,
        Protected
    };

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name    To / From String                                          */
    /*! \{                                                                 */

    static bool          strToBool        (const std::string   &strIn,
                                                 bool          &success);
    static std::string   boolToStr        (      bool           value  );
    static FunctorStoreE strToFunctorStore(const std::string   &strIn,
                                                 bool          &success);
    static std::string   functorStoreToStr(      FunctorStoreE  value  );
    static AccessE       strToAccess      (const std::string   &strIn,
                                                 bool          &success);
    static std::string   accessToStr      (      AccessE        value  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
};

//#include "OSGActorDescConstants.inl"

#define OSGACTORDESCCONSTANTS_HEADER_CVSID "@(#)$Id: OSGActorDescConstants.h,v 1.1 2004/04/20 13:06:50 neumannc Exp $"

#endif /* _OSGACTORDESCCONSTANTS_H_ */
