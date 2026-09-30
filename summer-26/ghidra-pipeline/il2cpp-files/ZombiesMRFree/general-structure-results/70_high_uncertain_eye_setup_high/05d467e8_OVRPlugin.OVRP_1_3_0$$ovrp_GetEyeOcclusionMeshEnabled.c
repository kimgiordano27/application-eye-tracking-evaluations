/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$ovrp_GetEyeOcclusionMeshEnabled
ENTRY_POINT: 05d467e8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_3_0__ovrp_GetEyeOcclusionMeshEnabled(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x19;
  
  FUN_06974aa4(param_1,param_2,0);
  lVar1 = FUN_068f5d7c();
  if (lVar1 != 0) {
    FUN_06904d10();
    FUN_068f5d7c();
    FUN_05cb1b24();
    FUN_06975558();
    lVar1 = FUN_068f5db8();
    if (lVar1 != 0) {
      FUN_068f8b44(lVar1,0,0);
      lVar1 = FUN_068f5db8();
      if (lVar1 != 0) {
        FUN_068f8b00(lVar1,*(undefined4 *)(unaff_x19 + 0x4c),0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94e8();
}


