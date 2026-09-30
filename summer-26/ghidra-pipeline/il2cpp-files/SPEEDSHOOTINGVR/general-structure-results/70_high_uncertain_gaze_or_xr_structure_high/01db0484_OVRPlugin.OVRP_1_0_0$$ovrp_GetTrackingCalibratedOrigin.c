/*
FUNCTION_NAME: OVRPlugin.OVRP_1_0_0$$ovrp_GetTrackingCalibratedOrigin
ENTRY_POINT: 01db0484
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin_OVRP_1_0_0__ovrp_GetTrackingCalibratedOrigin(long param_1)

{
  byte bVar1;
  long in_x10;
  long *unaff_x20;
  
  bVar1 = *(byte *)(**(long **)(in_x10 + 0x3b8) + 0x130);
  if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
     (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) == **(long **)(in_x10 + 0x3b8))
     ) {
    unaff_x20[4] = param_1;
    thunk_FUN_0106e12c(unaff_x20 + 4,param_1);
    FUN_01db05b4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc8d0();
}


