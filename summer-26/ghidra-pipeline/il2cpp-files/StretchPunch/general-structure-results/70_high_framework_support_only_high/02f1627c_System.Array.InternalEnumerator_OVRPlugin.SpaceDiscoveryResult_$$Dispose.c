/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 02f1627c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(long param_1)

{
  bool in_CY;
  int *piVar1;
  long unaff_x20;
  uint unaff_w26;
  long unaff_x27;
  int unaff_w28;
  uint *in_stack_00000008;
  
  if ((!in_CY) && (unaff_w26 < *(uint *)(unaff_x27 + 0x18))) {
    piVar1 = (int *)(param_1 + (long)unaff_w28 * 4 + 0x20);
    *(int *)(unaff_x27 + (long)(int)unaff_w26 * 0x10 + 0x24) = *piVar1 + -1;
    *piVar1 = unaff_w26 + 1;
    *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
    *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
    *in_stack_00000008 = unaff_w26;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


