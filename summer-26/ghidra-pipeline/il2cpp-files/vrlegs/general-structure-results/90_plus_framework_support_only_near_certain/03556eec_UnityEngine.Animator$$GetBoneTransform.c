/*
FUNCTION_NAME: UnityEngine.Animator$$GetBoneTransform
ENTRY_POINT: 03556eec
PROGRAM: vrlegs-libil2cpp.so
SCORE: 165
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_6;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__GetBoneTransform
               (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int in_w8;
  long lVar6;
  long lVar7;
  long in_x9;
  int in_w10;
  long *unaff_x19;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *unaff_x26;
  long *unaff_x28;
  undefined8 uVar12;
  undefined8 in_stack_000000d0;
  
  *(int *)(in_x9 + 0x18) = in_w8;
  lVar6 = unaff_x19[0xd4];
  *(int *)(in_x9 + 0x2c) = in_w10 + 1;
  if (in_w8 < 1 || in_stack_000000d0._4_4_ == 0) {
    in_stack_000000d0._4_4_ = 1;
  }
  *(int *)(in_x9 + 0x1c) = (int)lVar6;
  *(int *)(in_x9 + 0x24) = in_stack_000000d0._4_4_;
  *(int *)(in_x9 + 0x30) = (int)unaff_x19[0x96] + 1;
  if (((int)unaff_x19[99] != 0xff) ||
     (uVar4 = (**(code **)(*unaff_x19 + 0x1c8))(), (uVar4 & 1) == 0)) {
LAB_03554724:
    if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    FUN_03567630();
    return;
  }
  lVar6 = unaff_x19[0xdf];
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x18))
              (*(undefined8 *)(lVar6 + 0x40),*unaff_x28,*(undefined8 *)(lVar6 + 0x28));
  }
  if (unaff_x19[0xe5] != 0) {
    iVar1 = FUN_03911ee4(unaff_x19[0xe5],0);
    if (iVar1 != 0x19) {
      lVar6 = unaff_x19[0xe5];
      if (lVar6 == 0) goto LAB_035574b8;
      uVar2 = FUN_03911ee4(lVar6,0);
      FUN_03911f20(lVar6,uVar2 | 0x19,0);
    }
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar6 = *(long *)(*unaff_x28 + 0x60), lVar6 == 0))
      goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035575f4;
      FUN_03596b20(lVar6 + 0x20,1,0);
    }
    if (unaff_x19[0x74] != 0) {
      FUN_036aa790(unaff_x19[0x74],0);
      if ((unaff_x19[0x6d] != 0) && (lVar6 = *(long *)(unaff_x19[0x6d] + 0x60), lVar6 != 0)) {
        if (*(int *)(lVar6 + 0x18) == 0) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        if (unaff_x19[0x74] != 0) {
          FUN_036a460c(unaff_x19[0x74],*(undefined8 *)(lVar6 + 0x30),0);
          if ((unaff_x19[0x6d] != 0) && (lVar6 = *(long *)(unaff_x19[0x6d] + 0x60), lVar6 != 0)) {
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035575f4;
            if (unaff_x19[0x74] != 0) {
              FUN_036a4810(unaff_x19[0x74],*(undefined8 *)(lVar6 + 0x48),0);
              if ((unaff_x19[0x6d] != 0) && (lVar6 = *(long *)(unaff_x19[0x6d] + 0x60), lVar6 != 0))
              {
                if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035575f4;
                if (unaff_x19[0x74] != 0) {
                  FUN_036a48bc(unaff_x19[0x74],*(undefined8 *)(lVar6 + 0x50),0);
                  if ((unaff_x19[0x6d] != 0) &&
                     (lVar6 = *(long *)(unaff_x19[0x6d] + 0x60), lVar6 != 0)) {
                    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_035575f4;
                    if (unaff_x19[0x74] != 0) {
                      FUN_036a4e24(unaff_x19[0x74],*(undefined8 *)(lVar6 + 0x58),0);
                      if (unaff_x19[0x74] != 0) {
                        FUN_036aa280(unaff_x19[0x74],0);
                        if (unaff_x19[0xe4] != 0) {
                          FUN_0390f3a4(unaff_x19[0xe4],unaff_x19[0x74],0);
                          if (unaff_x19[0xe4] != 0) {
                            uVar12 = FUN_0390ef60(unaff_x19[0xe4],0);
                            if (unaff_x19[0xe4] != 0) {
                              uVar2 = FUN_0390ed3c(unaff_x19[0xe4],0);
                              lVar6 = *unaff_x28;
                              if (lVar6 != 0) {
                                lVar10 = 0;
                                lVar11 = 0;
                                do {
                                  uVar4 = lVar11 + 1;
                                  if ((long)*(int *)(lVar6 + 0x34) <= (long)uVar4)
                                  goto LAB_03554724;
                                  lVar6 = *(long *)(lVar6 + 0x60);
                                  if (lVar6 == 0) break;
                                  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                  FUN_03596a20(lVar6 + lVar10 + 0x70,0);
                                  lVar6 = unaff_x19[0xe1];
                                  if (lVar6 == 0) break;
                                  if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                  uVar8 = *(undefined8 *)(lVar6 + lVar11 * 8 + 0x28);
                                  if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
                                    thunk_FUN_01a58e78();
                                  }
                                  uVar5 = FUN_036d35a8(uVar8,0,0);
                                  if ((uVar5 & 1) == 0) {
                                    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
                                      if ((*unaff_x28 == 0) ||
                                         (lVar6 = *(long *)(*unaff_x28 + 0x60), lVar6 == 0)) break;
                                      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
                                        thunk_FUN_01a58e78();
                                      }
                                      if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                      FUN_03596b20(lVar6 + lVar10 + 0x70,1,0);
                                    }
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if (lVar6 == 0) break;
                                    lVar6 = UnityEngine_Material__GetColorArray(lVar6,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar7 = *(long *)(*unaff_x28 + 0x60), lVar7 == 0)) break;
                                    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035575f4;
                                    if (lVar6 == 0) break;
                                    FUN_036a460c(lVar6,*(undefined8 *)(lVar7 + lVar10 + 0x80),0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if (lVar6 == 0) break;
                                    lVar6 = UnityEngine_Material__GetColorArray(lVar6,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar7 = *(long *)(*unaff_x28 + 0x60), lVar7 == 0)) break;
                                    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035575f4;
                                    if (lVar6 == 0) break;
                                    FUN_036a4810(lVar6,*(undefined8 *)(lVar7 + lVar10 + 0x98),0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if (lVar6 == 0) break;
                                    lVar6 = UnityEngine_Material__GetColorArray(lVar6,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar7 = *(long *)(*unaff_x28 + 0x60), lVar7 == 0)) break;
                                    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035575f4;
                                    if (lVar6 == 0) break;
                                    FUN_036a48bc(lVar6,*(undefined8 *)(lVar7 + lVar10 + 0xa0),0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if (lVar6 == 0) break;
                                    lVar6 = UnityEngine_Material__GetColorArray(lVar6,0);
                                    if ((*unaff_x28 == 0) ||
                                       (lVar7 = *(long *)(*unaff_x28 + 0x60), lVar7 == 0)) break;
                                    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035575f4;
                                    if (lVar6 == 0) break;
                                    FUN_036a4e24(lVar6,*(undefined8 *)(lVar7 + lVar10 + 0xa8),0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if ((lVar6 == 0) ||
                                       (lVar6 = UnityEngine_Material__GetColorArray(lVar6,0),
                                       lVar6 == 0)) break;
                                    FUN_036aa280(lVar6,0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if (lVar6 == 0) break;
                                    lVar6 = FUN_037b514c(lVar6,0);
                                    lVar7 = unaff_x19[0xe1];
                                    if (lVar7 == 0) break;
                                    if (*(uint *)(lVar7 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar7 = *(long *)(lVar7 + lVar11 * 8 + 0x28);
                                    if ((lVar7 == 0) ||
                                       (uVar8 = UnityEngine_Material__GetColorArray(lVar7,0),
                                       lVar6 == 0)) break;
                                    FUN_0390f3a4(lVar6,uVar8,0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if ((lVar6 == 0) || (lVar6 = FUN_037b514c(lVar6,0), lVar6 == 0))
                                    break;
                                    FUN_0390eec8(uVar12,param_2,param_3,param_4,lVar6,0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    lVar6 = *(long *)(lVar6 + lVar11 * 8 + 0x28);
                                    if ((lVar6 == 0) || (lVar6 = FUN_037b514c(lVar6,0), lVar6 == 0))
                                    break;
                                    FUN_0390ed78(lVar6,uVar2 & 1,0);
                                    lVar6 = unaff_x19[0xe1];
                                    if (lVar6 == 0) break;
                                    if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_035575f4;
                                    plVar9 = *(long **)(lVar6 + lVar11 * 8 + 0x28);
                                    uVar3 = (**(code **)(*unaff_x19 + 0x2b8))();
                                    if (plVar9 == (long *)0x0) break;
                                    (**(code **)(*plVar9 + 0x2c8))
                                              (plVar9,uVar3 & 1,*(undefined8 *)(*plVar9 + 0x2d0));
                                  }
                                  lVar6 = *unaff_x28;
                                  lVar11 = lVar11 + 1;
                                  lVar10 = lVar10 + 0x50;
                                } while (lVar6 != 0);
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
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


