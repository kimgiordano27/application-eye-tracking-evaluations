/*
FUNCTION_NAME: FUN_08a097e0
ENTRY_POINT: 08a097e0
PROGRAM: cac-libil2cpp.so
SCORE: 86
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_6;ray_or_cast_sink_hits_8;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8
*/


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_08a097e0(undefined4 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  if ((DAT_096a4926 & 1) == 0) {
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRCameraSubsystem_Provider_var);
    FUN_03f13384(PTR_DAT_0910d1d8);
    FUN_03f13384(PTR_DAT_0913e7b0);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(PTR_DAT_091918c8);
    FUN_03f13384(PTR_DAT_09139438);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRCpuImage_AsyncConversion_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRDepthSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var);
                    /* try { // try from 08a09870 to 08b09877 has its CatchHandler @ 08a098bc */
    FUN_03f13384(UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(PTR_DAT_091156b0);
    FUN_03f13384(PTR_DAT_091156b8);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(
                UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                );
    FUN_03f13384(PTR_DAT_09158a08);
    FUN_03f13384(PTR_DAT_0916cce8);
    FUN_03f13384(PTR_DAT_09121140);
    FUN_03f13384(UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var);
    FUN_03f13384(PTR_DAT_091156c0);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var);
    FUN_03f13384(PTR_DAT_091156c8);
    FUN_03f13384(PTR_DAT_091156d0);
    FUN_03f13384(PTR_DAT_091524c8);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var);
    FUN_03f13384(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_var);
    FUN_03f13384(UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var);
    FUN_03f13384(System_Xml_Schema_XmlAtomicValue_Union_var);
    FUN_03f13384(System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var);
    FUN_03f13384(System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_var);
    FUN_03f13384(System_Xml_XmlSqlBinaryReader_ElemInfo_var);
    FUN_03f13384(System_Xml_XmlSqlBinaryReader_SymbolTables_var);
    FUN_03f13384(System_Xml_XmlTextReaderImpl_ParsingState_var);
    FUN_03f13384(Unity_VisualScripting_FullSerializer_fsAotCompilationManager_AotCompilation_var);
    FUN_03f13384(
                Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_AttributeQuery_var
                );
    FUN_03f13384(System_Dynamic_BindingRestrictions_TestBuilder_AndNode_var);
    FUN_03f13384(int___var);
    FUN_03f13384(
                UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogData_ResourceLocator_CacheKey_var
                );
    FUN_03f13384(
                UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_var
                );
    FUN_03f13384(UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_var);
    FUN_03f13384(PTR_DAT_09124988);
    FUN_03f13384(PTR_DAT_0910d1f0);
    FUN_03f13384(UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_var);
    FUN_03f13384(UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_var);
    FUN_03f13384(UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_var);
    FUN_03f13384(System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_var);
    FUN_03f13384(PTR_DAT_0910d200);
    FUN_03f13384(long___var);
    FUN_03f13384(PTR_DAT_091156d8);
    FUN_03f13384(PTR_DAT_09135050);
    FUN_03f13384(PTR_DAT_0916cbe0);
    FUN_03f13384(System_Text_Json_Nodes_JsonArray_DebugView_DebugViewItem_var);
    FUN_03f13384(System_Text_Json_Nodes_JsonObject_DebugView_DebugViewProperty_var);
    FUN_03f13384(UnityEngine_UIElements_PointerDeviceState_RuntimePointerState_RaycastHit_var);
    FUN_03f13384(UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_var);
    FUN_03f13384(System_Exception___var);
    FUN_03f13384(PTR_DAT_09124990);
    FUN_03f13384(PTR_DAT_09125ec8);
    FUN_03f13384(PTR_DAT_091156e0);
    FUN_03f13384(PTR_DAT_0911b0d8);
    FUN_03f13384(UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_ResourceData_var);
    FUN_03f13384(System_Guid___var);
    FUN_03f13384(
                UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_var
                );
    FUN_03f13384(PTR_DAT_09191780);
    FUN_03f13384(PTR_DAT_091511d0);
    FUN_03f13384(PTR_DAT_0918a650);
    FUN_03f13384(
                System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var
                );
    FUN_03f13384(System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var)
    ;
    FUN_03f13384(Doozy_Runtime_Signals_SignalProvider_Global_Input_Name_var);
    FUN_03f13384(Doozy_Runtime_Signals_SignalProvider_Local_Pointer_Name_var);
    FUN_03f13384(Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var);
    FUN_03f13384(PTR_DAT_09153ad0);
    FUN_03f13384(<>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_TypeInfo)
    ;
    FUN_03f13384(<>f__AnonymousType0<Assembly,_Type>_TypeInfo);
    FUN_03f13384(PTR_DAT_09114358);
    FUN_03f13384(PTR_DAT_09146ce8);
    FUN_03f13384(PTR_DAT_09191620);
    FUN_03f13384(PTR_DAT_091156e8);
    FUN_03f13384(<>f__AnonymousType0<SyncData,_List<FObject>>_TypeInfo);
    FUN_03f13384(PTR_DAT_091156f0);
    FUN_03f13384(<>f__AnonymousType0<string,_string,_int>_TypeInfo);
    DAT_096a4926 = 1;
  }
  *param_3 = 0;
  switch(param_1) {
  case 0:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09146ce8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    <>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_TypeInfo
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a4f8;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09191620,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var,5,0);
      puVar1 = UnityEngine_XR_ARSubsystems_XRPointCloudSubsystemDescriptor_Cinfo_var;
