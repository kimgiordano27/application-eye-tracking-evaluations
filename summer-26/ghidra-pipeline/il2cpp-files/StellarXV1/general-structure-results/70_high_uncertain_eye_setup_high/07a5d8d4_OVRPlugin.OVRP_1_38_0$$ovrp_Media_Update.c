/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_Update
ENTRY_POINT: 07a5d8d4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_Update(void)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  
  if (in_w8 == 0) {
    return;
  }
  lVar1 = *(long *)(unaff_x19 + 0x70);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07a5d8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


