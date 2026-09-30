/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 053ae6e4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(long param_1)

{
  int *piVar1;
  uint uVar2;
  int in_w9;
  uint in_w10;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w25;
  long lVar3;
  int unaff_w27;
  undefined8 in_stack_00000018;
  
  uVar2 = unaff_w27 - in_w9 * in_w10;
  if (uVar2 < in_w10) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    piVar1 = (int *)(param_1 + (ulong)uVar2 * 4 + 0x20);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (unaff_w19 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)unaff_w19 * 0x14;
      *(int *)(lVar3 + 0x20) = unaff_w27;
      *(int *)(lVar3 + 0x24) = *piVar1 + -1;
      *(undefined4 *)(lVar3 + 0x30) = unaff_w25;
      *(undefined8 *)(lVar3 + 0x28) = in_stack_00000018;
      *piVar1 = unaff_w19 + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


