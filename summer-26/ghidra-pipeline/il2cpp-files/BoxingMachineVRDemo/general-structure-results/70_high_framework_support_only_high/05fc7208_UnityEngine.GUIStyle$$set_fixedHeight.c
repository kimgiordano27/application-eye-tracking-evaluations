/*
FUNCTION_NAME: UnityEngine.GUIStyle$$set_fixedHeight
ENTRY_POINT: 05fc7208
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_GUIStyle__set_fixedHeight(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x26;
  
  lVar9 = thunk_FUN_02d9d534();
  FUN_05fc094c(lVar9,0);
  puVar6 = Method_UnityEngine_GameObject_GetComponent<ParticleSystem>__;
  puVar3 = PTR_DAT_0675eb68;
  puVar2 = PTR_DAT_0675eb60;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<NavMeshAgent>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar6;
    thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
    *(undefined4 *)(lVar9 + 0x18) = 3;
    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
    FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
    if (lVar10 != 0) {
      uVar12 = *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<InputField>__;
      lVar13 = *(long *)(lVar10 + 0x10);
      lVar14 = *(long *)PTR_DAT_0675eb70;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      puVar7 = Method_UnityEngine_GameObject_AddComponent<GraphicRaycaster>__;
      puVar6 = Method_UnityEngine_GameObject_AddComponent<FixedJoint>__;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
          thunk_FUN_02dd37b4();
        }
        else {
          FUN_03aac494(lVar10,uVar12,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar9 + 0x30) = lVar10;
        thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
        FUN_03aabc60(lVar10,*(undefined8 *)puVar6);
        lVar13 = thunk_FUN_02d9d534(*(undefined8 *)
                                     Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__
                                   );
        FUN_05fc0944(lVar13,0);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x18) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Renderer>__;
          thunk_FUN_02dd37b4();
          *(undefined8 *)(lVar13 + 0x10) =
               *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<Rigidbody>__;
          thunk_FUN_02dd37b4();
          puVar5 = Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
          if (lVar10 != 0) {
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar15 = *(long *)Method_UnityEngine_GameObject_AddComponent<DebugUpdater>__;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar11 = lVar13;
                thunk_FUN_02dd37b4(plVar11,lVar13);
              }
              else {
                FUN_03aac494(lVar10,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x28) = lVar10;
              thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
              *(undefined1 *)(lVar9 + 0x38) = 1;
              if (unaff_x21 != 0) {
                lVar10 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar10 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar11 = lVar9;
                    thunk_FUN_02dd37b4(plVar11,lVar9);
                  }
                  else {
                    FUN_03aac494();
                  }
                  lVar9 = thunk_FUN_02d9d534(*(undefined8 *)
                                              Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__
                                            );
                  FUN_05fc094c(lVar9,0);
                  puVar4 = Method_UnityEngine_GameObject_GetComponent<MeshRenderer>__;
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_06779338;
                    thunk_FUN_02dd37b4();
                    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                    thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                    *(undefined4 *)(lVar9 + 0x18) = 3;
                    lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                    FUN_03aabc60(lVar10,*(undefined8 *)puVar3);
                    if (lVar10 != 0) {
                      uVar12 = *(undefined8 *)
                                Newtonsoft_Json_Linq_JToken_LineInfoAnnotation_TypeInfo;
                      lVar13 = *(long *)(lVar10 + 0x10);
                      lVar14 = *(long *)PTR_DAT_0675eb70;
                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                      puVar3 = Method_UnityEngine_GameObject_GetComponent<Rigidbody>__;
                      puVar2 = Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar10 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                          thunk_FUN_02dd37b4();
                        }
                        else {
                          FUN_03aac494(lVar10,uVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                        }
                        puVar4 = 
                        Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__;
                        *(long *)(lVar9 + 0x30) = lVar10;
                        thunk_FUN_02dd37b4((long *)(lVar9 + 0x30),lVar10);
                        lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                        FUN_03aabc60(lVar10,*(undefined8 *)puVar6);
                        lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                        FUN_05fc0944(lVar13,0);
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x18) =
                               *(undefined8 *)
                                Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
                          thunk_FUN_02dd37b4();
                          *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar3;
                          thunk_FUN_02dd37b4();
                          if (lVar10 != 0) {
                            lVar14 = *(long *)(lVar10 + 0x10);
                            lVar15 = *(long *)puVar5;
                            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar10 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar11 = lVar13;
                                thunk_FUN_02dd37b4(plVar11,lVar13);
                              }
                              else {
                                FUN_03aac494(lVar10,lVar13,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar9 + 0x28) = lVar10;
                              thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                              *(undefined1 *)(lVar9 + 0x38) = 1;
                              lVar10 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar10 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar11 = lVar9;
                                  thunk_FUN_02dd37b4(plVar11,lVar9);
                                }
                                else {
                                  FUN_03aac494();
                                }
                                lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                FUN_05fc094c(lVar9,0);
                                puVar8 = 
                                Method_UnityEngine_GameObject_GetComponent<OpenXRRestarter>__;
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x10) =
                                       *(undefined8 *)
                                        Method_UnityEngine_GameObject_GetComponent<MoveHandler>__;
                                  thunk_FUN_02dd37b4();
                                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar8;
                                  thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                  lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                                  FUN_03aabc60(lVar10,*(undefined8 *)puVar6);
                                  lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                                  FUN_05fc0944(lVar13,0);
                                  if (lVar13 != 0) {
                                    *(undefined8 *)(lVar13 + 0x18) =
                                         *(undefined8 *)
                                          Method_UnityEngine_GameObject_GetComponent<MuscleCollisionBroadcaster>__
                                    ;
                                    thunk_FUN_02dd37b4();
                                    *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar3;
                                    thunk_FUN_02dd37b4();
                                    if (lVar10 != 0) {
                                      lVar14 = *(long *)(lVar10 + 0x10);
                                      lVar15 = *(long *)puVar5;
                                      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar10 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                          plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar11 = lVar13;
                                          thunk_FUN_02dd37b4(plVar11,lVar13);
                                        }
                                        else {
                                          FUN_03aac494(lVar10,lVar13,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x28) = lVar10;
                                        thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                        *(undefined1 *)(lVar9 + 0x38) = 1;
                                        lVar10 = *(long *)(unaff_x21 + 0x10);
                                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                        if (lVar10 != 0) {
                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                            plVar11 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar11 = lVar9;
                                            thunk_FUN_02dd37b4(plVar11,lVar9);
                                          }
                                          else {
                                            FUN_03aac494();
                                          }
                                          lVar9 = thunk_FUN_02d9d534(*(undefined8 *)puVar2);
                                          FUN_05fc094c(lVar9,0);
                                          puVar2 = 
                                          Method_UnityEngine_GameObject_GetComponent<OVRCameraRig>__
                                          ;
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x10) =
                                                 *(undefined8 *)
                                                  Method_UnityEngine_GameObject_GetComponent<MeshFilter>__
                                            ;
                                            thunk_FUN_02dd37b4();
                                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar2;
                                            thunk_FUN_02dd37b4((undefined8 *)(lVar9 + 0x20));
                                            *(undefined4 *)(lVar9 + 0x18) = 3;
                                            lVar10 = thunk_FUN_02d9d534(*(undefined8 *)puVar7);
                                            FUN_03aabc60(lVar10,*(undefined8 *)puVar6);
                                            lVar13 = thunk_FUN_02d9d534(*(undefined8 *)puVar4);
                                            FUN_05fc0944(lVar13,0);
                                            if (lVar13 != 0) {
                                              *(undefined8 *)(lVar13 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_UnityEngine_GameObject_GetComponent<RectTransform>__
                                              ;
                                              thunk_FUN_02dd37b4();
                                              *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)puVar3
                                              ;
                                              thunk_FUN_02dd37b4();
                                              if (lVar10 != 0) {
                                                lVar14 = *(long *)(lVar10 + 0x10);
                                                lVar15 = *(long *)puVar5;
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar14 != 0) {
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                    plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar11 = lVar13;
                                                    thunk_FUN_02dd37b4(plVar11,lVar13);
                                                  }
                                                  else {
                                                    FUN_03aac494(lVar10,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  thunk_FUN_02dd37b4((long *)(lVar9 + 0x28),lVar10);
                                                  *(undefined1 *)(lVar9 + 0x38) = 1;
                                                  lVar10 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar9;
                                                      thunk_FUN_02dd37b4(plVar11,lVar9);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


