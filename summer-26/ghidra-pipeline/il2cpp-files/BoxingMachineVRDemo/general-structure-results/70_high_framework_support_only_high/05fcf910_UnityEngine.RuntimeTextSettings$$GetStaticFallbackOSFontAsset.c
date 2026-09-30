/*
FUNCTION_NAME: UnityEngine.RuntimeTextSettings$$GetStaticFallbackOSFontAsset
ENTRY_POINT: 05fcf910
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_RuntimeTextSettings__GetStaticFallbackOSFontAsset(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  thunk_FUN_02dd37b4();
  lVar3 = thunk_FUN_02d9d534(*unaff_x28);
  FUN_03aabc60(lVar3,*unaff_x26);
  lVar4 = thunk_FUN_02d9d534(*unaff_x25);
  FUN_05fc0944(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) =
         *(undefined8 *)Method_UnityEngine_UIElements_GenericDropdownMenu_Apply__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar4 + 0x10) = *unaff_x29;
    thunk_FUN_02dd37b4();
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar8 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_02dd37b4(plVar5,lVar4);
        }
        else {
          FUN_03aac494(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(unaff_x22 + 0x28) = lVar3;
        thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar3);
        lVar3 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar3 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494();
          }
          lVar3 = thunk_FUN_02d9d534(*unaff_x27);
          FUN_05fc094c(lVar3,0);
          puVar2 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
            *(undefined4 *)(lVar3 + 0x18) = 3;
            lVar4 = thunk_FUN_02d9d534(*unaff_x19);
            FUN_03aabc60(lVar4,*unaff_x20);
            if (lVar4 != 0) {
              uVar6 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<InputField>__;
              lVar7 = *(long *)(lVar4 + 0x10);
              lVar8 = *(long *)PTR_DAT_0675eb70;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                  thunk_FUN_02dd37b4();
                }
                else {
                  FUN_03aac494(lVar4,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x30) = lVar4;
                thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                lVar4 = thunk_FUN_02d9d534(*unaff_x28);
                FUN_03aabc60(lVar4,*unaff_x26);
                lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                FUN_05fc0944(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Renderer>__;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                  thunk_FUN_02dd37b4();
                  if (lVar4 != 0) {
                    lVar8 = *(long *)(lVar4 + 0x10);
                    lVar9 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar7;
                        thunk_FUN_02dd37b4(plVar5,lVar7);
                      }
                      else {
                        FUN_03aac494(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar4;
                      thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                      lVar4 = *(long *)(unaff_x21 + 0x10);
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar3;
                          thunk_FUN_02dd37b4(plVar5,lVar3);
                        }
                        else {
                          FUN_03aac494();
                        }
                        lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                        FUN_05fc094c(lVar3,0);
                        puVar2 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                          *(undefined4 *)(lVar3 + 0x18) = 3;
                          lVar4 = thunk_FUN_02d9d534(*unaff_x19);
                          FUN_03aabc60(lVar4,*unaff_x20);
                          if (lVar4 != 0) {
                            uVar6 = *(undefined8 *)
                                     Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
                            lVar7 = *(long *)(lVar4 + 0x10);
                            lVar8 = *(long *)PTR_DAT_0675eb70;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                thunk_FUN_02dd37b4();
                              }
                              else {
                                FUN_03aac494(lVar4,uVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x30) = lVar4;
                              thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                              lVar4 = thunk_FUN_02d9d534(*unaff_x28);
                              FUN_03aabc60(lVar4,*unaff_x26);
                              lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                              FUN_05fc0944(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) =
                                     *(undefined8 *)
                                      Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                                thunk_FUN_02dd37b4();
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                thunk_FUN_02dd37b4();
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *(long *)
                                           Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                  ;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar5 = lVar7;
                                      thunk_FUN_02dd37b4(plVar5,lVar7);
                                    }
                                    else {
                                      FUN_03aac494(lVar4,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x28) = lVar4;
                                    thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                    lVar4 = *(long *)(unaff_x21 + 0x10);
                                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                    if (lVar4 != 0) {
                                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                        plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar5 = lVar3;
                                        thunk_FUN_02dd37b4(plVar5,lVar3);
                                      }
                                      else {
                                        FUN_03aac494();
                                      }
                                      lVar3 = thunk_FUN_02d9d534(*unaff_x27);
                                      FUN_05fc094c(lVar3,0);
                                      puVar2 = 
                                      Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__
                                      ;
                                      if (lVar3 != 0) {
                                        *(undefined8 *)(lVar3 + 0x10) =
                                             *(undefined8 *)
                                              Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
                                        *(undefined4 *)(lVar3 + 0x18) = 4;
                                        lVar4 = thunk_FUN_02d9d534(*unaff_x19);
                                        FUN_03aabc60(lVar4,*unaff_x20);
                                        if (lVar4 != 0) {
                                          uVar6 = *(undefined8 *)
                                                   Method_System_Linq_Enumerable_Count<ARAnchor>__;
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          lVar8 = *(long *)PTR_DAT_0675eb70;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              thunk_FUN_02dd37b4();
                                            }
                                            else {
                                              FUN_03aac494(lVar4,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x30) = lVar4;
                                            thunk_FUN_02dd37b4((long *)(lVar3 + 0x30),lVar4);
                                            lVar4 = thunk_FUN_02d9d534(*unaff_x28);
                                            FUN_03aabc60(lVar4,*unaff_x26);
                                            lVar7 = thunk_FUN_02d9d534(*unaff_x25);
                                            FUN_05fc0944(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x29;
                                              thunk_FUN_02dd37b4();
                                              if (lVar4 != 0) {
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                lVar9 = *(long *)
                                                  Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__
                                                ;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar5 = lVar7;
                                                    thunk_FUN_02dd37b4(plVar5,lVar7);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar4,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_02dd37b4((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_02dd37b4(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_03aac494();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    thunk_FUN_02dd37b4();
                                                    FUN_05fc0710(in_stack_00000000,in_stack_00000008
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


