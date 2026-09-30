/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKRoom$$GetBestPoseFromRaycast
ENTRY_POINT: 06e327f4
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKRoom__GetBestPoseFromRaycast(void)

{
  long lVar1;
  int in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x20;
  
  if (in_x9 != 0) {
    if (in_w8 == *(int *)(in_x9 + 0x20) + 1) {
      FUN_07199c28(0);
    }
    memcpy(&stack0x00000008,(void *)(unaff_x20 + 0x10),0x48);
    lVar1 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03d8f26c();
    }
    thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x10),&stack0x00000008);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


