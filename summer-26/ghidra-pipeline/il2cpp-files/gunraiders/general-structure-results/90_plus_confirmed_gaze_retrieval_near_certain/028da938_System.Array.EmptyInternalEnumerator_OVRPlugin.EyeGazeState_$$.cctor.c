/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$.cctor
ENTRY_POINT: 028da938
PROGRAM: gunraiders-libil2cpp.so
SCORE: 155
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>___cctor(long param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_w19;
  long unaff_x20;
  undefined8 *unaff_x25;
  long lVar5;
  int unaff_w27;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 in_stack_00000028;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  iVar4 = 0;
  if (uVar2 != 0) {
    iVar4 = unaff_w27 / (int)uVar2;
  }
  uVar3 = unaff_w27 - iVar4 * uVar2;
  if (uVar3 < uVar2) {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    piVar1 = (int *)(param_1 + (ulong)uVar3 * 4 + 0x20);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c5d4a4();
    }
    if (unaff_w19 < *(uint *)(lVar5 + 0x18)) {
      lVar5 = lVar5 + (long)(int)unaff_w19 * 0x28;
      *(int *)(lVar5 + 0x20) = unaff_w27;
      *(int *)(lVar5 + 0x24) = *piVar1 + -1;
      *(undefined4 *)(lVar5 + 0x28) = in_stack_00000028._4_4_;
      uVar7 = unaff_x25[1];
      uVar6 = *unaff_x25;
      *(undefined8 *)(lVar5 + 0x40) = unaff_x25[2];
      *(undefined8 *)(lVar5 + 0x38) = uVar7;
      *(undefined8 *)(lVar5 + 0x30) = uVar6;
      *piVar1 = unaff_w19 + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4ac();
}


