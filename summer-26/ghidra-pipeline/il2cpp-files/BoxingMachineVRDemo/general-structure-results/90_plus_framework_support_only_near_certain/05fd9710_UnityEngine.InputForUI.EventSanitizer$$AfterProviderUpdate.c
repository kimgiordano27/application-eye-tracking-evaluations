/*
FUNCTION_NAME: UnityEngine.InputForUI.EventSanitizer$$AfterProviderUpdate
ENTRY_POINT: 05fd9710
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_InputForUI_EventSanitizer__AfterProviderUpdate(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint *unaff_x19;
  undefined8 *unaff_x20;
  int *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x29;
  
  FUN_03aabc60(param_2,*param_1);
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
  FUN_05fc0944(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponentsInParent<RectMask2D>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar3 + 0x10) = *unaff_x25;
    thunk_FUN_02dd37b4();
    if (param_2 != 0) {
      lVar6 = *(long *)(param_2 + 0x10);
      lVar7 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar3;
          thunk_FUN_02dd37b4(plVar4,lVar3);
        }
        else {
          FUN_03aac494(param_2,lVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(unaff_x22 + 0x28) = param_2;
        thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),param_2);
        *unaff_x21 = *unaff_x21 + 1;
        lVar3 = *unaff_x26;
        if (lVar3 != 0) {
          uVar1 = *unaff_x19;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *unaff_x19 = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494();
          }
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
          FUN_05fc094c(lVar3,0);
          puVar2 = Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_FullName__;
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)UnityEngine_XR_ARSubsystems_XRResultStatus_TypeInfo;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
            *(undefined4 *)(lVar3 + 0x18) = 0;
            lVar6 = thunk_FUN_02d9d534(*unaff_x27);
            FUN_03aabc60(lVar6,*unaff_x20);
            if (lVar6 != 0) {
              lVar8 = *unaff_x29;
              uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_ColumnLayout_<DoLayout>b__49_1__;
              lVar7 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar6,uVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x30) = lVar6;
                thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                          );
                FUN_03aabc60(lVar6,*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<FixedJoint>__);
                lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                            Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                          );
                FUN_05fc0944(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)
                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetPropertyImpl__;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                  thunk_FUN_02dd37b4();
                  if (lVar6 != 0) {
                    lVar8 = *(long *)(lVar6 + 0x10);
                    lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar4 = lVar7;
                        thunk_FUN_02dd37b4(plVar4,lVar7);
                      }
                      else {
                        FUN_03aac494(lVar6,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar6;
                      thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar6);
                      *unaff_x21 = *unaff_x21 + 1;
                      lVar6 = *unaff_x26;
                      if (lVar6 != 0) {
                        uVar1 = *unaff_x19;
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *unaff_x19 = uVar1 + 1;
                          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar4 = lVar3;
                          thunk_FUN_02dd37b4(plVar4,lVar3);
                        }
                        else {
                          FUN_03aac494();
                        }
                        lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                        FUN_05fc094c(lVar3,0);
                        puVar2 = 
                        Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsPrimitiveImpl__;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) =
                               *(undefined8 *)
                                Method_System_Reflection_Emit_GenericTypeParameterBuilder_get_Name__
                          ;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                          *(undefined4 *)(lVar3 + 0x18) = 0;
                          lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                          FUN_03aabc60(lVar6,*unaff_x20);
                          if (lVar6 != 0) {
                            lVar8 = *unaff_x29;
                            uVar5 = *(undefined8 *)
                                     Method_System_Reflection_Emit_GenericTypeParameterBuilder_GetMembers__
                            ;
                            lVar7 = *(long *)(lVar6 + 0x10);
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                thunk_FUN_02dd37b4();
                              }
                              else {
                                FUN_03aac494(lVar6,uVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x30) = lVar6;
                              thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                              lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                              FUN_03aabc60(lVar6,*(undefined8 *)
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                          );
                              lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                              FUN_05fc0944(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) =
                                     *(undefined8 *)
                                      Method_System_Reflection_Emit_GenericTypeParameterBuilder_IsArrayImpl__
                                ;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                thunk_FUN_02dd37b4();
                                if (lVar6 != 0) {
                                  lVar8 = *(long *)(lVar6 + 0x10);
                                  lVar9 = *(long *)
                                           Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                  ;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar4 = lVar7;
                                      thunk_FUN_02dd37b4(plVar4,lVar7);
                                    }
                                    else {
                                      FUN_03aac494(lVar6,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x28) = lVar6;
                                    thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar6);
                                    *unaff_x21 = *unaff_x21 + 1;
                                    lVar6 = *unaff_x26;
                                    if (lVar6 != 0) {
                                      uVar1 = *unaff_x19;
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *unaff_x19 = uVar1 + 1;
                                        plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar4 = lVar3;
                                        thunk_FUN_02dd37b4(plVar4,lVar3);
                                      }
                                      else {
                                        FUN_03aac494();
                                      }
                                      lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                    
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                      FUN_05fc094c(lVar3,0);
                                      puVar2 = 
                                      Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
                                      if (lVar3 != 0) {
                                        *(undefined8 *)(lVar3 + 0x10) =
                                             *(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                        *(undefined4 *)(lVar3 + 0x18) = 3;
                                        lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                        FUN_03aabc60(lVar6,*unaff_x20);
                                        if (lVar6 != 0) {
                                          lVar8 = *unaff_x29;
                                          uVar5 = *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_GameObject_GetComponent<InputField>__
                                          ;
                                          lVar7 = *(long *)(lVar6 + 0x10);
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar5;
                                              thunk_FUN_02dd37b4();
                                            }
                                            else {
                                              FUN_03aac494(lVar6,uVar5,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x30) = lVar6;
                                            thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                                            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                            FUN_03aabc60(lVar6,*(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                            FUN_05fc0944(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponent<Renderer>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                              thunk_FUN_02dd37b4();
                                              if (lVar6 != 0) {
                                                lVar8 = *(long *)(lVar6 + 0x10);
                                                lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                ;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar4 = lVar7;
                                                    thunk_FUN_02dd37b4(plVar4,lVar7);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar6,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar6);
                                                  *unaff_x21 = *unaff_x21 + 1;
                                                  lVar6 = *unaff_x26;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *unaff_x19;
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *unaff_x19 = uVar1 + 1;
                                                      plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar4,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                                
                                                  Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                                  );
                                                  FUN_05fc094c(lVar3,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_06779338;
                                                    thunk_FUN_02dd37b4();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar6 = thunk_FUN_02d9d534(*unaff_x27);
                                                    FUN_03aabc60(lVar6,*unaff_x20);
                                                    if (lVar6 != 0) {
                                                      lVar8 = *unaff_x29;
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo
                                                  ;
                                                  lVar7 = *(long *)(lVar6 + 0x10);
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_02dd37b4();
                                                    }
                                                    else {
                                                      FUN_03aac494(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar6;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar6);
                                                  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__
                                                  );
                                                  FUN_03aabc60(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<FixedJoint>__
                                                  );
                                                  lVar6 = thunk_FUN_02d9d534(*(undefined8 *)
                                                                                                                                                            
                                                  Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                                  );
                                                  FUN_05fc0944(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_GameObject_GetComponent<OVRManager>__
                                                  ;
                                                  thunk_FUN_02dd37b4();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x25;
                                                  thunk_FUN_02dd37b4();
                                                  if (lVar3 != 0) {
                                                    FUN_0638a154(*(undefined8 *)(lVar3 + 0x10));
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
  FUN_02d60ae8();
}


