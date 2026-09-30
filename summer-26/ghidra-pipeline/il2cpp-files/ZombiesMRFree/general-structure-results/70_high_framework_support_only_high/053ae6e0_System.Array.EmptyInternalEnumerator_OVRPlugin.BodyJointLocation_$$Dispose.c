/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$Dispose
ENTRY_POINT: 053ae6e0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__Dispose(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint in_w10;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w25;
  long lVar4;
  int unaff_w27;
  undefined8 in_stack_00000018;
  
  iVar3 = 0;
  if (in_w10 != 0) {
    iVar3 = unaff_w27 / (int)in_w10;
  }
  uVar2 = unaff_w27 - iVar3 * in_w10;
  if (uVar2 < in_w10) {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    piVar1 = (int *)(param_1 + (ulong)uVar2 * 4 + 0x20);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if (unaff_w19 < *(uint *)(lVar4 + 0x18)) {
      lVar4 = lVar4 + (long)(int)unaff_w19 * 0x14;
      *(int *)(lVar4 + 0x20) = unaff_w27;
      *(int *)(lVar4 + 0x24) = *piVar1 + -1;
      *(undefined4 *)(lVar4 + 0x30) = unaff_w25;
      *(undefined8 *)(lVar4 + 0x28) = in_stack_00000018;
      *piVar1 = unaff_w19 + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


