/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 02f1625c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___ctor(void)

{
  bool in_CY;
  long lVar1;
  int *piVar2;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  uint unaff_w26;
  long unaff_x27;
  uint unaff_w28;
  uint *in_stack_00000008;
  
  if (!in_CY) {
    lVar1 = unaff_x27 + (long)(int)unaff_w26 * 0x10;
    *(undefined4 *)(lVar1 + 0x20) = unaff_w22;
    *(undefined8 *)(lVar1 + 0x28) = unaff_x21;
    lVar1 = *(long *)(unaff_x20 + 0x10);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    if ((unaff_w28 < *(uint *)(lVar1 + 0x18)) && (unaff_w26 < *(uint *)(unaff_x27 + 0x18))) {
      piVar2 = (int *)(lVar1 + (long)(int)unaff_w28 * 4 + 0x20);
      *(int *)(unaff_x27 + (long)(int)unaff_w26 * 0x10 + 0x24) = *piVar2 + -1;
      *piVar2 = unaff_w26 + 1;
      *(int *)(unaff_x20 + 0x20) = *(int *)(unaff_x20 + 0x20) + 1;
      *(int *)(unaff_x20 + 0x38) = *(int *)(unaff_x20 + 0x38) + 1;
      *in_stack_00000008 = unaff_w26;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


