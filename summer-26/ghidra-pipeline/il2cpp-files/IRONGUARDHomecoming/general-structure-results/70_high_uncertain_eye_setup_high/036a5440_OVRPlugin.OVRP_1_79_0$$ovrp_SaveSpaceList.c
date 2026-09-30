/*
FUNCTION_NAME: OVRPlugin.OVRP_1_79_0$$ovrp_SaveSpaceList
ENTRY_POINT: 036a5440
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_79_0__ovrp_SaveSpaceList(float param_1)

{
  long lVar1;
  long unaff_x19;
  float fVar2;
  float unaff_s8;
  float unaff_s12;
  
  FUN_040c256c();
  FUN_040c25f4(unaff_s12 + unaff_s12 + (SQRT(param_1) - ABS(unaff_s8)));
  FUN_040c2640();
  if (DAT_0482ee1d == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__);
    DAT_0482ee1d = '\x01';
  }
  fVar2 = unaff_s8 + (SQRT(param_1) - ABS(unaff_s8)) * 0.5;
  lVar1 = *(long *)(*(long *)Method_Oculus_Platform_Message<LeaderboardEntryList>_get_Data__ + 0xb8)
  ;
  FUN_040c2498(fVar2 * *(float *)(lVar1 + 0x48),fVar2 * *(float *)(lVar1 + 0x4c),
               fVar2 * *(float *)(lVar1 + 0x50));
  lVar1 = FUN_04070398();
  if (lVar1 != 0) {
    FUN_0407dcf4();
    FUN_0407d3c8();
    FUN_0407de3c(lVar1,0);
    lVar1 = FUN_040703d4();
    if (lVar1 != 0) {
      FUN_040732d0(lVar1,*(undefined4 *)(unaff_x19 + 0x3c),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


