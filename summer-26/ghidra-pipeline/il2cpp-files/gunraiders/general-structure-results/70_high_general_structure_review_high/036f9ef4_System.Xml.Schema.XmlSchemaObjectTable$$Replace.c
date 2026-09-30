/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaObjectTable$$Replace
ENTRY_POINT: 036f9ef4
PROGRAM: gunraiders-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: pose_vector;ui_interaction;telemetry
EVIDENCE: strong_pose_or_ray_construction_hits_16;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


undefined8 System_Xml_Schema_XmlSchemaObjectTable__Replace(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *unaff_x21;
  
  FUN_032e04b8(param_1,0);
  uVar2 = FUN_032e935c();
  puVar3 = (undefined8 *)
           System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_TypeInfo;
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)
             Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ThrowUnableToSerializeError__
    ;
    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    FUN_032e04b8(uVar4,0);
    uVar2 = FUN_032e935c();
    puVar3 = (undefined8 *)
             System_Xml_Serialization_XmlSerializationWriterInterpreter_CallbackInfo_TypeInfo;
    if ((uVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)System_Linq_Expressions_Interpreter_NotInstruction_NotInt32_TypeInfo;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      FUN_032e04b8(uVar4,0);
      uVar2 = FUN_032e935c();
      puVar3 = (undefined8 *)Method_UnityEngine_UIElements_EventDispatcher_ProcessEventQueue__;
      if ((uVar2 & 1) == 0) {
        uVar4 = *(undefined8 *)PTR_DAT_0422fb70;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        FUN_032e04b8(uVar4,0);
        uVar2 = FUN_032e935c();
        puVar3 = (undefined8 *)Method_System_ComponentModel_EventDescriptorCollection_Remove__;
        if ((uVar2 & 1) == 0) {
          uVar4 = *(undefined8 *)Method_System_Data_DataColumn_set_MaxLength__;
          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8();
          }
          FUN_032e04b8(uVar4,0);
          uVar2 = FUN_032e935c();
          puVar3 = (undefined8 *)Method_System_ComponentModel_EventDescriptorCollection_Remove__;
          if ((uVar2 & 1) == 0) {
            uVar4 = *(undefined8 *)
                     Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<EventModifiers,_Vector2>>__
            ;
            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8();
            }
            FUN_032e04b8(uVar4,0);
            uVar2 = FUN_032e935c();
            puVar1 = PTR_DAT_0422fb88;
            puVar3 = (undefined8 *)Method_System_ComponentModel_EventDescriptorCollection_Remove__;
            if ((uVar2 & 1) == 0) {
              uVar4 = *(undefined8 *)PTR_DAT_0422fb88;
              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                thunk_FUN_01c1d1e8();
              }
              FUN_032e04b8(uVar4,0);
              uVar2 = FUN_032e935c();
              puVar3 = (undefined8 *)
                       Method_System_Linq_Enumerable_ToArray<BillingProductDefinition>__;
              if ((uVar2 & 1) == 0) {
                uVar4 = *(undefined8 *)PTR_DAT_0422fb38;
                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                  thunk_FUN_01c1d1e8();
                }
                FUN_032e04b8(uVar4,0);
                uVar2 = FUN_032e935c();
                puVar3 = (undefined8 *)Method_System_Linq_Enumerable_ToArray<ReportSection>__;
                if ((uVar2 & 1) == 0) {
                  uVar4 = *(undefined8 *)
                           Method_Newtonsoft_Json_Serialization_DefaultContractResolver_FilterMembers__
                  ;
                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    thunk_FUN_01c1d1e8();
                  }
                  FUN_032e04b8(uVar4,0);
                  uVar2 = FUN_032e935c();
                  puVar3 = (undefined8 *)Method_System_Linq_Enumerable_ToArray<ReportSection>__;
                  if ((uVar2 & 1) == 0) {
                    uVar4 = *(undefined8 *)PTR_DAT_0422fbd0;
                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                      thunk_FUN_01c1d1e8();
                    }
                    FUN_032e04b8(uVar4,0);
                    uVar2 = FUN_032e935c();
                    puVar3 = (undefined8 *)System_NotImplementedException_TypeInfo;
                    if ((uVar2 & 1) == 0) {
                      uVar4 = *(undefined8 *)
                               Method_UnityEngine_UIElements_DefaultEventSystem_SendPositionBasedEvent<ValueTuple<int,_int,_EventModifiers>>__
                      ;
                      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                        thunk_FUN_01c1d1e8();
                      }
                      FUN_032e04b8(uVar4,0);
                      uVar2 = FUN_032e935c();
                      puVar3 = (undefined8 *)System_NotImplementedException_TypeInfo;
                      if ((uVar2 & 1) == 0) {
                        uVar4 = *(undefined8 *)PTR_DAT_0422fb78;
                        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                          thunk_FUN_01c1d1e8();
                        }
                        FUN_032e04b8(uVar4,0);
                        uVar2 = FUN_032e935c();
                        puVar3 = (undefined8 *)
                                 Method_VoxelBusters_EssentialKit_EssentialKitSettings_<InitialiseFeatures>b__76_6__
                        ;
                        if ((uVar2 & 1) == 0) {
                          uVar4 = *(undefined8 *)
                                   Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<ValueTuple<NavigationMoveEvent_Direction,_EventModifiers,_DefaultEventSystem_IInput>>__
                          ;
                          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                            thunk_FUN_01c1d1e8();
                          }
                          FUN_032e04b8(uVar4,0);
                          uVar2 = FUN_032e935c();
                          puVar3 = (undefined8 *)
                                   Method_VoxelBusters_EssentialKit_EssentialKitSettings_<InitialiseFeatures>b__76_6__
                          ;
                          if ((uVar2 & 1) == 0) {
                            uVar4 = *(undefined8 *)PTR_DAT_0422fb20;
                            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                              thunk_FUN_01c1d1e8();
                            }
                            FUN_032e04b8(uVar4,0);
                            uVar2 = FUN_032e935c();
                            puVar3 = (undefined8 *)Method_System_Linq_Enumerable_ToArray<Object>__;
                            if ((uVar2 & 1) == 0) {
                              uVar4 = *(undefined8 *)
                                       Method_Newtonsoft_Json_Serialization_DefaultContractResolver_GetAttributeConstructor__
                              ;
                              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                thunk_FUN_01c1d1e8();
                              }
                              FUN_032e04b8(uVar4,0);
                              uVar2 = FUN_032e935c();
                              puVar3 = (undefined8 *)Method_System_Linq_Enumerable_ToArray<Object>__
                              ;
                              if ((uVar2 & 1) == 0) {
                                uVar4 = *(undefined8 *)PTR_DAT_0422fb48;
                                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                  thunk_FUN_01c1d1e8();
                                }
                                FUN_032e04b8(uVar4,0);
                                uVar2 = FUN_032e935c();
                                puVar3 = (undefined8 *)
                                         Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsScrollHandler>__
                                ;
                                if ((uVar2 & 1) == 0) {
                                  uVar4 = *(undefined8 *)PTR_DAT_0422fb80;
                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                    thunk_FUN_01c1d1e8();
                                  }
                                  FUN_032e04b8(uVar4,0);
                                  uVar2 = FUN_032e935c();
                                  puVar3 = (undefined8 *)System_Text_Normalization_TypeInfo;
                                  if ((uVar2 & 1) == 0) {
                                    uVar4 = *(undefined8 *)
                                             Method_System_Data_DataColumn_set_Namespace__;
                                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                      thunk_FUN_01c1d1e8();
                                    }
                                    FUN_032e04b8(uVar4,0);
                                    uVar2 = FUN_032e935c();
                                    puVar3 = (undefined8 *)System_Text_Normalization_TypeInfo;
                                    if ((uVar2 & 1) == 0) {
                                      uVar4 = *(undefined8 *)puVar1;
                                      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                        thunk_FUN_01c1d1e8();
                                      }
                                      FUN_032e04b8(uVar4,0);
                                      uVar2 = FUN_032e935c();
                                      puVar3 = (undefined8 *)
                                               Method_System_Linq_Enumerable_ToArray<BillingProductDefinition>__
                                      ;
                                      if ((uVar2 & 1) == 0) {
                                        uVar4 = *(undefined8 *)
                                                 Method_System_Data_DataColumn_set_Prefix__;
                                        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                          thunk_FUN_01c1d1e8();
                                        }
                                        FUN_032e04b8(uVar4,0);
                                        uVar2 = FUN_032e935c();
                                        puVar3 = (undefined8 *)
                                                 Method_System_Linq_Enumerable_ToArray<BillingProductDefinition>__
                                        ;
                                        if ((uVar2 & 1) == 0) {
                                          uVar4 = *(undefined8 *)PTR_DAT_0422fb90;
                                          if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                            thunk_FUN_01c1d1e8();
                                          }
                                          FUN_032e04b8(uVar4,0);
                                          uVar2 = FUN_032e935c();
                                          puVar3 = (undefined8 *)
                                                                                                      
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsPointerEnterHandler>__
                                          ;
                                          if ((uVar2 & 1) == 0) {
                                            uVar4 = *(undefined8 *)
                                                     Method_System_Data_DataColumn_set_ReadOnly__;
                                            if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                              thunk_FUN_01c1d1e8();
                                            }
                                            FUN_032e04b8(uVar4,0);
                                            uVar2 = FUN_032e935c();
                                            puVar3 = (undefined8 *)
                                                                                                          
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsPointerEnterHandler>__
                                            ;
                                            if ((uVar2 & 1) == 0) {
                                              uVar4 = *(undefined8 *)PTR_DAT_0422fbe8;
                                              if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                thunk_FUN_01c1d1e8();
                                              }
                                              FUN_032e04b8(uVar4,0);
                                              uVar2 = FUN_032e935c();
                                              puVar3 = (undefined8 *)
                                                                                                              
                                                  Method_UnityEngine_UIElements_EventDispatcherGate__ctor__
                                              ;
                                              if ((uVar2 & 1) == 0) {
                                                uVar4 = *(undefined8 *)PTR_DAT_0422fbf0;
                                                if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                  thunk_FUN_01c1d1e8();
                                                }
                                                FUN_032e04b8(uVar4,0);
                                                uVar2 = FUN_032e935c();
                                                puVar3 = (undefined8 *)
                                                                                                                  
                                                  Method_System_Reflection_EventInfo_GetEventFromHandle__
                                                ;
                                                if ((uVar2 & 1) == 0) {
                                                  uVar4 = *(undefined8 *)PTR_DAT_0422fbf8;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_VoxelBusters_EssentialKit_EssentialKitSettings_GetSharedInstanceInternal__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)PTR_DAT_0422fb30;
                                                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                      thunk_FUN_01c1d1e8();
                                                    }
                                                    FUN_032e04b8(uVar4,0);
                                                    uVar2 = FUN_032e935c();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsBeginDragHandler>__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_get_Current__
                                                  ;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsEndDragHandler>__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_KeyboardEventBase<KeyUpEvent>__ctor__
                                                  ;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_System_ComponentModel_EventDescriptorCollection_System_Collections_IList_set_Item__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)PTR_DAT_0422fbe0;
                                                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                      thunk_FUN_01c1d1e8();
                                                    }
                                                    FUN_032e04b8(uVar4,0);
                                                    uVar2 = FUN_032e935c();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLeaderboardsListener_TypeInfo
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_DefaultEventSystem_SendFocusBasedEvent<DefaultEventSystem>__
                                                  ;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLeaderboardsListener_TypeInfo
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Data_DataColumnCollection_AddAt__;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLeaderboardsListener_TypeInfo
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_Newtonsoft_Json_Serialization_DefaultContractResolver_ShouldSerializeEntityMember__
                                                  ;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  VoxelBusters_EssentialKit_GameServicesCore_Android_NativeLoadLeaderboardsListener_TypeInfo
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                             System_MonoCustomAttrs_TypeInfo;
                                                    if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                      thunk_FUN_01c1d1e8();
                                                    }
                                                    FUN_032e04b8(uVar4,0);
                                                    uVar2 = FUN_032e935c();
                                                    puVar3 = (undefined8 *)
                                                                                                                          
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsBeginDragHandler>__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Net_Configuration_DefaultProxySection_Reset__
                                                  ;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsBeginDragHandler>__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Collections_Generic_List_Enumerator<VolumeAndPlaneSwitcher_LabelGeometryPair>_Dispose__
                                                  ;
                                                  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                                                    thunk_FUN_01c1d1e8();
                                                  }
                                                  FUN_032e04b8(uVar4,0);
                                                  uVar2 = FUN_032e935c();
                                                  puVar3 = (undefined8 *)
                                                                                                                      
                                                  Method_DarkTonic_MasterAudio_EventSounds_AddUGUIHandler<EventSoundsBeginDragHandler>__
                                                  ;
                                                  if ((uVar2 & 1) == 0) {
                                                    puVar3 = *(undefined8 **)
                                                              (*(long *)PTR_DAT_0422fc38 + 0xb8);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return *puVar3;
}