joined_r0x08a09e88:
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)puVar1,5,0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        goto LAB_08a0a69c;
      }
LAB_08a0a580:
      uVar4 = 3;
      goto LAB_08a0a61c;
    }
    break;
  case 1:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_0910d1d8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_0910d1f0,5,0);
      puVar1 = PTR_DAT_0910d200;
      goto joined_r0x08a09fc8;
    }
    break;
  case 2:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09191620,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09135050,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a4f8;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091918c8,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09124988,5,0);
        puVar1 = PTR_DAT_09124990;
        goto joined_r0x08a09e88;
      }
      goto LAB_08a0a674;
    }
    break;
  case 3:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)long___var,5,0);
    puVar1 = int___var;
joined_r0x08a09fc8:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)puVar1,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
LAB_08a0a674:
      uVar4 = 2;
      goto LAB_08a0a61c;
    }
    goto LAB_08a0a4f8;
  case 4:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  Doozy_Runtime_Signals_SignalProvider_Local_UI_Name_var,5,0);
    puVar3 = (undefined8 *)PTR_DAT_0913e7b0;
    goto joined_r0x08a09ca0;
  case 5:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_0911b0d8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    Unity_VisualScripting_FullSerializer_fsAotCompilationManager_AotCompilation_var
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a4f8;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Xml_XmlTextReaderImpl_ParsingState_var,5,0)
      ;
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Xml_XmlSqlBinaryReader_ElemInfo_var,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                      UnityEngine_InputSystem_Layouts_InputControlLayout_Collection_LayoutMatcher_var
                             ,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                        System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_var
                               ,5,0);
          if ((uVar2 & 1) != 0) goto LAB_08a0a61c;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                        Doozy_Runtime_Signals_SignalProvider_Global_Input_Name_var,5
                               ,0);
          if ((uVar2 & 1) != 0) {
LAB_08a0a6e8:
            uVar4 = 6;
            goto LAB_08a0a61c;
          }
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Xml_XmlSqlBinaryReader_SymbolTables_var
                               ,5,0);
          if ((uVar2 & 1) != 0) {
LAB_08a0a710:
            uVar4 = 7;
            goto LAB_08a0a61c;
          }
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                        UnityEngine_XR_ARSubsystems_XROcclusionSubsystemDescriptor_Cinfo_var
                               ,5,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                          <>f__AnonymousType0<string,_string,_int>_TypeInfo,5,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                            <>f__AnonymousType0<SyncData,_List<FObject>>_TypeInfo,5,
                                   0);
              if ((uVar2 & 1) == 0) {
                uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                              System_Text_Json_Nodes_JsonArray_DebugView_DebugViewItem_var
                                     ,5,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_ResourceData_var
                                       ,5,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                  UnityEngine_InputSystem_InputRemoting_ChangeUsageMsg_Data_var
                                         ,5,0);
                    if ((uVar2 & 1) == 0) {
                      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                        
                                                  System_Linq_Expressions_Interpreter_InstructionList_DebugView_InstructionView_var
                                           ,5,0);
                      if ((uVar2 & 1) == 0) {
                        uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                            
                                                  UnityEngine_XR_ARSubsystems_XRCameraSubsystemDescriptor_Cinfo_var
                                             ,5,0);
                        if ((uVar2 & 1) == 0) {
                          uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XRSessionSubsystemDescriptor_Cinfo_var
                                               ,5,0);
                          if ((uVar2 & 1) == 0) {
                            uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_PointerDeviceState_RuntimePointerState_RaycastHit_var
                                                 ,5,0);
                            if ((uVar2 & 1) == 0) {
                              uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                        
                                                  System_Dynamic_BindingRestrictions_TestBuilder_AndNode_var
                                                  ,5,0);
                              if ((uVar2 & 1) == 0) {
                                uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_var
                                                  ,5,0);
                                if ((uVar2 & 1) == 0) {
                                  uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                                
                                                  UnityEngine_XR_ARSubsystems_XRCameraSubsystem_Provider_var
                                                  ,5,0);
                                  if ((uVar2 & 1) == 0) {
                                    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                                    
                                                  UnityEngine_XR_ARSubsystems_XRHumanBodySubsystem_Provider_var
                                                  ,5,0);
                                    if ((uVar2 & 1) == 0) {
                                      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                                                                                                                        
                                                  UnityEngine_InputSystem_InputRemoting_NewDeviceMsg_Data_var
                                                  ,5,0);
                                      if ((uVar2 & 1) == 0) {
                                        return 0;
                                      }
                                      uVar4 = 0x16;
                                    }
                                    else {
                                      uVar4 = 0x15;
                                    }
                                  }
                                  else {
                                    uVar4 = 0x14;
                                  }
                                }
                                else {
                                  uVar4 = 0x13;
                                }
                              }
                              else {
                                uVar4 = 0x12;
                              }
                            }
                            else {
                              uVar4 = 0x11;
                            }
                          }
                          else {
                            uVar4 = 0x10;
                          }
                        }
                        else {
                          uVar4 = 0xf;
                        }
                      }
                      else {
                        uVar4 = 0xe;
                      }
                    }
                    else {
                      uVar4 = 0xd;
                    }
                  }
                  else {
                    uVar4 = 0xc;
                  }
                }
                else {
                  uVar4 = 0xb;
                }
              }
              else {
                uVar4 = 10;
              }
            }
            else {
              uVar4 = 9;
            }
            goto LAB_08a0a61c;
          }
