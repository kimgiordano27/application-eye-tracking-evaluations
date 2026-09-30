/*
FUNCTION_NAME: UnityEngine.Material$$set_mainTextureScale
ENTRY_POINT: 0257e0c0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 168
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_5;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_4;functionality_data_collection_or_telemetry_hits_2
*/


void UnityEngine_Material__set_mainTextureScale(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  undefined8 in_stack_00000008;
  
  puVar1 = System_Func<float[],_Vector3>_TypeInfo;
  FUN_01320e50(param_2,**(undefined8 **)(param_1 + 0xaa8));
  *(undefined8 *)(unaff_x19 + 0x38) = param_2;
  uVar4 = FUN_0268cec8(0xffffffff,0);
  *(undefined4 *)(unaff_x19 + 0x40) = uVar4;
  uVar5 = FUN_025ae83c(1,0);
  *(undefined8 *)(unaff_x19 + 0x44) = uVar5;
  *(undefined4 *)(unaff_x19 + 0x4c) = 1;
  *(undefined4 *)(unaff_x19 + 0x54) = 1;
  *(undefined4 *)(unaff_x19 + 100) = 0x3f000000;
  *(undefined4 *)(unaff_x19 + 0x6c) = 0x40400000;
  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar2 = System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Nullable<DateTimeOffset>>_TypeInfo
  ;
  if (lVar6 != 0) {
    FUN_025b1ac0(lVar6,0);
    *(long *)(unaff_x19 + 0x78) = lVar6;
    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar6 != 0) {
      FUN_025b1b9c(lVar6,0);
      *(long *)(unaff_x19 + 0x80) = lVar6;
      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if (lVar6 != 0) {
        FUN_025b1ac0(lVar6,0);
        *(long *)(unaff_x19 + 0x88) = lVar6;
        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
        puVar2 = StringLiteral_10202;
        if (lVar6 != 0) {
          FUN_025b1b9c(lVar6,0);
          *(long *)(unaff_x19 + 0x90) = lVar6;
          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          puVar1 = PTR_DAT_033ecab0;
          if (lVar6 != 0) {
            UnityEngine_Rendering_ShaderTagId__Equals(lVar6,0);
            *(long *)(unaff_x19 + 0x98) = lVar6;
            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if (lVar6 != 0) {
              FUN_025b1d68(lVar6,0);
              *(long *)(unaff_x19 + 0xa0) = lVar6;
              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
              if (lVar6 != 0) {
                UnityEngine_Rendering_ShaderTagId__Equals(lVar6,0);
                *(long *)(unaff_x19 + 0xa8) = lVar6;
                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                puVar2 = PTR_DAT_033ed1b0;
                if (lVar6 != 0) {
                  FUN_025b1d68(lVar6,0);
                  *(long *)(unaff_x19 + 0xb0) = lVar6;
                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                  puVar1 = UnityEngine_EventSystems_IMoveHandler_TypeInfo;
                  if (lVar6 != 0) {
                    FUN_025b1e58(lVar6,0);
                    *(long *)(unaff_x19 + 0xb8) = lVar6;
                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                    if (lVar6 != 0) {
                      FUN_025b1f3c(lVar6,0);
                      *(long *)(unaff_x19 + 0xc0) = lVar6;
                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if (lVar6 != 0) {
                        FUN_025b1e58(lVar6,0);
                        *(long *)(unaff_x19 + 200) = lVar6;
                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        puVar2 = StringLiteral_3421;
                        if (lVar6 != 0) {
                          FUN_025b1f3c(lVar6,0);
                          *(long *)(unaff_x19 + 0xd0) = lVar6;
                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                          puVar2 = 
                          Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_add_WhenStateChanged__
                          ;
                          if (lVar6 != 0) {
                            FUN_025b2034(lVar6,0);
                            *(long *)(unaff_x19 + 0xd8) = lVar6;
                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                            puVar2 = OVRPlugin_OVRP_1_87_0_TypeInfo;
                            if (lVar6 != 0) {
                              FUN_025b216c(lVar6,0);
                              *(long *)(unaff_x19 + 0xe0) = lVar6;
                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                              puVar2 = 
                              Method_RCG_Haptics_<VibrateContinououslyCoroutine>d__21_System_Collections_IEnumerator_Reset__
                              ;
                              if (lVar6 != 0) {
                                FUN_012dbd00(lVar6,0,*(undefined8 *)
                                                                                                            
                                                  Method_System_Collections_Generic_List_Enumerator<SpaceShipCommunicationsSwitch>_Dispose__
                                            );
                                *(long *)(unaff_x19 + 0xe8) = lVar6;
                                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                puVar2 = StringLiteral_6330;
                                if (lVar6 != 0) {
                                  FUN_012dbd00(lVar6,0,*(undefined8 *)
                                                                                                                
                                                  System_Collections_Generic_List<IDebugManager>_TypeInfo
                                              );
                                  *(long *)(unaff_x19 + 0xf0) = lVar6;
                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                  puVar2 = OVR_OpenVR_IVRIOBuffer__Close_TypeInfo;
                                  if (lVar6 != 0) {
                                    FUN_012dbd00(lVar6,0,*(undefined8 *)StringLiteral_1979);
                                    *(long *)(unaff_x19 + 0x100) = lVar6;
                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                    puVar3 = 
                                    Method_System_Diagnostics_TraceListener_set_IndentSize__;
                                    puVar1 = 
                                    Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                                    ;
                                    if (lVar6 != 0) {
                                      FUN_01320e50(lVar6,*(undefined8 *)
                                                                                                                    
                                                  Method_System_Diagnostics_TraceListener_set_IndentSize__
                                                  );
                                      *(long *)(unaff_x19 + 0x110) = lVar6;
                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                      puVar1 = Method_System_Data_NameNode_ParseName__;
                                      if (lVar6 != 0) {
                                        FUN_012c6300(lVar6,*(undefined8 *)
                                                                                                                        
                                                  Method_System_Net_FtpWebRequest_set_Proxy__);
                                        FUN_013a4bfc(lVar6,0,*(undefined8 *)puVar1);
                                        *(long *)(unaff_x19 + 0x118) = lVar6;
                                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                        puVar1 = PTR_DAT_033f5128;
                                        if (lVar6 != 0) {
                                          FUN_01320e50(lVar6,*(undefined8 *)puVar3);
                                          *(long *)(unaff_x19 + 0x120) = lVar6;
                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                                          puVar1 = 
                                          Method_System_Linq_Enumerable_Select<JProperty,_JToken>__;
                                          if (lVar6 != 0) {
                                            FUN_012c6300(lVar6,*(undefined8 *)
                                                                                                                                
                                                  Method_System_Collections_Generic_List<StackFrame>_Add__
                                                  );
                                            FUN_013a4bfc(lVar6,0,*(undefined8 *)puVar1);
                                            *(long *)(unaff_x19 + 0x128) = lVar6;
                                            lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                            puVar2 = 
                                            Method_System_Collections_Generic_List<RegexNode>__ctor__
                                            ;
                                            if (lVar6 != 0) {
                                              FUN_01320e50(lVar6,*(undefined8 *)puVar3);
                                              *(long *)(unaff_x19 + 0x130) = lVar6;
                                              lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                              puVar1 = 
                                              Method_System_Collections_Generic_List_Enumerator<IXRTargetPriorityInteractor>_MoveNext__
                                              ;
                                              puVar2 = 
                                              Sirenix_Serialization_GlobalSerializationConfig_TypeInfo
                                              ;
                                              if (lVar6 != 0) {
                                                FUN_012c6300(lVar6,*(undefined8 *)
                                                                    StringLiteral_12292);
                                                FUN_013a4bfc(lVar6,0,*(undefined8 *)puVar1);
                                                *(long *)(unaff_x19 + 0x138) = lVar6;
                                                lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                puVar2 = 
                                                Method_UnityEngine_UIElements_Scroller_OnSliderValueChange__
                                                ;
                                                if (lVar6 != 0) {
                                                  in_stack_00000008._4_4_ = 0;
                                                  FUN_01250954(lVar6,(long)&stack0x00000008 + 4,1,0,
                                                               0,*(undefined8 *)PTR_DAT_033f7288);
                                                  *(long *)(unaff_x19 + 0x140) = lVar6;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  puVar1 = 
                                                  Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_string,_LogType>>_MoveNext__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    FUN_01298da0(lVar6,*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Collections_Generic_List_Enumerator<ValueTuple<string,_string,_LogType>>_MoveNext__
                                                  );
                                                  *(long *)(unaff_x19 + 0x148) = lVar6;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_033f2880;
                                                  if (lVar6 != 0) {
                                                    FUN_01298da0(lVar6,*(undefined8 *)puVar1);
                                                    *(long *)(unaff_x19 + 0x150) = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    puVar2 = PTR_DAT_033f46c8;
                                                    if (lVar6 != 0) {
                                                      FUN_01298da0(lVar6,*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Collections_Generic_List<TMP_MaterialManager_FallbackMaterial>_Clear__
                                                  );
                                                  *(long *)(unaff_x19 + 0x158) = lVar6;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  puVar2 = PTR_DAT_033f2130;
                                                  if (lVar6 != 0) {
                                                    FUN_012dbd00(lVar6,0,*(undefined8 *)
                                                                                                                                                    
                                                  Meta_XR_MultiplayerBlocks_Shared_PlatformInit_<>c__DisplayClass5_0_TypeInfo
                                                  );
                                                  *(long *)(unaff_x19 + 0x160) = lVar6;
                                                  lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                                                  puVar2 = UnityEngine_KeyCode___TypeInfo;
                                                  if (lVar6 != 0) {
                                                    FUN_01298da0(lVar6,*(undefined8 *)
                                                                        StringLiteral_6626);
                                                    *(long *)(unaff_x19 + 0x168) = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar6 != 0) {
                                                      FUN_025b257c(lVar6,0);
                                                      *(long *)(unaff_x19 + 0x178) = lVar6;
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar6 != 0) {
                                                        FUN_025b257c(lVar6,0);
                                                        *(long *)(unaff_x19 + 0x180) = lVar6;
                                                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar2);
                                                        if (lVar6 != 0) {
                                                          FUN_025b257c(lVar6,0);
                                                          *(long *)(unaff_x19 + 0x188) = lVar6;
                                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                      puVar2);
                                                          if (lVar6 != 0) {
                                                            FUN_025b257c(lVar6,0);
                                                            *(long *)(unaff_x19 + 400) = lVar6;
                                                            lVar6 = thunk_FUN_00d62348(*(undefined8
                                                                                         *)puVar2);
                                                            if (lVar6 != 0) {
                                                              FUN_025b257c(lVar6,0);
                                                              *(long *)(unaff_x19 + 0x198) = lVar6;
                                                              lVar6 = thunk_FUN_00d62348(*(
                                                  undefined8 *)puVar2);
                                                  if (lVar6 != 0) {
                                                    FUN_025b257c(lVar6,0);
                                                    *(long *)(unaff_x19 + 0x1a0) = lVar6;
                                                    lVar6 = thunk_FUN_00d62348(*(undefined8 *)puVar2
                                                                              );
                                                    if (lVar6 != 0) {
                                                      FUN_025b257c(lVar6,0);
                                                      *(long *)(unaff_x19 + 0x1a8) = lVar6;
                                                      lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                  puVar2);
                                                      if (lVar6 != 0) {
                                                        FUN_025b257c(lVar6,0);
                                                        *(long *)(unaff_x19 + 0x1b0) = lVar6;
                                                        lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                    puVar2);
                                                        puVar2 = StringLiteral_5568;
                                                        if (lVar6 != 0) {
                                                          FUN_025b257c(lVar6,0);
                                                          *(long *)(unaff_x19 + 0x1b8) = lVar6;
                                                          lVar6 = thunk_FUN_00d62348(*(undefined8 *)
                                                                                      puVar2);
                                                          if (lVar6 != 0) {
                                                            FUN_01320e50(lVar6,*(undefined8 *)
                                                                                StringLiteral_6586);
                                                            *(long *)(unaff_x19 + 0x1c0) = lVar6;
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


