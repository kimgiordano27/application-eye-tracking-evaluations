/*
FUNCTION_NAME: UnityEngine.Material$$HasProperty
ENTRY_POINT: 0257e21c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 109
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Material__HasProperty(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 in_stack_00000008;
  
  lVar4 = thunk_FUN_00d62348();
  puVar1 = UnityEngine_EventSystems_IMoveHandler_TypeInfo;
  if (lVar4 != 0) {
    FUN_025b1e58(lVar4,0);
    *(long *)(unaff_x19 + 0xb8) = lVar4;
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar4 != 0) {
      FUN_025b1f3c(lVar4,0);
      *(long *)(unaff_x19 + 0xc0) = lVar4;
      lVar4 = thunk_FUN_00d62348(*unaff_x21);
      if (lVar4 != 0) {
        FUN_025b1e58(lVar4,0);
        *(long *)(unaff_x19 + 200) = lVar4;
        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = StringLiteral_3421;
        if (lVar4 != 0) {
          FUN_025b1f3c(lVar4,0);
          *(long *)(unaff_x19 + 0xd0) = lVar4;
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          puVar1 = 
          Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_add_WhenStateChanged__
          ;
          if (lVar4 != 0) {
            FUN_025b2034(lVar4,0);
            *(long *)(unaff_x19 + 0xd8) = lVar4;
            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            puVar1 = OVRPlugin_OVRP_1_87_0_TypeInfo;
            if (lVar4 != 0) {
              FUN_025b216c(lVar4,0);
              *(long *)(unaff_x19 + 0xe0) = lVar4;
              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
              puVar1 = 
              Method_RCG_Haptics_<VibrateContinououslyCoroutine>d__21_System_Collections_IEnumerator_Reset__
              ;
              if (lVar4 != 0) {
                FUN_012dbd00(lVar4,0,*(undefined8 *)
                                      Method_System_Collections_Generic_List_Enumerator<SpaceShipCommunicationsSwitch>_Dispose__
                            );
                *(long *)(unaff_x19 + 0xe8) = lVar4;
                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar1 = StringLiteral_6330;
                if (lVar4 != 0) {
                  FUN_012dbd00(lVar4,0,*(undefined8 *)
                                        System_Collections_Generic_List<IDebugManager>_TypeInfo);
                  *(long *)(unaff_x19 + 0xf0) = lVar4;
                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  puVar1 = OVR_OpenVR_IVRIOBuffer__Close_TypeInfo;
                  if (lVar4 != 0) {
                    FUN_012dbd00(lVar4,0,*(undefined8 *)StringLiteral_1979);
                    *(long *)(unaff_x19 + 0x100) = lVar4;
                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    puVar3 = Method_System_Diagnostics_TraceListener_set_IndentSize__;
                    puVar2 = 
                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                    ;
                    if (lVar4 != 0) {
                      FUN_01320e50(lVar4,*(undefined8 *)
                                          Method_System_Diagnostics_TraceListener_set_IndentSize__);
                      *(long *)(unaff_x19 + 0x110) = lVar4;
                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      puVar2 = Method_System_Data_NameNode_ParseName__;
                      if (lVar4 != 0) {
                        FUN_012c6300(lVar4,*(undefined8 *)
                                            Method_System_Net_FtpWebRequest_set_Proxy__);
                        FUN_013a4bfc(lVar4,0,*(undefined8 *)puVar2);
                        *(long *)(unaff_x19 + 0x118) = lVar4;
                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        puVar2 = PTR_DAT_033f5128;
                        if (lVar4 != 0) {
                          FUN_01320e50(lVar4,*(undefined8 *)puVar3);
                          *(long *)(unaff_x19 + 0x120) = lVar4;
                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar2 = Method_System_Linq_Enumerable_Select<JProperty,_JToken>__;
                          if (lVar4 != 0) {
                            FUN_012c6300(lVar4,*(undefined8 *)
                                                Method_System_Collections_Generic_List<StackFrame>_Add__
                                        );
                            FUN_013a4bfc(lVar4,0,*(undefined8 *)puVar2);
                            *(long *)(unaff_x19 + 0x128) = lVar4;
                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                            puVar1 = Method_System_Collections_Generic_List<RegexNode>__ctor__;
                            if (lVar4 != 0) {
                              FUN_01320e50(lVar4,*(undefined8 *)puVar3);
                              *(long *)(unaff_x19 + 0x130) = lVar4;
                              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                              puVar2 = 
                              Method_System_Collections_Generic_List_Enumerator<IXRTargetPriorityInteractor>_MoveNext__
                              ;
                              puVar1 = Sirenix_Serialization_GlobalSerializationConfig_TypeInfo;
                              if (lVar4 != 0) {
                                FUN_012c6300(lVar4,*(undefined8 *)StringLiteral_12292);
                                FUN_013a4bfc(lVar4,0,*(undefined8 *)puVar2);
                                *(long *)(unaff_x19 + 0x138) = lVar4;
                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                puVar1 = 
                                Method_UnityEngine_UIElements_Scroller_OnSliderValueChange__;
                                if (lVar4 != 0) {
                                  in_stack_00000008._4_4_ = 0;
                                  FUN_01250954(lVar4,(long)&stack0x00000008 + 4,1,0,0,
                                               *(undefined8 *)PTR_DAT_033f7288);
                                  *(long *)(unaff_x19 + 0x140) = lVar4;
                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                  puVar2 = 
                                  Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_string,_LogType>>_MoveNext__
                                  ;
                                  if (lVar4 != 0) {
                                    FUN_01298da0(lVar4,*(undefined8 *)
                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_string,_LogType>>_MoveNext__
                                                );
                                    *(long *)(unaff_x19 + 0x148) = lVar4;
                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                    puVar1 = PTR_DAT_033f2880;
                                    if (lVar4 != 0) {
                                      FUN_01298da0(lVar4,*(undefined8 *)puVar2);
                                      *(long *)(unaff_x19 + 0x150) = lVar4;
                                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                      puVar1 = PTR_DAT_033f46c8;
                                      if (lVar4 != 0) {
                                        FUN_01298da0(lVar4,*(undefined8 *)
                                                                                                                        
                                                  Method_System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_Clear__
                                                  );
                                        *(long *)(unaff_x19 + 0x158) = lVar4;
                                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                        puVar1 = PTR_DAT_033f2130;
                                        if (lVar4 != 0) {
                                          FUN_012dbd00(lVar4,0,*(undefined8 *)
                                                                                                                                
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
                                                  );
                                          *(long *)(unaff_x19 + 0x160) = lVar4;
                                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                          puVar1 = UnityEngine_KeyCode___TypeInfo;
                                          if (lVar4 != 0) {
                                            FUN_01298da0(lVar4,*(undefined8 *)StringLiteral_6626);
                                            *(long *)(unaff_x19 + 0x168) = lVar4;
                                            lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                            if (lVar4 != 0) {
                                              FUN_025b257c(lVar4,0);
                                              *(long *)(unaff_x19 + 0x178) = lVar4;
                                              lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                              if (lVar4 != 0) {
                                                FUN_025b257c(lVar4,0);
                                                *(long *)(unaff_x19 + 0x180) = lVar4;
                                                lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                if (lVar4 != 0) {
                                                  FUN_025b257c(lVar4,0);
                                                  *(long *)(unaff_x19 + 0x188) = lVar4;
                                                  lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_025b257c(lVar4,0);
                                                    *(long *)(unaff_x19 + 400) = lVar4;
                                                    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1
                                                                              );
                                                    if (lVar4 != 0) {
                                                      FUN_025b257c(lVar4,0);
                                                      *(long *)(unaff_x19 + 0x198) = lVar4;
                                                      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar1);
                                                      if (lVar4 != 0) {
                                                        FUN_025b257c(lVar4,0);
                                                        *(long *)(unaff_x19 + 0x1a0) = lVar4;
                                                        lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar1);
                                                        if (lVar4 != 0) {
                                                          FUN_025b257c(lVar4,0);
                                                          *(long *)(unaff_x19 + 0x1a8) = lVar4;
                                                          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                      puVar1);
                                                          if (lVar4 != 0) {
                                                            FUN_025b257c(lVar4,0);
                                                            *(long *)(unaff_x19 + 0x1b0) = lVar4;
                                                            lVar4 = thunk_FUN_00d62348(*(undefined8
                                                                                         *)puVar1);
                                                            puVar1 = StringLiteral_5568;
                                                            if (lVar4 != 0) {
                                                              FUN_025b257c(lVar4,0);
                                                              *(long *)(unaff_x19 + 0x1b8) = lVar4;
                                                              lVar4 = thunk_FUN_00d62348(*(
                                                  undefined8 *)puVar1);
                                                  if (lVar4 != 0) {
                                                    FUN_01320e50(lVar4,*(undefined8 *)
                                                                        StringLiteral_6586);
                                                    *(long *)(unaff_x19 + 0x1c0) = lVar4;
                                                    thunk_FUN_0268a01c();
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


