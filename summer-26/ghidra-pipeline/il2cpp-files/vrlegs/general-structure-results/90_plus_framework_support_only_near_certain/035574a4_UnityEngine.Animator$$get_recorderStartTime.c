/*
FUNCTION_NAME: UnityEngine.Animator$$get_recorderStartTime
ENTRY_POINT: 035574a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 171
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;ui_or_gameplay_sink_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_6
*/


void UnityEngine_Animator__get_recorderStartTime(long *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  code *in_x9;
  long *unaff_x19;
  undefined4 unaff_w20;
  long lVar5;
  undefined8 uVar6;
  long unaff_x23;
  long unaff_x24;
  long *unaff_x26;
  long *unaff_x28;
  
  do {
    (*in_x9)(param_1,param_2,param_3);
    lVar5 = unaff_x24;
    do {
      lVar4 = *unaff_x28;
      unaff_x24 = lVar5 + 1;
      unaff_x23 = unaff_x23 + 0x50;
      if (lVar4 == 0) goto LAB_035574b8;
      uVar1 = lVar5 + 2;
      if ((long)*(int *)(lVar4 + 0x34) <= (long)uVar1) {
        if (*(int *)(*(long *)OVRPlugin_OVRP_1_32_0_TypeInfo + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        FUN_03567630();
        return;
      }
      lVar5 = *(long *)(lVar4 + 0x60);
      if (lVar5 == 0) goto LAB_035574b8;
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
      FUN_03596a20(lVar5 + unaff_x23 + 0x70,0);
      lVar5 = unaff_x19[0xe1];
      if (lVar5 == 0) goto LAB_035574b8;
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
      uVar6 = *(undefined8 *)(lVar5 + unaff_x24 * 8 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_03cbdf88 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_036d35a8(uVar6,0,0);
      lVar5 = unaff_x24;
    } while ((uVar3 & 1) != 0);
    if (*(int *)((long)unaff_x19 + 0x31c) != 0) {
      if ((*unaff_x28 == 0) || (lVar5 = *(long *)(*unaff_x28 + 0x60), lVar5 == 0)) {
LAB_035574b8:
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      if (*(int *)(*unaff_x26 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
      FUN_03596b20(lVar5 + unaff_x23 + 0x70,1,0);
    }
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_035575f4:
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if (lVar5 == 0) goto LAB_035574b8;
    lVar5 = UnityEngine_Material__GetColorArray(lVar5,0);
    if ((*unaff_x28 == 0) || (lVar4 = *(long *)(*unaff_x28 + 0x60), lVar4 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_035575f4;
    if (lVar5 == 0) goto LAB_035574b8;
    FUN_036a460c(lVar5,*(undefined8 *)(lVar4 + unaff_x23 + 0x80),0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if (lVar5 == 0) goto LAB_035574b8;
    lVar5 = UnityEngine_Material__GetColorArray(lVar5,0);
    if ((*unaff_x28 == 0) || (lVar4 = *(long *)(*unaff_x28 + 0x60), lVar4 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_035575f4;
    if (lVar5 == 0) goto LAB_035574b8;
    FUN_036a4810(lVar5,*(undefined8 *)(lVar4 + unaff_x23 + 0x98),0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if (lVar5 == 0) goto LAB_035574b8;
    lVar5 = UnityEngine_Material__GetColorArray(lVar5,0);
    if ((*unaff_x28 == 0) || (lVar4 = *(long *)(*unaff_x28 + 0x60), lVar4 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_035575f4;
    if (lVar5 == 0) goto LAB_035574b8;
    FUN_036a48bc(lVar5,*(undefined8 *)(lVar4 + unaff_x23 + 0xa0),0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if (lVar5 == 0) goto LAB_035574b8;
    lVar5 = UnityEngine_Material__GetColorArray(lVar5,0);
    if ((*unaff_x28 == 0) || (lVar4 = *(long *)(*unaff_x28 + 0x60), lVar4 == 0)) goto LAB_035574b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_035575f4;
    if (lVar5 == 0) goto LAB_035574b8;
    FUN_036a4e24(lVar5,*(undefined8 *)(lVar4 + unaff_x23 + 0xa8),0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if ((lVar5 == 0) || (lVar5 = UnityEngine_Material__GetColorArray(lVar5,0), lVar5 == 0))
    goto LAB_035574b8;
    FUN_036aa280(lVar5,0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if (lVar5 == 0) goto LAB_035574b8;
    lVar5 = FUN_037b514c(lVar5,0);
    lVar4 = unaff_x19[0xe1];
    if (lVar4 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar4 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar4 = *(long *)(lVar4 + unaff_x24 * 8 + 0x28);
    if ((lVar4 == 0) || (uVar6 = UnityEngine_Material__GetColorArray(lVar4,0), lVar5 == 0))
    goto LAB_035574b8;
    FUN_0390f3a4(lVar5,uVar6,0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if ((lVar5 == 0) || (lVar5 = FUN_037b514c(lVar5,0), lVar5 == 0)) goto LAB_035574b8;
    FUN_0390eec8(lVar5,0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    lVar5 = *(long *)(lVar5 + unaff_x24 * 8 + 0x28);
    if ((lVar5 == 0) || (lVar5 = FUN_037b514c(lVar5,0), lVar5 == 0)) goto LAB_035574b8;
    FUN_0390ed78(lVar5,unaff_w20,0);
    lVar5 = unaff_x19[0xe1];
    if (lVar5 == 0) goto LAB_035574b8;
    if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_035575f4;
    param_1 = *(long **)(lVar5 + unaff_x24 * 8 + 0x28);
    uVar2 = (**(code **)(*unaff_x19 + 0x2b8))();
    if (param_1 == (long *)0x0) goto LAB_035574b8;
    param_2 = (ulong)(uVar2 & 1);
    in_x9 = *(code **)(*param_1 + 0x2c8);
    param_3 = *(undefined8 *)(*param_1 + 0x2d0);
  } while( true );
}


