/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcFrameSize
ENTRY_POINT: 05d3e3a0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcFrameSize(float param_1,float param_2,long param_3)

{
  long unaff_x19;
  float unaff_s9;
  
  *(float *)(unaff_x19 + 0x80) = unaff_s9 + param_2 * param_1;
  if (param_3 != 0) {
    FUN_068a4db0(param_3,*(undefined4 *)(unaff_x19 + 0x5c),0);
    if (*(long *)(unaff_x19 + 0x30) != 0) {
      FUN_068a6494(*(undefined4 *)(unaff_x19 + 0x68),*(long *)(unaff_x19 + 0x30),
                   *(undefined4 *)(unaff_x19 + 0x54),0);
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        FUN_068a4db0(*(undefined4 *)(unaff_x19 + 0x6c),*(long *)(unaff_x19 + 0x30),
                     *(undefined4 *)(unaff_x19 + 0x60),0);
        if (*(long *)(unaff_x19 + 0x30) != 0) {
          FUN_068a6494(*(undefined4 *)(unaff_x19 + 0x70),*(long *)(unaff_x19 + 0x30),
                       *(undefined4 *)(unaff_x19 + 0x50),0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


