/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 045de658
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_Reset
          (long param_1)

{
  int *piVar1;
  long lVar2;
  uint in_w9;
  uint in_w10;
  uint unaff_w19;
  long unaff_x20;
  undefined4 unaff_w27;
  undefined8 *unaff_x28;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000028;
  
  if (in_w9 < in_w10) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    piVar1 = (int *)(param_1 + (ulong)in_w9 * 4 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + (long)(int)unaff_w19 * 0x24;
      *(undefined4 *)(lVar2 + 0x20) = unaff_w27;
      *(int *)(lVar2 + 0x24) = *piVar1 + -1;
      *(undefined4 *)(lVar2 + 0x28) = in_stack_00000028._4_4_;
      uVar4 = unaff_x28[1];
      uVar3 = *unaff_x28;
      *(undefined8 *)(lVar2 + 0x3c) = unaff_x28[2];
      *(undefined8 *)(lVar2 + 0x34) = uVar4;
      *(undefined8 *)(lVar2 + 0x2c) = uVar3;
      *piVar1 = unaff_w19 + 1;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


