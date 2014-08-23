//-
// ==========================================================================
// Copyright (C) 1995 - 2006 Autodesk, Inc. and/or its licensors.  All 
// rights reserved.
//
// The coded instructions, statements, computer programs, and/or related 
// material (collectively the "Data") in these files contain unpublished 
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its 
// licensors, which is protected by U.S. and Canadian federal copyright 
// law and by international treaties.
//
// The Data is provided for use exclusively by You. You have the right 
// to use, modify, and incorporate this Data into other products for 
// purposes authorized by the Autodesk software license agreement, 
// without fee.
//
// The copyright notices in the Software and this entire statement, 
// including the above license grant, this restriction and the 
// following disclaimer, must be included in all copies of the 
// Software, in whole or in part, and all derivative works of 
// the Software, unless such copies or derivative works are solely 
// in the form of machine-executable object code generated by a 
// source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND. 
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED 
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF 
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR 
// PURPOSE, OR ARISING FROM A COURSE OF DEALING, USAGE, OR 
// TRADE PRACTICE. IN NO EVENT WILL AUTODESK AND/OR ITS LICENSORS 
// BE LIABLE FOR ANY LOST REVENUES, DATA, OR PROFITS, OR SPECIAL, 
// DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK 
// AND/OR ITS LICENSORS HAS BEEN ADVISED OF THE POSSIBILITY 
// OR PROBABILITY OF SUCH DAMAGES.
//
// ==========================================================================
//+

// Example Plugin: helloCmd.cpp
//
// This plugin uses DeclareSimpleCommand macro
// to do the necessary initialization for a simple command
// plugin with one argument.
//
// Once this plugin is loaded by the Plugin Manager,
// it can be run from the Maya command line (i.e. script
// editor) giving it just one parameter like this:
//
//    hello Maya
//
// which will simply print the following message
// in the Output Window:
//
//    Hello Maya
//
// $RCSfile: helloCmd.cpp $     $Revision: /main/13 $

#include <maya/MIOStream.h>
#include <maya/MSimple.h>


// Use a Maya macro to setup a simple hello class
// with methods for initialization, etc.
//
DeclareSimpleCommand( hello, PLUGIN_COMPANY, "4.5");

// All we need to do is supply the doIt method
// which in this case only prints "Hello" followed
// by the first argument given in the command line.
//
MStatus hello::doIt( const MArgList& args )
{

	cout<<"Hello "<<args.asString(0).asChar()<<endl;
	return MS::kSuccess;
}