/*
FUNCTION_NAME: UnityEngine.GUIStyle$$get_stretchWidth_Injected
ENTRY_POINT: 05fc7384
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_GUIStyle__get_stretchWidth_Injected(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  *(int *)(unaff_x23 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x24;
      thunk_FUN_02dd37b4();
    }
    else {
      FUN_03aac494();
    }
    *(long *)(unaff_x22 + 0x28) = unaff_x23;
    thunk_FUN_02dd37b4((long *)(unaff_x22 + 0x28));
    *(undefined1 *)(unaff_x22 + 0x38) = 1;
    if (unaff_x21 != 0) {
      lVar9 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494();
        }
        lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                    Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
        FUN_05fc094c(lVar9,0);
        puVar3 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
          thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
          *(undefined4 *)(lVar9 + 0x18) = 3;
          lVar6 = thunk_FUN_02d9d534(*unaff_x27);
          FUN_03aabc60(lVar6,*unaff_x25);
          if (lVar6 != 0) {
            uVar8 = *(undefined8 *)Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
            lVar10 = *(long *)(lVar6 + 0x10);
            lVar11 = *(long *)PTR_DAT_0675eb70;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            puVar5 = Method_UnityEngine_GameObject_GetComponent<Rigidbody>__;
            puVar3 = Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__;
            if (lVar10 != 0) {
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                thunk_FUN_02dd37b4();
              }
              else {
                FUN_03aac494(lVar6,uVar8,
                             *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
              }
              puVar2 = Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
              *(long *)(lVar9 + 0x30) = lVar6;
              thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar6);
              lVar6 = thunk_FUN_02d9d534(*unaff_x19);
              FUN_03aabc60(lVar6,*unaff_x28);
              lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
              FUN_05fc0944(lVar10,0);
              if (lVar10 != 0) {
                *(undefined8 *)(lVar10 + 0x18) =
                     *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                thunk_FUN_02dd37b4();
                *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)puVar5;
                thunk_FUN_02dd37b4();
                if (lVar6 != 0) {
                  lVar11 = *(long *)(lVar6 + 0x10);
                  lVar12 = *unaff_x29;
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar11 != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                      plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar7 = lVar10;
                      thunk_FUN_02dd37b4(plVar7,lVar10);
                    }
                    else {
                      FUN_03aac494(lVar6,lVar10,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar9 + 0x28) = lVar6;
                    thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                    *(undefined1 *)(lVar9 + 0x38) = 1;
                    lVar6 = *(long *)(unaff_x21 + 0x10);
                    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    if (lVar6 != 0) {
                      uVar1 = *(uint *)(unaff_x21 + 0x18);
                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar7 = lVar9;
                        thunk_FUN_02dd37b4(plVar7,lVar9);
                      }
                      else {
                        FUN_03aac494();
                      }
                      lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                      FUN_05fc094c(lVar9,0);
                      puVar4 = Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar9 + 0x10) =
                             *(undefined8 *)
                              Method_UnityEngine_GameObject_GetComponent<MoveHandler>__;
                        thunk_FUN_02dd37b4();
                        *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                        thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                        *(undefined4 *)(lVar9 + 0x18) = 3;
                        lVar6 = thunk_FUN_02d9d534(*unaff_x19);
                        FUN_03aabc60(lVar6,*unaff_x28);
                        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                        FUN_05fc0944(lVar10,0);
                        if (lVar10 != 0) {
                          *(undefined8 *)(lVar10 + 0x18) =
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__
                          ;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)puVar5;
                          thunk_FUN_02dd37b4();
                          if (lVar6 != 0) {
                            lVar11 = *(long *)(lVar6 + 0x10);
                            lVar12 = *unaff_x29;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar11 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar7 = lVar10;
                                thunk_FUN_02dd37b4(plVar7,lVar10);
                              }
                              else {
                                FUN_03aac494(lVar6,lVar10,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar9 + 0x28) = lVar6;
                              thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                              *(undefined1 *)(lVar9 + 0x38) = 1;
                              lVar6 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar6 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar7 = lVar9;
                                  thunk_FUN_02dd37b4(plVar7,lVar9);
                                }
                                else {
                                  FUN_03aac494();
                                }
                                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar3);
                                FUN_05fc094c(lVar9,0);
                                puVar3 = Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__;
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x10) =
                                       *(undefined8 *)
                                        Method_UnityEngine_GameObject_GetComponent<MeshFilter>__;
                                  thunk_FUN_02dd37b4();
                                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                  lVar6 = thunk_FUN_02d9d534(*unaff_x19);
                                  FUN_03aabc60(lVar6,*unaff_x28);
                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                  FUN_05fc0944(lVar10,0);
                                  if (lVar10 != 0) {
                                    *(undefined8 *)(lVar10 + 0x18) =
                                         *(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                    ;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)puVar5;
                                    thunk_FUN_02dd37b4();
                                    if (lVar6 != 0) {
                                      lVar11 = *(long *)(lVar6 + 0x10);
                                      lVar12 = *unaff_x29;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar11 != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                          plVar7 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar7 = lVar10;
                                          thunk_FUN_02dd37b4(plVar7,lVar10);
                                        }
                                        else {
                                          FUN_03aac494(lVar6,lVar10,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x28) = lVar6;
                                        thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar6);
                                        *(undefined1 *)(lVar9 + 0x38) = 1;
                                        lVar6 = *(long *)(unaff_x21 + 0x10);
                                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                        if (lVar6 != 0) {
                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                            plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar7 = lVar9;
                                            thunk_FUN_02dd37b4(plVar7,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


