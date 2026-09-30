/*
FUNCTION_NAME: OVRPlugin.OVRP_1_65_0$$ovrp_KtxGetTextureData
ENTRY_POINT: 01db8c38
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db8cc0) */

void OVRPlugin_OVRP_1_65_0__ovrp_KtxGetTextureData(void)

{
  long lVar1;
  long *unaff_x22;
  long unaff_x24;
  char cStack000000000000000c;
  
  thunk_FUN_00ffe618();
  lVar1 = FUN_00ff754c();
  if (lVar1 != 0) {
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01dbefa8();
  }
  cStack000000000000000c = '\0';
  FUN_01da75d8();
  lVar1 = *unaff_x22;
  thunk_FUN_00ffe618();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  FUN_01dbe9b8(lVar1);
  if (cStack000000000000000c != '\0') {
    FUN_0102a860();
  }
  return;
}


