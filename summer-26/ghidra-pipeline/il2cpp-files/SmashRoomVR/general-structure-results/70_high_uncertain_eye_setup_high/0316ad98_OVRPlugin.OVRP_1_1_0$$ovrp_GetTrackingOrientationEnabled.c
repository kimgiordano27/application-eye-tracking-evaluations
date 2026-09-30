/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetTrackingOrientationEnabled
ENTRY_POINT: 0316ad98
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0316adbc) */

float OVRPlugin_OVRP_1_1_0__ovrp_GetTrackingOrientationEnabled(void)

{
  long lVar1;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  
  lVar1 = FUN_0391c27c();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  fVar2 = (float)FUN_0392a7f0(lVar1,0);
  fVar2 = unaff_s8 / (unaff_s9 * fVar2);
  if (fVar2 < -1.0) {
    fVar2 = -1.0;
  }
  return fVar2;
}


