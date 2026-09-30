/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_SetHeadPoseModifier
ENTRY_POINT: 05befe1c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_29_0__ovrp_SetHeadPoseModifier(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  lVar1 = FUN_03ac2e98(param_2,*param_1);
  if (lVar1 != 0) {
    FUN_06a63e1c(0x3f800000,lVar1,0);
    FUN_06a6411c(lVar1,1,0);
    FUN_06a63fa4(lVar1,0,0);
    FUN_06a641e0(lVar1,3,0);
    lVar2 = FUN_069d3a80(lVar1,0);
    if (lVar2 != 0) {
      FUN_069e7a48();
      FUN_069d3a80(lVar1,0);
      FUN_05b64410();
      FUN_06a64884(lVar1,0);
      lVar2 = FUN_069d3b50(lVar1,0);
      if (lVar2 != 0) {
        FUN_069d7048(lVar2,0,0);
        lVar2 = FUN_069d3b50(lVar1,0);
        if (lVar2 != 0) {
          FUN_069d6f84(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


