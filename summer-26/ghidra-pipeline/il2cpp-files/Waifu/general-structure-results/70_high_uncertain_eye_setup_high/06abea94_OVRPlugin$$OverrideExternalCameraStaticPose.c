/*
FUNCTION_NAME: OVRPlugin$$OverrideExternalCameraStaticPose
ENTRY_POINT: 06abea94
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__OverrideExternalCameraStaticPose(long param_1)

{
  long lVar1;
  int *in_x10;
  long *unaff_x19;
  float fVar2;
  
  lVar1 = (**(code **)(param_1 + (long)*in_x10 * 0x10 + 0x138))();
  if (lVar1 != 0) {
    fVar2 = (float)FUN_07a1bb0c(lVar1,0);
    if (*(char *)((long)unaff_x19 + 0x21) != '\0') {
      (**(code **)(*unaff_x19 + 0x248))();
      *(undefined1 *)((long)unaff_x19 + 0x21) = 0;
    }
    lVar1 = (**(code **)(*unaff_x19 + 600))();
    if (lVar1 != 0) {
      return fVar2 * *(float *)(lVar1 + 0x60);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


