/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_EncodeMrcFrameWithDualTextures
ENTRY_POINT: 05346600
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_38_0__ovrp_Media_EncodeMrcFrameWithDualTextures(undefined8 param_1)

{
  long lVar1;
  long unaff_x19;
  
  FUN_06171004();
  FUN_06171304(param_1,1,0);
  FUN_0617118c(param_1,0,0);
  FUN_061713c8(param_1,3,0);
  lVar1 = FUN_060ed7ac(param_1,0);
  if (lVar1 != 0) {
    FUN_061006f4();
    FUN_060ed7ac(param_1,0);
    FUN_052c22b0();
    FUN_06171d4c(param_1,0);
    lVar1 = FUN_060ed87c(param_1,0);
    if (lVar1 != 0) {
      FUN_060f0c58(lVar1,0,0);
      lVar1 = FUN_060ed87c(param_1,0);
      if (lVar1 != 0) {
        FUN_060f0b94(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return param_1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


