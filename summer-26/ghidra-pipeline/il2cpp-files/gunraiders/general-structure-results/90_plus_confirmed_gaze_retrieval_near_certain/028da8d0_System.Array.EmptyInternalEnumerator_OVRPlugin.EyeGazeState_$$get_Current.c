/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 028da8d0
PROGRAM: gunraiders-libil2cpp.so
SCORE: 167
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint in_w8;
  long lVar4;
  int in_w9;
  uint uVar5;
  long unaff_x20;
  undefined8 *unaff_x25;
  long unaff_x26;
  int unaff_w27;
  int *unaff_x28;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000028;
  
  if (in_w9 < 1) {
    uVar5 = *(uint *)(unaff_x20 + 0x20);
    if (uVar5 == in_w8) {
      FUN_028dae4c();
      lVar4 = *(long *)(unaff_x20 + 0x10);
      *(uint *)(unaff_x20 + 0x20) = uVar5 + 1;
      if (lVar4 == 0) goto LAB_028daabc;
      uVar1 = *(uint *)(lVar4 + 0x18);
      iVar3 = 0;
      if (uVar1 != 0) {
        iVar3 = unaff_w27 / (int)uVar1;
      }
      uVar2 = unaff_w27 - iVar3 * uVar1;
      if (uVar1 <= uVar2) goto LAB_028daa8c;
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      unaff_x28 = (int *)(lVar4 + (ulong)uVar2 * 4 + 0x20);
    }
    else {
      unaff_x26 = *(long *)(unaff_x20 + 0x18);
      *(uint *)(unaff_x20 + 0x20) = uVar5 + 1;
    }
    if (unaff_x26 == 0) {
LAB_028daabc:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) goto LAB_028daa8c;
    lVar4 = (long)(int)uVar5;
  }
  else {
    *(int *)(unaff_x20 + 0x28) = in_w9 + -1;
    uVar5 = *(uint *)(unaff_x20 + 0x24);
    if (*(uint *)(unaff_x26 + 0x18) <= uVar5) {
LAB_028daa8c:
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4ac();
    }
    lVar4 = (long)(int)uVar5;
    *(undefined4 *)(unaff_x20 + 0x24) = *(undefined4 *)(unaff_x26 + lVar4 * 0x28 + 0x24);
  }
  lVar4 = unaff_x26 + lVar4 * 0x28;
  *(int *)(lVar4 + 0x20) = unaff_w27;
  *(int *)(lVar4 + 0x24) = *unaff_x28 + -1;
  *(undefined4 *)(lVar4 + 0x28) = in_stack_00000028._4_4_;
  uVar7 = unaff_x25[1];
  uVar6 = *unaff_x25;
  *(undefined8 *)(lVar4 + 0x40) = unaff_x25[2];
  *(undefined8 *)(lVar4 + 0x38) = uVar7;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  *unaff_x28 = uVar5 + 1;
  return 1;
}


