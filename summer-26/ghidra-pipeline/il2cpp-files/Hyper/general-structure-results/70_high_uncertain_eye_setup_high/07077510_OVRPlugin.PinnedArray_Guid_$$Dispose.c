/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$Dispose
ENTRY_POINT: 07077510
PROGRAM: Hyper-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin_PinnedArray<Guid>__Dispose(void)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  ulong uVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  
  while( true ) {
    if ((bool)in_ZR) {
      return 0xffffffff;
    }
    if ((*(uint *)(unaff_x23 + 0x18) <= unaff_w19) ||
       (uVar1 = thunk_FUN_04983b98(**(undefined8 **)(*(long *)(unaff_x20 + 0x20) + 0xc0)),
       *(uint *)(unaff_x23 + 0x18) <= unaff_w19)) break;
    uVar2 = FUN_07a98ccc(unaff_x24,uVar1,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 8));
    if ((uVar2 & 1) != 0) {
      return unaff_w19;
    }
    unaff_x25 = unaff_x25 + -1;
    in_ZR = unaff_x25 == 0;
    unaff_x24 = unaff_x24 + 0xc;
    unaff_w19 = unaff_w19 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04948194();
}


