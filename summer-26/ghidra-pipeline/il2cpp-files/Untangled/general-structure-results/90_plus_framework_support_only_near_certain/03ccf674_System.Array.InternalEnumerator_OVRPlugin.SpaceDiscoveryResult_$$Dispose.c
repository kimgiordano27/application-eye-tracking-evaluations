/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 03ccf674
PROGRAM: Untangled-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  uint in_w8;
  int in_w9;
  long lVar1;
  int *piVar2;
  uint in_w11;
  undefined4 unaff_w20;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  long unaff_x26;
  long unaff_x27;
  
  lVar1 = unaff_x27 + (long)(int)in_w8 * (long)in_w9;
  *(undefined4 *)(lVar1 + 0x20) = unaff_w20;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x25;
  *(undefined8 *)(lVar1 + 0x30) = unaff_x23;
  lVar1 = *(long *)(unaff_x26 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if ((in_w11 < *(uint *)(lVar1 + 0x18)) && (in_w8 < *(uint *)(unaff_x27 + 0x18))) {
    piVar2 = (int *)(lVar1 + (long)(int)in_w11 * 4 + 0x20);
    *(int *)(unaff_x27 + (long)(int)in_w8 * 0x18 + 0x24) = *piVar2 + -1;
    *piVar2 = in_w8 + 1;
    *(int *)(unaff_x26 + 0x20) = *(int *)(unaff_x26 + 0x20) + 1;
    *(int *)(unaff_x26 + 0x38) = *(int *)(unaff_x26 + 0x38) + 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


