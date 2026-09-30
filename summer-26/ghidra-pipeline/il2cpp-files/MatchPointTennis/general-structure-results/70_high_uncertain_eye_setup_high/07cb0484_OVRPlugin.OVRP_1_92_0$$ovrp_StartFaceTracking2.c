/*
FUNCTION_NAME: OVRPlugin.OVRP_1_92_0$$ovrp_StartFaceTracking2
ENTRY_POINT: 07cb0484
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_92_0__ovrp_StartFaceTracking2(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  *(float *)(unaff_x19 + 0x28) =
       *(float *)(unaff_x19 + 0x28) + (float)*(int *)(unaff_x20 + 0x18) / DAT_01c75d38;
  if ((*(long *)(unaff_x19 + 0x10) != 0) &&
     (lVar1 = FUN_094acfac(*(long *)(unaff_x19 + 0x10),0), lVar1 != 0)) {
    FUN_094ab918(lVar1,*(undefined8 *)(unaff_x19 + 0x18),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


