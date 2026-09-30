/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 070774ec
PROGRAM: Hyper-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_PinnedArray<Guid>___ctor(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while( true ) {
    uVar1 = FUN_07a98ccc(unaff_x24,param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 8));
    if ((uVar1 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    unaff_x24 = unaff_x24 + 0xc;
    unaff_w19 = unaff_w19 + 1;
    if (unaff_x25 == 0) break;
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_w19) ||
       (param_2 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0)),
       *(uint *)(unaff_x23 + 0x18) <= unaff_w19)) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    param_1 = *(long *)(unaff_x20 + 0x20);
  }
  return 0xffffffff;
}


