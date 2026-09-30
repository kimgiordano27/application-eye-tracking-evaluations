/*
FUNCTION_NAME: UnityEngine.CapsuleCollider$$get_direction
ENTRY_POINT: 05fe852c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_3;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_3
*/


void UnityEngine_CapsuleCollider__get_direction(undefined8 *param_1,undefined8 param_2)

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
  long *unaff_x19;
  int *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x25;
  uint *unaff_x26;
  long *unaff_x27;
  undefined8 unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_03aabc60(param_2,*param_1);
  lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                              Method_UnityEngine_GameObject_AddComponent<CurveInteractionCaster>__);
  FUN_05fc0944(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) =
         *(undefined8 *)Method_UnityEngine_GameObject_GetComponent<OVRManager>__;
    thunk_FUN_02dd37b4();
    *(undefined8 *)(lVar3 + 0x10) =
         *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
    thunk_FUN_02dd37b4();
    if (unaff_x23 != 0) {
      lVar6 = *(long *)(unaff_x23 + 0x10);
      *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(unaff_x23 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar3;
          thunk_FUN_02dd37b4(plVar4,lVar3);
        }
        else {
          FUN_03aac494();
        }
        *(long *)(unaff_x22 + 0x28) = unaff_x23;
        thunk_FUN_02dd37b4();
        *unaff_x21 = *unaff_x21 + 1;
        lVar3 = *unaff_x19;
        if (lVar3 != 0) {
          uVar1 = *unaff_x26;
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
            *unaff_x26 = uVar1 + 1;
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_02dd37b4();
          }
          else {
            FUN_03aac494();
          }
          lVar3 = thunk_FUN_02d9d534(*(undefined8 *)
                                      Method_UnityEngine_GameObject_AddComponent<DebugGizmos>__);
          FUN_05fc094c(lVar3,0);
          puVar2 = Method_UnityEngine_GameObject_TryGetComponent<CanvasTracker>__;
          if (lVar3 != 0) {
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)Method_UnityEngine_GameObject_TryGetComponent<RectTransform>__;
            thunk_FUN_02dd37b4();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_02dd37b4((undefined8 *)(lVar3 + 0x20));
            *(undefined4 *)(lVar3 + 0x18) = 4;
            lVar6 = thunk_FUN_02d9d534(*(undefined8 *)PTR_DAT_0675eb60);
            FUN_03aabc60(lVar6,*(undefined8 *)PTR_DAT_0675eb68);
            if (lVar6 != 0) {
              lVar8 = *unaff_x25;
              uVar5 = *(undefined8 *)Method_System_Linq_Enumerable_Count<ARAnchor>__;
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
                        Method_UnityEngine_GameObject_GetComponentsInParent<OVRSkeleton_IOVRSkeletonDataProvider>__
                  ;
                  thunk_FUN_02dd37b4();
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)Method_System_Globalization_GregorianCalendar__ctor__;
                  thunk_FUN_02dd37b4();
                  if (lVar6 != 0) {
                    lVar8 = *(long *)(lVar6 + 0x10);
                    lVar9 = *unaff_x27;
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
                      lVar6 = *unaff_x19;
                      if (lVar6 != 0) {
                        uVar1 = *unaff_x26;
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *unaff_x26 = uVar1 + 1;
                          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar4 = lVar3;
                          thunk_FUN_02dd37b4(plVar4,lVar3);
                        }
                        else {
                          FUN_03aac494();
                        }
                        *(undefined8 *)(in_stack_00000000 + 0x28) = unaff_x29;
                        thunk_FUN_02dd37b4();
                        FUN_05fc0710(in_stack_00000008,in_stack_00000000,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


