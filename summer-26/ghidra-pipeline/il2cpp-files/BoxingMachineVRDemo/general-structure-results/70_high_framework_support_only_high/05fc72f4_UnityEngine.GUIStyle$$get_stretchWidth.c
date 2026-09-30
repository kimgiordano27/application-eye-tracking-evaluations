/*
FUNCTION_NAME: UnityEngine.GUIStyle$$get_stretchWidth
ENTRY_POINT: 05fc72f4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 85
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_GUIStyle__get_stretchWidth(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  
  FUN_03aac494();
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_02dd37b4();
  lVar7 = thunk_FUN_02d9d534(*unaff_x19);
  FUN_03aabc60(lVar7,*unaff_x28);
  lVar8 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
  FUN_05fc0944(lVar8,0);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x18) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Renderer>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar8 + 0x10) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Rigidbody>__;
    thunk_FUN_02dd37b4();
    puVar4 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar7 + 0x10);
      lVar12 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_02dd37b4(plVar9,lVar8);
        }
        else {
          FUN_03aac494(lVar7,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(unaff_x22 + 0x28) = lVar7;
        thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28),lVar7);
        *(undefined1 *)(unaff_x22 + 0x38) = 1;
        if (unaff_x21 != 0) {
          lVar7 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
              thunk_FUN_02dd37b4();
            }
            else {
              FUN_03aac494();
            }
            lVar7 = thunk_FUN_02d9d534(*(undefined8 *)
                                        Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
            FUN_05fc094c(lVar7,0);
            puVar3 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
            if (lVar7 != 0) {
              *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
              thunk_FUN_02dd37b4();
              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
              thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
              *(undefined4 *)(lVar7 + 0x18) = 3;
              lVar8 = thunk_FUN_02d9d534(*unaff_x27);
              FUN_03aabc60(lVar8,*unaff_x25);
              if (lVar8 != 0) {
                uVar10 = *(undefined8 *)Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
                lVar11 = *(long *)(lVar8 + 0x10);
                lVar12 = *(long *)PTR_DAT_0675eb70;
                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                puVar6 = Method_UnityEngine_GameObject_GetComponent<Rigidbody>__;
                puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__;
                if (lVar11 != 0) {
                  uVar1 = *(uint *)(lVar8 + 0x18);
                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                    thunk_FUN_02dd37b4();
                  }
                  else {
                    FUN_03aac494(lVar8,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  puVar2 = Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
                  *(long *)(lVar7 + 0x30) = lVar8;
                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x30),lVar8);
                  lVar8 = thunk_FUN_02d9d534(*unaff_x19);
                  FUN_03aabc60(lVar8,*unaff_x28);
                  lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                  FUN_05fc0944(lVar11,0);
                  if (lVar11 != 0) {
                    *(undefined8 *)(lVar11 + 0x18) =
                         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)puVar6;
                    thunk_FUN_02dd37b4();
                    if (lVar8 != 0) {
                      lVar12 = *(long *)(lVar8 + 0x10);
                      lVar13 = *(long *)puVar4;
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar12 != 0) {
                        uVar1 = *(uint *)(lVar8 + 0x18);
                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar9 = lVar11;
                          thunk_FUN_02dd37b4(plVar9,lVar11);
                        }
                        else {
                          FUN_03aac494(lVar8,lVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar7 + 0x28) = lVar8;
                        thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar8);
                        *(undefined1 *)(lVar7 + 0x38) = 1;
                        lVar8 = *(long *)(unaff_x21 + 0x10);
                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                            plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar9 = lVar7;
                            thunk_FUN_02dd37b4(plVar9,lVar7);
                          }
                          else {
                            FUN_03aac494();
                          }
                          lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                          FUN_05fc094c(lVar7,0);
                          puVar5 = Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
                          if (lVar7 != 0) {
                            *(undefined8 *)(lVar7 + 0x10) =
                                 *(undefined8 *)
                                  Method_UnityEngine_GameObject_GetComponent<MoveHandler>__;
                            thunk_FUN_02dd37b4();
                            *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar5;
                            thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                            *(undefined4 *)(lVar7 + 0x18) = 3;
                            lVar8 = thunk_FUN_02d9d534(*unaff_x19);
                            FUN_03aabc60(lVar8,*unaff_x28);
                            lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                            FUN_05fc0944(lVar11,0);
                            if (lVar11 != 0) {
                              *(undefined8 *)(lVar11 + 0x18) =
                                   *(undefined8 *)
                                    Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__
                              ;
                              thunk_FUN_02dd37b4();
                              *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)puVar6;
                              thunk_FUN_02dd37b4();
                              if (lVar8 != 0) {
                                lVar12 = *(long *)(lVar8 + 0x10);
                                lVar13 = *(long *)puVar4;
                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                if (lVar12 != 0) {
                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                    plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar9 = lVar11;
                                    thunk_FUN_02dd37b4(plVar9,lVar11);
                                  }
                                  else {
                                    FUN_03aac494(lVar8,lVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar7 + 0x28) = lVar8;
                                  thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar8);
                                  *(undefined1 *)(lVar7 + 0x38) = 1;
                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                      plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar9 = lVar7;
                                      thunk_FUN_02dd37b4(plVar9,lVar7);
                                    }
                                    else {
                                      FUN_03aac494();
                                    }
                                    lVar7 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                    FUN_05fc094c(lVar7,0);
                                    puVar3 = 
                                    Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
                                    if (lVar7 != 0) {
                                      *(undefined8 *)(lVar7 + 0x10) =
                                           *(undefined8 *)
                                            Method_UnityEngine_GameObject_GetComponent<MeshFilter>__
                                      ;
                                      thunk_FUN_02dd37b4();
                                      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                      thunk_FUN_02dd37b4((undefined8 *)(lVar7 + 0x20));
                                      *(undefined4 *)(lVar7 + 0x18) = 3;
                                      lVar8 = thunk_FUN_02d9d534(*unaff_x19);
                                      FUN_03aabc60(lVar8,*unaff_x28);
                                      lVar11 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                      FUN_05fc0944(lVar11,0);
                                      if (lVar11 != 0) {
                                        *(undefined8 *)(lVar11 + 0x18) =
                                             *(undefined8 *)
                                              Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                        ;
                                        thunk_FUN_02dd37b4();
                                        *(undefined8 *)(lVar11 + 0x10) = *(undefined8 *)puVar6;
                                        thunk_FUN_02dd37b4();
                                        if (lVar8 != 0) {
                                          lVar12 = *(long *)(lVar8 + 0x10);
                                          lVar13 = *(long *)puVar4;
                                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                          if (lVar12 != 0) {
                                            uVar1 = *(uint *)(lVar8 + 0x18);
                                            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                              plVar9 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20
                                                               );
                                              *plVar9 = lVar11;
                                              thunk_FUN_02dd37b4(plVar9,lVar11);
                                            }
                                            else {
                                              FUN_03aac494(lVar8,lVar11,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar13 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar7 + 0x28) = lVar8;
                                            thunk_FUN_02dd37b4((long *)(lVar7 + 0x28),lVar8);
                                            *(undefined1 *)(lVar7 + 0x38) = 1;
                                            lVar8 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar9 = lVar7;
                                                thunk_FUN_02dd37b4(plVar9,lVar7);
                                              }
                                              else {
                                                FUN_03aac494();
                                              }
                                              *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                              thunk_FUN_02dd37b4();
                                              FUN_05fc0710(unaff_x26);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


