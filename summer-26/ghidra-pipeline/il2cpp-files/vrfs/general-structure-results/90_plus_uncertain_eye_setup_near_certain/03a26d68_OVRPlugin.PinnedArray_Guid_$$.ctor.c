/*
FUNCTION_NAME: OVRPlugin.PinnedArray<Guid>$$.ctor
ENTRY_POINT: 03a26d68
PROGRAM: vrfs-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<Guid>___ctor(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long *unaff_x20;
  
  if (in_w8 != 0) {
    if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    if (in_w8 != *(int *)(*unaff_x20 + 0x20) + 1) goto LAB_03a26d8c;
  }
  FUN_031dbb18(0);
LAB_03a26d8c:
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x132) & 1) == 0) {
    lVar1 = FUN_015c2790();
  }
  if ((*(byte *)(**(long **)(lVar1 + 0xc0) + 0x132) & 1) == 0) {
    FUN_015c2790();
  }
  thunk_FUN_015d01b0();
  return;
}