LAB_08a0a738:
          uVar4 = 8;
          goto LAB_08a0a61c;
        }
        goto LAB_08a0a69c;
      }
      goto LAB_08a0a580;
    }
    break;
  case 6:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Exception___var,5,0);
    puVar3 = (undefined8 *)UnityEngine_XR_ARSubsystems_XRRaycastSubsystemDescriptor_Cinfo_var;
    goto joined_r0x08a09ca0;
  case 7:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091524c8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultExtendedTypeDescriptor_var
                           ,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a4f8;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091511d0,5,0);
      puVar3 = (undefined8 *)
               UnityEngine_XR_ARSubsystems_XRObjectTrackingSubsystemDescriptor_Cinfo_var;
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
LAB_08a0a3f8:
      uVar2 = FUN_073256a8(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_08a0a580;
    }
    break;
  case 8:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09191780,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)UnityEngine_XR_XRDisplaySubsystem_XRBlitParams_var
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09114358,5,0);
        puVar3 = (undefined8 *)
                 UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_var;
joined_r0x08a09ef4:
        if ((uVar2 & 1) == 0) goto LAB_08a0a3f8;
        goto LAB_08a0a674;
      }
      goto LAB_08a0a4f8;
    }
    break;
  case 9:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  <>f__AnonymousType0<Assembly,_RegisterDictionaryKeyPathProviderAttribute>_TypeInfo
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09191620,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a4f8;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    System_Xml_XmlQualifiedName_HashCodeOfStringDelegate_var,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    Unity_VisualScripting_FullSerializer_Internal_fsPortableReflection_AttributeQuery_var
                           ,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                      UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_var
                             ,5,0);
        puVar1 = 
        UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_VolumeParameterChain_var;
        goto joined_r0x08a09f80;
      }
      goto LAB_08a0a580;
    }
    break;
  case 10:
  case 0x18:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09125ec8,5,0);
    puVar3 = (undefined8 *)PTR_DAT_09139438;
    goto joined_r0x08a09ca0;
  case 0xb:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_XR_ARSubsystems_XRParticipantSubsystemDescriptor_Cinfo_var
                         ,5,0);
    puVar3 = (undefined8 *)
             UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_var;
    goto joined_r0x08a09ca0;
  case 0xc:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09125ec8,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09139438,5,0);
      puVar1 = PTR_DAT_0916cce8;
      goto joined_r0x08a09fc8;
    }
    break;
  case 0xd:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_var
                         ,5,0);
    puVar3 = (undefined8 *)
             UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystemDescriptor_Cinfo_var;
    goto joined_r0x08a09ca0;
  case 0xe:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_var
                         ,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    UnityEngine_XR_ARSubsystems_XRFaceSubsystemDescriptor_Cinfo_var,
                           5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a580;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09153ad0,5,0);
      puVar1 = PTR_DAT_09158a08;
      goto joined_r0x08a09fc8;
    }
    break;
  case 0xf:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_var,5,0
                        );
    puVar3 = (undefined8 *)UnityEngine_XR_ARSubsystems_XRDepthSubsystemDescriptor_Cinfo_var;
    goto joined_r0x08a09ca0;
  case 0x10:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_XR_ARSubsystems_XRCpuImage_AsyncConversion_var,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Xml_Schema_XmlAtomicValue_Union_var,5,0);
      puVar1 = Doozy_Runtime_Signals_SignalProvider_Local_Pointer_Name_var;
      goto joined_r0x08a09fc8;
    }
    break;
  case 0x11:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_var,5,0);
    puVar3 = (undefined8 *)<>f__AnonymousType0<Assembly,_Type>_TypeInfo;
    goto joined_r0x08a09ca0;
  case 0x12:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156f0,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156d8,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a4f8;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156c0,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156c8,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156e8,5,0);
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156b0,5,0);
          if ((uVar2 & 1) != 0) goto LAB_08a0a61c;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156d0,5,0);
          if ((uVar2 & 1) != 0) goto LAB_08a0a6e8;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156e0,5,0);
          if ((uVar2 & 1) != 0) goto LAB_08a0a710;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091156b8,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_08a0a738;
        }
        goto LAB_08a0a69c;
      }
      goto LAB_08a0a580;
    }
    break;
  case 0x13:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_0913e7b0,5,0);
    puVar3 = (undefined8 *)UnityEngine_XR_ARSubsystems_XROcclusionSubsystem_Provider_var;
    goto joined_r0x08a09ca0;
  case 0x14:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                  UnityEngine_XR_ARSubsystems_XRImageTrackingSubsystemDescriptor_Cinfo_var
                         ,5,0);
    puVar3 = (undefined8 *)UnityEngine_XR_ARSubsystems_XREnvironmentProbeSubsystem_Provider_var;
    if ((uVar2 & 1) == 0) {
LAB_08a0a5d0:
      uVar2 = FUN_073256a8(param_2,*puVar3,5,0);
      uVar4 = 0;
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      goto LAB_08a0a61c;
    }
    goto LAB_08a0a4f8;
  case 0x15:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_0918a650,5,0);
    puVar3 = (undefined8 *)UnityEngine_XR_ARSubsystems_XRHumanBodySubsystemDescriptor_Cinfo_var;
