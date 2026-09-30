/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 04fd6df0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(void)

{
  bool in_ZR;
  undefined8 uVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  uint unaff_w25;
  long unaff_x26;
  undefined8 unaff_x28;
  undefined4 in_stack_00000028;
  
  if (in_ZR) {
    uVar1 = thunk_FUN_02dd2d7c(*(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x70)
                               ,&stack0x00000028);
    FUN_05509920(uVar1,0);
  }
  else if (in_w8 == 1) {
    if (unaff_w25 < *(uint *)(unaff_x26 + 0x18)) {
      *(undefined8 *)(unaff_x19 + (long)(int)unaff_w25 * 0x18 + 0x10) = unaff_x28;
      LeanTween__value();
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
  return 0;
}


