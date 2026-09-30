/*
FUNCTION_NAME: UnityEngine.Animator$$get_playbackTime
ENTRY_POINT: 0355739c
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


void UnityEngine_Animator__get_playbackTime(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *unaff_x19;
  undefined4 unaff_w20;
  long *plVar6;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long *unaff_x26;
  long *unaff_x28;
  
  while( true ) {
    lVar3 = FUN_037b514c(param_1,param_2);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if ((lVar5 == 0) || (uVar4 = UnityEngine_Material__GetColorArray(lVar5,0), lVar3 == 0)) break;
    FUN_0390f3a4(lVar3,uVar4,0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if ((lVar3 == 0) || (lVar3 = FUN_037b514c(lVar3,0), lVar3 == 0)) break;
    FUN_0390eec8(lVar3,0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if ((lVar3 == 0) || (lVar3 = FUN_037b514c(lVar3,0), lVar3 == 0)) break;
    FUN_0390ed78(lVar3,unaff_w20,0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    plVar6 = *(long **)(lVar3 + unaff_x24 * 8 + 0x28);
    uVar1 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (plVar6 == (long *)0x0) break;
    (**(code **)(*plVar6 + 0x2c8))(plVar6,uVar1 & 1,*(undefined8 *)(*plVar6 + 0x2d0));
    lVar3 = unaff_x24;
    do {
      lVar5 = *unaff_x28;
      unaff_x24 = lVar3 + 1;
      unaff_x23 = unaff_x23 + 0x50;
      if (lVar5 == 0) goto LAB_035574b8;
      unaff_x25 = lVar3 + 2;
      if ((long)*(int *)(lVar5 + 0x34) <= (long)unaff_x25) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03567630();
        return;
      }
      lVar3 = *(long *)(lVar5 + 0x60);
      if (lVar3 == 0) goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
      FUN_03596a20(lVar3 + unaff_x23 + 0x70,0);
      lVar3 = unaff_x19[0xe1];
      if (lVar3 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
      uVar4 = *(undefined8 *)(lVar3 + unaff_x24 * 8 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar2 = FUN_036d35a8(uVar4,0,0);
      lVar3 = unaff_x24;
    } while ((uVar2 & 1) != 0);
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar3 = *(long *)(*unaff_x28 + 0x60), lVar3 == 0)) break;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
      FUN_03596b20(lVar3 + unaff_x23 + 0x70,1,0);
    }
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if (lVar3 == 0) break;
    lVar3 = UnityEngine_Material__GetColorArray(lVar3,0);
    if ((*unaff_x28 == 0) || (lVar5 = *(long *)(*unaff_x28 + 0x60), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_035575f4;
    if (lVar3 == 0) break;
    FUN_036a460c(lVar3,*(undefined8 *)(lVar5 + unaff_x23 + 0x80),0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if (lVar3 == 0) break;
    lVar3 = UnityEngine_Material__GetColorArray(lVar3,0);
    if ((*unaff_x28 == 0) || (lVar5 = *(long *)(*unaff_x28 + 0x60), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_035575f4;
    if (lVar3 == 0) break;
    FUN_036a4810(lVar3,*(undefined8 *)(lVar5 + unaff_x23 + 0x98),0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if (lVar3 == 0) break;
    lVar3 = UnityEngine_Material__GetColorArray(lVar3,0);
    if ((*unaff_x28 == 0) || (lVar5 = *(long *)(*unaff_x28 + 0x60), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_035575f4;
    if (lVar3 == 0) break;
    FUN_036a48bc(lVar3,*(undefined8 *)(lVar5 + unaff_x23 + 0xa0),0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if (lVar3 == 0) break;
    lVar3 = UnityEngine_Material__GetColorArray(lVar3,0);
    if ((*unaff_x28 == 0) || (lVar5 = *(long *)(*unaff_x28 + 0x60), lVar5 == 0)) break;
    if (*(uint *)(lVar5 + 0x18) <= unaff_x25) goto LAB_035575f4;
    if (lVar3 == 0) break;
    FUN_036a4e24(lVar3,*(undefined8 *)(lVar5 + unaff_x23 + 0xa8),0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    lVar3 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if ((lVar3 == 0) || (lVar3 = UnityEngine_Material__GetColorArray(lVar3,0), lVar3 == 0)) break;
    FUN_036aa280(lVar3,0);
    lVar3 = unaff_x19[0xe1];
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x25) goto LAB_035575f4;
    param_1 = *(long *)(lVar3 + unaff_x24 * 8 + 0x28);
    if (param_1 == 0) break;
    param_2 = 0;
  }
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