joined_r0x08a09ca0:
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*puVar3,5,0);
      if ((uVar2 & 1) == 0) {
switchD_08a09c80_default:
        return 0;
      }
LAB_08a0a4f8:
      uVar4 = 1;
      goto LAB_08a0a61c;
    }
    break;
  case 0x16:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09121140,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    System_Text_Json_Nodes_JsonObject_DebugView_DebugViewProperty_var
                           ,5,0);
      puVar3 = (undefined8 *)PTR_DAT_0916cbe0;
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
      goto LAB_08a0a5d0;
    }
    goto LAB_08a0a4f8;
  case 0x17:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09124988,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09124990,5,0);
      if ((uVar2 & 1) != 0) goto LAB_08a0a674;
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09135050,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_091918c8,5,0);
        puVar1 = PTR_DAT_09191620;
joined_r0x08a09f80:
        if ((uVar2 & 1) == 0) {
          uVar4 = 5;
          uVar2 = FUN_073256a8(param_2,*(undefined8 *)puVar1,5,0);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          goto LAB_08a0a61c;
        }
LAB_08a0a69c:
        uVar4 = 4;
        goto LAB_08a0a61c;
      }
      goto LAB_08a0a580;
    }
    goto LAB_08a0a4f8;
  case 0x19:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)PTR_DAT_09191780,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Guid___var,5,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                      UnityEngine_AddressableAssets_ResourceLocators_ContentCatalogData_ResourceLocator_CacheKey_var
                             ,5,0);
        puVar3 = (undefined8 *)UnityEngine_XR_ARSubsystems_XRPlaneSubsystemDescriptor_Cinfo_var;
        goto joined_r0x08a09ef4;
      }
      goto LAB_08a0a4f8;
    }
    break;
  case 0x1a:
    uVar2 = FUN_073256a8(param_2,*(undefined8 *)System_Guid___var,5,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_073256a8(param_2,*(undefined8 *)
                                    System_ComponentModel_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_var
                           ,5,0);
      puVar1 = UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_var;
      goto joined_r0x08a09fc8;
    }
    break;
  default:
    goto switchD_08a09c80_default;
  }
  uVar4 = 0;
LAB_08a0a61c:
  *param_3 = uVar4;
  return 1;
}


