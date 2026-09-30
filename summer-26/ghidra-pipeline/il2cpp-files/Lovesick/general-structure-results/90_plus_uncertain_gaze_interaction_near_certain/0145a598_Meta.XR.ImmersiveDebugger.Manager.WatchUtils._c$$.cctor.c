/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.WatchUtils.<>c$$.cctor
ENTRY_POINT: 0145a598
PROGRAM: Lovesick-libil2cpp.so
SCORE: 185
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ray_or_cast_sink_hits_1;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_5
*/


void Meta_XR_ImmersiveDebugger_Manager_WatchUtils_<>c___cctor(void)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  uint *unaff_x23;
  
  if (in_CY && !in_ZR) {
    unaff_x19[7] = unaff_x20;
    lVar1 = thunk_FUN_00d62348(*unaff_x22);
    if (lVar1 == 0) {
LAB_0145ae58:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_0143e30c(lVar1,*(undefined8 *)
                        Method_UnityEngine_ProBuilder_MeshOperations_AppendElements_CreatePolygonWithHole__
                 ,1,0);
    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar2 == 0) {
LAB_0145ae5c:
      uVar3 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar3,0);
    }
    if (4 < *unaff_x23) {
      unaff_x19[8] = lVar1;
      lVar1 = thunk_FUN_00d62348(*unaff_x22);
      if (lVar1 == 0) goto LAB_0145ae58;
      FUN_0143e30c(lVar1,*(undefined8 *)Method_OVRControllerTest_<>c_<Start>b__4_23__,0,0);
      lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
      if (lVar2 == 0) goto LAB_0145ae5c;
      if (5 < *unaff_x23) {
        unaff_x19[9] = lVar1;
        lVar1 = thunk_FUN_00d62348(*unaff_x22);
        if (lVar1 == 0) goto LAB_0145ae58;
        FUN_0143e30c(lVar1,*(undefined8 *)Method_CableSwitchBox_OffTriggerEntered__,0,0);
        lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
        if (lVar2 == 0) goto LAB_0145ae5c;
        if (6 < *unaff_x23) {
          unaff_x19[10] = lVar1;
          lVar1 = thunk_FUN_00d62348(*unaff_x22);
          if (lVar1 == 0) goto LAB_0145ae58;
          FUN_0143e30c(lVar1,*(undefined8 *)Method_System_Runtime_InteropServices_OSPlatform__ctor__
                       ,0,0);
          lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
          if (lVar2 == 0) goto LAB_0145ae5c;
          if (7 < *unaff_x23) {
            unaff_x19[0xb] = lVar1;
            lVar1 = thunk_FUN_00d62348(*unaff_x22);
            if (lVar1 == 0) goto LAB_0145ae58;
            FUN_0143e30c(lVar1,*(undefined8 *)System_Xml_Schema_Datatype_QName_TypeInfo,0,0);
            lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
            if (lVar2 == 0) goto LAB_0145ae5c;
            if (8 < *unaff_x23) {
              unaff_x19[0xc] = lVar1;
              lVar1 = thunk_FUN_00d62348(*unaff_x22);
              if (lVar1 == 0) goto LAB_0145ae58;
              FUN_0143e30c(lVar1,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_LocalDataStoreSlot>__ctor__
                           ,0,0);
              lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
              if (lVar2 == 0) goto LAB_0145ae5c;
              if (9 < *unaff_x23) {
                unaff_x19[0xd] = lVar1;
                lVar1 = thunk_FUN_00d62348(*unaff_x22);
                if (lVar1 == 0) goto LAB_0145ae58;
                FUN_0143e30c(lVar1,*(undefined8 *)
                                    UnityEngine_InputSystem_DefaultInputActions_IUIActions_TypeInfo,
                             0,0);
                lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                if (lVar2 == 0) goto LAB_0145ae5c;
                if (10 < *unaff_x23) {
                  unaff_x19[0xe] = lVar1;
                  lVar1 = thunk_FUN_00d62348(*unaff_x22);
                  if (lVar1 == 0) goto LAB_0145ae58;
                  FUN_0143e30c(lVar1,*(undefined8 *)Method_MedleyBossPushPhase_PlayerWon__,0,0);
                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                  if (lVar2 == 0) goto LAB_0145ae5c;
                  if (0xb < *unaff_x23) {
                    unaff_x19[0xf] = lVar1;
                    lVar1 = thunk_FUN_00d62348(*unaff_x22);
                    if (lVar1 == 0) goto LAB_0145ae58;
                    FUN_0143e30c(lVar1,*(undefined8 *)
                                        Method_Newtonsoft_Json_Converters_EntityKeyMemberConverter_ReadJson__
                                 ,0,0);
                    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                    if (lVar2 == 0) goto LAB_0145ae5c;
                    if (0xc < *unaff_x23) {
                      unaff_x19[0x10] = lVar1;
                      lVar1 = thunk_FUN_00d62348(*unaff_x22);
                      if (lVar1 == 0) goto LAB_0145ae58;
                      FUN_0143e30c(lVar1,*(undefined8 *)
                                          Method_Meta_WitAi_Json_JsonConvert_SerializeObject<Dictionary<string,_string>>__
                                   ,0,0);
                      lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                      if (lVar2 == 0) goto LAB_0145ae5c;
                      if (0xd < *unaff_x23) {
                        unaff_x19[0x11] = lVar1;
                        lVar1 = thunk_FUN_00d62348(*unaff_x22);
                        if (lVar1 == 0) goto LAB_0145ae58;
                        FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_9691,0,0);
                        lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                        if (lVar2 == 0) goto LAB_0145ae5c;
                        if (0xe < *unaff_x23) {
                          unaff_x19[0x12] = lVar1;
                          lVar1 = thunk_FUN_00d62348(*unaff_x22);
                          if (lVar1 == 0) goto LAB_0145ae58;
                          FUN_0143e30c(lVar1,*(undefined8 *)
                                              UnityEngine_UIElements_UIR_UIRenderDevice_<>c_TypeInfo
                                       ,0,0);
                          lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                          if (lVar2 == 0) goto LAB_0145ae5c;
                          if (0xf < *unaff_x23) {
                            unaff_x19[0x13] = lVar1;
                            lVar1 = thunk_FUN_00d62348(*unaff_x22);
                            if (lVar1 == 0) goto LAB_0145ae58;
                            FUN_0143e30c(lVar1,*(undefined8 *)
                                                Method_UnityEngine_Component_GetComponent<ObiCollider>__
                                         ,0,0);
                            lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                            if (lVar2 == 0) goto LAB_0145ae5c;
                            if (0x10 < *unaff_x23) {
                              unaff_x19[0x14] = lVar1;
                              lVar1 = thunk_FUN_00d62348(*unaff_x22);
                              if (lVar1 == 0) goto LAB_0145ae58;
                              FUN_0143e30c(lVar1,*(undefined8 *)
                                                  Method_System_Collections_Generic_Dictionary<Guid,_Action>_ContainsKey__
                                           ,0,0);
                              lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40));
                              if (lVar2 == 0) goto LAB_0145ae5c;
                              if (0x11 < *unaff_x23) {
                                unaff_x19[0x15] = lVar1;
                                lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                if (lVar1 == 0) goto LAB_0145ae58;
                                FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_7253,0,0);
                                lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)(*unaff_x19 + 0x40))
                                ;
                                if (lVar2 == 0) goto LAB_0145ae5c;
                                if (0x12 < *unaff_x23) {
                                  unaff_x19[0x16] = lVar1;
                                  lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                  if (lVar1 == 0) goto LAB_0145ae58;
                                  FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                            
                                                  System_Func<STMDelayData,_STMDelayData>_TypeInfo,0
                                               ,0);
                                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                    (*unaff_x19 + 0x40));
                                  if (lVar2 == 0) goto LAB_0145ae5c;
                                  if (0x13 < *unaff_x23) {
                                    unaff_x19[0x17] = lVar1;
                                    lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                    if (lVar1 == 0) goto LAB_0145ae58;
                                    FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                
                                                  Method_Oculus_Interaction_Interactor<SnapInteractor,_SnapInteractable>_get_State__
                                                 ,0,0);
                                    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                      (*unaff_x19 + 0x40));
                                    if (lVar2 == 0) goto LAB_0145ae5c;
                                    if (0x14 < *unaff_x23) {
                                      unaff_x19[0x18] = lVar1;
                                      lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                      if (lVar1 == 0) goto LAB_0145ae58;
                                      FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                    
                                                  Meta_Voice_VoiceRequest<VoiceServiceRequestEvent,_WitRequestOptions,_VoiceServiceRequestEvents,_VoiceServiceRequestResults>_TypeInfo
                                                  ,0,0);
                                      lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                        (*unaff_x19 + 0x40));
                                      if (lVar2 == 0) goto LAB_0145ae5c;
                                      if (0x15 < *unaff_x23) {
                                        unaff_x19[0x19] = lVar1;
                                        lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                        if (lVar1 == 0) goto LAB_0145ae58;
                                        FUN_0143e30c(lVar1,*(undefined8 *)StringLiteral_8324,0,0);
                                        lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                          (*unaff_x19 + 0x40));
                                        if (lVar2 == 0) goto LAB_0145ae5c;
                                        if (0x16 < *unaff_x23) {
                                          unaff_x19[0x1a] = lVar1;
                                          lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                          if (lVar1 == 0) goto LAB_0145ae58;
                                          FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                            
                                                  UnityEngine_InputSystem_InputProcessor_TypeInfo,0,
                                                  0);
                                          lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                            (*unaff_x19 + 0x40));
                                          if (lVar2 == 0) goto LAB_0145ae5c;
                                          if (0x17 < *unaff_x23) {
                                            unaff_x19[0x1b] = lVar1;
                                            lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                            if (lVar1 == 0) goto LAB_0145ae58;
                                            FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<OVRBone>_get_Count__
                                                  ,0,0);
                                            lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                              (*unaff_x19 + 0x40));
                                            if (lVar2 == 0) goto LAB_0145ae5c;
                                            if (0x18 < *unaff_x23) {
                                              unaff_x19[0x1c] = lVar1;
                                              lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                              if (lVar1 == 0) goto LAB_0145ae58;
                                              FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_Serialization_Formatters_Binary_BinaryConverter_WriteTypeInfo__
                                                  ,0,0);
                                              lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                (*unaff_x19 + 0x40))
                                              ;
                                              if (lVar2 == 0) goto LAB_0145ae5c;
                                              if (0x19 < *unaff_x23) {
                                                unaff_x19[0x1d] = lVar1;
                                                lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                if (lVar1 == 0) goto LAB_0145ae58;
                                                FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                        
                                                  Method_System_Collections_Generic_HashSet_Enumerator<Component>_Dispose__
                                                  ,0,0);
                                                lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                  (*unaff_x19 + 0x40
                                                                                  ));
                                                if (lVar2 == 0) goto LAB_0145ae5c;
                                                if (0x1a < *unaff_x23) {
                                                  unaff_x19[0x1e] = lVar1;
                                                  lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                  if (lVar1 == 0) goto LAB_0145ae58;
                                                  FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_Rendering_DebugUI_Field<Vector2>__ctor__
                                                  ,0,0);
                                                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar2 == 0) goto LAB_0145ae5c;
                                                  if (0x1b < *unaff_x23) {
                                                    unaff_x19[0x1f] = lVar1;
                                                    lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar1 == 0) goto LAB_0145ae58;
                                                    FUN_0143e30c(lVar1,*(undefined8 *)
                                                                        StringLiteral_5771,0,0);
                                                    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar2 == 0) goto LAB_0145ae5c;
                                                    if (0x1c < *unaff_x23) {
                                                      unaff_x19[0x20] = lVar1;
                                                      lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                      if (lVar1 == 0) goto LAB_0145ae58;
                                                      FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Unity_Collections_LowLevel_Unsafe_NativeArrayUnsafeUtility_GetUnsafePtr<ushort>__
                                                  ,0,0);
                                                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar2 == 0) goto LAB_0145ae5c;
                                                  if (0x1d < *unaff_x23) {
                                                    unaff_x19[0x21] = lVar1;
                                                    lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar1 == 0) goto LAB_0145ae58;
                                                    FUN_0143e30c(lVar1,*(undefined8 *)
                                                                        StringLiteral_5916,0,0);
                                                    lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                      (*unaff_x19 +
                                                                                      0x40));
                                                    if (lVar2 == 0) goto LAB_0145ae5c;
                                                    if (0x1e < *unaff_x23) {
                                                      unaff_x19[0x22] = lVar1;
                                                      lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                      if (lVar1 == 0) goto LAB_0145ae58;
                                                      FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                                    
                                                  Method_Newtonsoft_Json_Utilities_ImmutableCollectionsUtils_<>c__DisplayClass25_0_<TryBuildImmutableForDictionaryContract>b__0__
                                                  ,0,0);
                                                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar2 == 0) goto LAB_0145ae5c;
                                                  if (0x1f < *unaff_x23) {
                                                    unaff_x19[0x23] = lVar1;
                                                    lVar1 = thunk_FUN_00d62348(*unaff_x22);
                                                    if (lVar1 == 0) goto LAB_0145ae58;
                                                    FUN_0143e30c(lVar1,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Collections_Generic_Dictionary<int,_GUILayoutUtility_LayoutCache>_TryGetValue__
                                                  ,0,0);
                                                  lVar2 = thunk_FUN_00d6225c(lVar1,*(undefined8 *)
                                                                                    (*unaff_x19 +
                                                                                    0x40));
                                                  if (lVar2 == 0) goto LAB_0145ae5c;
                                                  if (0x20 < *unaff_x23) {
                                                    unaff_x19[0x24] = lVar1;
                                                    *(long **)(*(long *)(*unaff_x21 + 0xb8) + 8) =
                                                         unaff_x19;
                                                    return;
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
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


