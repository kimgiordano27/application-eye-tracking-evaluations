/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_CreateInputTrackingContext
ENTRY_POINT: 05b81170
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_CreateInputTrackingContext
               (long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  
  uVar1 = thunk_FUN_032a56a0(**(undefined8 **)(param_1 + 0xe8));
  FUN_04ae9104();
  if (param_2 != 0) {
    FUN_03b5ea70(param_2,uVar1,*(undefined8 *)PTR_DAT_072a6100);
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      lVar2 = FUN_05a9e348(*(long *)(unaff_x19 + 0x28),0);
      uVar1 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a60e0);
      FUN_04ae96ec();
      if (lVar2 != 0) {
        FUN_03b5ebf0(lVar2,uVar1,*(undefined8 *)PTR_DAT_072a6108);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


