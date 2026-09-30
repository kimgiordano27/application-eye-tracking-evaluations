/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 07ca185c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_Qpl__MarkerPointCached(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  
  lVar1 = FUN_04d7a120(param_2,*param_1);
  if (lVar1 != 0) {
    FUN_095bbb1c(0x3f800000,lVar1,0);
    FUN_095bbe1c(lVar1,1,0);
    FUN_095bbca4(lVar1,0,0);
    FUN_095bc140(lVar1,3,0);
    lVar2 = FUN_095258d0(lVar1,0);
    if (lVar2 != 0) {
      FUN_0953acf8();
      FUN_095258d0(lVar1,0);
      FUN_07c0b9b4();
      FUN_095bcc94(lVar1,0);
      lVar2 = FUN_095259a0(lVar1,0);
      if (lVar2 != 0) {
        FUN_0952a454(lVar2,0,0);
        lVar2 = FUN_095259a0(lVar1,0);
        if (lVar2 != 0) {
          FUN_0952a218(lVar2,*(undefined4 *)(unaff_x19 + 0x4c),0);
          return lVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


