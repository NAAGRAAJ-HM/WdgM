#pragma once
/******************************************************************************/
/* File   : ServiceWdgM.hpp                                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceWdgM.hpp"
#include "CfgServiceWdgM.hpp"
#include "ServiceWdgM_core.hpp"
#include "infServiceWdgM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceWdgM:
      INTERFACES_EXPORTED_SERVICEWDGM
      public abstract_module
   ,  public class_ServiceWdgM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceWdgM_Type* lptrConst = (ConstServiceWdgM_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEWDGM_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEWDGM_CONST,       SERVICEWDGM_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEWDGM_CONFIG_DATA, SERVICEWDGM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEWDGM_CODE) DeInitFunction (void);
      FUNC(void, SERVICEWDGM_CODE) MainFunction   (void);
      SERVICEWDGM_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_ServiceWdgM, SERVICEWDGM_VAR) ServiceWdgM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

