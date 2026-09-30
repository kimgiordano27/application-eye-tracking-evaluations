/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking.OvrPluginHandTrackingProvider$$.ctor
ENTRY_POINT: 05b82188
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void Oculus_Avatar2_OvrPluginTracking_OvrPluginHandTrackingProvider___ctor
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  
  FUN_04aeac58(param_2,param_3,*param_1);
  FUN_03b5f52c();
  uVar1 = FUN_05b81ea0();
  uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a6190);
  FUN_04aea950();
  FUN_03b5f444(uVar1,uVar2,*(undefined8 *)PTR_DAT_072a6170);
  uVar1 = FUN_05b81ea0();
  uVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a6188);
  FUN_04aea020();
  FUN_03b5efbc(uVar1,uVar2,*(undefined8 *)PTR_DAT_072a6168);
  if (*(long *)(unaff_x19 + 0x28) != 0) {
    FUN_05174990(*(long *)(unaff_x19 + 0x28),*(undefined8 *)PTR_DAT_072a6160);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


